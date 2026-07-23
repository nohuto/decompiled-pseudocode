/*
 * XREFs of IoFillDumpHeader @ 0x140501A78
 * Callers:
 *     IopConstructInMemoryDumpHeader @ 0x140503B80 (IopConstructInMemoryDumpHeader.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x140504B8C (IopWriteCapsuleTriageDumpToFirmware.c)
 *     KeInitializeCrashDumpHeader @ 0x140505610 (KeInitializeCrashDumpHeader.c)
 *     DbgkpTriageDumpFillHeaders @ 0x140889B60 (DbgkpTriageDumpFillHeaders.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1409ACE10 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1402404C0 (RtlGetNtProductType.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     MmGetPhysicalMemoryRanges @ 0x1407CCF60 (MmGetPhysicalMemoryRanges.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoFillDumpHeader(
        _NT_PRODUCT_TYPE *a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _NT_PRODUCT_TYPE *v10; // r11
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  size_t v13; // r8
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  PPHYSICAL_MEMORY_RANGE v15; // r8
  __int64 v16; // rdi
  LARGE_INTEGER *p_NumberOfBytes; // rdx
  LARGE_INTEGER NumberOfBytes; // rcx
  __int64 v19; // r9
  signed __int64 v20; // rcx
  unsigned __int64 QuadPart; // rax
  __int64 result; // rax

  v10 = a1;
  v11 = 2048LL;
  if ( ((unsigned __int8)a1 & 4) != 0 )
  {
    *a1 = 1162297680;
    v10 = a1 + 1;
    v11 = 2047LL;
  }
  memset64(v10, 0x4547415045474150uLL, v11 >> 1);
  if ( (v11 & 1) != 0 )
    v10[v11 - 1] = 1162297680;
  *((_QWORD *)a1 + 9) = a5;
  *((_QWORD *)a1 + 10) = a6;
  *((_QWORD *)a1 + 11) = a7;
  *((_DWORD *)a1 + 1) = 875976004;
  *((_DWORD *)a1 + 14) = a3;
  *((_QWORD *)a1 + 8) = a4;
  if ( a8 )
    v12 = *(_QWORD *)(*(_QWORD *)(a8 + 184) + 40LL);
  else
    v12 = __readcr3();
  *((_QWORD *)a1 + 2) = v12 & 0xFFFFFFFFFFFFF000uLL;
  *((_DWORD *)a1 + 12) = 34404;
  *((_DWORD *)a1 + 998) = a2;
  *((_QWORD *)a1 + 3) = MmPfnDatabase;
  *((_QWORD *)a1 + 4) = &PsLoadedModuleList;
  *((_QWORD *)a1 + 5) = &PsActiveProcessHead;
  *((_QWORD *)a1 + 16) = &KdDebuggerDataBlock;
  *((_DWORD *)a1 + 13) = KeQueryActiveProcessorCountEx(0xFFFFu);
  *((_DWORD *)a1 + 2) = (unsigned int)NtBuildNumber >> 28;
  *((_DWORD *)a1 + 3) = (unsigned __int16)NtBuildNumber;
  if ( (unsigned int)(a2 - 5) <= 1 || !MmPhysicalMemoryBlock )
    goto LABEL_24;
  if ( KeGetCurrentIrql() > 1u )
  {
    v13 = 16 * ((unsigned int)(*(_DWORD *)MmPhysicalMemoryBlock - 1) + 2LL);
    if ( v13 > 0x2BC )
      v13 = 700LL;
    memmove(a1 + 34, MmPhysicalMemoryBlock, v13);
    goto LABEL_25;
  }
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v15 = PhysicalMemoryRanges;
  if ( !PhysicalMemoryRanges )
  {
LABEL_24:
    memset(a1 + 34, 0, 0x2BCuLL);
    goto LABEL_25;
  }
  v16 = 0LL;
  p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
  NumberOfBytes = PhysicalMemoryRanges->NumberOfBytes;
  v19 = 0LL;
  while ( NumberOfBytes.QuadPart )
  {
    v16 = (unsigned int)(v16 + 1);
    v19 += (unsigned __int64)NumberOfBytes.QuadPart >> 12;
    NumberOfBytes = PhysicalMemoryRanges[(unsigned int)v16].NumberOfBytes;
  }
  *((_QWORD *)a1 + 18) = v19;
  if ( 16 * ((unsigned __int64)(unsigned int)(v16 - 1) + 2) > 0x2BC )
    v16 = 42LL;
  *((_DWORD *)a1 + 34) = v16;
  if ( (_DWORD)v16 )
  {
    v20 = (char *)a1 - (char *)PhysicalMemoryRanges;
    do
    {
      *(LONGLONG *)((char *)&p_NumberOfBytes[18].QuadPart + v20) = (unsigned __int64)p_NumberOfBytes[-1].QuadPart >> 12;
      QuadPart = p_NumberOfBytes->QuadPart;
      p_NumberOfBytes += 2;
      *(LONGLONG *)((char *)&p_NumberOfBytes[17].QuadPart + v20) = QuadPart >> 12;
      --v16;
    }
    while ( v16 );
  }
  ExFreePoolWithTag(v15, 0);
LABEL_25:
  memset(a1 + 210, 0, 0xBB8uLL);
  *((_QWORD *)a1 + 481) = 0LL;
  *((_DWORD *)a1 + 966) = 0;
  *((_QWORD *)a1 + 482) = 0LL;
  *((_DWORD *)a1 + 960) = -2147483645;
  *((_DWORD *)a1 + 961) = 1;
  *((_DWORD *)a1 + 1002) = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)a1 + 1003) = MEMORY[0xFFFFF78000000018];
  *((_DWORD *)a1 + 1036) = MEMORY[0xFFFFF78000000008];
  *((_DWORD *)a1 + 1037) = MEMORY[0xFFFFF7800000000C];
  RtlGetNtProductType(a1 + 1040);
  *((_DWORD *)a1 + 1041) = MEMORY[0xFFFFF780000002D0];
  result = MEMORY[0xFFFFF780000002C4];
  *((_DWORD *)a1 + 1044) = 0;
  *((_DWORD *)a1 + 1045) = result;
  return result;
}
