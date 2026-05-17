/*
 * XREFs of RtlAllocateMemoryBlockLookaside @ 0x18011C010
 * Callers:
 *     RtlpInitializeStackTraceLog @ 0x18010994C (RtlpInitializeStackTraceLog.c)
 *     RtlpRegisterStackTrace @ 0x18010AE18 (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x18006FBD0 (RtlInitializeSListHead.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A1210 (RtlpInterlockedPopEntrySList.c)
 *     RtlAllocateMemoryZone @ 0x18011C130 (RtlAllocateMemoryZone.c)
 */

__int64 __fastcall RtlAllocateMemoryBlockLookaside(__int64 a1, unsigned __int64 a2, PSLIST_ENTRY *a3)
{
  unsigned __int64 v6; // rax
  union _SLIST_HEADER *v7; // rbx
  PSLIST_ENTRY v8; // rax
  struct _SLIST_ENTRY *v9; // rcx
  PSLIST_ENTRY v10; // rax
  unsigned __int64 v12; // rsi
  PSLIST_ENTRY v13; // rax
  struct _SLIST_ENTRY *v14; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 <= *(_QWORD *)(a1 + 32) )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = (union _SLIST_HEADER *)(a1 + 48);
    while ( v6 < a2 )
    {
      v7 += 2;
      v6 *= 2LL;
    }
    v8 = RtlpInterlockedPopEntrySList(v7);
    v9 = v8;
    if ( v8 )
    {
      if ( ((unsigned __int8)v8 & 7) != 0
        || (union _SLIST_HEADER *)v8[2].Next != v7
        || v8[1].Next != (_SLIST_ENTRY *)v7[1].Alignment )
      {
        RtlInitializeSListHead(v7);
        v9 = 0LL;
      }
      v14 = v9;
      if ( v9 )
        goto LABEL_10;
    }
    else
    {
      v14 = 0LL;
    }
    if ( (int)RtlAllocateMemoryZone(*(_QWORD *)(a1 + 16), v7[1].Alignment + 64, &v14) < 0 )
    {
      v12 = 32LL * *(unsigned int *)(a1 + 40) + a1 + 48;
      while ( 1 )
      {
        if ( (unsigned __int64)v7 >= v12 )
          return 3221225626LL;
        v13 = RtlpInterlockedPopEntrySList(v7);
        if ( v13 )
        {
          if ( ((unsigned __int8)v13 & 7) != 0
            || (union _SLIST_HEADER *)v13[2].Next != v7
            || v13[1].Next != (_SLIST_ENTRY *)v7[1].Alignment )
          {
            RtlInitializeSListHead(v7);
            v13 = 0LL;
          }
          if ( v13 )
            break;
        }
        v7 += 2;
      }
      *((_QWORD *)&v13[1].Next + 1) = a2;
      v10 = v13 + 3;
      goto LABEL_11;
    }
    v9 = (struct _SLIST_ENTRY *)(((unsigned __int64)&v14->Next + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v9[2].Next = (_SLIST_ENTRY *)v7;
    v9[1].Next = (_SLIST_ENTRY *)v7[1].Alignment;
LABEL_10:
    *((_QWORD *)&v9[1].Next + 1) = a2;
    v10 = v9 + 3;
LABEL_11:
    *a3 = v10;
    return 0LL;
  }
  return 3221225485LL;
}
