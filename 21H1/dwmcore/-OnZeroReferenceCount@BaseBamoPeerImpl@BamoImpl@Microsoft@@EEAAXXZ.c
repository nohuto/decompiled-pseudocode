/*
 * XREFs of ?OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18016AE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x180169EE8 (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnZeroReferenceCount(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 v3; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
    (Microsoft::BamoImpl::ConditionalDropAndReacquireLock *)&v4,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL));
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = v4;
  if ( v4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 128));
    *(_DWORD *)(v3 + 168) = GetCurrentThreadId();
  }
}
