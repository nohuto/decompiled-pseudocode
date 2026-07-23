/*
 * XREFs of NtQueryValueKey @ 0x140618560
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406BF270 (ExpWatchProductTypeWork.c)
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 *     ExpWatchProductTypeInitialization @ 0x140A49CA8 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140A759C8 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140A8F570 (InitSafeBoot.c)
 * Callees:
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14020A020 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140225FD0 (ExIsResourceAcquiredSharedLite.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402FB2A0 (EtwGetKernelTraceTimestamp.c)
 *     _tlgWriteAgg @ 0x140375C84 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14060C6A0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140614140 (CmpCallCallBacksEx.c)
 *     CmQueryValueKey @ 0x14067A400 (CmQueryValueKey.c)
 *     CmpIsBufferGloballyVisible @ 0x1406BA92C (CmpIsBufferGloballyVisible.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  ULONG v10; // r13d
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v12; // bl
  char v13; // r12
  NTSTATUS v14; // ebx
  __int64 v15; // rcx
  _DMA_OPERATIONS *DmaOperations; // r14
  int v17; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v19; // rdx
  SIZE_T v20; // rbx
  const void *v21; // rdi
  struct _KTHREAD *v22; // rax
  ULONG IsResourceAcquiredSharedLite; // eax
  PULONG v24; // r14
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  ULONG v29; // eax
  struct _KTHREAD *v30; // rcx
  bool v31; // zf
  PSLIST_ENTRY v33; // rdi
  PVOID TransientPoolWithQuotaTag; // rax
  void *v35; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  ULONG v37; // edx
  char v38; // cl
  int ValueKey; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  NTSTATUS v41; // [rsp+40h] [rbp-2B8h]
  char v42; // [rsp+44h] [rbp-2B4h]
  char v43; // [rsp+45h] [rbp-2B3h]
  char v44; // [rsp+46h] [rbp-2B2h] BYREF
  BOOLEAN v45; // [rsp+47h] [rbp-2B1h]
  KEY_VALUE_INFORMATION_CLASS v46; // [rsp+48h] [rbp-2B0h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-2A8h] BYREF
  _DMA_OPERATIONS *v48; // [rsp+60h] [rbp-298h]
  size_t Size; // [rsp+68h] [rbp-290h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp-288h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-280h]
  KEY_VALUE_INFORMATION_CLASS v52; // [rsp+80h] [rbp-278h]
  PULONG v53; // [rsp+88h] [rbp-270h]
  _DMA_OPERATIONS *v54; // [rsp+90h] [rbp-268h]
  PADAPTER_OBJECT v55; // [rsp+98h] [rbp-260h] BYREF
  _QWORD v56[2]; // [rsp+A0h] [rbp-258h] BYREF
  PVOID v57; // [rsp+B0h] [rbp-248h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-240h] BYREF
  PVOID v59; // [rsp+C0h] [rbp-238h]
  __int64 v60; // [rsp+C8h] [rbp-230h] BYREF
  __int64 v61; // [rsp+D0h] [rbp-228h] BYREF
  UNICODE_STRING v62; // [rsp+E0h] [rbp-218h]
  __int128 v63; // [rsp+F0h] [rbp-208h] BYREF
  __int128 v64; // [rsp+100h] [rbp-1F8h]
  __int128 v65; // [rsp+110h] [rbp-1E8h]
  __int128 v66; // [rsp+120h] [rbp-1D8h]
  __int64 v67; // [rsp+130h] [rbp-1C8h]
  PADAPTER_OBJECT v68; // [rsp+140h] [rbp-1B8h] BYREF
  NTSTATUS v69; // [rsp+148h] [rbp-1B0h]
  int v70; // [rsp+14Ch] [rbp-1ACh]
  __int128 *v71; // [rsp+150h] [rbp-1A8h]
  NTSTATUS v72; // [rsp+158h] [rbp-1A0h]
  __int128 v73; // [rsp+15Ch] [rbp-19Ch]
  __int64 v74; // [rsp+16Ch] [rbp-18Ch]
  int v75; // [rsp+174h] [rbp-184h]
  __int64 v76; // [rsp+178h] [rbp-180h]
  UNICODE_STRING v77; // [rsp+180h] [rbp-178h] BYREF
  UNICODE_STRING v78; // [rsp+190h] [rbp-168h] BYREF
  void *Src[2]; // [rsp+1A0h] [rbp-158h]
  char v80; // [rsp+1B0h] [rbp-148h]
  _OWORD v81[4]; // [rsp+1B1h] [rbp-147h] BYREF
  int v82; // [rsp+1F1h] [rbp-107h]
  __int16 v83; // [rsp+1F5h] [rbp-103h]
  char v84; // [rsp+1F7h] [rbp-101h]
  struct _EVENT_DATA_DESCRIPTOR v85[2]; // [rsp+200h] [rbp-F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+220h] [rbp-D8h] BYREF
  __int64 *v87; // [rsp+240h] [rbp-B8h]
  __int64 v88; // [rsp+248h] [rbp-B0h]
  char *v89; // [rsp+250h] [rbp-A8h]
  __int64 v90; // [rsp+258h] [rbp-A0h]
  __int64 *v91; // [rsp+260h] [rbp-98h]
  __int64 v92; // [rsp+268h] [rbp-90h]
  _BYTE v93[64]; // [rsp+270h] [rbp-88h] BYREF

  v46 = KeyValueInformationClass;
  v10 = Length;
  v52 = KeyValueInformationClass;
  v53 = ResultLength;
  DestinationString = 0LL;
  memset(v81, 0, sizeof(v81));
  v82 = 0;
  v83 = 0;
  v84 = 0;
  memset(v85, 0, sizeof(v85));
  v48 = 0LL;
  v54 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v85, 0x20000u);
  v42 = 0;
  v43 = 0;
  DmaAdapter = 0LL;
  LODWORD(Size) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Privileges = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  *(_OWORD *)Src = 0LL;
  v80 = 0;
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
  if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformationAlign64 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && KeyHandle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v57 = 0LL,
          ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v57, 0LL) >= 0) )
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
  v76 = 0LL;
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, v13, &Object, 0LL);
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
    if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
      ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v17 = *(_DWORD *)&ValueName->Length;
    *(_DWORD *)&v62.Length = v17;
    Buffer = ValueName->Buffer;
    v62.Buffer = Buffer;
    DestinationString = v62;
    if ( (_WORD)v17 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = (unsigned __int64)Buffer + (unsigned __int16)v17;
      if ( v19 > 0x7FFFFFFF0000LL || v19 < (unsigned __int64)Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( Length )
    {
      if ( ((unsigned __int8)KeyValueInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)KeyValueInformation + Length > 0x7FFFFFFF0000LL
        || (char *)KeyValueInformation + Length < KeyValueInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v15 = (__int64)v53;
    if ( (unsigned __int64)v53 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
  }
  else
  {
    DestinationString = *ValueName;
  }
  v20 = DestinationString.Length;
  DestinationString.MaximumLength = DestinationString.Length;
  v21 = DestinationString.Buffer;
  if ( v13
    || *((_QWORD *)&CmpRegistryProcess + 1) && !(unsigned __int8)CmpIsBufferGloballyVisible(DestinationString.Buffer) )
  {
    if ( (_WORD)v20 )
    {
      if ( (unsigned int)v20 > 0x40 )
      {
        Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v15, v20, 0x6E764D43u);
        if ( !Privileges )
        {
          v14 = -1073741670;
          v41 = -1073741670;
          goto LABEL_79;
        }
        v21 = DestinationString.Buffer;
        LOWORD(v20) = DestinationString.Length;
      }
      else
      {
        Privileges = (PPRIVILEGE_SET)v93;
      }
      if ( Privileges )
      {
        memmove(Privileges, v21, (unsigned __int16)v20);
        LOWORD(v20) = DestinationString.Length;
      }
    }
    else
    {
      Privileges = 0LL;
    }
    v21 = Privileges;
    DestinationString.Buffer = (wchar_t *)Privileges;
  }
  if ( (DestinationString.Length & 1) != 0 )
  {
    v14 = -1073741811;
    v41 = -1073741811;
    goto LABEL_79;
  }
  while ( (_WORD)v20 && !*((_WORD *)v21 + ((unsigned __int64)(unsigned __int16)v20 >> 1) - 1) )
  {
    LOWORD(v20) = v20 - 2;
    DestinationString.Length = v20;
  }
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  v43 = 1;
  if ( !CmpCallBackCount )
  {
    v24 = v53;
LABEL_58:
    v14 = CmKeyBodyRemapToVirtualForEnum((__int64 *)&DmaAdapter, v13, 1, &v55);
    v41 = v14;
    if ( v14 < 0 )
      goto LABEL_72;
    Src[0] = KeyValueInformation;
    if ( Length )
    {
      if ( *((_QWORD *)&CmpRegistryProcess + 1)
        && (v13 || !(unsigned __int8)CmpIsBufferGloballyVisible(KeyValueInformation)) )
      {
        if ( (unsigned int)dword_140C02130 > 5 && (byte_140C02140 & 4) != 0 && (qword_140C02148 & 4) == qword_140C02148 )
        {
          v60 = 1LL;
          v87 = &v60;
          v88 = 8LL;
          v44 = 3;
          v89 = &v44;
          v90 = 1LL;
          v37 = Length;
          if ( ((Length - 1) & Length) != 0 )
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
          v91 = &v61;
          v92 = 8LL;
          tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&byte_1400225EB, v27, 5u, &v86);
        }
        if ( Length > 0x40uLL )
        {
          if ( Length > 0x1000uLL )
            goto LABEL_115;
          ++dword_140CDB614;
          v33 = RtlpInterlockedPopEntrySList(&CmpBounceBufferLookaside);
          if ( !v33 )
          {
            ++dword_140CDB618;
            v33 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _SLIST_HEADER *))qword_140CDB630)(
                                  (unsigned int)dword_140CDB624,
                                  (unsigned int)dword_140CDB62C,
                                  (unsigned int)dword_140CDB628,
                                  &CmpBounceBufferLookaside);
          }
          if ( v33 )
          {
            memset(v33, 0, Length);
            v80 |= 1u;
            Src[1] = v33;
          }
          else
          {
LABEL_115:
            TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(v26, Length, 0x42424D43u);
            v35 = TransientPoolWithQuotaTag;
            if ( !TransientPoolWithQuotaTag )
            {
              v14 = -1073741670;
              goto LABEL_67;
            }
            memset(TransientPoolWithQuotaTag, 0, Length);
            Src[1] = v35;
          }
        }
        else
        {
          memset(v81, 0, Length);
          Src[1] = v81;
        }
      }
      else
      {
        Src[1] = KeyValueInformation;
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
      v77 = DestinationString;
      ValueKey = CmQueryValueKey((_DWORD)v55, (unsigned int)&v77, v46, Src[1], Length, (__int64)&Size);
      v14 = ValueKey;
      v41 = ValueKey;
      if ( ValueKey >= 0 || ValueKey == -1073741789 || ValueKey == -2147483643 )
      {
LABEL_73:
        v29 = Size;
        *v24 = Size;
        if ( v14 != -1073741789 )
        {
          if ( v29 < Length )
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
        v78 = DestinationString;
        v28 = CmQueryValueKey((_DWORD)DmaAdapter, (unsigned int)&v78, v46, Src[1], Length, (__int64)&Size);
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
  v24 = v53;
  if ( IsResourceAcquiredSharedLite )
    goto LABEL_58;
  *(_QWORD *)&v63 = DmaAdapter;
  *((_QWORD *)&v63 + 1) = &DestinationString;
  LODWORD(v64) = v46;
  *((_QWORD *)&v64 + 1) = KeyValueInformation;
  LODWORD(v65) = Length;
  *((_QWORD *)&v65 + 1) = v53;
  v25 = CmpCallCallBacksEx(8u, (__int64)&v63, 0LL, 1, 0x17u, (__int64)DmaAdapter, (__int64)v56);
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
      v70 = 0;
      v73 = 0LL;
      v74 = 0LL;
      v75 = 0;
      v68 = DmaAdapter;
      v69 = v14;
      v72 = v14;
      v71 = &v63;
      CmpCallCallBacksEx(0x17u, (__int64)&v68, 0LL, 0, 0x17u, (__int64)DmaAdapter, (__int64)v56);
      v14 = v72;
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
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v81 )
  {
    if ( (v80 & 1) != 0 )
    {
      ++dword_140CDB61C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_140CDB610 )
      {
        ++dword_140CDB620;
        ((void (__fastcall *)(void *, _SLIST_HEADER *))qword_140CDB638)(Src[1], &CmpBounceBufferLookaside);
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
      v85,
      (unsigned int)v14,
      (unsigned int)v46,
      DmaOperations,
      &DestinationString);
  }
  if ( Privileges && Privileges != (PPRIVILEGE_SET)v93 )
    CmSiFreeMemory(Privileges);
  if ( v45 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v41;
  }
  return v14;
}
