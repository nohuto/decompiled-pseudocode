/*
 * XREFs of ?Cancel@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x180159970
 * Callers:
 *     ?CancelOrDeletePropertyRequest@Holographic@Internal@Windows@@YAXAEAV?$map@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@@std@@AEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@5@@Z @ 0x180159A40 (-CancelOrDeletePropertyRequest@Holographic@Internal@Windows@@YAXAEAV-$map@PEAVV2PropertyRequest@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18006409C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_18006409C.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180066E74 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void __fastcall Windows::Internal::Holographic::V2PropertyRequest::Cancel(
        Windows::Internal::Holographic::V2PropertyRequest *this)
{
  RTL_SRWLOCK *v1; // rbx
  struct _OVERLAPPED *v2; // rsi
  char *Ptr; // rcx
  const char *v4; // r9
  int LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)*((_QWORD *)this + 5);
  v2 = (struct _OVERLAPPED *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  AcquireSRWLockShared(v1 + 15);
  Ptr = (char *)v1[17].Ptr;
  v7 = v1 + 15;
  if ( (unsigned __int64)(Ptr - 1) > 0xFFFFFFFFFFFFFFFDuLL || CancelIoEx(Ptr, v2) )
  {
    if ( v1 != (RTL_SRWLOCK *)-120LL )
      ReleaseSRWLockShared(v1 + 15);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x137,
                  (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
                  v4);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v7);
  }
  if ( LastError < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      135LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyRequests.h",
      (const char *)(unsigned int)LastError);
}
