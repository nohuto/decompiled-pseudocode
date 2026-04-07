/*
 * XREFs of ??1CAnimationClock@@UEAA@XZ @ 0x18003151C
 * Callers:
 *     ??_GCAnimationClock@@UEAAPEAXI@Z @ 0x1800315C0 (--_GCAnimationClock@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z @ 0x1800314B8 (-SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationClock::~CAnimationClock(CAnimationClock *this)
{
  CTimer *v2; // rcx
  CBaseObject *v3; // rcx
  __int64 v4; // rcx
  char *v5; // rcx

  *(_QWORD *)this = &CAnimationClock::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAnimationClock::`vftable'{for `ITimerCallbackListener'};
  v2 = (CTimer *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    CTimer::SetTimerCallback(v2, 0LL);
    v3 = (CBaseObject *)*((_QWORD *)this + 8);
    if ( v3 )
    {
      CBaseObject::Release(v3);
      *((_QWORD *)this + 8) = 0LL;
    }
  }
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_QWORD *)this + 9) = 0LL;
  v5 = (char *)*((_QWORD *)this + 14);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
