/*
 * XREFs of ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI0@Z @ 0x180084274
 * Callers:
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x1800827A8 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$12 @ 0x1800D2457 (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$12.c)
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$13 @ 0x1800D249C (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$13.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800011F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x180022DCC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int,wchar_t const * const &>(
        const WCHAR **a1,
        const WCHAR **a2,
        char *a3,
        int *a4,
        const WCHAR **a5)
{
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r11
  int v11; // edx
  const WCHAR *v12; // r10
  const WCHAR *v13; // r8
  const WCHAR *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rcx
  int v19; // r9d
  char v21; // [rsp+38h] [rbp-41h] BYREF
  int v22; // [rsp+3Ch] [rbp-3Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+48h] [rbp-31h] BYREF
  const WCHAR *v24; // [rsp+68h] [rbp-11h]
  int v25; // [rsp+70h] [rbp-9h]
  int v26; // [rsp+74h] [rbp-5h]
  const WCHAR *v27; // [rsp+78h] [rbp-1h]
  int v28; // [rsp+80h] [rbp+7h]
  int v29; // [rsp+84h] [rbp+Bh]
  char *v30; // [rsp+88h] [rbp+Fh]
  __int64 v31; // [rsp+90h] [rbp+17h]
  int *v32; // [rsp+98h] [rbp+1Fh]
  __int64 v33; // [rsp+A0h] [rbp+27h]
  const WCHAR *v34; // [rsp+A8h] [rbp+2Fh]
  int v35; // [rsp+B0h] [rbp+37h]
  int v36; // [rsp+B4h] [rbp+3Bh]

  v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v10 = (__int64)v9;
  if ( *(_DWORD *)v9 > 5u )
  {
    LODWORD(v9) = 0;
    if ( (*(_QWORD *)(v10 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v10 + 24) & 0x400000000000LL) == *(_QWORD *)(v10 + 24) )
    {
      v11 = 2;
      v12 = *a2;
      v13 = *a1;
      v14 = *a5;
      v22 = *a4;
      v21 = *a3;
      v15 = -1LL;
      if ( v14 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( v14[v16] );
        v17 = 2 * v16 + 2;
      }
      else
      {
        v14 = &Src;
        v17 = 2;
      }
      v35 = v17;
      v32 = &v22;
      v30 = &v21;
      v34 = v14;
      v36 = 0;
      v33 = 4LL;
      v31 = 1LL;
      if ( v12 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( v12[v18] );
        v19 = 2 * v18 + 2;
      }
      else
      {
        v12 = &Src;
        v19 = 2;
      }
      v27 = v12;
      v28 = v19;
      v29 = 0;
      if ( v13 )
      {
        do
          ++v15;
        while ( v13[v15] );
        v11 = 2 * v15 + 2;
      }
      else
      {
        v13 = &Src;
      }
      v24 = v13;
      v25 = v11;
      v26 = 0;
      LODWORD(v9) = tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_180174086, 0LL, 0LL, 7u, &v23);
    }
  }
  return (int)v9;
}
