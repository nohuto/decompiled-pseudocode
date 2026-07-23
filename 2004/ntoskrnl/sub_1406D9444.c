/*
 * XREFs of sub_1406D9444 @ 0x1406D9444
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405CE220 (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405CE490 @ 0x1405CE490 (sub_1405CE490.c)
 *     WbInitializeEncryptionSegment @ 0x1405CE760 (WbInitializeEncryptionSegment.c)
 *     WbCreateHeapExecutedBlock @ 0x1406D8EB0 (WbCreateHeapExecutedBlock.c)
 *     sub_1409606F8 @ 0x1409606F8 (sub_1409606F8.c)
 *     sub_1409608E8 @ 0x1409608E8 (sub_1409608E8.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1403F3A20 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1406D9444(PVOID BaseAddress, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  NTSTATUS v8; // r8d
  __int64 v9; // rcx
  ULONG_PTR v11; // [rsp+30h] [rbp-50h] BYREF
  __int128 MemoryInformation; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+48h] [rbp-38h]
  __int128 v14; // [rsp+50h] [rbp-30h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h]
  __int128 v16; // [rsp+70h] [rbp-10h]
  ULONG_PTR ReturnLength; // [rsp+A8h] [rbp+28h] BYREF

  v3 = a2;
  v11 = 0LL;
  ReturnLength = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  MemoryInformation = 0LL;
  v6 = ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         MemoryImageInformation,
         &MemoryInformation,
         0x18uLL,
         &ReturnLength);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = (unsigned int)v13 >> 2;
    LOBYTE(v9) = v9 & 0xF;
    if ( qword_140C1D8E0 && (LOBYTE(v7) = 12, (unsigned int)qword_140C1D8E0(v9, v7, (unsigned int)v6)) )
    {
      v8 = 0;
      if ( a3 )
      {
        v8 = ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               BaseAddress,
               MemoryBasicInformation,
               &v14,
               0x30uLL,
               &v11);
        if ( v8 >= 0
          && ((unsigned __int64)BaseAddress < (unsigned __int64)v14
           || (unsigned __int64)BaseAddress + v3 > *((_QWORD *)&v15 + 1) + (_QWORD)v14
           || DWORD1(v16) != 32) )
        {
          return (unsigned int)-1073741811;
        }
      }
    }
    else
    {
      return (unsigned int)-1073740760;
    }
  }
  return (unsigned int)v8;
}
