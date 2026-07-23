/*
 * XREFs of RtlpHpSegProtect @ 0x18010F584
 * Callers:
 *     RtlpHpHeapProtect @ 0x18010E404 (RtlpHpHeapProtect.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009DA60 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18009E000 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpHpSegProtect(__int64 a1, ULONG a2)
{
  char *v2; // rdi
  char *i; // rbx
  char *v6; // rdx
  int v7; // esi
  char *v8; // rsi
  NTSTATUS result; // eax
  _BYTE MemoryInformation[24]; // [rsp+30h] [rbp-58h] BYREF
  ULONG_PTR v11; // [rsp+48h] [rbp-40h]
  int v12; // [rsp+50h] [rbp-38h]
  ULONG OldProtect; // [rsp+90h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp+18h] BYREF
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp+20h] BYREF

  v2 = (char *)(a1 + 72);
  for ( i = *(char **)(a1 + 72); ; i = *(char **)i )
  {
    if ( i == v2 )
      return 0;
    v6 = i;
    v7 = ~*(_DWORD *)a1;
    BaseAddress = i;
    v8 = &i[v7 + 1];
    if ( i < v8 )
      break;
LABEL_7:
    ;
  }
  while ( 1 )
  {
    result = ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               v6,
               MemoryBasicInformation,
               MemoryInformation,
               0x30uLL,
               0LL);
    if ( result < 0 )
      return result;
    if ( v12 == 4096 )
    {
      RegionSize = v11;
      result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, a2, &OldProtect);
      if ( result < 0 )
        return result;
    }
    v6 = (char *)BaseAddress + v11;
    BaseAddress = v6;
    if ( v6 >= v8 )
      goto LABEL_7;
  }
}
