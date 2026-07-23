/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x1801013A4
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x180101480 (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009D110 (ZwAllocateVirtualMemory.c)
 *     RtlpStdLockAcquire @ 0x1801015F8 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x180101618 (RtlpStdLockRelease.c)
 */

__int64 __fastcall RtlpStdExtendUpperWatermark(__int64 a1, void *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  char v5; // dl
  char *v6; // rcx
  unsigned __int64 v7; // rax
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = a2;
  v3 = 0LL;
  RtlpStdLockAcquire(a1);
  v4 = *(_QWORD *)(a1 + 168);
  v5 = *(_BYTE *)(a1 + 128);
  v6 = *(char **)(a1 + 152);
  BaseAddress = v6;
  v7 = v4 - 8;
  if ( !v5 )
  {
    if ( v7 < (unsigned __int64)v6 )
    {
      RegionSize = 4096LL;
      if ( (unsigned __int64)(v6 - 4096) <= *(_QWORD *)(a1 + 144) )
        goto LABEL_9;
      BaseAddress = v6 - 4096;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_9;
      *(_QWORD *)(a1 + 152) = BaseAddress;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 180);
    v3 = v4 - 8;
    *(_QWORD *)(a1 + 168) = v4 - 8;
    goto LABEL_9;
  }
  if ( v7 >= *(_QWORD *)(a1 + 160) )
    goto LABEL_8;
LABEL_9:
  RtlpStdLockRelease(a1);
  return v3;
}
