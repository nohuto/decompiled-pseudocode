/*
 * XREFs of ??$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x1C01E7C74
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0028830 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ??$AddProperty@_N@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x1C01E7B60 (--$AddProperty@_N@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddProperty<bool>(__int64 a1, _DWORD *a2, char *a3)
{
  int v4; // edx
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2[2];
  v6 = 0;
  v10 = 0;
  if ( (int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<bool>(
              a1 + 72,
              v4,
              a3,
              &v10) >= 0 )
  {
    if ( v10 == *a2 && (v7 = *(_QWORD *)(a1 + 72), v8 = *(_DWORD *)(v7 + 8LL * v10 + 4) & 0x1FFFFFFF, v8 == a2[1]) )
    {
      *(_DWORD *)(v7 + 8LL * v10 + 4) = v8 | 0x20000000;
    }
    else
    {
      v6 = -1073741811;
      --*(_DWORD *)(a1 + 80);
      --*(_DWORD *)(a1 + 96);
    }
  }
  else
  {
    return (unsigned int)-1073741684;
  }
  return v6;
}
