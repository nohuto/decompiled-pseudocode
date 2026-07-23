/*
 * XREFs of NtQueryValueKey @ 0x1405EC5D0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406DF6A0 (ExpWatchProductTypeWork.c)
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 *     ExpWatchProductTypeInitialization @ 0x140A3E1A4 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140A6E9C4 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140A8A2D0 (InitSafeBoot.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402090D0 (ExIsResourceAcquiredSharedLite.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1402421A8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     _tlgWriteAgg @ 0x1403727B4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405EACD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryValueKey @ 0x140620880 (CmQueryValueKey.c)
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     CmpIsBufferGloballyVisible @ 0x14070AA44 (CmpIsBufferGloballyVisible.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
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
  unsigned __int64 v12; // rdx
  BOOLEAN v13; // bl
  __int64 v14; // r8
  _DWORD *v15; // r9
  KPROCESSOR_MODE v16; // r12
  NTSTATUS v17; // ebx
  __int64 v18; // rcx
  _DMA_OPERATIONS *DmaOperations; // r14
  int v20; // eax
  wchar_t *Buffer; // rcx
  SIZE_T v22; // rbx
  const void *v23; // rdi
  struct _KTHREAD *v24; // rax
  ULONG IsResourceAcquiredSharedLite; // eax
  int v26; // r9d
  PULONG v27; // r14
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  ULONG v31; // eax
  struct _KTHREAD *v32; // rcx
  bool v33; // zf
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  PSLIST_ENTRY v38; // rdi
  PVOID TransientPoolWithQuotaTag; // rax
  void *v40; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  ULONG v42; // edx
  char v43; // cl
  int ValueKey; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  NTSTATUS v46; // [rsp+40h] [rbp-2B8h]
  char v47; // [rsp+44h] [rbp-2B4h]
  char v48; // [rsp+45h] [rbp-2B3h]
  char v49; // [rsp+46h] [rbp-2B2h] BYREF
  BOOLEAN v50; // [rsp+47h] [rbp-2B1h]
  KEY_VALUE_INFORMATION_CLASS v51; // [rsp+48h] [rbp-2B0h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-2A8h] BYREF
  _DMA_OPERATIONS *v53; // [rsp+60h] [rbp-298h]
  size_t Size; // [rsp+68h] [rbp-290h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp-288h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-280h]
  KEY_VALUE_INFORMATION_CLASS v57; // [rsp+80h] [rbp-278h]
  PULONG v58; // [rsp+88h] [rbp-270h]
  _DMA_OPERATIONS *v59; // [rsp+90h] [rbp-268h]
  PADAPTER_OBJECT v60; // [rsp+98h] [rbp-260h] BYREF
  _QWORD v61[2]; // [rsp+A0h] [rbp-258h] BYREF
  PVOID v62; // [rsp+B0h] [rbp-248h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-240h] BYREF
  PVOID v64; // [rsp+C0h] [rbp-238h]
  __int64 v65; // [rsp+C8h] [rbp-230h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-228h] BYREF
  UNICODE_STRING v67; // [rsp+E0h] [rbp-218h]
  __int128 v68; // [rsp+F0h] [rbp-208h] BYREF
  __int128 v69; // [rsp+100h] [rbp-1F8h]
  __int128 v70; // [rsp+110h] [rbp-1E8h]
  __int128 v71; // [rsp+120h] [rbp-1D8h]
  __int64 v72; // [rsp+130h] [rbp-1C8h]
  PADAPTER_OBJECT v73; // [rsp+140h] [rbp-1B8h] BYREF
  NTSTATUS v74; // [rsp+148h] [rbp-1B0h]
  int v75; // [rsp+14Ch] [rbp-1ACh]
  __int128 *v76; // [rsp+150h] [rbp-1A8h]
  NTSTATUS v77; // [rsp+158h] [rbp-1A0h]
  __int128 v78; // [rsp+15Ch] [rbp-19Ch]
  __int64 v79; // [rsp+16Ch] [rbp-18Ch]
  int v80; // [rsp+174h] [rbp-184h]
  __int64 v81; // [rsp+178h] [rbp-180h]
  UNICODE_STRING v82; // [rsp+180h] [rbp-178h] BYREF
  UNICODE_STRING v83; // [rsp+190h] [rbp-168h] BYREF
  void *Src[2]; // [rsp+1A0h] [rbp-158h]
  char v85; // [rsp+1B0h] [rbp-148h]
  _OWORD v86[4]; // [rsp+1B1h] [rbp-147h] BYREF
  int v87; // [rsp+1F1h] [rbp-107h]
  __int16 v88; // [rsp+1F5h] [rbp-103h]
  char v89; // [rsp+1F7h] [rbp-101h]
  struct _EVENT_DATA_DESCRIPTOR v90[2]; // [rsp+200h] [rbp-F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+220h] [rbp-D8h] BYREF
  __int64 *v92; // [rsp+240h] [rbp-B8h]
  __int64 v93; // [rsp+248h] [rbp-B0h]
  char *v94; // [rsp+250h] [rbp-A8h]
  __int64 v95; // [rsp+258h] [rbp-A0h]
  __int64 *v96; // [rsp+260h] [rbp-98h]
  __int64 v97; // [rsp+268h] [rbp-90h]
  _BYTE v98[64]; // [rsp+270h] [rbp-88h] BYREF

  v51 = KeyValueInformationClass;
  v10 = Length;
  v57 = KeyValueInformationClass;
  v58 = ResultLength;
  DestinationString = 0LL;
  memset(v86, 0, sizeof(v86));
  v87 = 0;
  v88 = 0;
  v89 = 0;
  memset(v90, 0, sizeof(v90));
  v53 = 0LL;
  v59 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v90, 0x20000u);
  v47 = 0;
  v48 = 0;
  DmaAdapter = 0LL;
  LODWORD(Size) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Privileges = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  *(_OWORD *)Src = 0LL;
  v85 = 0;
  v61[1] = v61;
  v61[0] = v61;
  v60 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v13 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v14, (__int64)v15);
  v50 = v13;
  if ( !v13 )
  {
    v17 = -1073741431;
    v46 = -1073741431;
    goto LABEL_119;
  }
  if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformationAlign64 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && KeyHandle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v62 = 0LL,
          ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v62, 0LL) >= 0) )
    {
      DmaOperations = (_DMA_OPERATIONS *)*((_QWORD *)v62 + 1);
      HalPutDmaAdapter((PADAPTER_OBJECT)v62);
    }
    else
    {
      DmaOperations = 0LL;
    }
    v17 = -1073741811;
    v46 = -1073741811;
    goto LABEL_79;
  }
  v16 = KeGetCurrentThread()->PreviousMode;
  v81 = 0LL;
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, v16, &Object, 0LL);
  v18 = (__int64)Object;
  v64 = Object;
  if ( v17 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      DmaAdapter = (PADAPTER_OBJECT)Object;
      v18 = 0LL;
      v64 = 0LL;
      v17 = 0;
    }
    else
    {
      v17 = -1073741816;
    }
  }
  if ( v18 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v18);
  v46 = v17;
  if ( v17 < 0 )
  {
LABEL_119:
    DmaOperations = 0LL;
    goto LABEL_79;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && (v18 = (__int64)DmaAdapter) != 0 )
  {
    DmaOperations = DmaAdapter->DmaOperations;
    v53 = DmaOperations;
    v59 = DmaOperations;
  }
  else
  {
    DmaOperations = 0LL;
  }
  if ( v16 == 1 )
  {
    v67 = 0LL;
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
      ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v20 = *(_DWORD *)&ValueName->Length;
    *(_DWORD *)&v67.Length = v20;
    Buffer = ValueName->Buffer;
    v67.Buffer = Buffer;
    DestinationString = v67;
    if ( (_WORD)v20 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (unsigned __int64)Buffer + (unsigned __int16)v20;
      if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)Buffer )
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
    v18 = (__int64)v58;
    if ( (unsigned __int64)v58 >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v18 = *(_DWORD *)v18;
  }
  else
  {
    DestinationString = *ValueName;
  }
  v22 = DestinationString.Length;
  DestinationString.MaximumLength = DestinationString.Length;
  v23 = DestinationString.Buffer;
  if ( v16
    || *((_QWORD *)&CmpRegistryProcess + 1) && !(unsigned __int8)CmpIsBufferGloballyVisible(DestinationString.Buffer) )
  {
    if ( (_WORD)v22 )
    {
      if ( (unsigned int)v22 > 0x40 )
      {
        Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v18, v22, 0x6E764D43u);
        if ( !Privileges )
        {
          v17 = -1073741670;
          v46 = -1073741670;
          goto LABEL_79;
        }
        v23 = DestinationString.Buffer;
        LOWORD(v22) = DestinationString.Length;
      }
      else
      {
        Privileges = (PPRIVILEGE_SET)v98;
      }
      if ( Privileges )
      {
        memmove(Privileges, v23, (unsigned __int16)v22);
        LOWORD(v22) = DestinationString.Length;
      }
    }
    else
    {
      Privileges = 0LL;
    }
    v23 = Privileges;
    DestinationString.Buffer = (wchar_t *)Privileges;
  }
  if ( (DestinationString.Length & 1) != 0 )
  {
    v17 = -1073741811;
    v46 = -1073741811;
    goto LABEL_79;
  }
  while ( (_WORD)v22 && !*((_WORD *)v23 + ((unsigned __int64)(unsigned __int16)v22 >> 1) - 1) )
  {
    LOWORD(v22) = v22 - 2;
    DestinationString.Length = v22;
  }
  v24 = KeGetCurrentThread();
  --v24->KernelApcDisable;
  v48 = 1;
  if ( !CmpCallBackCount )
  {
    v27 = v58;
LABEL_58:
    v17 = CmKeyBodyRemapToVirtualForEnum((__int64 *)&DmaAdapter, v16, 1, &v60);
    v46 = v17;
    if ( v17 < 0 )
      goto LABEL_72;
    Src[0] = KeyValueInformation;
    if ( Length )
    {
      if ( *((_QWORD *)&CmpRegistryProcess + 1)
        && (v16 || !(unsigned __int8)CmpIsBufferGloballyVisible(KeyValueInformation)) )
      {
        if ( (unsigned int)dword_140C02130 > 5 && (byte_140C02140 & 4) != 0 && (qword_140C02148 & 4) == qword_140C02148 )
        {
          v65 = 1LL;
          v92 = &v65;
          v93 = 8LL;
          v49 = 3;
          v94 = &v49;
          v95 = 1LL;
          v42 = Length;
          if ( ((Length - 1) & Length) != 0 )
          {
            v43 = -1;
            do
            {
              ++v43;
              v42 >>= 1;
            }
            while ( v42 );
            v42 = 1 << (v43 + 1);
          }
          v66 = v42;
          v96 = &v66;
          v97 = 8LL;
          tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&byte_14002238B, v14, 5u, &v91);
        }
        if ( Length > 0x40uLL )
        {
          if ( Length > 0x1000uLL )
            goto LABEL_115;
          ++dword_140CDB694;
          v38 = RtlpInterlockedPopEntrySList(&CmpBounceBufferLookaside);
          if ( !v38 )
          {
            ++dword_140CDB698;
            v38 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _SLIST_HEADER *))qword_140CDB6B0)(
                                  (unsigned int)dword_140CDB6A4,
                                  (unsigned int)dword_140CDB6AC,
                                  (unsigned int)dword_140CDB6A8,
                                  &CmpBounceBufferLookaside);
          }
          if ( v38 )
          {
            memset(v38, 0, Length);
            v85 |= 1u;
            Src[1] = v38;
          }
          else
          {
LABEL_115:
            TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(v29, Length, 0x42424D43u);
            v40 = TransientPoolWithQuotaTag;
            if ( !TransientPoolWithQuotaTag )
            {
              v17 = -1073741670;
              goto LABEL_67;
            }
            memset(TransientPoolWithQuotaTag, 0, Length);
            Src[1] = v40;
          }
        }
        else
        {
          memset(v86, 0, Length);
          Src[1] = v86;
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
    v17 = 0;
LABEL_67:
    v46 = v17;
    if ( v17 >= 0 )
    {
      if ( !v60 )
        goto LABEL_69;
      v82 = DestinationString;
      ValueKey = CmQueryValueKey((_DWORD)v60, (unsigned int)&v82, v51, Src[1], Length, (__int64)&Size);
      v17 = ValueKey;
      v46 = ValueKey;
      if ( ValueKey >= 0 || ValueKey == -1073741789 || ValueKey == -2147483643 )
      {
LABEL_73:
        v31 = Size;
        *v27 = Size;
        if ( v17 != -1073741789 )
        {
          if ( v31 < Length )
            v10 = v31;
          if ( Src[0] != Src[1] )
            memmove(Src[0], Src[1], v10);
        }
        DmaOperations = v53;
        goto LABEL_79;
      }
      if ( ValueKey == -1073741772 )
      {
LABEL_69:
        v83 = DestinationString;
        v30 = CmQueryValueKey((_DWORD)DmaAdapter, (unsigned int)&v83, v51, Src[1], Length, (__int64)&Size);
        v17 = v30;
        v46 = v30;
        if ( v30 < 0 && v30 != -2147483643 && v30 != -1073741789 )
          goto LABEL_72;
        goto LABEL_73;
      }
    }
LABEL_72:
    DmaOperations = v53;
    goto LABEL_79;
  }
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock);
  v27 = v58;
  if ( IsResourceAcquiredSharedLite )
    goto LABEL_58;
  *(_QWORD *)&v68 = DmaAdapter;
  *((_QWORD *)&v68 + 1) = &DestinationString;
  LODWORD(v69) = v51;
  *((_QWORD *)&v69 + 1) = KeyValueInformation;
  LODWORD(v70) = Length;
  *((_QWORD *)&v70 + 1) = v58;
  LOBYTE(v26) = 1;
  v28 = CmpCallCallBacksEx(8, (unsigned int)&v68, 0, v26, 23, (__int64)DmaAdapter, (__int64)v61);
  v17 = v28;
  v46 = v28;
  if ( v28 >= 0 )
  {
    v47 = 1;
    goto LABEL_58;
  }
  DmaOperations = v53;
  if ( v28 == -1073740541 )
  {
    v17 = 0;
    v46 = 0;
  }
LABEL_79:
  if ( v60 )
    HalPutDmaAdapter(v60);
  if ( v47 )
  {
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v61[0] != v61 )
    {
      v75 = 0;
      v78 = 0LL;
      v79 = 0LL;
      v80 = 0;
      v73 = DmaAdapter;
      v74 = v17;
      v77 = v17;
      v76 = &v68;
      CmpCallCallBacksEx(23, (unsigned int)&v73, 0, 0, 23, (__int64)DmaAdapter, (__int64)v61);
      v17 = v77;
    }
    v46 = v17;
  }
  if ( v48 )
  {
    v32 = KeGetCurrentThread();
    v33 = v32->KernelApcDisable++ == -1;
    if ( v33
      && ($C774EFD68449142D8271B1EC1EB7FB26 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
      && !v32->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v32, v12, v14, v15);
    }
    v17 = v46;
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v86 )
  {
    if ( (v85 & 1) != 0 )
    {
      ++dword_140CDB69C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_140CDB690 )
      {
        ++dword_140CDB6A0;
        ((void (__fastcall *)(void *, _SLIST_HEADER *))qword_140CDB6B8)(Src[1], &CmpBounceBufferLookaside);
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
      v90,
      (unsigned int)v17,
      (unsigned int)v51,
      DmaOperations,
      &DestinationString);
  }
  if ( Privileges && Privileges != (PPRIVILEGE_SET)v98 )
    CmSiFreeMemory(Privileges);
  if ( v50 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v34, v35, v36);
    return v46;
  }
  return v17;
}
