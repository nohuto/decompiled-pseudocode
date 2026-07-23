/*
 * XREFs of BiMapEfiDeviceForSpaces @ 0x1405BE9C4
 * Callers:
 *     BiUpdateBcdObject @ 0x14096F9A8 (BiUpdateBcdObject.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     BiLogMessage @ 0x1407729BC (BiLogMessage.c)
 *     SyspartGetSystemPartition @ 0x1409700B8 (SyspartGetSystemPartition.c)
 *     SyspartIsSpace @ 0x140970124 (SyspartIsSpace.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiMapEfiDeviceForSpaces(__int64 a1, const void **a2, unsigned int *a3)
{
  int v3; // eax
  int SystemPartition; // edi
  PVOID PoolWithTag; // rax
  const void *v8; // rsi
  size_t v9; // r15
  unsigned int v10; // r14d
  SIZE_T v11; // rbx
  char *v12; // rax
  char *v13; // rbp
  size_t v14; // r8
  const void *v15; // rbx
  char v17; // [rsp+60h] [rbp+8h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 48);
  v17 = 0;
  LODWORD(NumberOfBytes) = 0;
  SystemPartition = 0;
  if ( (v3 & 8) == 0 )
  {
    SystemPartition = SyspartGetSystemPartition(0LL);
    if ( (int)(SystemPartition + 0x80000000) < 0 || SystemPartition == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        SystemPartition = SyspartGetSystemPartition(PoolWithTag);
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
                v15 = *a2;
                if ( v10 >= *a3 )
                  v14 = *a3;
                memmove(v13, *a2, v14);
                memmove(v13 + 20, v8, v9);
                ExFreeHeapPool((ULONG_PTR)v15);
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
        ExFreeHeapPool((ULONG_PTR)v8);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)SystemPartition;
}
