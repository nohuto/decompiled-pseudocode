/*
 * XREFs of TpAllocIoCompletion @ 0x180075BA0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupAddMember @ 0x18000C490 (TppCleanupGroupAddMember.c)
 *     TppCleanupGroupMemberDestroy @ 0x180012088 (TppCleanupGroupMemberDestroy.c)
 *     TppGetCurrentThreadNumaNode @ 0x180012338 (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupMemberInitialize @ 0x18001241C (TppCleanupGroupMemberInitialize.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     TpBindFileToDirect @ 0x180075D98 (TpBindFileToDirect.c)
 *     TppRaiseInvalidParameter @ 0x18011212C (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocIoCompletion(
        PTP_IO *IoReturn,
        HANDLE File,
        PTP_IO_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  PTP_IO *v8; // r12
  unsigned int Flags; // edi
  PVOID Heap; // rax
  __int64 v11; // rbx
  NTSTATUS v12; // edi
  __int64 v13; // rcx
  int v14; // ecx
  char v15; // dl
  int v17; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  PVOID BaseAddress; // [rsp+70h] [rbp+8h]

  v8 = IoReturn;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( IoReturn
    && File
    && Callback
    && (Flags & 0xFFFFFFFC) == 0
    && (IoReturn = (PTP_IO *)NtCurrentPeb()->Ldr, !*((_BYTE *)IoReturn + 72)) )
  {
    *v8 = 0LL;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x40000) | 8, 0x120uLL);
    v11 = (__int64)Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      *((_QWORD *)Heap + 22) = retaddr;
      v12 = TppCleanupGroupMemberInitialize(
              (__int64)Heap,
              (__int64)Context,
              (__int64)CallbackEnviron,
              Flags,
              (__int64)&TppIopCleanupGroupMemberVFuncs);
      v17 = v12;
      if ( v12 >= 0 )
      {
        *(_QWORD *)(v11 + 80) = Callback;
        *(_QWORD *)(v11 + 272) = File;
        *(_DWORD *)(v11 + 280) = 0;
        v13 = *(_QWORD *)(v11 + 144);
        *(_QWORD *)(v11 + 256) = TppIopExecuteCallback;
        if ( v13 )
        {
          TppGetCurrentThreadNumaNode(v13, (_DWORD *)(v11 + 264), (_BYTE *)(v11 + 268));
          v14 = *(_DWORD *)(v11 + 264);
          v15 = *(_BYTE *)(v11 + 268);
        }
        else
        {
          *(_DWORD *)(v11 + 264) = 0;
          *(_BYTE *)(v11 + 268) = 0;
          v14 = 0;
          v15 = 0;
        }
        *(_QWORD *)(v11 + 232) = 0LL;
        *(_QWORD *)(v11 + 248) = v11 + 240;
        *(_QWORD *)(v11 + 240) = v11 + 240;
        *(_QWORD *)(v11 + 200) = TppDirectTaskVFuncs;
        *(_DWORD *)(v11 + 208) = v14;
        *(_BYTE *)(v11 + 212) = v15;
        v12 = TpBindFileToDirect(File, v11 + 200, *(_QWORD *)(v11 + 144));
        v17 = v12;
        if ( v12 >= 0 )
        {
          v12 = 0;
          v17 = 0;
          if ( CallbackEnviron )
            *(_QWORD *)(v11 + 32) = CallbackEnviron->FinalizationCallback;
          if ( *(_QWORD *)(v11 + 16) )
            TppCleanupGroupAddMember(v11);
        }
        if ( v12 < 0 )
          TppCleanupGroupMemberDestroy((_QWORD *)v11);
      }
    }
    else
    {
      v12 = -1073741801;
      v17 = -1073741801;
    }
    if ( v12 >= 0 )
      goto LABEL_22;
    if ( v11 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, BaseAddress);
      v11 = 0LL;
      v12 = v17;
    }
    if ( v12 >= 0 )
LABEL_22:
      *v8 = (PTP_IO)v11;
    return v12;
  }
  else
  {
    TppRaiseInvalidParameter(IoReturn, File, Callback);
    return -1073741811;
  }
}
