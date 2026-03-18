/*
 * XREFs of _Win32FreeToPagedLookasideListImpl@8 @ 0x92054
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z @ 0xCFE32 (-Remove@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAE_NQBVCBackTraceStorageUnit@2@@Z @ 0x24A4C4 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

unsigned __int8 __stdcall Win32FreeToPagedLookasideListImpl(
        int a1,
        struct NSInstrumentation::CBackTraceStorageUnit *ListEntry)
{
  int v2; // ebx
  unsigned __int16 v3; // ax
  unsigned __int8 result; // al
  NSInstrumentation::CPointerHashTable *v5; // ecx
  struct NSInstrumentation::CBackTraceStorageUnit *v6; // edi
  struct _SINGLE_LIST_ENTRY *v7; // edi
  unsigned __int16 v8; // ax
  struct NSInstrumentation::CBackTraceStorageUnit *v9; // [esp-4h] [ebp-Ch]

  v2 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3);
  if ( *(_BYTE *)a1 )
  {
    v5 = *(NSInstrumentation::CPointerHashTable **)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) + 48);
    v6 = ListEntry;
    ListEntry = 0;
    v7 = (struct _SINGLE_LIST_ENTRY *)((char *)v6 - 8);
    result = NSInstrumentation::CPointerHashTable::Remove(v5, v7, (void **)&ListEntry);
    if ( result )
    {
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        *(NSInstrumentation::CPrioritizedWriterLock **)(v2 + 56),
        ListEntry);
      v8 = *(_WORD *)(a1 + 12);
      ++*(_DWORD *)(a1 + 28);
      if ( v8 < *(_WORD *)(a1 + 16) )
      {
        return (unsigned __int8)InterlockedPushEntrySList((PSLIST_HEADER)(a1 + 8), v7);
      }
      else
      {
        ++*(_DWORD *)(a1 + 32);
        return (*(int (__stdcall **)(struct _SINGLE_LIST_ENTRY *))(a1 + 52))(v7);
      }
    }
  }
  else
  {
    v3 = *(_WORD *)(a1 + 12);
    ++*(_DWORD *)(a1 + 28);
    if ( v3 >= *(_WORD *)(a1 + 16) )
    {
      v9 = ListEntry;
      ++*(_DWORD *)(a1 + 32);
      return (*(int (__stdcall **)(struct NSInstrumentation::CBackTraceStorageUnit *))(a1 + 52))(v9);
    }
    else
    {
      return (unsigned __int8)InterlockedPushEntrySList((PSLIST_HEADER)(a1 + 8), (PSLIST_ENTRY)ListEntry);
    }
  }
  return result;
}
