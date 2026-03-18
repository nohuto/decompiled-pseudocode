/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800B358C
 * Callers:
 *     ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x1800B2A3C (--1CWindowBackgroundTreatment@@UEAA@XZ.c)
 *     ?ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800B34D4 (-ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D910 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_node<std::pair<IDeviceTarget const * const,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<IDeviceTarget const * const,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v3 + 3);
      result = (_QWORD *)std::_Deallocate<16,0>(v3, 32LL);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
