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

NTSTATUS __cdecl TpAllocIoCompletion(
        PTP_IO *IoReturn,
        HANDLE File,
        PTP_IO_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  unsigned int Flags; // eax
  char *Heap; // esi
  NTSTATUS v7; // edi
  _RTL_SRWLOCK *v8; // ecx
  int v9; // ecx
  char v10; // dl
  SIZE_T v12; // [esp-4h] [ebp-40h]
  int v13; // [esp+18h] [ebp-24h]
  int v14; // [esp+20h] [ebp-1Ch]
  _UNKNOWN *retaddr; // [esp+40h] [ebp+4h]

  if ( CallbackEnviron )
  {
    Flags = CallbackEnviron->u.Flags;
    v13 = Flags;
  }
  else
  {
    Flags = 0;
    v13 = 0;
  }
  if ( !IoReturn || !File || !Callback || (Flags & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  *IoReturn = 0;
  LODWORD(v12) = 176;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x40000) | 8, v12);
  if ( Heap )
  {
    *((_DWORD *)Heap + 27) = retaddr;
    v7 = TppCleanupGroupMemberInitialize(
           (int)Heap,
           (int)Context,
           CallbackEnviron,
           v13,
           (int)&TppIopCleanupGroupMemberVFuncs);
    v14 = v7;
    if ( v7 >= 0 )
    {
      *((_DWORD *)Heap + 12) = Callback;
      *((_DWORD *)Heap + 41) = File;
      *((_DWORD *)Heap + 42) = 0;
      v8 = (_RTL_SRWLOCK *)*((_DWORD *)Heap + 23);
      *((_DWORD *)Heap + 38) = TppIopExecuteCallback;
      if ( v8 )
      {
        TppGetCurrentThreadNumaNode(v8, (_DWORD *)Heap + 39, (unsigned __int8 *)Heap + 160);
        v9 = *((_DWORD *)Heap + 39);
        v10 = Heap[160];
      }
      else
      {
        *((_DWORD *)Heap + 39) = 0;
        Heap[160] = 0;
        v9 = 0;
        v10 = 0;
      }
      *((_DWORD *)Heap + 35) = 0;
      *((_DWORD *)Heap + 37) = Heap + 144;
      *((_DWORD *)Heap + 36) = Heap + 144;
      *((_DWORD *)Heap + 30) = TppDirectTaskVFuncs;
      *((_DWORD *)Heap + 31) = v9;
      Heap[128] = v10;
      v7 = TpBindFileToDirect(File, *((_DWORD *)Heap + 23));
      v14 = v7;
      if ( v7 >= 0 )
      {
        v7 = 0;
        v14 = 0;
        if ( CallbackEnviron )
          *((_DWORD *)Heap + 4) = CallbackEnviron->FinalizationCallback;
        if ( *((_DWORD *)Heap + 2) )
          TppCleanupGroupAddMember(Heap);
      }
      if ( v7 < 0 )
        TppCleanupGroupMemberDestroy((int)Heap);
    }
  }
  else
  {
    v7 = -1073741801;
    v14 = -1073741801;
  }
  if ( v7 < 0 && Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, Heap);
    Heap = 0;
    v7 = v14;
  }
  if ( v7 >= 0 )
    *IoReturn = (PTP_IO)Heap;
  return v7;
}
