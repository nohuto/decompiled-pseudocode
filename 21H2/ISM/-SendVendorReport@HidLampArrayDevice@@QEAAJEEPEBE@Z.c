/*
 * XREFs of ?SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z @ 0x1800A8758
 * Callers:
 *     ?ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z @ 0x1800A2508 (-ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D060 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18004B25B (memcpy_0.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18009F504 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

__int64 __fastcall HidLampArrayDevice::SendVendorReport(
        HidLampArrayDevice *this,
        char a2,
        __int64 a3,
        const unsigned __int8 *a4)
{
  size_t v5; // rbx
  unsigned int v8; // r8d
  ULONG v9; // ebp
  __int64 v10; // rax
  size_t v11; // r15
  __int64 v12; // rdx
  int v14; // eax
  void *v15; // rax
  _BYTE *v16; // rbx
  PVOID v17; // rbx
  const struct std::nothrow_t *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  signed int LastError; // eax
  const struct std::nothrow_t *v23; // rdx
  unsigned int v24; // edi
  const char *v25; // [rsp+30h] [rbp-48h] BYREF
  PVOID ReportBuffer; // [rsp+38h] [rbp-40h]
  const wchar_t *v27; // [rsp+40h] [rbp-38h] BYREF
  const char *v28; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  const wchar_t *v30; // [rsp+80h] [rbp+8h] BYREF

  v5 = (unsigned __int8)a3;
  if ( (unsigned int)dword_1802063F0 > 5 )
  {
    v30 = (const wchar_t *)((char *)this + 24);
    v25 = "Started";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)this,
      byte_1801CB267,
      a3,
      (__int64)a4,
      (const unsigned __int16 **)&v25,
      &v30);
  }
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
  v9 = v5 + 1;
  v10 = 0LL;
  v11 = v5;
  if ( !v8 )
    return 2147942487LL;
  v12 = *((_QWORD *)this + 78);
  while ( *(_BYTE *)(v12 + 8 * v10) != a2 )
  {
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= v8 )
      return 2147942487LL;
  }
  v14 = *(_DWORD *)(v12 + 8 * v10 + 4);
  if ( v14 != v9 || (unsigned int)v14 > 0x40 || v14 <= 0 )
    return 2147942487LL;
  v15 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  ReportBuffer = v15;
  v16 = v15;
  if ( v15 )
  {
    memset_0(v15, 0, v9);
    *v16 = a2;
    memcpy_0(v16 + 1, a4, v11);
    v17 = ReportBuffer;
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, v9) )
    {
      if ( (unsigned int)dword_1802063F0 > 5 )
      {
        v27 = (const wchar_t *)((char *)this + 24);
        v28 = "Completed successfully";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v19,
          byte_1801CB267,
          v20,
          v21,
          (const unsigned __int16 **)&v28,
          &v27);
      }
      operator delete(v17, v18);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      v24 = LastError;
      if ( LastError > 0 )
        v24 = (unsigned __int16)LastError | 0x80070000;
      operator delete(v17, v23);
      return v24;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
