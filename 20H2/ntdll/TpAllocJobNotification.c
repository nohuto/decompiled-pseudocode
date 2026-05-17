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

__int64 __fastcall TpAllocJobNotification(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  _QWORD *p_Length; // r14
  void *Heap; // rax
  __int64 v11; // rbx
  int v12; // ebp
  __int64 v13; // rcx
  int v14; // ecx
  char v15; // dl
  __int64 v16; // r13
  _QWORD v18[2]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v5 = 0;
  p_Length = &Ldr->Length;
  if ( a5 )
    v5 = *(_DWORD *)(a5 + 56);
  if ( !Ldr || !a3 || !a2 || (v5 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  *p_Length = 0LL;
  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, 296LL);
  v11 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  memset(Heap, 0, 0x128uLL);
  *(_QWORD *)(v11 + 248) = retaddr;
  v12 = TppCleanupGroupMemberInitialize(v11 + 72, a4, a5, v5, (__int64)TppJobpCleanupGroupMemberVFuncs);
  if ( v12 < 0 )
  {
LABEL_21:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, v11);
    return (unsigned int)v12;
  }
  v13 = *(_QWORD *)(v11 + 216);
  *(_QWORD *)(v11 + 152) = a3;
  *(_QWORD *)(v11 + 272) = a2;
  *(_QWORD *)(v11 + 56) = TppJobpExecuteCallback;
  if ( v13 )
  {
    TppGetCurrentThreadNumaNode(v13, (_DWORD *)(v11 + 64), (_BYTE *)(v11 + 68));
    v14 = *(_DWORD *)(v11 + 64);
    v15 = *(_BYTE *)(v11 + 68);
  }
  else
  {
    *(_DWORD *)(v11 + 64) = 0;
    v14 = 0;
    *(_BYTE *)(v11 + 68) = 0;
    v15 = 0;
  }
  *(_QWORD *)(v11 + 32) = 0LL;
  *(_QWORD *)(v11 + 48) = v11 + 40;
  *(_QWORD *)(v11 + 40) = v11 + 40;
  *(_DWORD *)(v11 + 8) = v14;
  *(_BYTE *)(v11 + 12) = v15;
  *(_QWORD *)v11 = TppDirectTaskVFuncs;
  v16 = *(_QWORD *)(v11 + 216);
  v18[0] = v11;
  v18[1] = *(_QWORD *)(v16 + 64);
  v12 = ZwSetInformationJobObject(a2, 7LL, v18);
  if ( v12 < 0 )
  {
    TppCleanupGroupMemberDestroy((_QWORD *)(v11 + 72));
    goto LABEL_21;
  }
  TpAdjustBindingCount(v16, 1u);
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 72));
  *(_QWORD *)(v11 + 288) = 0LL;
  if ( a5 )
    *(_QWORD *)(v11 + 104) = *(_QWORD *)(a5 + 48);
  if ( *(_QWORD *)(v11 + 88) )
    TppCleanupGroupAddMember((_QWORD *)(v11 + 72));
  *p_Length = v11;
  return 0LL;
}
