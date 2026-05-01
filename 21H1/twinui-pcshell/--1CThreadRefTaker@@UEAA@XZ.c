/*
 * XREFs of ??1CThreadRefTaker@@UEAA@XZ @ 0x180049980
 * Callers:
 *     ??1CLaunchActivatedEventArgs@@EEAA@XZ @ 0x1800496A8 (--1CLaunchActivatedEventArgs@@EEAA@XZ.c)
 *     ??_GCThreadRefTaker@@UEAAPEAXI@Z @ 0x18020D990 (--_GCThreadRefTaker@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CThreadRefTaker::~CThreadRefTaker(CThreadRefTaker *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CThreadRefTaker::`vftable';
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
}
