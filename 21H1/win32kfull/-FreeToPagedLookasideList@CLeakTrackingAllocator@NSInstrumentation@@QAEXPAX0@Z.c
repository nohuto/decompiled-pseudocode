/*
 * XREFs of ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX0@Z @ 0x249D9A
 * Callers:
 *     _Win32UAFMFreeToPagedLookasideListImpl@12 @ 0x18374B (_Win32UAFMFreeToPagedLookasideListImpl@12.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z @ 0xCFE32 (-Remove@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAE_NQBVCBackTraceStorageUnit@2@@Z @ 0x24A4C4 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __thiscall NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        union _SLIST_HEADER *a2,
        struct NSInstrumentation::CBackTraceStorageUnit *ListEntry)
{
  int v3; // ebx
  WORD v4; // ax
  NSInstrumentation::CPointerHashTable *v5; // ecx
  struct NSInstrumentation::CBackTraceStorageUnit *v6; // esi
  struct _SINGLE_LIST_ENTRY *v7; // esi
  WORD Depth; // ax
  struct NSInstrumentation::CBackTraceStorageUnit *v9; // [esp-4h] [ebp-10h]

  v3 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3);
  if ( LOBYTE(a2->Alignment) )
  {
    v5 = *(NSInstrumentation::CPointerHashTable **)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) + 48);
    v6 = ListEntry;
    ListEntry = 0;
    v7 = (struct _SINGLE_LIST_ENTRY *)((char *)v6 - 8);
    if ( NSInstrumentation::CPointerHashTable::Remove(v5, v7, (void **)&ListEntry) )
    {
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        *(NSInstrumentation::CPrioritizedWriterLock **)(v3 + 56),
        ListEntry);
      Depth = a2[1].Depth;
      ++*(_DWORD *)&a2[3].Depth;
      if ( Depth < LOWORD(a2[2].Alignment) )
      {
        InterlockedPushEntrySList(a2 + 1, v7);
      }
      else
      {
        ++a2[4].Next.Next;
        (*(void (__stdcall **)(struct _SINGLE_LIST_ENTRY *))&a2[6].Depth)(v7);
      }
    }
  }
  else
  {
    v4 = a2[1].Depth;
    ++*(_DWORD *)&a2[3].Depth;
    if ( v4 < LOWORD(a2[2].Alignment) )
    {
      InterlockedPushEntrySList(a2 + 1, (PSLIST_ENTRY)ListEntry);
    }
    else
    {
      v9 = ListEntry;
      ++a2[4].Next.Next;
      (*(void (__stdcall **)(struct NSInstrumentation::CBackTraceStorageUnit *))&a2[6].Depth)(v9);
    }
  }
}
