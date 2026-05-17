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

_DWORD *__fastcall RtlpRegisterStackTrace(int a1, const void *a2, unsigned int a3)
{
  int v3; // esi
  signed __int32 *v5; // eax
  _DWORD *v6; // edi
  signed __int32 v8; // edi
  SIZE_T v9; // ecx
  _DWORD *v10; // esi
  unsigned int v11; // edx
  _DWORD *v12; // eax
  SIZE_T v13; // eax
  SIZE_T v14; // esi
  signed __int32 *v16; // [esp+10h] [ebp-8h]
  _DWORD *v17; // [esp+14h] [ebp-4h] BYREF

  v3 = RtlpHeapStackTraceLog;
  if ( RtlpHeapStackTraceLog || (RtlpInitializeStackTraceLog(), (v3 = RtlpHeapStackTraceLog) != 0) )
  {
    if ( a1 )
    {
      v5 = (signed __int32 *)(v3 + 8 * (a3 % 0x191 + 1));
      v6 = (_DWORD *)v5[1];
      v16 = v5;
      if ( !v6 || v6[1] != a3 || v6[2] != a1 )
        goto LABEL_10;
      if ( RtlCompareMemory(a2, v6 + 3, 4 * a1) == 4 * a1 )
        return v6;
      while ( 1 )
      {
        v5 = v16;
LABEL_10:
        v8 = *v5;
        v9 = 4 * a1;
        v10 = (_DWORD *)v8;
        v17 = (_DWORD *)*v5;
        if ( v8 )
        {
          v11 = a3;
          v12 = (_DWORD *)v8;
          do
          {
            if ( v10[1] == v11 && v10[2] == a1 )
            {
              v13 = RtlCompareMemory(a2, v12 + 3, v9);
              v9 = 4 * a1;
              if ( v13 == 4 * a1 )
              {
                v16[1] = (signed __int32)v10;
                return v10;
              }
              v11 = a3;
            }
            v12 = (_DWORD *)*v10;
            v10 = (_DWORD *)*v10;
            v17 = v10;
          }
          while ( v10 );
        }
        v14 = v9 + 12;
        if ( (int)RtlAllocateMemoryBlockLookaside(*(_DWORD *)RtlpHeapStackTraceLog, v9 + 12, &v17) < 0
          && (RtlExtendMemoryZone(*(_DWORD *)(*(_DWORD *)RtlpHeapStackTraceLog + 8), 0x10000) < 0
           || (int)RtlAllocateMemoryBlockLookaside(*(_DWORD *)RtlpHeapStackTraceLog, v14, &v17) < 0) )
        {
          break;
        }
        v10 = v17;
        v17[1] = a3;
        v10[2] = a1;
        *v10 = v8;
        memcpy(v10 + 3, a2, 4 * a1);
        if ( _InterlockedCompareExchange(v16, (signed __int32)v10, v8) == v8 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(RtlpHeapStackTraceLog + 4));
          return v10;
        }
        RtlpInterlockedPushEntrySList(*(v10 - 1), v10 - 4);
      }
    }
  }
  return 0;
}
