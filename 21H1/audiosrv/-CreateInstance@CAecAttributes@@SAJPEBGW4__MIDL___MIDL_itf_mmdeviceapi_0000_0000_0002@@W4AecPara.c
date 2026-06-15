/*
 * XREFs of ?CreateInstance@CAecAttributes@@SAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4AecParam@@PEAPEAVCStreamGroupAttributes@@@Z @ 0x1800F05D8
 * Callers:
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180013770 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?Clone@CAecAttributes@@UEBAJPEAPEAVCStreamGroupAttributes@@@Z @ 0x1800F05C0 (-Clone@CAecAttributes@@UEBAJPEAPEAVCStreamGroupAttributes@@@Z.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002A740 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAecAttributes::CreateInstance(const unsigned __int16 *a1, int a2, __int64 a3, LPVOID **a4)
{
  LPVOID *v7; // rax
  LPVOID *v8; // rsi
  LPVOID *v9; // rbx
  int v10; // edi
  __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r14
  char *v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7 = (LPVOID *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 0;
    *v7 = &CAecAttributes::`vftable';
    v7[2] = 0LL;
    v7[3] = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = v8;
  if ( v8 )
  {
    if ( !a1 )
    {
LABEL_15:
      *((_DWORD *)v8 + 6) = a2;
      v9 = 0LL;
      *a4 = v8;
      v10 = 0;
      goto LABEL_16;
    }
    v12 = -1LL;
    do
      ++v12;
    while ( a1[v12] );
    v8[2] = 0LL;
    v13 = v12 + 1;
    if ( v12 + 1 < v12 )
    {
      v10 = -2147024362;
      goto LABEL_21;
    }
    if ( is_mul_ok(v13, 2uLL) )
    {
      v14 = (char *)CoTaskMemAlloc(2 * v13);
      v8[2] = v14;
      if ( !v14 )
      {
        v10 = -2147024882;
        goto LABEL_21;
      }
      v10 = 0;
      StringCchCopyNExW(v14, v12 + 1, a1, v12);
    }
    else
    {
      v10 = -2147024362;
    }
    if ( v10 >= 0 )
      goto LABEL_15;
LABEL_21:
    v11 = 23LL;
    goto LABEL_22;
  }
  v10 = -2147024882;
  v11 = 19LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\streamgroupattributes.cpp",
    (const char *)(unsigned int)v10);
LABEL_16:
  if ( v9 )
  {
    CoTaskMemFree(v9[2]);
    v9[2] = 0LL;
    operator delete(v9, (const struct std::nothrow_t *)0x20);
  }
  return (unsigned int)v10;
}
