/*
 * XREFs of RmpWnfPublishMessageToClientStateName @ 0x180021864
 * Callers:
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800027F8 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x1800042FC (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18001F100 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x1800234C4 (-HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x1800237A0 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?RmpActivityHostNotifySubscribers@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18002535C (-RmpActivityHostNotifySubscribers@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REVOKE_MESSAGE@@@Z @ 0x180063348 (-SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REV.c)
 * Callees:
 *     memcpy_0 @ 0x180046502 (memcpy_0.c)
 */

__int64 __fastcall RmpWnfPublishMessageToClientStateName(_QWORD *a1, const void *a2, unsigned int a3, __int64 a4)
{
  size_t v5; // rbp
  unsigned int v8; // ebx
  _QWORD *Heap; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v5 = a3;
  RtlAcquireSRWLockExclusive(a4 + 24);
  v8 = 0;
  if ( *(_BYTE *)(a4 + 32) || (int)RtlQueryWnfMetaNotification(&v13, 2LL, *a1, 0LL) >= 0 && !v13 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(v5 + 28));
    if ( Heap )
    {
      Heap[2] = *a1;
      memcpy_0((char *)Heap + 28, a2, v5);
      *((_DWORD *)Heap + 6) = v5;
      v11 = *(_QWORD **)(a4 + 8);
      if ( *v11 != a4 )
        __fastfail(3u);
      *Heap = a4;
      Heap[1] = v11;
      *v11 = Heap;
      *(_QWORD *)(a4 + 8) = Heap;
      if ( !*(_BYTE *)(a4 + 32) )
      {
        v12 = *(_QWORD *)(a4 + 16);
        *(_BYTE *)(a4 + 32) = 1;
        TpPostWork(v12);
      }
    }
    else
    {
      v8 = -1073741801;
    }
  }
  else
  {
    v8 = RtlPublishWnfStateData(*a1, 0LL, a2, (unsigned int)v5, 0LL);
  }
  RtlReleaseSRWLockExclusive(a4 + 24);
  return v8;
}
