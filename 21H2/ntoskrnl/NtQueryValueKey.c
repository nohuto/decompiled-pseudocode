/*
 * XREFs of NtQueryValueKey @ 0x14070EEC0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140612A40 (ExpWatchProductTypeWork.c)
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 *     ExpWatchProductTypeInitialization @ 0x140A42C04 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140A73948 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140A8D3D0 (InitSafeBoot.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14026CEF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     _tlgWriteAgg @ 0x1403759E4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpIsBufferGloballyVisible @ 0x1405F38B0 (CmpIsBufferGloballyVisible.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14064A4D0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryValueKey @ 0x1406E6E60 (CmQueryValueKey.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v12; // rdx
  BOOLEAN v13; // bl
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // r12
  NTSTATUS v17; // ebx
  __int64 v18; // rcx
  _DMA_OPERATIONS *DmaOperations; // r14
  int v20; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v22; // rdx
  SIZE_T v23; // rbx
  const void *v24; // rdi
  struct _KTHREAD *v25; // rax
  ULONG IsResourceAcquiredSharedLite; // eax
  PULONG v27; // r14
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  ULONG v32; // eax
  struct _KTHREAD *v33; // rcx
  bool v34; // zf
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  PSLIST_ENTRY v39; // rdi
  PVOID TransientPoolWithQuotaTag; // rax
  void *v41; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  ULONG v43; // edx
  char v44; // cl
  int ValueKey; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  NTSTATUS v47; // [rsp+40h] [rbp-2B8h]
  char v48; // [rsp+44h] [rbp-2B4h]
  char v49; // [rsp+45h] [rbp-2B3h]
  char v50; // [rsp+46h] [rbp-2B2h] BYREF
  BOOLEAN v51; // [rsp+47h] [rbp-2B1h]
  KEY_VALUE_INFORMATION_CLASS v52; // [rsp+48h] [rbp-2B0h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-2A8h] BYREF
  _DMA_OPERATIONS *v54; // [rsp+60h] [rbp-298h]
  size_t Size; // [rsp+68h] [rbp-290h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp-288h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-280h]
  KEY_VALUE_INFORMATION_CLASS v58; // [rsp+80h] [rbp-278h]
  PULONG v59; // [rsp+88h] [rbp-270h]
  _DMA_OPERATIONS *v60; // [rsp+90h] [rbp-268h]
  PADAPTER_OBJECT v61; // [rsp+98h] [rbp-260h] BYREF
  _QWORD v62[2]; // [rsp+A0h] [rbp-258h] BYREF
  PVOID v63; // [rsp+B0h] [rbp-248h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-240h] BYREF
  PVOID v65; // [rsp+C0h] [rbp-238h]
  __int64 v66; // [rsp+C8h] [rbp-230h] BYREF
  __int64 v67; // [rsp+D0h] [rbp-228h] BYREF
  UNICODE_STRING v68; // [rsp+E0h] [rbp-218h]
  __int128 v69; // [rsp+F0h] [rbp-208h] BYREF
  __int128 v70; // [rsp+100h] [rbp-1F8h]
  __int128 v71; // [rsp+110h] [rbp-1E8h]
  __int128 v72; // [rsp+120h] [rbp-1D8h]
  __int64 v73; // [rsp+130h] [rbp-1C8h]
  PADAPTER_OBJECT v74; // [rsp+140h] [rbp-1B8h] BYREF
  NTSTATUS v75; // [rsp+148h] [rbp-1B0h]
  int v76; // [rsp+14Ch] [rbp-1ACh]
  __int128 *v77; // [rsp+150h] [rbp-1A8h]
  NTSTATUS v78; // [rsp+158h] [rbp-1A0h]
  __int128 v79; // [rsp+15Ch] [rbp-19Ch]
  __int64 v80; // [rsp+16Ch] [rbp-18Ch]
  int v81; // [rsp+174h] [rbp-184h]
  __int64 v82; // [rsp+178h] [rbp-180h]
  UNICODE_STRING v83; // [rsp+180h] [rbp-178h] BYREF
  UNICODE_STRING v84; // [rsp+190h] [rbp-168h] BYREF
  void *Src[2]; // [rsp+1A0h] [rbp-158h]
  char v86; // [rsp+1B0h] [rbp-148h]
  _OWORD v87[4]; // [rsp+1B1h] [rbp-147h] BYREF
  int v88; // [rsp+1F1h] [rbp-107h]
  __int16 v89; // [rsp+1F5h] [rbp-103h]
  char v90; // [rsp+1F7h] [rbp-101h]
  struct _EVENT_DATA_DESCRIPTOR v91[2]; // [rsp+200h] [rbp-F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+220h] [rbp-D8h] BYREF
  __int64 *v93; // [rsp+240h] [rbp-B8h]
  __int64 v94; // [rsp+248h] [rbp-B0h]
  char *v95; // [rsp+250h] [rbp-A8h]
  __int64 v96; // [rsp+258h] [rbp-A0h]
  __int64 *v97; // [rsp+260h] [rbp-98h]
  __int64 v98; // [rsp+268h] [rbp-90h]
  _BYTE v99[64]; // [rsp+270h] [rbp-88h] BYREF

  v52 = KeyValueInformationClass;
  v10 = Length;
  v58 = KeyValueInformationClass;
  v59 = ResultLength;
  DestinationString = 0LL;
  memset(v87, 0, sizeof(v87));
  v88 = 0;
  v89 = 0;
  v90 = 0;
  memset(v91, 0, sizeof(v91));
  v54 = 0LL;
  v60 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v91, 0x20000u);
  v48 = 0;
  v49 = 0;
  DmaAdapter = 0LL;
  LODWORD(Size) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Privileges = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  *(_OWORD *)Src = 0LL;
  v86 = 0;
  v62[1] = v62;
  v62[0] = v62;
  v61 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v13 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v14, v15);
  v51 = v13;
  if ( !v13 )
  {
    v17 = -1073741431;
    v47 = -1073741431;
    goto LABEL_119;
  }
  if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformationAlign64 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && KeyHandle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v63 = 0LL,
          ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v63, 0LL) >= 0) )
    {
      DmaOperations = (_DMA_OPERATIONS *)*((_QWORD *)v63 + 1);
      HalPutDmaAdapter((PADAPTER_OBJECT)v63);
    }
    else
    {
      DmaOperations = 0LL;
    }
    v17 = -1073741811;
    v47 = -1073741811;
    goto LABEL_79;
  }
  v16 = KeGetCurrentThread()->PreviousMode;
  v82 = 0LL;
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, v16, &Object, 0LL);
  v18 = (__int64)Object;
  v65 = Object;
  if ( v17 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      DmaAdapter = (PADAPTER_OBJECT)Object;
      v18 = 0LL;
      v65 = 0LL;
      v17 = 0;
    }
    else
    {
      v17 = -1073741816;
    }
  }
  if ( v18 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v18);
  v47 = v17;
  if ( v17 < 0 )
  {
LABEL_119:
    DmaOperations = 0LL;
    goto LABEL_79;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && (v18 = (__int64)DmaAdapter) != 0 )
  {
    DmaOperations = DmaAdapter->DmaOperations;
    v54 = DmaOperations;
    v60 = DmaOperations;
  }
  else
  {
    DmaOperations = 0LL;
  }
  if ( v16 == 1 )
  {
    v68 = 0LL;
    if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
      ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v20 = *(_DWORD *)&ValueName->Length;
    *(_DWORD *)&v68.Length = v20;
    Buffer = ValueName->Buffer;
    v68.Buffer = Buffer;
    DestinationString = v68;
    if ( (_WORD)v20 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = (unsigned __int64)Buffer + (unsigned __int16)v20;
      if ( v22 > 0x7FFFFFFF0000LL || v22 < (unsigned __int64)Buffer )
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
    v18 = (__int64)v59;
    if ( (unsigned __int64)v59 >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v18 = *(_DWORD *)v18;
  }
  else
  {
    DestinationString = *ValueName;
  }
  v23 = DestinationString.Length;
  DestinationString.MaximumLength = DestinationString.Length;
  v24 = DestinationString.Buffer;
  if ( v16
    || *((_QWORD *)&CmpRegistryProcess + 1) && !CmpIsBufferGloballyVisible((unsigned __int64)DestinationString.Buffer) )
  {
    if ( (_WORD)v23 )
    {
      if ( (unsigned int)v23 > 0x40 )
      {
        Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v18, v23, 0x6E764D43u);
        if ( !Privileges )
        {
          v17 = -1073741670;
          v47 = -1073741670;
          goto LABEL_79;
        }
        v24 = DestinationString.Buffer;
        LOWORD(v23) = DestinationString.Length;
      }
      else
      {
        Privileges = (PPRIVILEGE_SET)v99;
      }
      if ( Privileges )
      {
        memmove(Privileges, v24, (unsigned __int16)v23);
        LOWORD(v23) = DestinationString.Length;
      }
    }
    else
    {
      Privileges = 0LL;
    }
    v24 = Privileges;
    DestinationString.Buffer = (wchar_t *)Privileges;
  }
  if ( (DestinationString.Length & 1) != 0 )
  {
    v17 = -1073741811;
    v47 = -1073741811;
    goto LABEL_79;
  }
  while ( (_WORD)v23 && !*((_WORD *)v24 + ((unsigned __int64)(unsigned __int16)v23 >> 1) - 1) )
  {
    LOWORD(v23) = v23 - 2;
    DestinationString.Length = v23;
  }
  v25 = KeGetCurrentThread();
  --v25->KernelApcDisable;
  v49 = 1;
  if ( !CmpCallBackCount )
  {
    v27 = v59;
LABEL_58:
    v17 = CmKeyBodyRemapToVirtualForEnum(&DmaAdapter, v16, 1, &v61);
    v47 = v17;
    if ( v17 < 0 )
      goto LABEL_72;
    Src[0] = KeyValueInformation;
    if ( Length )
    {
      if ( *((_QWORD *)&CmpRegistryProcess + 1)
        && (v16 || !CmpIsBufferGloballyVisible((unsigned __int64)KeyValueInformation)) )
      {
        if ( (unsigned int)dword_140C02130 > 5 && (byte_140C02140 & 4) != 0 && (qword_140C02148 & 4) == qword_140C02148 )
        {
          v66 = 1LL;
          v93 = &v66;
          v94 = 8LL;
          v50 = 3;
          v95 = &v50;
          v96 = 1LL;
          v43 = Length;
          if ( ((Length - 1) & Length) != 0 )
          {
            v44 = -1;
            do
            {
              ++v44;
              v43 >>= 1;
            }
            while ( v43 );
            v43 = 1 << (v44 + 1);
          }
          v67 = v43;
          v97 = &v67;
          v98 = 8LL;
          tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&byte_1400234AB, v30, 5u, &v92);
        }
        if ( Length > 0x40uLL )
        {
          if ( Length > 0x1000uLL )
            goto LABEL_115;
          ++dword_140CDB954;
          v39 = RtlpInterlockedPopEntrySList(&CmpBounceBufferLookaside);
          if ( !v39 )
          {
            ++dword_140CDB958;
            v39 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _SLIST_HEADER *))qword_140CDB970)(
                                  (unsigned int)dword_140CDB964,
                                  (unsigned int)dword_140CDB96C,
                                  (unsigned int)dword_140CDB968,
                                  &CmpBounceBufferLookaside);
          }
          if ( v39 )
          {
            memset(v39, 0, Length);
            v86 |= 1u;
            Src[1] = v39;
          }
          else
          {
LABEL_115:
            TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(v29, Length, 0x42424D43u);
            v41 = TransientPoolWithQuotaTag;
            if ( !TransientPoolWithQuotaTag )
            {
              v17 = -1073741670;
              goto LABEL_67;
            }
            memset(TransientPoolWithQuotaTag, 0, Length);
            Src[1] = v41;
          }
        }
        else
        {
          memset(v87, 0, Length);
          Src[1] = v87;
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
    v47 = v17;
    if ( v17 >= 0 )
    {
      if ( !v61 )
        goto LABEL_69;
      v83 = DestinationString;
      ValueKey = CmQueryValueKey((__int64)v61, &v83.Length, v52, (size_t)Src[1], Length, (__int64)&Size);
      v17 = ValueKey;
      v47 = ValueKey;
      if ( ValueKey >= 0 || ValueKey == -1073741789 || ValueKey == -2147483643 )
      {
LABEL_73:
        v32 = Size;
        *v27 = Size;
        if ( v17 != -1073741789 )
        {
          if ( v32 < Length )
            v10 = v32;
          if ( Src[0] != Src[1] )
            memmove(Src[0], Src[1], v10);
        }
        DmaOperations = v54;
        goto LABEL_79;
      }
      if ( ValueKey == -1073741772 )
      {
LABEL_69:
        v84 = DestinationString;
        v31 = CmQueryValueKey((__int64)DmaAdapter, &v84.Length, v52, (size_t)Src[1], Length, (__int64)&Size);
        v17 = v31;
        v47 = v31;
        if ( v31 < 0 && v31 != -2147483643 && v31 != -1073741789 )
          goto LABEL_72;
        goto LABEL_73;
      }
    }
LABEL_72:
    DmaOperations = v54;
    goto LABEL_79;
  }
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock);
  v27 = v59;
  if ( IsResourceAcquiredSharedLite )
    goto LABEL_58;
  *(_QWORD *)&v69 = DmaAdapter;
  *((_QWORD *)&v69 + 1) = &DestinationString;
  LODWORD(v70) = v52;
  *((_QWORD *)&v70 + 1) = KeyValueInformation;
  LODWORD(v71) = Length;
  *((_QWORD *)&v71 + 1) = v59;
  v28 = CmpCallCallBacksEx(8u, (__int64)&v69, 0LL, 1, 0x17u, (__int64)DmaAdapter, (__int64)v62);
  v17 = v28;
  v47 = v28;
  if ( v28 >= 0 )
  {
    v48 = 1;
    goto LABEL_58;
  }
  DmaOperations = v54;
  if ( v28 == -1073740541 )
  {
    v17 = 0;
    v47 = 0;
  }
LABEL_79:
  if ( v61 )
    HalPutDmaAdapter(v61);
  if ( v48 )
  {
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v62[0] != v62 )
    {
      v76 = 0;
      v79 = 0LL;
      v80 = 0LL;
      v81 = 0;
      v74 = DmaAdapter;
      v75 = v17;
      v78 = v17;
      v77 = &v69;
      CmpCallCallBacksEx(0x17u, (__int64)&v74, 0LL, 0, 0x17u, (__int64)DmaAdapter, (__int64)v62);
      v17 = v78;
    }
    v47 = v17;
  }
  if ( v49 )
  {
    v33 = KeGetCurrentThread();
    v34 = v33->KernelApcDisable++ == -1;
    if ( v34
      && ($C459BD0D405E8E46662177FB3D0A143F *)v33->ApcState.ApcListHead[0].Flink != &v33->152
      && !v33->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v17 = v47;
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v87 )
  {
    if ( (v86 & 1) != 0 )
    {
      ++dword_140CDB95C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_140CDB950 )
      {
        ++dword_140CDB960;
        ((void (__fastcall *)(void *, _SLIST_HEADER *))qword_140CDB978)(Src[1], &CmpBounceBufferLookaside);
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
      v91,
      (unsigned int)v17,
      (unsigned int)v52,
      DmaOperations,
      &DestinationString);
  }
  if ( Privileges && Privileges != (PPRIVILEGE_SET)v99 )
    CmSiFreeMemory(Privileges);
  if ( v51 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v35, v36, v37);
    return v47;
  }
  return v17;
}
