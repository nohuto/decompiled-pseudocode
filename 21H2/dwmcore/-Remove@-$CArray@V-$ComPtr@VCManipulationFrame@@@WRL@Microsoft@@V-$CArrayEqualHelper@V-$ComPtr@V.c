/*
 * XREFs of ?Remove@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18017EBC4
 * Callers:
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x18017D688 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18017F234 (-RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

__int64 __fastcall CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Remove(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // edi
  int v4; // ecx
  unsigned int v5; // esi
  _QWORD *i; // rax
  int v8; // edx

  v3 = 0;
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 <= 0 )
    return 0LL;
  v5 = 1;
  for ( i = *(_QWORD **)a1; *i != *a2; ++i )
  {
    if ( ++v3 >= v4 )
      return 0LL;
  }
  if ( v3 + 1 > v4 )
  {
    return 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)(*(_QWORD *)a1 + 8LL * v3));
    v8 = *(_DWORD *)(a1 + 8);
    if ( v3 + 1 != v8 )
    {
      memmove_0((void *)(*(_QWORD *)a1 + 8LL * v3), (const void *)(*(_QWORD *)a1 + 8LL * v3 + 8), 8LL * (v8 - v3 - 1));
      v8 = *(_DWORD *)(a1 + 8);
    }
    *(_DWORD *)(a1 + 8) = v8 - 1;
  }
  return v5;
}
