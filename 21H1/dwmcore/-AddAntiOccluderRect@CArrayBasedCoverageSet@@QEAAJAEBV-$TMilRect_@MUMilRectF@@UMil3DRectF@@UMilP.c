/*
 * XREFs of ?AddAntiOccluderRect@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x180075324
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180060B20 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800753F8 (-UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z @ 0x1800A988C (-AddMultipleAndSet@-$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::AddAntiOccluderRect(
        __int64 a1,
        __int128 *a2,
        int a3,
        const struct CMILMatrix *a4)
{
  __int128 v4; // xmm1
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+40h] [rbp-28h]
  __int128 v12; // [rsp+44h] [rbp-24h]

  v4 = *a2;
  v11 = a3;
  v12 = v4;
  v10 = 0LL;
  CZOrderedRect::UpdateDeviceRect((CZOrderedRect *)&v10, a4);
  v6 = DynArray<CZOrderedRect,0>::AddMultipleAndSet(a1 + 392, &v10);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x3Fu, 0LL);
  return v8;
}
