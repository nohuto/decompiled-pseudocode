/*
 * XREFs of NtQueryValueKey @ 0x140695B10
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140702430 (ExpWatchProductTypeWork.c)
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     ExpWatchProductTypeInitialization @ 0x140A43A08 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140A6F4C4 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140A89860 (InitSafeBoot.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140297D80 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14029BBE0 (ExIsResourceAcquiredSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x140328270 (EtwGetKernelTraceTimestamp.c)
 *     _tlgWriteAgg @ 0x1403735C4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmQueryValueKey @ 0x1405EB260 (CmQueryValueKey.c)
 *     CmpCallCallBacksEx @ 0x1405F1510 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     CmpIsBufferGloballyVisible @ 0x1406495A4 (CmpIsBufferGloballyVisible.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140694210 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQueryValueKey(
        HANDLE Handle,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        size_t Size,
        unsigned __int64 a6)
{
  unsigned int v10; // r13d
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v12; // bl
  KPROCESSOR_MODE v13; // r12
  int v14; // ebx
  __int64 v15; // rcx
  _DMA_OPERATIONS *DmaOperations; // r14
  int v17; // eax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  SIZE_T Length; // rbx
  const void *Buffer; // rdi
  struct _KTHREAD *v22; // rax
  ULONG IsResourceAcquiredSharedLite; // eax
  _DWORD *v24; // r14
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  unsigned int v29; // eax
  struct _KTHREAD *v30; // rcx
  bool v31; // zf
  PSLIST_ENTRY v33; // rdi
  PVOID TransientPoolWithQuotaTag; // rax
  void *v35; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned int v37; // edx
  char v38; // cl
  int ValueKey; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  unsigned int v41; // [rsp+40h] [rbp-2B8h]
  char v42; // [rsp+44h] [rbp-2B4h]
  char v43; // [rsp+45h] [rbp-2B3h]
  char v44; // [rsp+46h] [rbp-2B2h] BYREF
  BOOLEAN v45; // [rsp+47h] [rbp-2B1h]
  unsigned int v46; // [rsp+48h] [rbp-2B0h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-2A8h] BYREF
  _DMA_OPERATIONS *v48; // [rsp+60h] [rbp-298h]
  size_t v49; // [rsp+68h] [rbp-290h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp-288h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-280h]
  unsigned int v52; // [rsp+80h] [rbp-278h]
  unsigned __int64 v53; // [rsp+88h] [rbp-270h]
  _DMA_OPERATIONS *v54; // [rsp+90h] [rbp-268h]
  PADAPTER_OBJECT v55; // [rsp+98h] [rbp-260h] BYREF
  _QWORD v56[2]; // [rsp+A0h] [rbp-258h] BYREF
  PVOID v57; // [rsp+B0h] [rbp-248h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-240h] BYREF
  PVOID v59; // [rsp+C0h] [rbp-238h]
  __int64 v60; // [rsp+C8h] [rbp-230h] BYREF
  __int64 v61; // [rsp+D0h] [rbp-228h] BYREF
  UNICODE_STRING v62; // [rsp+E0h] [rbp-218h]
  PADAPTER_OBJECT v63; // [rsp+F0h] [rbp-208h] BYREF
  int v64; // [rsp+F8h] [rbp-200h]
  int v65; // [rsp+FCh] [rbp-1FCh]
  _QWORD *v66; // [rsp+100h] [rbp-1F8h]
  int v67; // [rsp+108h] [rbp-1F0h]
  __int128 v68; // [rsp+10Ch] [rbp-1ECh]
  __int64 v69; // [rsp+11Ch] [rbp-1DCh]
  int v70; // [rsp+124h] [rbp-1D4h]
  __int64 v71; // [rsp+128h] [rbp-1D0h]
  UNICODE_STRING v72; // [rsp+130h] [rbp-1C8h] BYREF
  UNICODE_STRING v73; // [rsp+140h] [rbp-1B8h] BYREF
  _QWORD v74[10]; // [rsp+150h] [rbp-1A8h] BYREF
  void *Src[2]; // [rsp+1A0h] [rbp-158h]
  char v76; // [rsp+1B0h] [rbp-148h]
  _BYTE v77[79]; // [rsp+1B1h] [rbp-147h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78[2]; // [rsp+200h] [rbp-F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+220h] [rbp-D8h] BYREF
  __int64 *v80; // [rsp+240h] [rbp-B8h]
  __int64 v81; // [rsp+248h] [rbp-B0h]
  char *v82; // [rsp+250h] [rbp-A8h]
  __int64 v83; // [rsp+258h] [rbp-A0h]
  __int64 *v84; // [rsp+260h] [rbp-98h]
  __int64 v85; // [rsp+268h] [rbp-90h]
  _BYTE v86[64]; // [rsp+270h] [rbp-88h] BYREF

  v46 = a3;
  v10 = Size;
  v52 = a3;
  v53 = a6;
  DestinationString = 0LL;
  memset(v77, 0, 0x47uLL);
  memset(v78, 0, sizeof(v78));
  v48 = 0LL;
  v54 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v78, 0x20000u);
  v42 = 0;
  v43 = 0;
  DmaAdapter = 0LL;
  LODWORD(v49) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Privileges = 0LL;
  memset(v74, 0, 0x48uLL);
  *(_OWORD *)Src = 0LL;
  v76 = 0;
  v56[1] = v56;
  v56[0] = v56;
  v55 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v12 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v45 = v12;
  if ( !v12 )
  {
    v14 = -1073741431;
    v41 = -1073741431;
    goto LABEL_119;
  }
  if ( a3 > 4 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && Handle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v57 = 0LL,
          ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v57, 0LL) >= 0) )
    {
      DmaOperations = (_DMA_OPERATIONS *)*((_QWORD *)v57 + 1);
      HalPutDmaAdapter((PADAPTER_OBJECT)v57);
    }
    else
    {
      DmaOperations = 0LL;
    }
    v14 = -1073741811;
    v41 = -1073741811;
    goto LABEL_79;
  }
  v13 = KeGetCurrentThread()->PreviousMode;
  v71 = 0LL;
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)CmKeyObjectType, v13, &Object, 0LL);
  v15 = (__int64)Object;
  v59 = Object;
  if ( v14 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      DmaAdapter = (PADAPTER_OBJECT)Object;
      v15 = 0LL;
      v59 = 0LL;
      v14 = 0;
    }
    else
    {
      v14 = -1073741816;
    }
  }
  if ( v15 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v15);
  v41 = v14;
  if ( v14 < 0 )
  {
LABEL_119:
    DmaOperations = 0LL;
    goto LABEL_79;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && (v15 = (__int64)DmaAdapter) != 0 )
  {
    DmaOperations = DmaAdapter->DmaOperations;
    v48 = DmaOperations;
    v54 = DmaOperations;
  }
  else
  {
    DmaOperations = 0LL;
  }
  if ( v13 == 1 )
  {
    v62 = 0LL;
    if ( a2 >= 0x7FFFFFFF0000LL )
      a2 = 0x7FFFFFFF0000LL;
    v17 = *(_DWORD *)a2;
    *(_DWORD *)&v62.Length = v17;
    v18 = *(_QWORD *)(a2 + 8);
    v62.Buffer = (wchar_t *)v18;
    DestinationString = v62;
    if ( (_WORD)v17 )
    {
      if ( (v18 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = v18 + (unsigned __int16)v17;
      if ( v19 > 0x7FFFFFFF0000LL || v19 < v18 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( (_DWORD)Size )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + (unsigned int)Size > 0x7FFFFFFF0000LL || a4 + (unsigned int)Size < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v15 = v53;
    if ( v53 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
  }
  else
  {
    DestinationString = *(UNICODE_STRING *)a2;
  }
  Length = DestinationString.Length;
  DestinationString.MaximumLength = DestinationString.Length;
  Buffer = DestinationString.Buffer;
  if ( v13
    || *((_QWORD *)&CmpRegistryProcess + 1) && !CmpIsBufferGloballyVisible((unsigned __int64)DestinationString.Buffer) )
  {
    if ( (_WORD)Length )
    {
      if ( (unsigned int)Length > 0x40 )
      {
        Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v15, Length, 0x6E764D43u);
        if ( !Privileges )
        {
          v14 = -1073741670;
          v41 = -1073741670;
          goto LABEL_79;
        }
        Buffer = DestinationString.Buffer;
        LOWORD(Length) = DestinationString.Length;
      }
      else
      {
        Privileges = (PPRIVILEGE_SET)v86;
      }
      if ( Privileges )
      {
        memmove(Privileges, Buffer, (unsigned __int16)Length);
        LOWORD(Length) = DestinationString.Length;
      }
    }
    else
    {
      Privileges = 0LL;
    }
    Buffer = Privileges;
    DestinationString.Buffer = (wchar_t *)Privileges;
  }
  if ( (DestinationString.Length & 1) != 0 )
  {
    v14 = -1073741811;
    v41 = -1073741811;
    goto LABEL_79;
  }
  while ( (_WORD)Length && !*((_WORD *)Buffer + ((unsigned __int64)(unsigned __int16)Length >> 1) - 1) )
  {
    LOWORD(Length) = Length - 2;
    DestinationString.Length = Length;
  }
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  v43 = 1;
  if ( !CmpCallBackCount )
  {
    v24 = (_DWORD *)v53;
LABEL_58:
    v14 = CmKeyBodyRemapToVirtualForEnum((__int64 *)&DmaAdapter, v13, 1u, (__int64 *)&v55);
    v41 = v14;
    if ( v14 < 0 )
      goto LABEL_72;
    Src[0] = (void *)a4;
    if ( (_DWORD)Size )
    {
      if ( *((_QWORD *)&CmpRegistryProcess + 1) && (v13 || !CmpIsBufferGloballyVisible(a4)) )
      {
        if ( (unsigned int)dword_140C02130 > 5 && (byte_140C02140 & 4) != 0 && (qword_140C02148 & 4) == qword_140C02148 )
        {
          v60 = 1LL;
          v80 = &v60;
          v81 = 8LL;
          v44 = 3;
          v82 = &v44;
          v83 = 1LL;
          v37 = Size;
          if ( (((_DWORD)Size - 1) & (unsigned int)Size) != 0 )
          {
            v38 = -1;
            do
            {
              ++v38;
              v37 >>= 1;
            }
            while ( v37 );
            v37 = 1 << (v38 + 1);
          }
          v61 = v37;
          v84 = &v61;
          v85 = 8LL;
          tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&byte_14002248B, v27, 5u, &v79);
        }
        if ( (unsigned int)Size > 0x40uLL )
        {
          if ( (unsigned int)Size > 0x1000uLL )
            goto LABEL_115;
          ++dword_140CDB554;
          v33 = RtlpInterlockedPopEntrySList(&CmpBounceBufferLookaside);
          if ( !v33 )
          {
            ++dword_140CDB558;
            v33 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, union _SLIST_HEADER *))qword_140CDB570)(
                                  (unsigned int)dword_140CDB564,
                                  (unsigned int)dword_140CDB56C,
                                  (unsigned int)dword_140CDB568,
                                  &CmpBounceBufferLookaside);
          }
          if ( v33 )
          {
            memset(v33, 0, (unsigned int)Size);
            v76 |= 1u;
            Src[1] = v33;
          }
          else
          {
LABEL_115:
            TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(v26, (unsigned int)Size, 0x42424D43u);
            v35 = TransientPoolWithQuotaTag;
            if ( !TransientPoolWithQuotaTag )
            {
              v14 = -1073741670;
              goto LABEL_67;
            }
            memset(TransientPoolWithQuotaTag, 0, (unsigned int)Size);
            Src[1] = v35;
          }
        }
        else
        {
          memset(v77, 0, (unsigned int)Size);
          Src[1] = v77;
        }
      }
      else
      {
        Src[1] = (void *)a4;
      }
    }
    else
    {
      Src[1] = 0LL;
    }
    v14 = 0;
LABEL_67:
    v41 = v14;
    if ( v14 >= 0 )
    {
      if ( !v55 )
        goto LABEL_69;
      v72 = DestinationString;
      ValueKey = CmQueryValueKey((__int64)v55, &v72.Length, v46, (size_t)Src[1], Size, (__int64)&v49);
      v14 = ValueKey;
      v41 = ValueKey;
      if ( ValueKey >= 0 || ValueKey == -1073741789 || ValueKey == -2147483643 )
      {
LABEL_73:
        v29 = v49;
        *v24 = v49;
        if ( v14 != -1073741789 )
        {
          if ( v29 < (unsigned int)Size )
            v10 = v29;
          if ( Src[0] != Src[1] )
            memmove(Src[0], Src[1], v10);
        }
        DmaOperations = v48;
        goto LABEL_79;
      }
      if ( ValueKey == -1073741772 )
      {
LABEL_69:
        v73 = DestinationString;
        v28 = CmQueryValueKey((__int64)DmaAdapter, &v73.Length, v46, (size_t)Src[1], Size, (__int64)&v49);
        v14 = v28;
        v41 = v28;
        if ( v28 < 0 && v28 != -2147483643 && v28 != -1073741789 )
          goto LABEL_72;
        goto LABEL_73;
      }
    }
LABEL_72:
    DmaOperations = v48;
    goto LABEL_79;
  }
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock);
  v24 = (_DWORD *)v53;
  if ( IsResourceAcquiredSharedLite )
    goto LABEL_58;
  v74[0] = DmaAdapter;
  v74[1] = &DestinationString;
  LODWORD(v74[2]) = v46;
  v74[3] = a4;
  LODWORD(v74[4]) = Size;
  v74[5] = v53;
  v25 = CmpCallCallBacksEx(8u, (__int64)v74, 0LL, 1, 0x17u, (__int64)DmaAdapter, (__int64)v56);
  v14 = v25;
  v41 = v25;
  if ( v25 >= 0 )
  {
    v42 = 1;
    goto LABEL_58;
  }
  DmaOperations = v48;
  if ( v25 == -1073740541 )
  {
    v14 = 0;
    v41 = 0;
  }
LABEL_79:
  if ( v55 )
    HalPutDmaAdapter(v55);
  if ( v42 )
  {
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v56[0] != v56 )
    {
      v65 = 0;
      v68 = 0LL;
      v69 = 0LL;
      v70 = 0;
      v63 = DmaAdapter;
      v64 = v14;
      v67 = v14;
      v66 = v74;
      CmpCallCallBacksEx(0x17u, (__int64)&v63, 0LL, 0, 0x17u, (__int64)DmaAdapter, (__int64)v56);
      v14 = v67;
    }
    v41 = v14;
  }
  if ( v43 )
  {
    v30 = KeGetCurrentThread();
    v31 = v30->KernelApcDisable++ == -1;
    if ( v31
      && ($C774EFD68449142D8271B1EC1EB7FB26 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
      && !v30->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v30);
    }
    v14 = v41;
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v77 )
  {
    if ( (v76 & 1) != 0 )
    {
      ++dword_140CDB55C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_140CDB550 )
      {
        ++dword_140CDB560;
        ((void (__fastcall *)(void *, union _SLIST_HEADER *))qword_140CDB578)(Src[1], &CmpBounceBufferLookaside);
      }
      else
      {
        RtlpInterlockedPushEntrySList(&CmpBounceBufferLookaside, (PSLIST_ENTRY)Src[1]);
      }
    }
    else
    {
      CmSiFreeMemory((PPRIVILEGE_SET)Src[1]);
    }
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    p_DestinationString = &DestinationString;
    LOBYTE(p_DestinationString) = 16;
    (*(void (__fastcall **)(UNICODE_STRING *, struct _EVENT_DATA_DESCRIPTOR *, _QWORD, _QWORD, _DMA_OPERATIONS *, UNICODE_STRING *))((char *)&NlsMbCodePageTag + 7))(
      p_DestinationString,
      v78,
      (unsigned int)v14,
      v46,
      DmaOperations,
      &DestinationString);
  }
  if ( Privileges && Privileges != (PPRIVILEGE_SET)v86 )
    CmSiFreeMemory(Privileges);
  if ( v45 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v41;
  }
  return (unsigned int)v14;
}
