/*
 * XREFs of RtlpRegisterStackTrace @ 0x18010ADD8
 * Callers:
 *     RtlpStackTraceDatabaseLogPrefix @ 0x18010B020 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlExtendMemoryZone @ 0x180001A70 (RtlExtendMemoryZone.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A1210 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x1800A1FB0 (RtlCompareMemory.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 *     RtlpInitializeStackTraceLog @ 0x18010990C (RtlpInitializeStackTraceLog.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18011C010 (RtlAllocateMemoryBlockLookaside.c)
 */

char *__fastcall RtlpRegisterStackTrace(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  __int64 v7; // r14
  char *v8; // rdi
  char *v10; // rbp
  char *v11; // rax
  _DWORD *v12; // rbx
  PVOID Block; // [rsp+68h] [rbp+20h] BYREF

  v3 = RtlpHeapStackTraceLog;
  v5 = a1;
  if ( !RtlpHeapStackTraceLog )
  {
    RtlpInitializeStackTraceLog();
    v3 = RtlpHeapStackTraceLog;
    if ( !RtlpHeapStackTraceLog )
      return 0LL;
  }
  if ( !(_DWORD)v5 )
    return 0LL;
  v7 = v3 + 16 * (a3 % 0x191 + 1LL);
  v8 = *(char **)(v7 + 8);
  if ( !v8
    || *((_DWORD *)v8 + 2) != a3
    || *((_DWORD *)v8 + 3) != (_DWORD)v5
    || RtlCompareMemory(a2, v8 + 16, 8 * v5) != 8 * v5 )
  {
    while ( 1 )
    {
      v10 = *(char **)v7;
      Block = v10;
      v8 = v10;
      if ( v10 )
        break;
LABEL_15:
      if ( RtlAllocateMemoryBlockLookaside(*(PVOID *)RtlpHeapStackTraceLog, 8 * v5 + 16, &Block) < 0
        && ((int)RtlExtendMemoryZone(*(_QWORD *)(*(_QWORD *)RtlpHeapStackTraceLog + 16LL), 0x10000LL) < 0
         || RtlAllocateMemoryBlockLookaside(*(PVOID *)RtlpHeapStackTraceLog, 8 * v5 + 16, &Block) < 0) )
      {
        return 0LL;
      }
      v12 = Block;
      *((_DWORD *)Block + 2) = a3;
      v12[3] = v5;
      *(_QWORD *)v12 = v10;
      memmove(v12 + 4, a2, 8 * v5);
      if ( v10 == (char *)_InterlockedCompareExchange64(
                            (volatile signed __int64 *)v7,
                            (signed __int64)v12,
                            (signed __int64)v10) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(RtlpHeapStackTraceLog + 8));
        return (char *)Block;
      }
      RtlpInterlockedPushEntrySList(*((__int128 **)Block - 2), (_QWORD *)Block - 6);
    }
    v11 = v10;
    while ( *((_DWORD *)v8 + 2) != a3
         || *((_DWORD *)v8 + 3) != (_DWORD)v5
         || RtlCompareMemory(a2, v11 + 16, 8 * v5) != 8 * v5 )
    {
      v11 = *(char **)v8;
      Block = v11;
      v8 = v11;
      if ( !v11 )
        goto LABEL_15;
    }
    *(_QWORD *)(v7 + 8) = v8;
  }
  return v8;
}
