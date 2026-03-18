/*
 * XREFs of ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0016A60
 * Callers:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0016994 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01832A8 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007264 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetVidSchSibmitDataSize(DXGADAPTER **this)
{
  __int64 v1; // rdx
  int v2; // r8d

  if ( DXGADAPTER::IsDxgmms2(this[2]) )
    return *(_DWORD *)(v1 + 2536) * ((v2 << 6) + ((8 * v2 + 199) & 0xFFFFFFF8)) + 8 * (v2 + 74);
  else
    return 1288LL;
}
