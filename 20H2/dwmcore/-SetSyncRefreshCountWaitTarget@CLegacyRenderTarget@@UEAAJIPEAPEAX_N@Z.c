/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CLegacyRenderTarget@@UEAAJIPEAPEAX_N@Z @ 0x1800BEA30
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB34 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::SetSyncRefreshCountWaitTarget(
        CLegacyRenderTarget *this,
        unsigned int a2,
        void **a3,
        char a4)
{
  __int64 *v6; // rcx
  int v9; // eax
  int v10; // ebx
  int v12; // r9d
  __int64 v13; // rax
  unsigned int v14; // [rsp+20h] [rbp-38h]
  void *v15; // [rsp+38h] [rbp-20h] BYREF
  char v16; // [rsp+40h] [rbp-18h]

  v6 = (__int64 *)*((_QWORD *)this + 2);
  if ( !v6 )
  {
    v10 = -2003304442;
    v14 = 882;
    goto LABEL_15;
  }
  if ( ((*((_QWORD *)this + 2305) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v13 = *v6;
    v15 = 0LL;
    v16 = 1;
    v10 = (*(__int64 (__fastcall **)(__int64 *, void **))(v13 + 72))(v6, &v15);
    if ( v16 )
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)this + 2305,
        v15);
    if ( v10 < 0 )
    {
      v14 = 875;
LABEL_15:
      v12 = v10;
      goto LABEL_8;
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 56LL))(*((_QWORD *)this + 2), a2);
  v10 = v9;
  if ( v9 >= 0 )
    goto LABEL_4;
  v12 = v9;
  v14 = 878;
LABEL_8:
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, v12, v14, 0LL);
LABEL_4:
  if ( v10 < 0 )
    a4 = 0;
  else
    *a3 = (void *)*((_QWORD *)this + 2305);
  *((_BYTE *)this + 18453) = a4;
  return (unsigned int)v10;
}
