/*
 * XREFs of MiAddPartitionToCrashDump @ 0x140537D90
 * Callers:
 *     MiAddPartitionDataToCrashDump @ 0x140537B78 (MiAddPartitionDataToCrashDump.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140317240 (MmIsAddressValidEx.c)
 *     MiGetPartitionLargePageListCount @ 0x1403F6A98 (MiGetPartitionLargePageListCount.c)
 *     MiAddUnicodeStringToCrashDump @ 0x14053851C (MiAddUnicodeStringToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x140538818 (MmAddRangeToCrashDump.c)
 *     MiSizeMemoryListLocks @ 0x140622B08 (MiSizeMemoryListLocks.c)
 */

__int64 __fastcall MiAddPartitionToCrashDump(__int64 a1, __int64 a2)
{
  unsigned int PartitionLargePageListCount; // eax
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // r14d
  __int64 *v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF

  if ( (ULONG_PTR *)a2 == &MiSystemPartition )
  {
    result = MmAddRangeToCrashDump(a1, a2, 11520LL);
    if ( (int)result < 0 )
      return result;
    v5 = *(_QWORD *)(a2 + 16);
    v7 = 4544LL * (unsigned __int16)KeNumberNodes;
  }
  else
  {
    MiSizeMemoryListLocks();
    PartitionLargePageListCount = MiGetPartitionLargePageListCount();
    v7 = v6 + 24LL * PartitionLargePageListCount;
  }
  v9 = MmAddRangeToCrashDump(a1, v5, v7);
  v10 = *(_DWORD *)(a2 + 6936);
  v11 = v9;
  if ( v10 > 0x10 )
    v10 = 16;
  if ( v10 )
  {
    v12 = (__int64 *)(a2 + 6944);
    v13 = v10;
    do
    {
      v14 = *v12;
      if ( *v12 )
      {
        if ( MmIsAddressValidEx(*v12) )
        {
          MmAddRangeToCrashDump(a1, v14, 288LL);
          MmAddRangeToCrashDump(a1, *(_QWORD *)(v14 + 56), 216LL);
          v15 = *(_OWORD *)(v14 + 96);
          MiAddUnicodeStringToCrashDump(a1, &v15);
        }
      }
      ++v12;
      --v13;
    }
    while ( v13 );
  }
  return v11;
}
