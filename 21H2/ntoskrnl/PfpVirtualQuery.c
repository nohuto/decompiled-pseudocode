/*
 * XREFs of PfpVirtualQuery @ 0x1407337F8
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140649630 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall PfpVirtualQuery(__int64 a1, char a2, _DWORD *a3)
{
  unsigned int v4; // eax
  unsigned __int64 v5; // rdx
  int v6; // eax
  NTSTATUS result; // eax
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle[3]; // [rsp+50h] [rbp-18h]

  v8 = 0LL;
  *(_OWORD *)Handle = 0LL;
  if ( *(_DWORD *)(a1 + 24) != 32 )
    return -1073741306;
  v4 = 32;
  if ( a2 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( (v5 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v5 + 32 > 0x7FFFFFFF0000LL || (v4 = 32, v5 + 32 < v5) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v4 = *(_DWORD *)(a1 + 24);
    }
  }
  memmove(&v8, *(const void **)(a1 + 16), v4);
  if ( (_DWORD)v8 != 1 )
    return -1073741811;
  v6 = 2;
  if ( (BYTE4(v8) & 1) != 0 && (BYTE4(v8) & 2) != 0 )
    return -1073741811;
  if ( (DWORD1(v8) & 0xFFFFFFFC) != 0 )
    return -1073741811;
  if ( (BYTE4(v8) & 1) == 0 )
    v6 = (BYTE4(v8) & 2) != 0;
  result = MmQueryVirtualMemory(Handle[1], 0LL, 4, *((_OWORD **)&v8 + 1), (SIZE_T)Handle[0], 0LL, v6);
  if ( result >= 0 )
    *a3 = 32;
  return result;
}
