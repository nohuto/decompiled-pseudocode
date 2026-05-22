/*
 * XREFs of ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800A7F08
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A716C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800AA978 (-CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV-$unique_ptr@$$B.c)
 *     ?ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800AAAEC (-ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesRe.c)
 */

__int64 __fastcall HidLampArrayDevice::ReceiveLampAttributesReport(
        HidLampArrayDevice *this,
        struct LampAttributesResponseDeviceReport *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const struct std::nothrow_t *v6; // rdx
  unsigned __int8 *v8; // rbx
  signed int LastError; // eax
  const struct std::nothrow_t *v10; // rdx
  unsigned int v11; // edi
  HidLampAttributesResponseReportParser *v12; // rcx
  int v13; // eax
  const struct std::nothrow_t *v14; // rdx
  unsigned int v15; // esi
  const struct std::nothrow_t *v16; // rdx
  int v17; // eax
  __int128 v18; // xmm1
  __int128 v19; // [rsp+20h] [rbp-30h] BYREF
  __int128 v20; // [rsp+30h] [rbp-20h]
  int v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  ULONG ReportBufferLength; // [rsp+70h] [rbp+20h] BYREF
  PVOID ReportBuffer; // [rsp+80h] [rbp+30h] BYREF

  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v4 = HidLampAttributesResponseReportParser::CreateAndInitializeInputBuffer(
         *((_QWORD *)this + 75),
         &ReportBuffer,
         &ReportBufferLength);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v8 = (unsigned __int8 *)ReportBuffer;
    if ( HidD_GetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
    {
      v12 = (HidLampAttributesResponseReportParser *)*((_QWORD *)this + 75);
      v19 = 0LL;
      v21 = 0;
      v20 = 0LL;
      v13 = HidLampAttributesResponseReportParser::ParseInputBufferForReport(
              v12,
              v8,
              ReportBufferLength,
              (struct LampAttributesResponseDeviceReport *)&v19);
      v15 = v13;
      if ( v13 >= 0 )
      {
        v17 = v21;
        v18 = v20;
        *(_OWORD *)a2 = v19;
        *((_OWORD *)a2 + 1) = v18;
        *((_DWORD *)a2 + 8) = v17;
        if ( v8 )
          operator delete(v8, v14);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11D,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)(unsigned int)v13);
        if ( v8 )
          operator delete(v8, v16);
        return v15;
      }
    }
    else
    {
      LastError = GetLastError();
      v11 = LastError;
      if ( LastError > 0 )
        v11 = (unsigned __int16)LastError | 0x80070000;
      if ( v8 )
        operator delete(v8, v10);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v4);
    if ( ReportBuffer )
      operator delete(ReportBuffer, v6);
    return v5;
  }
}
