/*
 * XREFs of ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXPAX@Z @ 0x249AF2
 * Callers:
 *     _Win32UAFMAllocateFromPagedLookasideListImpl@8 @ 0x1836B0 (_Win32UAFMAllocateFromPagedLookasideListImpl@8.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x249945 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBa.c)
 */

struct _SINGLE_LIST_ENTRY *__thiscall NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        union _SLIST_HEADER *a2)
{
  struct _SINGLE_LIST_ENTRY *v2; // edi
  WORD Depth; // ax
  struct _SINGLE_LIST_ENTRY *Next; // [esp-4h] [ebp-64h]
  PVOID BackTrace[20]; // [esp+Ch] [ebp-54h] BYREF
  struct NSInstrumentation::CPointerHashTable **v7; // [esp+5Ch] [ebp-4h]

  v7 = (struct NSInstrumentation::CPointerHashTable **)*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3);
  ++*(_DWORD *)&a2[2].Depth;
  v2 = InterlockedPopEntrySList(a2 + 1);
  if ( !v2 )
  {
    Next = a2[5].Next.Next;
    ++a2[3].Next.Next;
    v2 = (struct _SINGLE_LIST_ENTRY *)((int (__stdcall *)(_DWORD, _DWORD, struct _SINGLE_LIST_ENTRY *))a2[6].Next.Next)(
                                        *(_DWORD *)&a2[4].Depth,
                                        *(_DWORD *)&a2[5].Depth,
                                        Next);
    if ( !v2 )
      return 0;
  }
  if ( !LOBYTE(a2->Alignment) )
    return v2;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0);
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          v7,
          v2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
    Depth = a2[1].Depth;
    ++*(_DWORD *)&a2[3].Depth;
    if ( Depth < LOWORD(a2[2].Alignment) )
    {
      InterlockedPushEntrySList(a2 + 1, v2);
    }
    else
    {
      ++a2[4].Next.Next;
      (*(void (__stdcall **)(struct _SINGLE_LIST_ENTRY *))&a2[6].Depth)(v2);
    }
    return 0;
  }
  return v2 + 2;
}
