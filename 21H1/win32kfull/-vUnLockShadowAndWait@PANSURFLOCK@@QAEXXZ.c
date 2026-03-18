/*
 * XREFs of ?vUnLockShadowAndWait@PANSURFLOCK@@QAEXXZ @ 0x1F75D5
 * Callers:
 *     ?vLockShadow@PANSURFLOCK@@QAEXPAU_RECTL@@PAU_CLIPOBJ@@H@Z @ 0x1F6FC9 (-vLockShadow@PANSURFLOCK@@QAEXPAU_RECTL@@PAU_CLIPOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall PANSURFLOCK::vUnLockShadowAndWait(PANSURFLOCK *this)
{
  int i; // esi
  int v3; // edi
  char *v4; // eax

  for ( i = 92; i >= 20; i -= 9 )
  {
    v3 = 8;
    v4 = (char *)this + i - 8;
    do
    {
      if ( v4[v3] == 1 )
      {
        EngReleaseSemaphore(*(HSEMAPHORE *)(*((_DWORD *)this + 2) + 4 * (i + v3)));
        v4 = (char *)this + i - 8;
        v4[v3] = 0;
      }
      --v3;
    }
    while ( v3 >= 0 );
  }
  ShadowUnLockWait(*((PVOID **)this + 2));
}
