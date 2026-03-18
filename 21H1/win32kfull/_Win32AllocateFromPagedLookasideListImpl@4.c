/*
 * XREFs of _Win32AllocateFromPagedLookasideListImpl@4 @ 0x91FD2
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x249945 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBa.c)
 */

struct _SINGLE_LIST_ENTRY *__stdcall Win32AllocateFromPagedLookasideListImpl(int a1)
{
  struct _SINGLE_LIST_ENTRY *v1; // edi
  unsigned __int16 v3; // ax
  int v4; // [esp-4h] [ebp-64h]
  PVOID BackTrace[21]; // [esp+Ch] [ebp-54h] BYREF

  BackTrace[20] = *((PVOID *)&WPP_MAIN_CB.Queue.Wcb.1 + 3);
  ++*(_DWORD *)(a1 + 20);
  v1 = InterlockedPopEntrySList((PSLIST_HEADER)(a1 + 8));
  if ( v1
    || (v4 = *(_DWORD *)(a1 + 40),
        ++*(_DWORD *)(a1 + 24),
        (v1 = (struct _SINGLE_LIST_ENTRY *)(*(int (__stdcall **)(_DWORD, _DWORD, int))(a1 + 48))(
                                             *(_DWORD *)(a1 + 36),
                                             *(_DWORD *)(a1 + 44),
                                             v4)) != 0) )
  {
    if ( *(_BYTE *)a1 )
    {
      memset(BackTrace, 0, 0x50u);
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v1,
                              (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        v1 += 2;
      }
      else
      {
        v3 = *(_WORD *)(a1 + 12);
        ++*(_DWORD *)(a1 + 28);
        if ( v3 < *(_WORD *)(a1 + 16) )
        {
          InterlockedPushEntrySList((PSLIST_HEADER)(a1 + 8), v1);
        }
        else
        {
          ++*(_DWORD *)(a1 + 32);
          (*(void (__stdcall **)(struct _SINGLE_LIST_ENTRY *))(a1 + 52))(v1);
        }
        return 0;
      }
    }
  }
  return v1;
}
