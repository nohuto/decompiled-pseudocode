/*
 * XREFs of VrpPreLoadKey @ 0x14087EFAC
 * Callers:
 *     VrpRegistryCallback @ 0x1405C9BA0 (VrpRegistryCallback.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140241B50 (EtwActivityIdControl.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     RtlAppendUnicodeToString @ 0x14025BA90 (RtlAppendUnicodeToString.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlAppendUnicodeStringToString @ 0x1402E1FA0 (RtlAppendUnicodeStringToString.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x1405C8F6C (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x1405C92D0 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x1405C944C (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x1405C9524 (VrpCreateNamespaceNode.c)
 *     VrpGetNextToken @ 0x1405CAB08 (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x1405CABF8 (VrpStripTrailingCharacters.c)
 *     VrpBuildKeyPath @ 0x1405CAC34 (VrpBuildKeyPath.c)
 *     CmSetCallbackObjectContext @ 0x1405CB020 (CmSetCallbackObjectContext.c)
 *     VrpAllocateKeyContext @ 0x1405CB214 (VrpAllocateKeyContext.c)
 *     VrpFreeKeyContext @ 0x1405CB270 (VrpFreeKeyContext.c)
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 *     RtlEqualUnicodeString @ 0x140609D30 (RtlEqualUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     CmLoadDifferencingKey @ 0x14068C83C (CmLoadDifferencingKey.c)
 *     RtlStringFromGUIDEx @ 0x14070EF18 (RtlStringFromGUIDEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpPreLoadKey(_QWORD *a1, GUID *a2)
{
  __int64 v4; // r15
  const UNICODE_STRING *v5; // rcx
  UNICODE_STRING *v6; // r13
  int NamespaceNodePlaceholderKey; // esi
  PVOID *v8; // rax
  int v9; // ecx
  PVOID v10; // rax
  GUID *v11; // r15
  const UNICODE_STRING *v12; // rbx
  int v13; // r9d
  wchar_t *Buffer; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // r12
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  ACCESS_MASK v21; // edx
  NTSTATUS v22; // eax
  PVOID v23; // rsi
  UNICODE_STRING *KeyContext; // rax
  PVOID *v25; // rcx
  UNICODE_STRING *p_Destination; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  char v31; // [rsp+60h] [rbp-2B8h]
  int v33; // [rsp+70h] [rbp-2A8h]
  UNICODE_STRING Destination; // [rsp+78h] [rbp-2A0h] BYREF
  PVOID P[2]; // [rsp+88h] [rbp-290h] BYREF
  UNICODE_STRING GuidString; // [rsp+98h] [rbp-280h] BYREF
  UNICODE_STRING Source; // [rsp+A8h] [rbp-270h] BYREF
  int v38; // [rsp+B8h] [rbp-260h]
  int v39; // [rsp+BCh] [rbp-25Ch] BYREF
  int v40; // [rsp+C0h] [rbp-258h] BYREF
  __int64 v41; // [rsp+C8h] [rbp-250h] BYREF
  PVOID Object; // [rsp+D0h] [rbp-248h] BYREF
  UNICODE_STRING *v43; // [rsp+D8h] [rbp-240h]
  __int64 v44; // [rsp+E0h] [rbp-238h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp-230h] BYREF
  HANDLE v46; // [rsp+F0h] [rbp-228h] BYREF
  HANDLE v47; // [rsp+F8h] [rbp-220h] BYREF
  HANDLE v48; // [rsp+100h] [rbp-218h] BYREF
  HANDLE v49; // [rsp+108h] [rbp-210h] BYREF
  UNICODE_STRING String1; // [rsp+110h] [rbp-208h] BYREF
  _QWORD *v51; // [rsp+120h] [rbp-1F8h]
  HANDLE v52; // [rsp+128h] [rbp-1F0h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+130h] [rbp-1E8h]
  GUID *v54; // [rsp+138h] [rbp-1E0h]
  int v55[4]; // [rsp+140h] [rbp-1D8h] BYREF
  __int128 v56; // [rsp+150h] [rbp-1C8h]
  __int128 v57; // [rsp+160h] [rbp-1B8h]
  int v58[4]; // [rsp+170h] [rbp-1A8h] BYREF
  __int128 v59; // [rsp+180h] [rbp-198h]
  __int128 v60; // [rsp+190h] [rbp-188h]
  GUID v61; // [rsp+1A0h] [rbp-178h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1B0h] [rbp-168h] BYREF
  _DWORD *v63; // [rsp+1D0h] [rbp-148h]
  __int64 v64; // [rsp+1D8h] [rbp-140h]
  PVOID v65; // [rsp+1E0h] [rbp-138h]
  _DWORD v66[2]; // [rsp+1E8h] [rbp-130h] BYREF
  _DWORD *v67; // [rsp+1F0h] [rbp-128h]
  __int64 v68; // [rsp+1F8h] [rbp-120h]
  wchar_t *v69; // [rsp+200h] [rbp-118h]
  _DWORD v70[2]; // [rsp+208h] [rbp-110h] BYREF
  int *v71; // [rsp+210h] [rbp-108h]
  __int64 v72; // [rsp+218h] [rbp-100h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+220h] [rbp-F8h] BYREF
  _DWORD *v74; // [rsp+240h] [rbp-D8h]
  __int64 v75; // [rsp+248h] [rbp-D0h]
  PVOID v76; // [rsp+250h] [rbp-C8h]
  _DWORD v77[2]; // [rsp+258h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+260h] [rbp-B8h] BYREF
  int *v79; // [rsp+280h] [rbp-98h]
  __int64 v80; // [rsp+288h] [rbp-90h]
  char v81; // [rsp+290h] [rbp-88h] BYREF

  v51 = a1;
  v54 = a2;
  *(_OWORD *)P = 0LL;
  *(_QWORD *)&GuidString.Length = 5111808LL;
  *(_OWORD *)v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  Destination = 0LL;
  *(_OWORD *)v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  Source = 0LL;
  String1 = 0LL;
  v61 = 0LL;
  EtwActivityIdControl(3u, &v61);
  v4 = *a1;
  GuidString.Buffer = (wchar_t *)&v81;
  v31 = 0;
  v33 = 0;
  v5 = *(const UNICODE_STRING **)(v4 + 72);
  v44 = 0LL;
  v41 = 0LL;
  Handle = 0LL;
  v46 = 0LL;
  v49 = 0LL;
  DmaAdapter = 0LL;
  v52 = 0LL;
  v6 = 0LL;
  v43 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  if ( v5 )
  {
    NamespaceNodePlaceholderKey = VrpBuildKeyPath(v5 + 1, *(PCUNICODE_STRING *)(v4 + 8), (PUNICODE_STRING)P);
    if ( NamespaceNodePlaceholderKey < 0 )
      goto LABEL_53;
    v31 = 1;
  }
  else
  {
    *(_OWORD *)P = *(_OWORD *)*(_QWORD *)(v4 + 8);
  }
  if ( (unsigned int)dword_140C02168 > 5 )
  {
    v8 = P;
    if ( !P[1] )
      v8 = (PVOID *)&EmptyUnicodeString;
    v9 = *(unsigned __int16 *)v8;
    v10 = v8[1];
    v74 = v77;
    v75 = 2LL;
    v76 = v10;
    v77[0] = v9;
    v77[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02168, (unsigned __int8 *)byte_14002314B, &v61, 0LL, 4u, &v73);
  }
  VrpGetNextToken((unsigned __int16 *)P, &v41, (__int64)&String1);
  if ( !RtlEqualUnicodeString(&String1, &VrpRegistryString, 1u) )
  {
LABEL_10:
    NamespaceNodePlaceholderKey = -1073741790;
    goto LABEL_55;
  }
  VrpGetNextToken((unsigned __int16 *)P, &v41, (__int64)&String1);
  if ( RtlEqualUnicodeString(&String1, &VrpAppString, 1u) || RtlEqualUnicodeString(&String1, &VrpWcString, 1u) )
  {
    NamespaceNodePlaceholderKey = 0;
  }
  else
  {
    if ( (*(_DWORD *)(v4 + 24) & 0x10) != 0 )
    {
      NamespaceNodePlaceholderKey = 0;
      v11 = a2;
      goto LABEL_58;
    }
    v12 = &VrpMachineString;
    if ( !RtlEqualUnicodeString(&String1, &VrpMachineString, 1u) )
    {
      v12 = &VrpUserString;
      if ( !RtlEqualUnicodeString(&String1, &VrpUserString, 1u) )
        goto LABEL_10;
    }
    Source.Buffer = (wchar_t *)((char *)P[1] + 2 * v41);
    Source.Length = LOWORD(P[0]) - 2 * v41;
    Source.MaximumLength = Source.Length;
    VrpStripTrailingCharacters(&Source.Length);
    v13 = 0;
    if ( Source.Length )
    {
      Buffer = Source.Buffer;
      while ( *Buffer != 92 )
      {
        ++v13;
        ++Buffer;
        if ( 2LL * v13 >= (unsigned __int64)Source.Length )
          goto LABEL_22;
      }
      goto LABEL_10;
    }
LABEL_22:
    NamespaceNodePlaceholderKey = RtlStringFromGUIDEx(a2, &GuidString, 0);
    if ( NamespaceNodePlaceholderKey >= 0 )
    {
      ++GuidString.Buffer;
      GuidString.Length -= 4;
      GuidString.MaximumLength -= 4;
      Destination.MaximumLength = Source.Length + v12->Length + GuidString.Length + 40;
      Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x67655256u);
      if ( !Destination.Buffer )
      {
        NamespaceNodePlaceholderKey = -1073741670;
        goto LABEL_55;
      }
      RtlAppendUnicodeStringToString(&Destination, &VrpRootHivePath);
      RtlAppendUnicodeToString(&Destination, L"\\Silo_");
      RtlAppendUnicodeStringToString(&Destination, &GuidString);
      RtlAppendUnicodeToString(&Destination, L"_");
      RtlAppendUnicodeStringToString(&Destination, v12);
      RtlAppendUnicodeToString(&Destination, L"_");
      RtlAppendUnicodeStringToString(&Destination, &Source);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[1], 0LL);
      v33 = 1;
      v38 = 1;
      NamespaceNodePlaceholderKey = VrpCreateNamespaceNode(
                                      (__int64)a2,
                                      (const void **)P,
                                      0LL,
                                      (const void **)&Destination,
                                      0x80000000,
                                      -1,
                                      &v44);
      if ( NamespaceNodePlaceholderKey >= 0 )
      {
        v16 = v44;
        NamespaceNodePlaceholderKey = VrpAddNamespaceNodeToList((unsigned __int64 *)&a2->Data1, v44);
        if ( NamespaceNodePlaceholderKey >= 0 )
        {
          NamespaceNodePlaceholderKey = VrpCreateNamespaceNodePlaceholderKey(v16);
          if ( NamespaceNodePlaceholderKey >= 0 )
          {
            v55[0] = 48;
            *(_QWORD *)&v55[2] = 0LL;
            DWORD2(v56) = 576;
            *(_QWORD *)&v56 = *(_QWORD *)(v4 + 16);
            v57 = 0LL;
            v58[0] = 48;
            *(_QWORD *)&v58[2] = 0LL;
            DWORD2(v59) = 576;
            *(_QWORD *)&v59 = &Destination;
            v60 = 0LL;
            v17 = *(void **)(v4 + 32);
            if ( !v17
              || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                  v17,
                                                  0x200u,
                                                  0LL,
                                                  0,
                                                  (POBJECT_TYPE)CmKeyObjectType,
                                                  0,
                                                  &Handle),
                  NamespaceNodePlaceholderKey >= 0) )
            {
              v18 = *(void **)(v4 + 40);
              if ( !v18
                || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                    v18,
                                                    0x200u,
                                                    0LL,
                                                    2u,
                                                    (POBJECT_TYPE)ExEventObjectType,
                                                    0,
                                                    &v46),
                    NamespaceNodePlaceholderKey >= 0) )
              {
                v19 = (void *)v51[1];
                if ( !v19
                  || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                      v19,
                                                      0x200u,
                                                      0LL,
                                                      0,
                                                      (POBJECT_TYPE)CmKeyObjectType,
                                                      0,
                                                      &v47),
                      NamespaceNodePlaceholderKey >= 0) )
                {
                  if ( *(_QWORD *)(v4 + 80) != 2LL
                    || (v20 = *(void **)(v4 + 88)) == 0LL
                    || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                        v20,
                                                        0x200u,
                                                        0LL,
                                                        0,
                                                        (POBJECT_TYPE)SeTokenObjectType,
                                                        0,
                                                        &v48),
                        NamespaceNodePlaceholderKey >= 0) )
                  {
                    NamespaceNodePlaceholderKey = CmLoadDifferencingKey(
                                                    (__int64)v58,
                                                    v55,
                                                    *(_DWORD *)(v4 + 24),
                                                    Handle,
                                                    v46,
                                                    *(_DWORD *)(v4 + 48),
                                                    (HANDLE *)((unsigned __int64)&v49 & -(__int64)(*(_QWORD *)(v4 + 56) != 0LL)),
                                                    0,
                                                    v47,
                                                    *((_BYTE *)v51 + 16),
                                                    v48,
                                                    0);
                    if ( NamespaceNodePlaceholderKey >= 0 )
                    {
                      if ( *(_QWORD *)(v4 + 56) )
                      {
                        if ( v49 )
                        {
                          v21 = *(_DWORD *)(v4 + 48);
                          Object = 0LL;
                          v22 = ObReferenceObjectByHandle(v49, v21, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
                          v23 = Object;
                          DmaAdapter = (PADAPTER_OBJECT)Object;
                          if ( v22 >= 0 )
                          {
                            KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(a2);
                            v6 = KeyContext;
                            v43 = KeyContext;
                            if ( KeyContext )
                            {
                              if ( (int)VrpBuildKeyPath(0LL, (PCUNICODE_STRING)P, KeyContext + 1) >= 0 )
                              {
                                *(_DWORD *)(&v6[2].MaximumLength + 1) = 0x20000000;
                                if ( CmSetCallbackObjectContext(v23, &VrpCallbackCookie, v6, 0LL) >= 0 )
                                {
                                  v6 = 0LL;
                                  v43 = 0LL;
                                  ObOpenObjectByPointer(
                                    Object,
                                    KeGetCurrentThread()->PreviousMode != 0 ? 64 : 576,
                                    0LL,
                                    *(_DWORD *)(v4 + 48),
                                    (POBJECT_TYPE)CmKeyObjectType,
                                    KeGetCurrentThread()->PreviousMode,
                                    &v52);
                                }
                              }
                            }
                          }
                        }
                        **(_QWORD **)(v4 + 56) = v52;
                      }
                      NamespaceNodePlaceholderKey = -1073740541;
                      if ( (unsigned int)dword_140C02168 > 5 )
                      {
                        v25 = P;
                        if ( !P[1] )
                          v25 = (PVOID *)&EmptyUnicodeString;
                        v63 = v66;
                        v64 = 2LL;
                        v65 = v25[1];
                        v66[0] = *(unsigned __int16 *)v25;
                        v66[1] = 0;
                        p_Destination = &Destination;
                        if ( !Destination.Buffer )
                          p_Destination = (UNICODE_STRING *)&EmptyUnicodeString;
                        v67 = v70;
                        v68 = 2LL;
                        v69 = p_Destination->Buffer;
                        v70[0] = p_Destination->Length;
                        v70[1] = 0;
                        v39 = -1073740541;
                        v71 = &v39;
                        v72 = 4LL;
                        tlgWriteTransfer_EtwWriteTransfer(
                          (__int64)&dword_140C02168,
                          (unsigned __int8 *)word_1400233E2,
                          &v61,
                          0LL,
                          7u,
                          &v62);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_53:
  if ( ((NamespaceNodePlaceholderKey + 0x80000000) & 0x80000000) != 0 || NamespaceNodePlaceholderKey == -1073740541 )
  {
    v11 = a2;
    goto LABEL_58;
  }
LABEL_55:
  v11 = a2;
  if ( v44 )
    VrpDestroyNamespaceNode(a2, v44);
LABEL_58:
  if ( v33 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v11[1], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&v11[1]);
    KeAbPostRelease((ULONG_PTR)&v11[1]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v27, v28, v29);
  }
  if ( ((NamespaceNodePlaceholderKey + 0x80000000) & 0x80000000) == 0
    && NamespaceNodePlaceholderKey != -1073740541
    && (unsigned int)dword_140C02168 > 2 )
  {
    v40 = NamespaceNodePlaceholderKey;
    v79 = &v40;
    v80 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02168, (unsigned __int8 *)word_140023272, &v61, 0LL, 3u, &v78);
  }
  if ( v6 )
    VrpFreeKeyContext((PVOID *)v6);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v46 )
    ObCloseHandle(v46, 0);
  if ( v47 )
    ObCloseHandle(v47, 0);
  if ( v48 )
    ObCloseHandle(v48, 0);
  if ( v49 )
    ObCloseHandle(v49, 0);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v31 == 1 )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x67655256u);
  return (unsigned int)NamespaceNodePlaceholderKey;
}
