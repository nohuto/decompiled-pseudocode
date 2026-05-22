/*
 * XREFs of ?SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z @ 0x1800A7ECC
 * Callers:
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800A859C (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18009F144 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800A478C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800AC3A4 (-CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDevic.c)
 */

__int64 __fastcall HidLampArrayDevice::SendLampArrayControlReport(
        HidLampArrayDevice *this,
        const struct LampArrayControlDeviceReport *a2,
        __int64 a3,
        __int64 a4)
{
  const wchar_t *v4; // rdi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  const struct std::nothrow_t *v10; // rdx
  PVOID v12; // rbx
  const struct std::nothrow_t *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  signed int LastError; // eax
  const struct std::nothrow_t *v18; // rdx
  unsigned int v19; // edi
  const wchar_t *v20; // [rsp+40h] [rbp-20h] BYREF
  const char *v21; // [rsp+48h] [rbp-18h] BYREF
  const wchar_t *v22; // [rsp+50h] [rbp-10h] BYREF
  const char *v23; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v25; // [rsp+80h] [rbp+20h] BYREF
  ULONG ReportBufferLength; // [rsp+90h] [rbp+30h] BYREF
  PVOID ReportBuffer; // [rsp+98h] [rbp+38h] BYREF

  v4 = (const wchar_t *)((char *)this + 24);
  if ( (unsigned int)dword_1802053F0 > 5 )
  {
    v25 = *(_BYTE *)a2;
    v21 = "Started";
    v20 = (const wchar_t *)((char *)this + 24);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
      (__int64)this,
      byte_1801CA0BC,
      a3,
      a4,
      (const unsigned __int16 **)&v21,
      &v20,
      (__int64)&v25);
  }
  v7 = *((_QWORD *)this + 73);
  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v8 = HidLampArrayControlReportParser::CreateAndInitializeOutputBuffer(v7, a2, &ReportBuffer, &ReportBufferLength);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v12 = ReportBuffer;
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
    {
      if ( (unsigned int)dword_1802053F0 > 5 )
      {
        v22 = v4;
        v23 = "Completed successfully";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v14,
          byte_1801CA122,
          v15,
          v16,
          (const unsigned __int16 **)&v23,
          &v22);
      }
      if ( v12 )
        operator delete(v12, v13);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      v19 = LastError;
      if ( LastError > 0 )
        v19 = (unsigned __int16)LastError | 0x80070000;
      if ( v12 )
        operator delete(v12, v18);
      return v19;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1ED,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v8);
    if ( ReportBuffer )
      operator delete(ReportBuffer, v10);
    return v9;
  }
}
