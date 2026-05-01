/*
 * XREFs of ?StopTracking@AppUsageTracker@@UEAAXXZ @ 0x180457940
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AppUsageTracker::StopTracking(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  unsigned int Ptr; // esi
  PVOID v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = this + 7;
  AcquireSRWLockExclusive(this + 7);
  Ptr = (unsigned int)this[8].Ptr;
  LODWORD(this[8].Ptr) = 0;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  v4 = this[9].Ptr;
  if ( v4 )
  {
    if ( Ptr )
    {
      v5 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)v4 + 104LL))(v4, Ptr);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          107LL,
          (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\appusagetracker.cpp",
          (const char *)(unsigned int)v5);
        __debugbreak();
      }
    }
  }
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)this[10].Ptr + 32LL))(this[10].Ptr);
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)this[11].Ptr + 32LL))(this[11].Ptr);
}
