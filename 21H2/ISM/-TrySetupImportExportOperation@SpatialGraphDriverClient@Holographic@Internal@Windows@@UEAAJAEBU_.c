/*
 * XREFs of ?TrySetupImportExportOperation@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801668B0
 * Callers:
 *     ?TrySetupImportExportOperation@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D800 (-TrySetupImportExportOperation@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAE.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memmove_0 @ 0x18004B267 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800675D4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x1800C5654 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ??$_Reallocate_grow_by@V_lambda_1dfe18491bcca09701d8ccb01d0b0af4_@@PEB_W_K@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_1dfe18491bcca09701d8ccb01d0b0af4_@@PEB_W_K@Z @ 0x180155828 (--$_Reallocate_grow_by@V_lambda_1dfe18491bcca09701d8ccb01d0b0af4_@@PEB_W_K@-$basic_string@_WU-$c.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::TrySetupImportExportOperation(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct _GUID *a2,
        void **a3)
{
  char v5; // si
  unsigned int LastError; // ebx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdi
  LPCWSTR *v11; // rbx
  __int64 v12; // r8
  const char *v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  LPCWSTR *v17; // rbx
  const WCHAR *v18; // rcx
  HANDLE FileW; // rax
  const char *v20; // r9
  LPCWSTR lpFileName[2]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v24; // [rsp+58h] [rbp-41h]
  unsigned __int64 v25; // [rsp+60h] [rbp-39h]
  OLECHAR sz[40]; // [rsp+70h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v5 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(Windows::Internal::Holographic::SpatialGraphDriverClient *))(*(_QWORD *)this + 200LL))(this) )
  {
    LastError = 0;
LABEL_25:
    *a3 = (void *)-1LL;
    return LastError;
  }
  v7 = (*(__int64 (__fastcall **)(Windows::Internal::Holographic::SpatialGraphDriverClient *))(*(_QWORD *)this + 64LL))(this);
  std::wstring::wstring(lpFileName, v7);
  v9 = v24;
  if ( v25 - v24 < 0x11 )
  {
    std::wstring::_Reallocate_grow_by<_lambda_1dfe18491bcca09701d8ccb01d0b0af4_,wchar_t const *,unsigned __int64>(
      (void **)lpFileName,
      0x11uLL,
      v8,
      L"\\mapimportexport\\",
      17LL);
  }
  else
  {
    v10 = v24 + 17;
    v24 += 17LL;
    v11 = lpFileName;
    if ( v25 >= 8 )
      v11 = (LPCWSTR *)lpFileName[0];
    memmove_0((char *)v11 + 2 * v9, L"\\mapimportexport\\", 0x22uLL);
    *((_WORD *)v11 + v10) = 0;
  }
  if ( !StringFromGUID2(a2, sz, 40) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1094LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      v13);
    __debugbreak();
  }
  v14 = -1LL;
  do
    ++v14;
  while ( sz[v14] );
  v15 = v24;
  if ( v14 > v25 - v24 )
  {
    std::wstring::_Reallocate_grow_by<_lambda_1dfe18491bcca09701d8ccb01d0b0af4_,wchar_t const *,unsigned __int64>(
      (void **)lpFileName,
      v14,
      v12,
      sz,
      v14);
  }
  else
  {
    v16 = v24 + v14;
    v24 += v14;
    v17 = lpFileName;
    if ( v25 >= 8 )
      v17 = (LPCWSTR *)lpFileName[0];
    memmove_0((char *)v17 + 2 * v15, sz, 2 * v14);
    *((_WORD *)v17 + v16) = 0;
  }
  v18 = (const WCHAR *)lpFileName;
  if ( v25 >= 8 )
    v18 = lpFileName[0];
  FileW = CreateFileW(v18, 0xC0000000, 3u, 0LL, 3u, 0x40000000u, 0LL);
  *a3 = FileW;
  if ( FileW == (HANDLE)-1LL )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x456,
                  (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                  v20);
  }
  else
  {
    v5 = 0;
    LastError = 0;
  }
  if ( v25 >= 8 )
    std::_Deallocate<16,0>((void *)lpFileName[0], (const struct std::nothrow_t *)(2 * v25 + 2));
  if ( v5 )
    goto LABEL_25;
  return LastError;
}
