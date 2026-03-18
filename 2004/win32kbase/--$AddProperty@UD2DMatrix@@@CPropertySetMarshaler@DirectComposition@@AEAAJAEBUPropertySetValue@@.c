/*
 * XREFs of ??$AddProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DMatrix@@@Z @ 0x1C0028D70
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0028830 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ??$AddProperty@UD2DMatrix@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@PEAI@Z @ 0x1C01E75A8 (--$AddProperty@UD2DMatrix@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelMod.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddProperty<D2DMatrix>(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned int)a2[2];
  v6 = 0;
  v10 = 0;
  if ( (int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<D2DMatrix>(
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
      --*(_DWORD *)(a1 + 80);
      v6 = -1073741811;
      *(_DWORD *)(a1 + 96) -= 64;
    }
  }
  else
  {
    return (unsigned int)-1073741684;
  }
  return v6;
}
