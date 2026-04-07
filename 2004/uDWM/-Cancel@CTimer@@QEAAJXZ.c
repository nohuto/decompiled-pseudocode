/*
 * XREFs of ?Cancel@CTimer@@QEAAJXZ @ 0x1800301E0
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x18002F410 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800BA290 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z @ 0x18003023C (-_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z.c)
 */

__int64 __fastcall CTimer::Cancel(CTimer *this)
{
  unsigned int v2; // ebx
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( *((_QWORD *)this + 7) )
    CTimer::_DestroyThreadPoolTimer(this, 0);
  else
    v2 = -2147019873;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
  return v2;
}
