/*
 * XREFs of MiAddPartitionToCrashDump @ 0x140592964
 * Callers:
 *     MiAddPartitionDataToCrashDump @ 0x140592758 (MiAddPartitionDataToCrashDump.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14028FBF0 (MmIsAddressValidEx.c)
 *     MiGetPartitionLargePageListCount @ 0x1403B7A60 (MiGetPartitionLargePageListCount.c)
 *     MiAddUnicodeStringToCrashDump @ 0x140592C5C (MiAddUnicodeStringToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x140593218 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall MiAddPartitionToCrashDump(__int64 a1, __int64 a2)
{
  unsigned int PartitionLargePageListCount; // eax
  __int64 v5; // r11
  __int64 v6; // r10
  unsigned __int64 v7; // r8
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // r14d
  __int64 *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF

  if ( (ULONG_PTR *)a2 == &MiSystemPartition )
  {
    result = MmAddRangeToCrashDump(a1, a2, 21440LL);
    if ( (int)result < 0 )
      return result;
    v5 = *(_QWORD *)(a2 + 16);
    v7 = 24512LL * (unsigned __int16)KeNumberNodes;
  }
  else
  {
    PartitionLargePageListCount = MiGetPartitionLargePageListCount();
    v7 = 16 * v6
       + ((24512LL * (unsigned __int16)KeNumberNodes + 21455 + 88 * v6) & 0xFFFFFFFFFFFFFFF0uLL)
       + 24LL * PartitionLargePageListCount;
  }
  v9 = MmAddRangeToCrashDump(a1, v5, v7);
  v10 = *(_DWORD *)(a2 + 16728);
  v11 = 16;
  v12 = v9;
  if ( v10 > 0x10 || (v11 = *(_DWORD *)(a2 + 16728), v10) )
  {
    v13 = (__int64 *)(a2 + 16736);
    v14 = v11;
    do
    {
      v15 = *v13;
      if ( *v13 )
      {
        if ( MmIsAddressValidEx(*v13) )
        {
          MmAddRangeToCrashDump(a1, v15, 288LL);
          MmAddRangeToCrashDump(a1, *(_QWORD *)(v15 + 56), 216LL);
          v16 = *(_OWORD *)(v15 + 96);
          MiAddUnicodeStringToCrashDump(a1, &v16);
        }
      }
      ++v13;
      --v14;
    }
    while ( v14 );
  }
  return v12;
}
