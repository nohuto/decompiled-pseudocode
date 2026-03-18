/*
 * XREFs of ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C021FCF8
 * Callers:
 *     DpiAddDevice @ 0x1C017DE10 (DpiAddDevice.c)
 *     DpiFdoStartAdapter @ 0x1C01815E4 (DpiFdoStartAdapter.c)
 *     ?CreateMiniportBlackboxLiveDump@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJXZ @ 0x1C02B98A0 (-CreateMiniportBlackboxLiveDump@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJXZ.c)
 * Callees:
 *     McTemplateK0pzzzq_EtwWriteTransfer @ 0x1C003E550 (McTemplateK0pzzzq_EtwWriteTransfer.c)
 *     ?DxgUnicodeStringFromCharBuffer@@YAJAEAU_UNICODE_STRING@@PEADG@Z @ 0x1C0220094 (-DxgUnicodeStringFromCharBuffer@@YAJAEAU_UNICODE_STRING@@PEADG@Z.c)
 *     ?DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0262DF8 (-DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLL.c)
 */

__int64 __fastcall DxgCreateLiveDumpWithDriverBlob(
        struct _DEVICE_OBJECT *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        struct _DXGKARG_COLLECTDIAGNOSTICINFO *a7)
{
  __int64 v11; // r8
  __int64 v12; // rcx
  struct _DEVICE_OBJECT *v13; // rcx
  struct _WD_DEBUG_REPORT *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _WD_DEBUG_REPORT *v17; // rdi
  __int64 v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rax
  int v24; // [rsp+30h] [rbp-30h]
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  if ( bTracingEnabled && a7 )
  {
    UnicodeString = 0LL;
    DestinationString = 0LL;
    DxgUnicodeStringFromCharBuffer(&UnicodeString, (char *)a7 + 12, 0x40u);
    DxgUnicodeStringFromCharBuffer(&DestinationString, (char *)a7 + 76, 0x80u);
    v12 = (unsigned int)(*((_DWORD *)a7 + 2) - 1);
    if ( *((_DWORD *)a7 + 2) == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
        McTemplateK0pzzzq_EtwWriteTransfer(
          v12,
          &AddDeviceFailed,
          v11,
          a1,
          L"Add Device Failed",
          UnicodeString.Buffer,
          DestinationString.Buffer,
          a4);
    }
    else if ( *((_DWORD *)a7 + 2) == 2 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    {
      McTemplateK0pzzzq_EtwWriteTransfer(
        v12,
        &StartDeviceFailed,
        v11,
        a1,
        L"Start Device Failed",
        UnicodeString.Buffer,
        DestinationString.Buffer,
        a4);
    }
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    if ( DestinationString.Buffer )
      RtlFreeUnicodeString(&DestinationString);
  }
  v13 = a1;
  LOBYTE(v24) = 0;
  if ( *((_DWORD *)a7 + 2) != 3 )
    v13 = 0LL;
  v14 = (struct _WD_DEBUG_REPORT *)WdDbgReportCreate(v13, a2, a3, a4, a5, a6, v24);
  v17 = v14;
  if ( v14 )
  {
    v22 = DxgkAddDiagnosticInfoIntoReport(v14, a1, a7);
    if ( v22 < 0 )
    {
      v23 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v23 + 24) = 10734LL;
      WdLogEvent5_WdError(v23);
      v22 = -1073741823;
    }
    WdDbgReportComplete(v17);
    return (unsigned int)v22;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v18 + 24) = 10722LL;
    WdLogEvent5_WdError(v18);
    return 3221225473LL;
  }
}
