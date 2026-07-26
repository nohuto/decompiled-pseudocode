/*
 * XREFs of PktMonClientComponentRegister @ 0x1C0026C00
 * Callers:
 *     ?ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C01008F4 (-ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0100A50 (-ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0106A8C (-ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     PktMonClientComponentRegisterEx @ 0x1C0026C30 (PktMonClientComponentRegisterEx.c)
 *     MediaTypeToPacketType @ 0x1C0026DC8 (MediaTypeToPacketType.c)
 */

__int64 __fastcall PktMonClientComponentRegister(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v5; // eax
  int v6; // r8d
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d

  v5 = MediaTypeToPacketType(a5);
  return PktMonClientComponentRegisterEx(v9, v8, v6, v7, v5);
}
