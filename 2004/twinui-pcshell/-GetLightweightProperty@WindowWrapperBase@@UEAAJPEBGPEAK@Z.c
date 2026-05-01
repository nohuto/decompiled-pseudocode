/*
 * XREFs of ?GetLightweightProperty@WindowWrapperBase@@UEAAJPEBGPEAK@Z @ 0x1802DF0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z @ 0x1802C972C (-GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::GetLightweightProperty(
        WindowWrapperBase *this,
        const unsigned __int16 *a2,
        unsigned int *a3)
{
  __int64 v6; // rcx
  int Property; // eax
  const char *v8; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+30h] [rbp+8h]

  v6 = *((_QWORD *)this + 36);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 208LL))(v6);
    Property = LightweightPropertySet::GetProperty((WindowWrapperBase *)((char *)this + 208), a2, a3);
    if ( Property < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        353LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)Property);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x164,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v8);
  }
  return result;
}
