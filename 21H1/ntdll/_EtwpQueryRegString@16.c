/*
 * XREFs of _EtwpQueryRegString@16 @ 0x4B2F1160
 * Callers:
 *     _EtwpAddDebugInfoEvents@12 @ 0x4B2EDFF4 (_EtwpAddDebugInfoEvents@12.c)
 *     _EtwpQueryPartitionRegistryInformationUm@16 @ 0x4B2F0FDE (_EtwpQueryPartitionRegistryInformationUm@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ULongAdd@12 @ 0x4B2E454E (_ULongAdd@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall EtwpQueryRegString(PCWSTR SourceString, PCWSTR a2, void *a3, unsigned int a4)
{
  int v5; // edi
  int Heap; // esi
  ULONG v8; // [esp+0h] [ebp-40h]
  ULONG *v9; // [esp+4h] [ebp-3Ch]
  _DWORD v10[6]; // [esp+10h] [ebp-30h] BYREF
  UNICODE_STRING v11; // [esp+28h] [ebp-18h] BYREF
  UNICODE_STRING DestinationString; // [esp+30h] [ebp-10h] BYREF
  HANDLE Handle; // [esp+38h] [ebp-8h] BYREF
  ULONG ulAugend; // [esp+3Ch] [ebp-4h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  v10[0] = 24;
  v10[2] = &DestinationString;
  v10[1] = 0;
  v10[3] = 64;
  v10[4] = 0;
  v10[5] = 0;
  v5 = ZwOpenKey(&Handle, 131097, v10);
  if ( v5 < 0 )
    return v5;
  if ( is_mul_ok(2u, a4) )
  {
    ulAugend = 2 * a4;
    if ( ULongAdd((ULONG)&ulAugend, v8, v9) >= 0 )
    {
      Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, ulAugend);
      if ( Heap )
      {
        RtlInitUnicodeString(&v11, a2);
        v5 = ZwQueryValueKey(Handle, &v11, 2, Heap, ulAugend, &a4);
        if ( v5 >= 0 )
          memcpy(a3, (const void *)(Heap + 12), *(_DWORD *)(Heap + 8));
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        v5 = -1073741801;
      }
      NtClose(Handle);
      return v5;
    }
  }
  NtClose(Handle);
  return -1073741675;
}
