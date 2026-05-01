/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$03@@IEAA@XZ @ 0x1803DF600
 * Callers:
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803DF3C8 (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_1803DF3C8.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802686B4 (--$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,4>::~_TlgActivityBase<wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,4>(
        _DWORD *a1)
{
  void (*v2)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v3; // [rsp+30h] [rbp+8h] BYREF
  _DWORD **v4; // [rsp+38h] [rbp+10h] BYREF

  if ( *a1 == 1 )
  {
    *a1 = 2;
    v4 = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v3, (LPVOID *)&v4) && v3 )
    {
      v4 = (_DWORD **)&qword_1805CD228;
      qword_1805CD228 = &ImmersiveIconsLogging::`vftable';
      qword_1805CD240 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CD228, qword_1805CD240, v2);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_1805CD228);
    }
    _tlgWriteActivityAutoStop<70368744177664,4>(v4[1]);
  }
  *a1 = 3;
}
