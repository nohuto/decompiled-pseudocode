/*
 * XREFs of ?vUnLockShadowW@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C0297FDC
 * Callers:
 *     ??1MULTIPANSURFLOCK@@QEAA@XZ @ 0x1C029527C (--1MULTIPANSURFLOCK@@QEAA@XZ.c)
 * Callees:
 *     ?ShadowUnLock@@YAXPEAU_PANDEV@@@Z @ 0x1C0296EA0 (-ShadowUnLock@@YAXPEAU_PANDEV@@@Z.c)
 */

void __fastcall MULTIPANSURFLOCK::vUnLockShadowW(MULTIPANSURFLOCK *this)
{
  __int64 i; // rdi
  __int64 v3; // rsi
  char *v4; // r14
  __int64 v5; // rax
  struct _PANDEV *v6; // rcx

  for ( i = 87LL; i >= 15; i -= 9LL )
  {
    v3 = 8LL;
    v4 = (char *)this + i;
    do
    {
      if ( v4[v3 + 116] == 1 )
      {
        v5 = *((_QWORD *)this + 4);
        if ( !v5 )
          v5 = *((_QWORD *)this + 5);
        EngReleaseSemaphore(*(HSEMAPHORE *)(v5 + 8 * (i + v3)));
        v4[v3 + 116] = 0;
      }
      --v3;
    }
    while ( v3 >= 0 );
  }
  v6 = (struct _PANDEV *)*((_QWORD *)this + 4);
  if ( !v6 )
    v6 = (struct _PANDEV *)*((_QWORD *)this + 5);
  ShadowUnLock(v6);
}
