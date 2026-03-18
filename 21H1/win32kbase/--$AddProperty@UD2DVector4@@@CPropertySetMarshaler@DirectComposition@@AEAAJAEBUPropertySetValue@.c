/*
 * XREFs of ??$AddProperty@UD2DVector4@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector4@@@Z @ 0x1C01ED51C
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0018AB0 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ??$AddProperty@UD2DQuaternion@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@PEAI@Z @ 0x1C01ED410 (--$AddProperty@UD2DQuaternion@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKerne.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddProperty<D2DVector4>(
        __int64 a1,
        _DWORD *a2,
        __int128 *a3)
{
  int v4; // edx
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2[2];
  v6 = 0;
  v10 = 0;
  if ( (int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<D2DQuaternion>(
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
      *(_DWORD *)(a1 + 96) -= 16;
    }
  }
  else
  {
    return (unsigned int)-1073741684;
  }
  return v6;
}
