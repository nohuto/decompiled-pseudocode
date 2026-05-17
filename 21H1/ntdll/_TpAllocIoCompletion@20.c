/*
 * XREFs of _TpAllocIoCompletion@20 @ 0x4B2E6E50
 * Callers:
 *     <none>
 * Callees:
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TppGetCurrentThreadNumaNode@12 @ 0x4B2B49C9 (_TppGetCurrentThreadNumaNode@12.c)
 *     _TppCleanupGroupMemberInitialize@20 @ 0x4B2B4A71 (_TppCleanupGroupMemberInitialize@20.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _TpAllocIoCompletion@20 @ 0x4B2E6E50 (_TpAllocIoCompletion@20.c)
 *     _TpBindFileToDirect@12 @ 0x4B2E713D (_TpBindFileToDirect@12.c)
 *     _TppCleanupGroupAddMember@4 @ 0x4B2E7383 (_TppCleanupGroupAddMember@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpAllocIoCompletion(int *a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v5; // eax
  int Heap; // esi
  int v7; // edi
  _DWORD *v8; // ecx
  int v9; // ecx
  char v10; // dl
  int v12; // [esp+18h] [ebp-24h]
  int v13; // [esp+20h] [ebp-1Ch]
  _UNKNOWN *retaddr; // [esp+40h] [ebp+4h]

  if ( a5 )
  {
    v5 = a5[7];
    v12 = v5;
  }
  else
  {
    v5 = 0;
    v12 = 0;
  }
  if ( !a1 || !a2 || !a3 || (v5 & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  *a1 = 0;
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x40000) | 8, 176);
  if ( Heap )
  {
    *(_DWORD *)(Heap + 108) = retaddr;
    v7 = TppCleanupGroupMemberInitialize(Heap, a4, a5, v12, (int)TppIopCleanupGroupMemberVFuncs);
    v13 = v7;
    if ( v7 >= 0 )
    {
      *(_DWORD *)(Heap + 48) = a3;
      *(_DWORD *)(Heap + 164) = a2;
      *(_DWORD *)(Heap + 168) = 0;
      v8 = *(_DWORD **)(Heap + 92);
      *(_DWORD *)(Heap + 152) = TppIopExecuteCallback;
      if ( v8 )
      {
        TppGetCurrentThreadNumaNode(v8, (_DWORD *)(Heap + 156), (unsigned __int8 *)(Heap + 160));
        v9 = *(_DWORD *)(Heap + 156);
        v10 = *(_BYTE *)(Heap + 160);
      }
      else
      {
        *(_DWORD *)(Heap + 156) = 0;
        *(_BYTE *)(Heap + 160) = 0;
        v9 = 0;
        v10 = 0;
      }
      *(_DWORD *)(Heap + 140) = 0;
      *(_DWORD *)(Heap + 148) = Heap + 144;
      *(_DWORD *)(Heap + 144) = Heap + 144;
      *(_DWORD *)(Heap + 120) = TppDirectTaskVFuncs;
      *(_DWORD *)(Heap + 124) = v9;
      *(_BYTE *)(Heap + 128) = v10;
      v7 = TpBindFileToDirect(*(_DWORD *)(Heap + 92));
      v13 = v7;
      if ( v7 >= 0 )
      {
        v7 = 0;
        v13 = 0;
        if ( a5 )
          *(_DWORD *)(Heap + 16) = a5[6];
        if ( *(_DWORD *)(Heap + 8) )
          TppCleanupGroupAddMember(Heap);
      }
      if ( v7 < 0 )
        TppCleanupGroupMemberDestroy((_DWORD *)Heap);
    }
  }
  else
  {
    v7 = -1073741801;
    v13 = -1073741801;
  }
  if ( v7 < 0 && Heap )
  {
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, Heap);
    Heap = 0;
    v7 = v13;
  }
  if ( v7 >= 0 )
    *a1 = Heap;
  return v7;
}
