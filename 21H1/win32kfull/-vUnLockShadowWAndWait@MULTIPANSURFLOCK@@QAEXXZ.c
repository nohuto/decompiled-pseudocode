/*
 * XREFs of ?vUnLockShadowWAndWait@MULTIPANSURFLOCK@@QAEXXZ @ 0x1F76C9
 * Callers:
 *     ?vLockShadowW@MULTIPANSURFLOCK@@QAEXPAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F7199 (-vLockShadowW@MULTIPANSURFLOCK@@QAEXPAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall MULTIPANSURFLOCK::vUnLockShadowWAndWait(MULTIPANSURFLOCK *this)
{
  int i; // edi
  int v3; // ebx
  char *v4; // eax
  int v5; // ecx
  PVOID *v6; // ecx

  for ( i = 92; i >= 20; i -= 9 )
  {
    v3 = 8;
    v4 = (char *)this + i + 87;
    do
    {
      if ( v4[v3] == 1 )
      {
        v5 = *((_DWORD *)this + 4);
        if ( !v5 )
          v5 = *((_DWORD *)this + 5);
        EngReleaseSemaphore(*(HSEMAPHORE *)(v5 + 4 * (i + v3)));
        v4 = (char *)this + i + 87;
        v4[v3] = 0;
      }
      --v3;
    }
    while ( v3 >= 0 );
  }
  v6 = (PVOID *)*((_DWORD *)this + 4);
  if ( !v6 )
    v6 = (PVOID *)*((_DWORD *)this + 5);
  ShadowUnLockWait(v6);
}
