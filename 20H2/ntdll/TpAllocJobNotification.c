/*
 * XREFs of TpAllocJobNotification @ 0x18007F510
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupAddMember @ 0x18000C490 (TppCleanupGroupAddMember.c)
 *     TpAdjustBindingCount @ 0x180010A00 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberDestroy @ 0x180012088 (TppCleanupGroupMemberDestroy.c)
 *     TppGetCurrentThreadNumaNode @ 0x180012338 (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupMemberInitialize @ 0x18001241C (TppCleanupGroupMemberInitialize.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     ZwSetInformationJobObject @ 0x1800A0380 (ZwSetInformationJobObject.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     TppRaiseInvalidParameter @ 0x18011263C (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocJobNotification(_PEB_LDR_DATA *Ldr, void *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  _PEB_LDR_DATA *v9; // r14
  volatile signed __int32 *Heap; // rax
  volatile signed __int32 *v11; // rbx
  int v12; // ebp
  __int64 v13; // rcx
  int v14; // ecx
  char v15; // dl
  __int64 v16; // r13
  _QWORD JobObjectInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v5 = 0;
  v9 = Ldr;
  if ( a5 )
    v5 = *(_DWORD *)(a5 + 56);
  if ( !Ldr || !a3 || !a2 || (v5 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3);
    return 3221225485LL;
  }
  *(_QWORD *)&v9->Length = 0LL;
  Heap = (volatile signed __int32 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, 0x128uLL);
  v11 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memset((void *)Heap, 0, 0x128uLL);
  *((_QWORD *)v11 + 31) = retaddr;
  v12 = TppCleanupGroupMemberInitialize((__int64)(v11 + 18), a4, a5, v5, (__int64)TppJobpCleanupGroupMemberVFuncs);
  if ( v12 < 0 )
  {
LABEL_21:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, (PVOID)v11);
    return (unsigned int)v12;
  }
  v13 = *((_QWORD *)v11 + 27);
  *((_QWORD *)v11 + 19) = a3;
  *((_QWORD *)v11 + 34) = a2;
  *((_QWORD *)v11 + 7) = TppJobpExecuteCallback;
  if ( v13 )
  {
    TppGetCurrentThreadNumaNode(v13, (_DWORD *)v11 + 16, (_BYTE *)v11 + 68);
    v14 = *((_DWORD *)v11 + 16);
    v15 = *((_BYTE *)v11 + 68);
  }
  else
  {
    *((_DWORD *)v11 + 16) = 0;
    v14 = 0;
    *((_BYTE *)v11 + 68) = 0;
    v15 = 0;
  }
  *((_QWORD *)v11 + 4) = 0LL;
  *((_QWORD *)v11 + 6) = v11 + 10;
  *((_QWORD *)v11 + 5) = v11 + 10;
  *((_DWORD *)v11 + 2) = v14;
  *((_BYTE *)v11 + 12) = v15;
  *(_QWORD *)v11 = TppDirectTaskVFuncs;
  v16 = *((_QWORD *)v11 + 27);
  JobObjectInformation[0] = v11;
  JobObjectInformation[1] = *(_QWORD *)(v16 + 64);
  v12 = ZwSetInformationJobObject(a2, JobObjectAssociateCompletionPortInformation, JobObjectInformation, 0x10u);
  if ( v12 < 0 )
  {
    TppCleanupGroupMemberDestroy((_QWORD *)v11 + 9);
    goto LABEL_21;
  }
  TpAdjustBindingCount(v16, 1u);
  _InterlockedIncrement(v11 + 18);
  *((_QWORD *)v11 + 36) = 0LL;
  if ( a5 )
    *((_QWORD *)v11 + 13) = *(_QWORD *)(a5 + 48);
  if ( *((_QWORD *)v11 + 11) )
    TppCleanupGroupAddMember((__int64)(v11 + 18));
  *(_QWORD *)&v9->Length = v11;
  return 0LL;
}
