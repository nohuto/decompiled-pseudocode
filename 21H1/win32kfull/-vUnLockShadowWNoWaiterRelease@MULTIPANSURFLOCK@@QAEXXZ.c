/*
 * XREFs of ?vUnLockShadowWNoWaiterRelease@MULTIPANSURFLOCK@@QAEXXZ @ 0x1F771F
 * Callers:
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QAEHPAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F6C15 (-bTryLockShadowR@MULTIPANSURFLOCK@@QAEHPAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall MULTIPANSURFLOCK::vUnLockShadowWNoWaiterRelease(MULTIPANSURFLOCK *this)
{
  int i; // esi
  int v3; // edi
  char *v4; // eax
  int v5; // ecx

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
}
