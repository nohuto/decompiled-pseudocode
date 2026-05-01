/*
 * XREFs of ?TerminateApplication@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@EW4AppLimitsTerminationType@2345@@Z @ 0x1800BAF80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180138508 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_180138508.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18013C9C8 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??$TerminateAppRequested@AEAPEBGAEAE@AppUsageTelemetry@@SAXAEAPEBGAEAE@Z @ 0x180453248 (--$TerminateAppRequested@AEAPEBGAEAE@AppUsageTelemetry@@SAXAEAPEBGAEAE@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::TerminateApplication(
        __int64 a1,
        HSTRING a2,
        char a3,
        int a4)
{
  unsigned int v8; // edi
  PCWSTR StringRawBuffer; // r14
  __int64 *v10; // rcx
  __int64 v11; // rax
  const char *v12; // r9
  __int64 result; // rax
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PCWSTR v16; // [rsp+50h] [rbp+8h] BYREF
  char v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = a3;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 144, v14);
  try
  {
    v8 = 0;
    if ( *(_QWORD *)(a1 + 136) )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
      v16 = StringRawBuffer;
      AppUsageTelemetry::TerminateAppRequested<unsigned short const * &,unsigned char &>(&v16, &v17);
      v10 = *(__int64 **)(a1 + 136);
      v11 = *v10;
      if ( a3 )
      {
        LOBYTE(v8) = a4 == 1;
        (*(void (__fastcall **)(__int64 *, PCWSTR, _QWORD))(v11 + 64))(v10, StringRawBuffer, v8);
      }
      else
      {
        (*(void (__fastcall **)(__int64 *, PCWSTR))(v11 + 72))(v10, StringRawBuffer);
      }
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD7,
                           (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           v12);
  }
  return result;
}
