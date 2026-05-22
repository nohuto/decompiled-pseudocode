/*
 * XREFs of ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x180159DE8
 * Callers:
 *     ?Close@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXXZ @ 0x180159DC0 (-Close@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXXZ.c)
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x18015B1B8 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NO.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180075450 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18008919C (-reset@-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@detai.c)
 *     ??0?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180156324 (--0-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ??0?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801563C8 (--0-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180157098 (--1-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ??1?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801570D4 (--1-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??R_lambda_cba343ad3d751d9ae6873e9ce73e4f02_@@QEBAXXZ @ 0x180158414 (--R_lambda_cba343ad3d751d9ae6873e9ce73e4f02_@@QEBAXXZ.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18015B04C (-Destroy@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTa.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18015B0F8 (-Destroy@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?StartActivity@CloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x180164224 (-StartActivity@CloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@.c)
 *     ?StartActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x180164648 (-StartActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDr.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180164E9C (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180164F9C (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle(
        RTL_SRWLOCK *this,
        signed int a2)
{
  RTL_SRWLOCK *v4; // rsi
  const char *v5; // r9
  void **p_Ptr; // rbx
  char *v7; // rcx
  HSTRING Ptr; // rcx
  PCWSTR StringRawBuffer; // rbx
  PCWSTR v10; // rbx
  __int64 *v11; // r14
  __int64 v12; // r12
  unsigned __int64 v13; // rbx
  HANDLE hObject; // [rsp+28h] [rbp-E0h] BYREF
  HANDLE *v15[3]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v16[40]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v4 = this + 14;
  AcquireSRWLockExclusive(this + 14);
  v15[1] = &v4->Ptr;
  if ( a2 > 0 )
    a2 = (unsigned __int16)a2 | 0x80070000;
  if ( a2 >= 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      621LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
      v5);
    __debugbreak();
  }
  hObject = (HANDLE)-1LL;
  AcquireSRWLockExclusive(this + 15);
  LODWORD(this[16].Ptr) = a2;
  p_Ptr = &this[17].Ptr;
  if ( &hObject != (HANDLE *)&this[17] )
  {
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      *p_Ptr);
    *p_Ptr = (void *)-1LL;
  }
  if ( this != (RTL_SRWLOCK *)-120LL )
    ReleaseSRWLockExclusive(this + 15);
  v7 = (char *)hObject;
  if ( hObject != (HANDLE)-1LL )
  {
    v15[0] = &hObject;
    Ptr = (HSTRING)this[4].Ptr;
    if ( Windows::Internal::Holographic::HolographicDeviceOpenCloseTelemetryEnabled )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(Ptr, 0LL);
      wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)v16,
        (__int64)"TelemetryCloseHolographicDevice");
      v16[0] = &HolographicDriverClientTrace::TelemetryCloseHolographicDevice::`vftable';
      HolographicDriverClientTrace::TelemetryCloseHolographicDevice::StartActivity(
        v16,
        StringRawBuffer,
        LODWORD(this[1].Ptr),
        (char *)&this[1].Ptr + 4);
      _lambda_cba343ad3d751d9ae6873e9ce73e4f02_::operator()(v15);
      wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v16);
      v16[0] = &HolographicDriverClientTrace::TelemetryCloseHolographicDevice::`vftable';
      wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v16);
      wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v16);
    }
    else
    {
      v10 = WindowsGetStringRawBuffer(Ptr, 0LL);
      wil::ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)v16,
        (__int64)"CloseHolographicDevice");
      v16[0] = &HolographicDriverClientTrace::CloseHolographicDevice::`vftable';
      HolographicDriverClientTrace::CloseHolographicDevice::StartActivity(
        v16,
        v10,
        LODWORD(this[1].Ptr),
        (char *)&this[1].Ptr + 4);
      _lambda_cba343ad3d751d9ae6873e9ce73e4f02_::operator()(v15);
      wil::ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v16);
      v16[0] = &HolographicDriverClientTrace::CloseHolographicDevice::`vftable';
      wil::ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v16);
      wil::ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v16);
    }
    AcquireSRWLockShared(this + 7);
    v15[0] = &this[7].Ptr;
    v11 = (__int64 *)this[8].Ptr;
    v12 = 0LL;
    v13 = (unsigned __int64)((char *)this[9].Ptr - (char *)v11 + 7) >> 3;
    if ( v11 > this[9].Ptr )
      v13 = 0LL;
    if ( v13 )
    {
      do
      {
        std::_Func_class<void,>::operator()(*v11++);
        ++v12;
      }
      while ( v12 != v13 );
    }
    if ( this != (RTL_SRWLOCK *)-56LL )
      ReleaseSRWLockShared(this + 7);
    v7 = (char *)hObject;
  }
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
