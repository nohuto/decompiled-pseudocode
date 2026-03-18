/*
 * XREFs of ?_Atomic_compare_exchange_strong_8@std@@YAHPEC_KPEA_K_KW4memory_order@1@3@Z @ 0x1801A8024
 * Callers:
 *     ?AcquireForScribble@CComputeScribbleFramebuffer@@AEAA_N_K@Z @ 0x1801A76F0 (-AcquireForScribble@CComputeScribbleFramebuffer@@AEAA_N_K@Z.c)
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x18021FFC8 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Atomic_compare_exchange_strong_8(
        volatile signed __int64 *a1,
        signed __int64 *a2,
        signed __int64 a3,
        __int64 a4,
        int a5)
{
  int v6; // eax
  unsigned int v7; // ecx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  signed __int64 v11; // rtt

  v6 = dword_1802EEE38[a5];
  if ( !v6 )
    goto LABEL_9;
  if ( v6 <= 0 )
    return 0LL;
  if ( v6 < 4 )
  {
LABEL_9:
    v11 = *a2;
    v8 = _InterlockedCompareExchange64(a1, a3, *a2);
    if ( v11 == v8 )
      return 1;
    goto LABEL_6;
  }
  v7 = 1;
  if ( (unsigned int)(v6 - 4) <= 1 )
  {
    v9 = *a2;
    v8 = _InterlockedCompareExchange64(a1, a3, *a2);
    if ( v9 == v8 )
      return v7;
LABEL_6:
    *a2 = v8;
    return 0;
  }
  return 0LL;
}
