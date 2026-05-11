/*
 * XREFs of USBType1BuildIsochUrbRequest @ 0x1C0005634
 * Callers:
 *     USBType1Build1MsecIsocRequest @ 0x1C0005D90 (USBType1Build1MsecIsocRequest.c)
 *     USBType1ProcessStreamPointer @ 0x1C0005F68 (USBType1ProcessStreamPointer.c)
 *     USBType1LockDelay @ 0x1C0032020 (USBType1LockDelay.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C0004594 (WPP_RECORDER_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0014000 (memmove.c)
 *     memset @ 0x1C00142C0 (memset.c)
 */

__int64 __fastcall USBType1BuildIsochUrbRequest(
        PKSSTREAM_POINTER StreamPointer,
        __int64 (__fastcall *a2)(__int64 a1, __int64 a2, __int64 *a3))
{
  __int64 (__fastcall *v2)(__int64, __int64, __int64 *); // rdi
  _SLIST_ENTRY *p_ListEntry; // rsi
  char *Context; // r15
  PKSSTREAM_POINTER v5; // r14
  bool v6; // dl
  bool v7; // r8
  __int64 v8; // r13
  ULONG Remaining; // eax
  int v10; // ecx
  unsigned int v11; // r12d
  struct _SLIST_ENTRY *v12; // rbx
  unsigned int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(__int64, __int64, __int64); // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  struct _SLIST_ENTRY **v19; // rax
  __int64 v20; // rdi
  ULONG v21; // esi
  KSPIN_LOCK *v22; // rbx
  __int64 v23; // r15
  unsigned int v24; // edi
  ULONG v25; // r14d
  int v26; // r8d
  unsigned int v27; // ecx
  KIRQL v28; // dl
  PSLIST_ENTRY v29; // rbx
  __int64 v30; // rcx
  struct _KSSTREAM_POINTER *v31; // rdi
  KIRQL v32; // al
  struct _KSPIN *v33; // rdx
  PKSPIN *p_Pin; // rdi
  PKSPIN v35; // r8
  KIRQL v36; // al
  PKSPIN v37; // rdi
  void *v38; // rcx
  bool v39; // zf
  unsigned int v40; // r12d
  struct _SLIST_ENTRY *Next; // rax
  __int64 v42; // r12
  IRP *v43; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  struct _IO_STACK_LOCATION *v48; // rax
  KIRQL v49; // al
  _SLIST_ENTRY **v50; // rdx
  KIRQL v51; // al
  struct _SLIST_ENTRY *v52; // rax
  __int64 v53; // rbx
  KIRQL v54; // al
  struct _KSPIN *v55; // rcx
  KIRQL v56; // di
  PKSGATE i; // rax
  int Timeout; // [rsp+20h] [rbp-59h]
  signed __int64 Size; // [rsp+40h] [rbp-39h]
  _SLIST_ENTRY ListEntry; // [rsp+48h] [rbp-31h] BYREF
  ULONG InUsed; // [rsp+58h] [rbp-21h]
  unsigned int v63; // [rsp+5Ch] [rbp-1Dh]
  PSLIST_ENTRY v64; // [rsp+60h] [rbp-19h]
  __int64 v65; // [rsp+68h] [rbp-11h]
  char *v66; // [rsp+70h] [rbp-9h]
  __int64 v67; // [rsp+78h] [rbp-1h]
  PKSPIN Pin; // [rsp+80h] [rbp+7h]
  PKSSTREAM_POINTER StreamPointerb; // [rsp+E0h] [rbp+67h]
  bool v72; // [rsp+F0h] [rbp+77h]
  bool v73; // [rsp+F8h] [rbp+7Fh]

  Pin = StreamPointer->Pin;
  v72 = 0;
  v2 = a2;
  p_ListEntry = &ListEntry;
  Context = (char *)Pin->Context;
  v5 = StreamPointer;
  v66 = Context;
  v6 = 0;
  v7 = 0;
  v73 = 0;
  v8 = *((_QWORD *)Context + 19);
  v67 = *((_QWORD *)Context + 2);
  Remaining = StreamPointer->OffsetIn.Remaining;
  v10 = 0;
  Size = Remaining;
  v11 = *(_DWORD *)(v8 + 8)
      * (*(_DWORD *)(v8 + 116) + (((*(_DWORD *)(v8 + 120) + *(_DWORD *)(v8 + 112)) & 0xFFFFC000) >= 0xFA0000));
  *((_QWORD *)&ListEntry.Next + 1) = &ListEntry;
  ListEntry.Next = &ListEntry;
  if ( Remaining < v11 )
    goto LABEL_34;
  while ( v10 >= 0 && !v6 )
  {
    if ( v2 == USBType1MsCompleteCallback )
    {
      v12 = (struct _SLIST_ENTRY *)v5->Context;
      v13 = 1;
      v64 = (PSLIST_ENTRY)v5->Context;
    }
    else
    {
      v14 = *(_QWORD *)(v8 + 128);
      ++*(_DWORD *)(v14 + 20);
      v64 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v14);
      v12 = v64;
      if ( !v64 )
      {
        v15 = *(unsigned int *)(v14 + 44);
        v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v14 + 48);
        v17 = *(unsigned int *)(v14 + 40);
        v18 = *(unsigned int *)(v14 + 36);
        ++*(_DWORD *)(v14 + 24);
        v12 = (struct _SLIST_ENTRY *)v16(v18, v15, v17);
        v64 = v12;
      }
      Remaining = Size;
      v2 = a2;
      v13 = 32;
    }
    v63 = v13;
    if ( !v12 )
      goto LABEL_28;
    v19 = (struct _SLIST_ENTRY **)*((_QWORD *)&ListEntry.Next + 1);
    v20 = *((_QWORD *)&v12[1].Next + 1);
    v65 = v20;
    if ( **((_SLIST_ENTRY ***)&ListEntry.Next + 1) != &ListEntry )
      goto LABEL_72;
    *((_QWORD *)&v12->Next + 1) = *((_QWORD *)&ListEntry.Next + 1);
    v12->Next = &ListEntry;
    *v19 = v12;
    *((_QWORD *)&ListEntry.Next + 1) = v12;
    memset((void *)v20, 0, 12LL * v13 + 152);
    *(_WORD *)(v20 + 2) = 10;
    *(_QWORD *)(v20 + 24) = *(_QWORD *)(v8 + 64);
    *(_QWORD *)(v20 + 40) = v5->OffsetIn.Data;
    if ( *(_BYTE *)(v8 + 96) )
      *(_DWORD *)(v20 + 128) = *(_DWORD *)(v8 + 904);
    else
      *(_DWORD *)(v20 + 32) = 4;
    v21 = Size;
    v22 = (KSPIN_LOCK *)(Context + 112);
    v23 = v65;
    v24 = 0;
    v25 = 0;
    do
    {
      if ( v21 < v11 || v73 )
        break;
      v21 -= v11;
      *(_DWORD *)(v23 + 12LL * v24 + 140) = v25;
      v25 += v11;
      v26 = *(_DWORD *)(v8 + 120);
      v27 = (v26 + *(_DWORD *)(v8 + 112)) % 0xFA0000u;
      *(_DWORD *)(v8 + 112) = v27;
      v11 = *(_DWORD *)(v8 + 8) * (*(_DWORD *)(v8 + 116) + (((v26 + v27) & 0xFFFFC000) >= 0xFA0000));
      v28 = KeAcquireSpinLockRaiseToDpc(v22);
      if ( *(_BYTE *)(v8 + 96) )
      {
        v39 = (*(_DWORD *)(v8 + 908))-- == 1;
        v73 = v39;
        if ( !*(_DWORD *)(v8 + 908) )
          *(_DWORD *)(v8 + 908) = *(_DWORD *)(v8 + 900);
        ++*(_DWORD *)(v8 + 904);
      }
      KeReleaseSpinLock(v22, v28);
      ++v24;
    }
    while ( v24 < v63 );
    v29 = v64;
    *(_DWORD *)(v23 + 132) = v24;
    *(_DWORD *)(v23 + 36) = v25;
    InUsed = v25;
    LODWORD(Size) = v21;
    *(_WORD *)v23 = 12 * v24 + 152;
    v2 = a2;
    Context = v66;
    HIDWORD(v29[2].Next) = v25;
    v5 = StreamPointer;
    if ( a2 == USBType1MsCompleteCallback || (char *)a2 == (char *)USBType1LockDelayCompleteCallback )
    {
      v30 = InUsed;
      Remaining = v21;
      *((_QWORD *)&v29[2].Next + 1) = StreamPointer;
      StreamPointer->OffsetIn.Data += v30;
      StreamPointer->OffsetIn.Remaining -= v30;
LABEL_28:
      v7 = v72;
LABEL_29:
      v10 = HIDWORD(Size);
      goto LABEL_30;
    }
    *((_QWORD *)&v29[2].Next + 1) = 0LL;
    HIDWORD(Size) = KsStreamPointerClone(StreamPointer, 0LL, 0, (PKSSTREAM_POINTER *)&v29[2].Next + 1);
    v10 = HIDWORD(Size);
    if ( Size >= 0 )
    {
      v39 = KsStreamPointerAdvanceOffsets(StreamPointer, InUsed, 0, 0) == 0;
      Remaining = v21;
      v7 = v39;
      v72 = v39;
      goto LABEL_29;
    }
    v7 = v72;
    Remaining = v21;
LABEL_30:
    v6 = v73;
    if ( Remaining < v11 )
      goto LABEL_33;
  }
  v7 = v72;
LABEL_33:
  p_ListEntry = ListEntry.Next;
LABEL_34:
  if ( (char *)v2 == (char *)USBType1LockDelayCompleteCallback )
    goto LABEL_48;
  if ( Remaining )
  {
    if ( !v6 )
    {
      v31 = (struct _KSSTREAM_POINTER *)*((_QWORD *)Context + 19);
      StreamPointerb = v31;
      if ( a2 == USBType1MsCompleteCallback && Remaining == v5->OffsetIn.Count )
      {
        v31[1].OffsetOut.Remaining = v11 - Remaining;
        v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
        v33 = (struct _KSPIN *)v5->Context;
        p_Pin = &v31[2].Pin;
        v35 = *p_Pin;
        if ( (*p_Pin)->Bag != p_Pin )
LABEL_72:
          __fastfail(3u);
        v33->Descriptor = (const KSPIN_DESCRIPTOR_EX *)v35;
        v33->Bag = p_Pin;
        v35->Bag = v33;
        *p_Pin = v33;
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v32);
        ExFreePool(v5);
      }
      else
      {
        KeWaitForSingleObject(&v31[2].Offset, Executive, 0, 0, 0LL);
        v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
        v37 = v31[2].Pin;
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v36);
        v38 = (void *)*(&v37->ConnectionInterface.Alignment + 1);
        *((_DWORD *)&v37->ConnectionIsExternal + 1) = Size;
        memmove(v38, v5->OffsetIn.Data, (unsigned int)Size);
        StreamPointerb[1].OffsetOut.Remaining = v11 - Size;
        if ( a2 != USBType1MsCompleteCallback )
          KsStreamPointerAdvanceOffsetsAndUnlock(v5, Size, 0, 0);
      }
LABEL_47:
      p_ListEntry = ListEntry.Next;
      goto LABEL_48;
    }
    v39 = v2 == USBType1MsCompleteCallback;
  }
  else
  {
    v39 = !v7;
  }
  if ( !v39 )
  {
    KsStreamPointerUnlock(v5, 0);
    goto LABEL_47;
  }
LABEL_48:
  v40 = HIDWORD(Size);
  if ( p_ListEntry != &ListEntry )
  {
    do
    {
      if ( !*((_QWORD *)&p_ListEntry[2].Next + 1) )
        break;
      if ( *(&p_ListEntry->Next + 1) != &ListEntry )
        goto LABEL_72;
      Next = p_ListEntry->Next;
      if ( *(&p_ListEntry->Next->Next + 1) != p_ListEntry )
        goto LABEL_72;
      v42 = v67;
      ListEntry.Next = p_ListEntry->Next;
      *((_QWORD *)&Next->Next + 1) = &ListEntry;
      v43 = (IRP *)p_ListEntry[1].Next;
      CurrentStackLocation = v43->Tail.Overlay.CurrentStackLocation;
      IoInitializeIrp(v43, 72 * *(char *)(*(_QWORD *)(v42 + 40) + 76LL) + 208, *(_BYTE *)(*(_QWORD *)(v42 + 40) + 76LL));
      CurrentStackLocation[-1].MajorFunction = 15;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = *((_QWORD *)&p_ListEntry[1].Next + 1);
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
      v48 = v43->Tail.Overlay.CurrentStackLocation;
      v48[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)a2;
      v48[-1].Context = p_ListEntry;
      v48[-1].Control = -32;
      _InterlockedIncrement((volatile signed __int32 *)Context + 14);
      if ( (char *)a2 != (char *)USBType1LockDelayCompleteCallback )
      {
        v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
        *((_QWORD *)Context + 10) += HIDWORD(p_ListEntry[2].Next);
        v50 = (_SLIST_ENTRY **)*((_QWORD *)Context + 9);
        if ( *v50 != (_SLIST_ENTRY *)(Context + 64) )
          goto LABEL_72;
        p_ListEntry->Next = (struct _SLIST_ENTRY *)(Context + 64);
        *((_QWORD *)&p_ListEntry->Next + 1) = v50;
        *v50 = p_ListEntry;
        *((_QWORD *)Context + 9) = p_ListEntry;
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v49);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qqd((__int64)WPP_GLOBAL_Control->DeviceExtension, v45, v46, v47, Timeout);
      if ( IofCallDriver(*(PDEVICE_OBJECT *)(v42 + 40), (PIRP)p_ListEntry[1].Next) >= 0
        && (char *)a2 != (char *)USBType1LockDelayCompleteCallback )
      {
        v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
        Context[45] = 1;
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v51);
      }
      v40 = 0;
      p_ListEntry = ListEntry.Next;
    }
    while ( ListEntry.Next != &ListEntry );
    while ( p_ListEntry != &ListEntry )
    {
      if ( *(&p_ListEntry->Next + 1) != &ListEntry )
        goto LABEL_72;
      v52 = p_ListEntry->Next;
      if ( *(&p_ListEntry->Next->Next + 1) != p_ListEntry )
        goto LABEL_72;
      ListEntry.Next = p_ListEntry->Next;
      *((_QWORD *)&v52->Next + 1) = &ListEntry;
      v53 = *(_QWORD *)(v8 + 128);
      ++*(_DWORD *)(v53 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v53) < *(_WORD *)(v53 + 16) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v53, p_ListEntry);
      }
      else
      {
        ++*(_DWORD *)(v53 + 32);
        (*(void (__fastcall **)(_SLIST_ENTRY *))(v53 + 56))(p_ListEntry);
      }
      p_ListEntry = ListEntry.Next;
    }
  }
  if ( v73 )
  {
    v54 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
    v55 = Pin;
    v56 = v54;
    Context[44] = 1;
    for ( i = KsPinGetAndGate(v55); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
      ;
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v56);
  }
  return v40;
}
