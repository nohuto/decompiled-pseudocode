/*
 * XREFs of ndisIPsecNblInfoToPktInfo @ 0x1C0075300
 * Callers:
 *     ?ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C007513C (-ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIPsecNblInfoToPktInfo(unsigned __int16 *a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  int v6; // ecx

  result = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( !a2 )
    {
      *(_QWORD *)(a3 + 8) = 0LL;
      *(_QWORD *)a3 = result;
      *a4 = a3;
    }
    if ( a2 == 2 )
    {
      *(_DWORD *)a3 ^= (*(_DWORD *)a3 ^ *a1) & 1;
      v6 = *(_DWORD *)a3 ^ (*(_DWORD *)a3 ^ *a1) & 2;
      *(_DWORD *)a3 = v6;
      *(_DWORD *)a3 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)*a1) & 4;
      result = a1[1];
      *(_DWORD *)(a3 + 4) = result;
      *a4 = a3;
    }
  }
  return result;
}
