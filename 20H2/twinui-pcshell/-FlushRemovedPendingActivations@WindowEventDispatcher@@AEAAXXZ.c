/*
 * XREFs of ?FlushRemovedPendingActivations@WindowEventDispatcher@@AEAAXXZ @ 0x1802B4F98
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_394f447e3cb7383e15c0434f11a7d111___::Run @ 0x1802B7FF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_394f447e3cb7383e15c0434f11a7d111___--Run.c)
 *     ?v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x1802BA5B0 (-v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x18029E534 (--$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowEventDispatcher::FlushRemovedPendingActivations(RTL_SRWLOCK *this)
{
  __int64 v2; // rdi
  void *v3; // rbx
  __int64 v4; // rcx
  PCWSTR StringRawBuffer; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  while ( this[66].Ptr )
  {
    AcquireSRWLockExclusive(this + 59);
    v2 = *(_QWORD *)(*(_QWORD *)this[65].Ptr + 16LL);
    v6 = v2;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *(void **)this[65].Ptr;
    **((_QWORD **)v3 + 1) = *(_QWORD *)v3;
    *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *((_QWORD *)v3 + 1);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v3 + 2);
    std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x18);
    --this[66].Ptr;
    if ( this != (RTL_SRWLOCK *)-472LL )
      ReleaseSRWLockExclusive(this + 59);
    v4 = *(_QWORD *)(v2 + 24);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v2 + 16), 0LL);
    ViewManagerInteropTraceLogging::PendingActivationDelete<unsigned __int64 &,unsigned short const *>(
      (__int64 *)(v2 + 8),
      (__int64 *)&StringRawBuffer);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v6);
  }
}
