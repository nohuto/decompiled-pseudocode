/*
 * XREFs of VidSchInitializeAdapterPowerManagement @ 0x1C0088830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchInitializeAdapterPowerManagement(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  *(_OWORD *)(a1 + 2960) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 2976) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 2992) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 3008) = *(_OWORD *)(a2 + 48);
  v2 = *(_OWORD *)(a2 + 64);
  *(_BYTE *)(a1 + 3056) = 0;
  *(_OWORD *)(a1 + 3024) = v2;
  result = *(unsigned int *)(a2 + 72);
  *(_QWORD *)(a1 + 3048) = 10000 * result;
  return result;
}
