/*
 * XREFs of NdisAllocateRefCount @ 0x1C002C1C0
 * Callers:
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021664 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x1C002BA0C (ndisIfRegisterInterfaceEx.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C002D0B4 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0031F08 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0105E48 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0106240 (-ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 * Callees:
 *     memset @ 0x1C00403C0 (memset.c)
 */

__int64 __fastcall NdisAllocateRefCount(unsigned __int8 a1, char a2)
{
  char v2; // di
  char v4; // si
  unsigned int v5; // eax
  unsigned int v6; // r14d
  _BYTE *PoolWithTag; // rax
  _BYTE *v8; // rbx
  __int64 result; // rax

  v2 = a2;
  if ( !ndisDebugLoggingMode )
    return 2LL;
  v4 = 1;
  if ( ndisDebugLoggingMode == 2 )
    v2 = a2 | 1;
  if ( (v2 & 1) != 0 )
  {
    v5 = (a1 << 6) + 8;
  }
  else
  {
    v5 = (((((unsigned __int64)a1 + 7) >> 3) + 3) & 0xFFFFFFFC) + 16;
    v4 = 0;
  }
  v6 = v5;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x7872444Eu);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3LL;
  memset(PoolWithTag, 0, v6);
  result = (__int64)v8;
  *v8 = v2;
  v8[1] = v4;
  v8[2] = a1;
  return result;
}
