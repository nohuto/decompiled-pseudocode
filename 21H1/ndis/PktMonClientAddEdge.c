/*
 * XREFs of PktMonClientAddEdge @ 0x1C00C635C
 * Callers:
 *     ?ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0100928 (-ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0100A84 (-ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0106ABC (-ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     MediaTypeToPacketType @ 0x1C0026828 (MediaTypeToPacketType.c)
 *     PktMonClientAddEdgeEx @ 0x1C00C6394 (PktMonClientAddEdgeEx.c)
 */

__int64 __fastcall PktMonClientAddEdge(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v6; // eax
  int v7; // r9d
  int v8; // r10d

  v6 = MediaTypeToPacketType(a5);
  return PktMonClientAddEdgeEx(v8, v7, a6, v7, v6, a6);
}
