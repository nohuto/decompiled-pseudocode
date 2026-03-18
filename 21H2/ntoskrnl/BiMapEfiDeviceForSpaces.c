/*
 * XREFs of BiMapEfiDeviceForSpaces @ 0x14064D064
 * Callers:
 *     BiUpdateBcdObject @ 0x140A20DF8 (BiUpdateBcdObject.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     BiLogMessage @ 0x1408138F0 (BiLogMessage.c)
 *     SyspartGetSystemPartition @ 0x140A2150C (SyspartGetSystemPartition.c)
 *     SyspartIsSpace @ 0x140A21578 (SyspartIsSpace.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiMapEfiDeviceForSpaces(__int64 a1, const void **a2, unsigned int *a3)
{
  int v3; // eax
  int SystemPartition; // edi
  PVOID PoolWithTag; // rax
  void *v8; // rsi
  size_t v9; // r15
  unsigned int v10; // r14d
  SIZE_T v11; // rbx
  char *v12; // rax
  char *v13; // rbp
  size_t v14; // r8
  void *v15; // rbx
  char v17; // [rsp+60h] [rbp+8h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a1 + 48);
  v17 = 0;
  LODWORD(NumberOfBytes) = 0;
  SystemPartition = 0;
  if ( (v3 & 8) == 0 )
  {
    SystemPartition = SyspartGetSystemPartition(0LL, 0LL, &NumberOfBytes);
    if ( (int)(SystemPartition + 0x80000000) < 0 || SystemPartition == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        SystemPartition = SyspartGetSystemPartition(PoolWithTag, (unsigned int)NumberOfBytes, &NumberOfBytes);
        if ( SystemPartition >= 0 )
        {
          SystemPartition = SyspartIsSpace(v8, &v17);
          if ( SystemPartition >= 0 )
          {
            if ( v17 )
            {
              v9 = (unsigned int)NumberOfBytes;
              v10 = NumberOfBytes + 20;
              v11 = (unsigned int)(NumberOfBytes + 20);
              v12 = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x4B444342u);
              v13 = v12;
              if ( v12 )
              {
                memset(v12, 0, v11);
                v14 = v10;
                v15 = (void *)*a2;
                if ( v10 >= *a3 )
                  v14 = *a3;
                memmove(v13, *a2, v14);
                memmove(v13 + 20, v8, v9);
                ExFreePoolWithTag(v15, 0x4B444342u);
                *a2 = v13;
                *a3 = v10;
              }
              else
              {
                SystemPartition = -1073741801;
              }
            }
          }
          else
          {
            BiLogMessage(4LL, L"SyspartIsSpace failed for partition path: %s", v8);
          }
        }
        ExFreePoolWithTag(v8, 0x4B444342u);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)SystemPartition;
}
