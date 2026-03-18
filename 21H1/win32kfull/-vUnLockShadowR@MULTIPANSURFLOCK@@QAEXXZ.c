/*
 * XREFs of ?vUnLockShadowR@MULTIPANSURFLOCK@@QAEXXZ @ 0x1F761D
 * Callers:
 *     ??1MULTIPANSURFLOCK@@QAE@XZ @ 0x1F5607 (--1MULTIPANSURFLOCK@@QAE@XZ.c)
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QAEHPAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F6C15 (-bTryLockShadowR@MULTIPANSURFLOCK@@QAEHPAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall MULTIPANSURFLOCK::vUnLockShadowR(MULTIPANSURFLOCK *this)
{
  int i; // edi
  int v3; // ebx
  char *v4; // eax
  int v5; // ecx
  _DWORD *v6; // ecx

  for ( i = 92; i >= 20; i -= 9 )
  {
    v3 = 8;
    v4 = (char *)this + i + 6;
    do
    {
      if ( v4[v3] == 1 )
      {
        v5 = *((_DWORD *)this + 4);
        if ( !v5 )
          v5 = *((_DWORD *)this + 5);
        EngReleaseSemaphore(*(HSEMAPHORE *)(v5 + 4 * (i + v3)));
        v4 = (char *)this + i + 6;
        v4[v3] = 0;
      }
      --v3;
    }
    while ( v3 >= 0 );
  }
  v6 = (_DWORD *)*((_DWORD *)this + 4);
  if ( !v6 )
    v6 = (_DWORD *)*((_DWORD *)this + 5);
  ShadowUnLock(v6);
}
