/*
 * XREFs of RtlpHpFreeHeap @ 0x140237EEC
 * Callers:
 *     ExAllocateHeapPool @ 0x140212080 (ExAllocateHeapPool.c)
 *     ExpHpCompactionRoutine @ 0x140237CC0 (ExpHpCompactionRoutine.c)
 *     ExAllocateContiguousHeapPool @ 0x1402603B0 (ExAllocateContiguousHeapPool.c)
 *     RtlpHpMetadataFree @ 0x140308A9C (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeap @ 0x1403092CC (RtlpHpAllocateHeap.c)
 *     ExpResizeBigPageTable @ 0x1403750AC (ExpResizeBigPageTable.c)
 *     ExPoolCleanupExpansionTable @ 0x140389038 (ExPoolCleanupExpansionTable.c)
 *     ExGetBigPoolInfo @ 0x1405B1D5C (ExGetBigPoolInfo.c)
 *     ExpFreeHeapSpecialPool @ 0x1405B86B0 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     RtlpHpSegFree @ 0x140237FF4 (RtlpHpSegFree.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402CEE38 (RtlpHpEnvGetHeapManager.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x140305540 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x140308734 (RtlpHpLargeFree.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     RtlpLogHeapFailure @ 0x140591B24 (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasGet @ 0x140592F20 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x14059303C (RtlpHpSizeHeap.c)
 */

__int64 __fastcall RtlpHpFreeHeap(__int128 *a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // esi
  int v11; // eax
  __int64 HeapManager; // rax
  __int64 v14; // rax
  char v15; // al
  int v16; // eax
  int v17; // eax
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  v7 = 0LL;
  v8 = a3 | *((_DWORD *)a1 + 5) & 0x11000001;
  v9 = *((_DWORD *)a1 + 55);
  if ( v9 )
    LOBYTE(v7) = v9 == KeGetCurrentThread()[1].CurrentRunTime;
  v10 = v8 | 1;
  if ( !(_DWORD)v7 )
    v10 = v8;
  if ( (v10 & 0x1000000) != 0
    || !*((_DWORD *)a1 + 6)
    || (a4 = RtlpHpExtrasGet(a1, a2, v10, 0LL), (unsigned __int64)(a4 - 1) > 0xFFFFFFFFFFFFFFFDuLL)
    || (v15 = *(_BYTE *)(a4 + 2), (v15 & 0xF) == 0)
    || ((v16 = v15 & 0xF) == 0 || (_WORD)v16 != 1
      ? (v17 = -1073741823)
      : (v17 = ((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64))RtlpInterceptorRoutines)(
                 a1,
                 a2,
                 3LL,
                 a4 + 16)),
        v17 >= 0) )
  {
    if ( (*((_DWORD *)a1 + 5) & 0x10000000) != 0 && RtlpHpSizeHeap(a1, a2, v10, a4) == -1 )
    {
      RtlpLogHeapFailure(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
      return v5;
    }
    if ( (_WORD)a2 )
    {
      v11 = 0;
    }
    else
    {
      v18 = *a1;
      HeapManager = RtlpHpEnvGetHeapManager(&v18, v7);
      v14 = RtlCSparseBitmapBitmaskRead(
              HeapManager + 16,
              2 * ((unsigned __int64)(a2 - *(_QWORD *)(HeapManager + 8)) >> 20));
      if ( !v14 )
        goto LABEL_25;
      v11 = v14 - 1;
    }
    if ( v11 != 2 )
      return (unsigned int)RtlpHpSegFree(&a1[12 * v11 + 16], a2, v10);
LABEL_25:
    LOBYTE(v5) = RtlpHpLargeFree(a1, a2, v10) != 0;
  }
  return v5;
}
