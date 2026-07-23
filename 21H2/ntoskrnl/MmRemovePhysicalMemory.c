/*
 * XREFs of MmRemovePhysicalMemory @ 0x1408C64D0
 * Callers:
 *     WheapClearPoison @ 0x14095DB34 (WheapClearPoison.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x140217D28 (MiFreeContiguousPages.c)
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MiRemoveBadPages @ 0x14052EE08 (MiRemoveBadPages.c)
 *     MiReturnBadPagesToBadList @ 0x14052F238 (MiReturnBadPagesToBadList.c)
 *     MiRemovePhysicalMemory @ 0x1408C60EC (MiRemovePhysicalMemory.c)
 */

NTSTATUS __stdcall MmRemovePhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  unsigned __int64 QuadPart; // rbx
  ULONG_PTR v4; // rdx
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  bool v7; // si
  ULONG_PTR v8; // rdx
  NTSTATUS result; // eax
  NTSTATUS v10; // edi
  __int64 v11; // r8
  _DWORD *v12; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+8h] BYREF

  QuadPart = NumberOfBytes->QuadPart;
  v4 = StartAddress->QuadPart;
  v5 = QuadPart >> 12;
  BugCheckParameter2 = StartAddress->QuadPart;
  v6 = (unsigned int)BugCheckParameter2;
  v7 = (BugCheckParameter2 & 1) != 0 && (BugCheckParameter2 & 0xFFF) != 0;
  if ( v7 )
  {
    v6 = (unsigned int)BugCheckParameter2 & 0xFFFFFFFE;
    LODWORD(BugCheckParameter2) = BugCheckParameter2 & 0xFFFFFFFE;
    v4 = BugCheckParameter2;
  }
  v8 = v4 >> 12;
  BugCheckParameter2 = v8;
  if ( v8 >= v8 + v5 )
    return -1073741585;
  if ( v7 )
    result = MiRemoveBadPages(v6, v8, v5);
  else
    result = MiFindContiguousPages(
               (__int64)&MiSystemPartition,
               v8,
               v8 + v5 - 1,
               0LL,
               v5,
               1u,
               0x80000000,
               0x80000000,
               202375168,
               0LL,
               (__int64 *)&BugCheckParameter2);
  if ( result >= 0 )
  {
    v10 = MiRemovePhysicalMemory(BugCheckParameter2, v5, 0x10u);
    if ( v10 < 0 )
    {
      if ( v7 )
        MiReturnBadPagesToBadList(BugCheckParameter2, v5, v11, v12);
      else
        MiFreeContiguousPages(BugCheckParameter2, v5);
    }
    else
    {
      NumberOfBytes->QuadPart = v5 << 12;
    }
    return v10;
  }
  return result;
}
