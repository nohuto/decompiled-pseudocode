/*
 * XREFs of MiGetSystemPteStatistics @ 0x1408D7B94
 * Callers:
 *     MmGetSessionMappedViewInformation @ 0x1408C4A30 (MmGetSessionMappedViewInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1402603C4 (MiGetNumberOfCachedPtes.c)
 *     RtlFindLongestRunClearEx @ 0x14039B7B0 (RtlFindLongestRunClearEx.c)
 */

__int64 __fastcall MiGetSystemPteStatistics(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  int v3; // eax
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r9
  int NumberOfCachedPtes; // eax
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 24);
  v13 = 0LL;
  v7 = (v3 & 4) != 0 ? 16 : 1;
  v8 = v7 * RtlFindLongestRunClearEx(a1, &v13);
  v9 = 0x2000000 - v7 * *(_QWORD *)(a1 + 56);
  *a3 = v8;
  if ( v9 > v8 )
    *a3 = v9;
  NumberOfCachedPtes = MiGetNumberOfCachedPtes(a1);
  result = v11 + (unsigned int)(v7 * NumberOfCachedPtes);
  *a2 = result + v7 * *(_QWORD *)(a1 + 88);
  return result;
}
