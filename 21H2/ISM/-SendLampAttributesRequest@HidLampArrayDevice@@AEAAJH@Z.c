/*
 * XREFs of ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x1800A83E8
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A716C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRequestDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800AA368 (-CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRe.c)
 */

__int64 __fastcall HidLampArrayDevice::SendLampAttributesRequest(HidLampArrayDevice *this, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  const struct std::nothrow_t *v5; // rdx
  PVOID v7; // rbx
  const struct std::nothrow_t *v8; // rdx
  signed int LastError; // eax
  const struct std::nothrow_t *v10; // rdx
  unsigned int v11; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v13; // [rsp+30h] [rbp+8h] BYREF
  ULONG ReportBufferLength; // [rsp+38h] [rbp+10h] BYREF
  PVOID ReportBuffer; // [rsp+40h] [rbp+18h] BYREF

  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v13 = a2;
  v3 = HidLampAttributesRequestReportParser::CreateAndInitializeOutputBuffer(
         *((_QWORD *)this + 74),
         &v13,
         &ReportBuffer,
         &ReportBufferLength);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v7 = ReportBuffer;
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
    {
      if ( v7 )
        operator delete(v7, v8);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      v11 = LastError;
      if ( LastError > 0 )
        v11 = (unsigned __int16)LastError | 0x80070000;
      if ( v7 )
        operator delete(v7, v10);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x105,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v3);
    if ( ReportBuffer )
      operator delete(ReportBuffer, v5);
    return v4;
  }
}
