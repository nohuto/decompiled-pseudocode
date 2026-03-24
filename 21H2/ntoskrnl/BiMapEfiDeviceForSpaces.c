/*
 * XREFs of BiMapEfiDeviceForSpaces @ 0x1405C3E74
 * Callers:
 *     BiUpdateBcdObject @ 0x140972E90 (BiUpdateBcdObject.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     BiLogMessage @ 0x140784D9C (BiLogMessage.c)
 *     SyspartGetSystemPartition @ 0x1409735A0 (SyspartGetSystemPartition.c)
 *     SyspartIsSpace @ 0x14097360C (SyspartIsSpace.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiMapEfiDeviceForSpaces(__int64 a1, const void **a2, unsigned int *a3)
{
  int v3; // eax
  int SystemPartition; // edi
  PVOID PoolWithTag; // rax
  const void *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  size_t v12; // r15
  unsigned int v13; // r14d
  SIZE_T v14; // rbx
  char *v15; // rax
  char *v16; // rbp
  size_t v17; // r8
  const void *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  char v23; // [rsp+60h] [rbp+8h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a1 + 48);
  v23 = 0;
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
          SystemPartition = SyspartIsSpace(v8, &v23);
          if ( SystemPartition >= 0 )
          {
            if ( v23 )
            {
              v12 = (unsigned int)NumberOfBytes;
              v13 = NumberOfBytes + 20;
              v14 = (unsigned int)(NumberOfBytes + 20);
              v15 = (char *)ExAllocatePoolWithTag(PagedPool, v14, 0x4B444342u);
              v16 = v15;
              if ( v15 )
              {
                memset(v15, 0, v14);
                v17 = v13;
                v18 = *a2;
                if ( v13 >= *a3 )
                  v17 = *a3;
                memmove(v16, *a2, v17);
                memmove(v16 + 20, v8, v12);
                ExFreeHeapPool((ULONG_PTR)v18, v19, v20, v21);
                *a2 = v16;
                *a3 = v13;
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
        ExFreeHeapPool((ULONG_PTR)v8, v9, v10, v11);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)SystemPartition;
}
