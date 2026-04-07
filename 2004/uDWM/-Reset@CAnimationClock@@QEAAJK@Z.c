/*
 * XREFs of ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800BA290
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180032A90 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18002E93C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x18002F410 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?IsSet@CTimer@@QEAA_NXZ @ 0x18002F4CC (-IsSet@CTimer@@QEAA_NXZ.c)
 *     ?Cancel@CTimer@@QEAAJXZ @ 0x1800301E0 (-Cancel@CTimer@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationClock::Reset(CAnimationClock *this, unsigned int a2)
{
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  __int64 v7; // rcx
  CTimer *v8; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = -2147024809;
  if ( a2 - 10001 > 0xFFFFD8ED )
  {
    v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
    v5 = *((_DWORD *)this + 20);
    if ( (unsigned int)(v5 - 5) <= 1 )
    {
      v7 = *((_QWORD *)this + 13);
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        *((_QWORD *)this + 13) = 0LL;
      }
      v8 = (CTimer *)*((_QWORD *)this + 8);
      *((_DWORD *)this + 35) = 0;
      *((_QWORD *)this + 11) = 0LL;
      *((_QWORD *)this + 12) = 0LL;
      *((_DWORD *)this + 36) = 0;
      *((_DWORD *)this + 34) = a2;
      if ( CTimer::IsSet(v8) )
        v4 = CTimer::Cancel(*((CTimer **)this + 8));
      else
        v4 = 0;
      if ( v4 < 0 )
        goto LABEL_16;
      v6 = CAnimationClock::_SetState((__int64)this, 1u);
    }
    else
    {
      if ( v5 != 1 || a2 == -1 || *((_DWORD *)this + 34) != -1 )
      {
        v4 = -2147019873;
LABEL_16:
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
        return (unsigned int)v4;
      }
      *((_DWORD *)this + 34) = a2;
      v6 = CAnimationClock::_SetTimer(this, a2);
    }
    v4 = v6;
    goto LABEL_16;
  }
  return (unsigned int)v4;
}
