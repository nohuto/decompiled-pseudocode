/*
 * XREFs of BiMarkTreatAsSystemStore @ 0x1407820E0
 * Callers:
 *     BiLoadSystemStore @ 0x140781D94 (BiLoadSystemStore.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x1407823A4 (BiDeleteRegistryValue.c)
 *     BiGetRegistryValue @ 0x140783FB8 (BiGetRegistryValue.c)
 *     BiSetRegistryValue @ 0x140784C24 (BiSetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiMarkTreatAsSystemStore(__int64 a1, char a2)
{
  int v4; // ebx
  __int64 result; // rax
  PVOID P[5]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+70h] [rbp+18h] BYREF
  int v8; // [rsp+78h] [rbp+20h]

  P[0] = 0LL;
  v7 = 0;
  if ( (int)BiGetRegistryValue(a1, L"System", L"Description", 4LL, P, &v7) >= 0
    && (v4 = *(_DWORD *)P[0], ExFreePoolWithTag(P[0], 0x4B444342u), v4)
    && a2 )
  {
    v8 = 1;
    return BiSetRegistryValue(a1, L"TreatAsSystem", L"Description");
  }
  else
  {
    result = BiDeleteRegistryValue(a1, L"TreatAsSystem", L"Description");
    if ( (_DWORD)result == -1073741772 )
      return 0LL;
  }
  return result;
}
