/*
 * XREFs of _RtlpRegisterStackTrace@12 @ 0x4B36F97B
 * Callers:
 *     _RtlpStackTraceDatabaseLogPrefix@16 @ 0x4B36FB50 (_RtlpStackTraceDatabaseLogPrefix@16.c)
 * Callees:
 *     @RtlpInterlockedPushEntrySList@8 @ 0x4B2C2090 (@RtlpInterlockedPushEntrySList@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 *     _RtlExtendMemoryZone@8 @ 0x4B34D780 (_RtlExtendMemoryZone@8.c)
 *     _RtlpInitializeStackTraceLog@0 @ 0x4B36EA32 (_RtlpInitializeStackTraceLog@0.c)
 *     _RtlAllocateMemoryBlockLookaside@12 @ 0x4B3A2010 (_RtlAllocateMemoryBlockLookaside@12.c)
 */

_DWORD *__userpurge RtlpRegisterStackTrace@<eax>(const void *a1@<edx>, int a2@<ecx>, int a3@<edi>, unsigned int a4)
{
  int v4; // esi
  unsigned int v6; // eax
  _DWORD *v7; // edi
  _DWORD *v9; // edi
  int v10; // ecx
  _DWORD *v11; // esi
  unsigned int v12; // edx
  _DWORD *v13; // eax
  int v14; // eax
  ULONG v15; // esi
  SIZE_T v16; // [esp-4h] [ebp-1Ch]
  unsigned int v18; // [esp+10h] [ebp-8h]
  PVOID Block; // [esp+14h] [ebp-4h] BYREF

  v4 = RtlpHeapStackTraceLog;
  if ( RtlpHeapStackTraceLog || (RtlpInitializeStackTraceLog(a3), (v4 = RtlpHeapStackTraceLog) != 0) )
  {
    if ( a2 )
    {
      v6 = v4 + 8 * (a4 % 0x191 + 1);
      v7 = *(_DWORD **)(v6 + 4);
      v18 = v6;
      if ( !v7 || v7[1] != a4 || v7[2] != a2 )
        goto LABEL_10;
      LODWORD(v16) = 4 * a2;
      if ( (unsigned int)RtlCompareMemory(a1, v7 + 3, v16) == 4 * a2 )
        return v7;
      while ( 1 )
      {
        v6 = v18;
LABEL_10:
        v9 = *(_DWORD **)v6;
        v10 = 4 * a2;
        v11 = v9;
        Block = *(PVOID *)v6;
        if ( v9 )
        {
          v12 = a4;
          v13 = v9;
          do
          {
            if ( v11[1] == v12 && v11[2] == a2 )
            {
              LODWORD(v16) = v10;
              v14 = RtlCompareMemory(a1, v13 + 3, v16);
              v10 = 4 * a2;
              if ( v14 == 4 * a2 )
              {
                *(_DWORD *)(v18 + 4) = v11;
                return v11;
              }
              v12 = a4;
            }
            v13 = (_DWORD *)*v11;
            v11 = (_DWORD *)*v11;
            Block = v11;
          }
          while ( v11 );
        }
        v15 = v10 + 12;
        if ( RtlAllocateMemoryBlockLookaside(*(PVOID *)RtlpHeapStackTraceLog, v10 + 12, &Block) < 0
          && (RtlExtendMemoryZone((ULONG)v9, *(_RTL_SRWLOCK **)(*(_DWORD *)RtlpHeapStackTraceLog + 8), 0x10000) < 0
           || RtlAllocateMemoryBlockLookaside(*(PVOID *)RtlpHeapStackTraceLog, v15, &Block) < 0) )
        {
          break;
        }
        v11 = Block;
        *((_DWORD *)Block + 1) = a4;
        LODWORD(v16) = 4 * a2;
        v11[2] = a2;
        *v11 = v9;
        memcpy(v11 + 3, a1, v16);
        if ( (_DWORD *)_InterlockedCompareExchange(
                         (volatile signed __int32 *)v18,
                         (signed __int32)v11,
                         (signed __int32)v9) == v9 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(RtlpHeapStackTraceLog + 4));
          return v11;
        }
        RtlpInterlockedPushEntrySList(*(v11 - 1), v11 - 4);
      }
    }
  }
  return 0;
}
