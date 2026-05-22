/*
 * XREFs of ?ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@@Z @ 0x1800A797C
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A6D0C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CreateAndInitializeInputBuffer@HidLampArrayAttributesReportParser@@QEAAJAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800A9948 (-CreateAndInitializeInputBuffer@HidLampArrayAttributesReportParser@@QEAAJAEAV-$unique_ptr@$$BY0A.c)
 *     ?ParseInputBufferForReport@HidLampArrayAttributesReportParser@@QEAAJPEBEIPEAULampArrayAttributesDeviceReport@@@Z @ 0x1800A99F4 (-ParseInputBufferForReport@HidLampArrayAttributesReportParser@@QEAAJPEBEIPEAULampArrayAttributes.c)
 */

__int64 __fastcall HidLampArrayDevice::ReceiveLampArrayAttributesReport(
        HidLampArrayDevice *this,
        struct LampArrayAttributesDeviceReport *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const struct std::nothrow_t *v6; // rdx
  unsigned __int8 *v8; // rbx
  signed int LastError; // eax
  const struct std::nothrow_t *v10; // rdx
  unsigned int v11; // edi
  HidLampArrayAttributesReportParser *v12; // rcx
  int v13; // eax
  const struct std::nothrow_t *v14; // rdx
  __int64 v15; // xmm1_8
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  ULONG ReportBufferLength; // [rsp+60h] [rbp+20h] BYREF
  PVOID ReportBuffer; // [rsp+70h] [rbp+30h] BYREF

  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v4 = HidLampArrayAttributesReportParser::CreateAndInitializeInputBuffer(
         *((_QWORD *)this + 72),
         &ReportBuffer,
         &ReportBufferLength);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xED,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v4);
    if ( ReportBuffer )
      operator delete(ReportBuffer, v6);
    return v5;
  }
  v8 = (unsigned __int8 *)ReportBuffer;
  if ( !HidD_GetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
  {
    LastError = GetLastError();
    v11 = LastError;
    if ( LastError > 0 )
      v11 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_8;
  }
  v12 = (HidLampArrayAttributesReportParser *)*((_QWORD *)this + 72);
  v16 = 0LL;
  v17 = 0LL;
  v13 = HidLampArrayAttributesReportParser::ParseInputBufferForReport(
          v12,
          v8,
          ReportBufferLength,
          (struct LampArrayAttributesDeviceReport *)&v16);
  v11 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v13);
LABEL_8:
    if ( v8 )
      operator delete(v8, v10);
    return v11;
  }
  v15 = v17;
  *(_OWORD *)a2 = v16;
  *((_QWORD *)a2 + 2) = v15;
  if ( v8 )
    operator delete(v8, v14);
  return 0LL;
}
