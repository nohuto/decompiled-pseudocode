/*
 * XREFs of ?ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z @ 0x1800A7BEC
 * Callers:
 *     ?ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z @ 0x1800A20A8 (-ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D390 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18004A63B (memcpy_0.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18009F0A4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

__int64 __fastcall HidLampArrayDevice::ReceiveVendorReport(
        HidLampArrayDevice *this,
        char a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r8
  size_t v12; // rbp
  char *v13; // rax
  char *v14; // rbx
  signed int LastError; // eax
  const struct std::nothrow_t *v16; // rdx
  unsigned int v17; // edi
  unsigned __int8 v18; // bp
  const struct std::nothrow_t *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char *ReportBuffer; // [rsp+30h] [rbp-48h]
  const wchar_t *v24; // [rsp+38h] [rbp-40h] BYREF
  const char *v25; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  const wchar_t *v27; // [rsp+80h] [rbp+8h] BYREF
  const char *v28; // [rsp+90h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1802053F0 > 5 )
  {
    v27 = (const wchar_t *)((char *)this + 24);
    v28 = "Started";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)this,
      byte_1801CA1EC,
      (__int64)a3,
      (__int64)a4,
      (const unsigned __int16 **)&v28,
      &v27);
  }
  *a3 = 0;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 72) + 16LL) )
    return 2147942487LL;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 73) + 16LL) )
    return 2147942487LL;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 74) + 16LL) )
    return 2147942487LL;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 75) + 16LL) )
    return 2147942487LL;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 76) + 16LL) )
    return 2147942487LL;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 77) + 16LL) )
    return 2147942487LL;
  v8 = *((_DWORD *)this + 158);
  v9 = 0LL;
  if ( !v8 )
    return 2147942487LL;
  v10 = *((_QWORD *)this + 78);
  while ( *(_BYTE *)(v10 + 8 * v9) != a2 )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= v8 )
      return 2147942487LL;
  }
  v12 = *(int *)(v10 + 8 * v9 + 4);
  if ( (unsigned int)v12 > 0x40 || (int)v12 <= 0 )
    return 2147942487LL;
  v13 = (char *)operator new[](*(int *)(v10 + 8 * v9 + 4), (const struct std::nothrow_t *)&std::nothrow);
  ReportBuffer = v13;
  v14 = v13;
  if ( v13 )
  {
    memset_0(v13, 0, v12);
    *v14 = a2;
    if ( HidD_GetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, v12) )
    {
      v18 = v12 - 1;
      *a3 = v18;
      memcpy_0(a4, ReportBuffer + 1, v18);
      if ( (unsigned int)dword_1802053F0 > 5 )
      {
        v24 = (const wchar_t *)((char *)this + 24);
        v25 = "Completed successfully";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v20,
          byte_1801CA1EC,
          v21,
          v22,
          (const unsigned __int16 **)&v25,
          &v24);
      }
      operator delete(ReportBuffer, v19);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      v17 = LastError;
      if ( LastError > 0 )
        v17 = (unsigned __int16)LastError | 0x80070000;
      operator delete(ReportBuffer, v16);
      return v17;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
