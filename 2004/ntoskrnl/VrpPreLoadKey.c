/*
 * XREFs of VrpPreLoadKey @ 0x14088029C
 * Callers:
 *     VrpRegistryCallback @ 0x1405CAF70 (VrpRegistryCallback.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140202B70 (RtlAppendUnicodeToString.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlAppendUnicodeStringToString @ 0x1402721F0 (RtlAppendUnicodeStringToString.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     EtwActivityIdControl @ 0x140277DD0 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x1405CA33C (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x1405CA6A0 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x1405CA81C (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x1405CA8F4 (VrpCreateNamespaceNode.c)
 *     VrpGetNextToken @ 0x1405CBED8 (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x1405CBFC8 (VrpStripTrailingCharacters.c)
 *     VrpBuildKeyPath @ 0x1405CC004 (VrpBuildKeyPath.c)
 *     CmSetCallbackObjectContext @ 0x1405CC3F0 (CmSetCallbackObjectContext.c)
 *     VrpAllocateKeyContext @ 0x1405CC5E4 (VrpAllocateKeyContext.c)
 *     VrpFreeKeyContext @ 0x1405CC640 (VrpFreeKeyContext.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     CmLoadDifferencingKey @ 0x140650EAC (CmLoadDifferencingKey.c)
 *     ObOpenObjectByPointer @ 0x140667220 (ObOpenObjectByPointer.c)
 *     RtlEqualUnicodeString @ 0x140681E80 (RtlEqualUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1406A7C78 (RtlStringFromGUIDEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
  char v28; // [rsp+60h] [rbp-2B8h]
  int v30; // [rsp+70h] [rbp-2A8h]
  UNICODE_STRING Destination; // [rsp+78h] [rbp-2A0h] BYREF
  PVOID P[2]; // [rsp+88h] [rbp-290h] BYREF
  UNICODE_STRING GuidString; // [rsp+98h] [rbp-280h] BYREF
  UNICODE_STRING Source; // [rsp+A8h] [rbp-270h] BYREF
  int v35; // [rsp+B8h] [rbp-260h]
  int v36; // [rsp+BCh] [rbp-25Ch] BYREF
  int v37; // [rsp+C0h] [rbp-258h] BYREF
  __int64 v38; // [rsp+C8h] [rbp-250h] BYREF
  PVOID Object; // [rsp+D0h] [rbp-248h] BYREF
  UNICODE_STRING *v40; // [rsp+D8h] [rbp-240h]
  __int64 v41; // [rsp+E0h] [rbp-238h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp-230h] BYREF
  HANDLE v43; // [rsp+F0h] [rbp-228h] BYREF
  HANDLE v44; // [rsp+F8h] [rbp-220h] BYREF
  HANDLE v45; // [rsp+100h] [rbp-218h] BYREF
  HANDLE v46; // [rsp+108h] [rbp-210h] BYREF
  UNICODE_STRING String1; // [rsp+110h] [rbp-208h] BYREF
  _QWORD *v48; // [rsp+120h] [rbp-1F8h]
  HANDLE v49; // [rsp+128h] [rbp-1F0h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+130h] [rbp-1E8h]
  GUID *v51; // [rsp+138h] [rbp-1E0h]
  int v52[4]; // [rsp+140h] [rbp-1D8h] BYREF
  __int128 v53; // [rsp+150h] [rbp-1C8h]
  __int128 v54; // [rsp+160h] [rbp-1B8h]
  int v55[4]; // [rsp+170h] [rbp-1A8h] BYREF
  __int128 v56; // [rsp+180h] [rbp-198h]
  __int128 v57; // [rsp+190h] [rbp-188h]
  GUID v58; // [rsp+1A0h] [rbp-178h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1B0h] [rbp-168h] BYREF
  _DWORD *v60; // [rsp+1D0h] [rbp-148h]
  __int64 v61; // [rsp+1D8h] [rbp-140h]
  PVOID v62; // [rsp+1E0h] [rbp-138h]
  _DWORD v63[2]; // [rsp+1E8h] [rbp-130h] BYREF
  _DWORD *v64; // [rsp+1F0h] [rbp-128h]
  __int64 v65; // [rsp+1F8h] [rbp-120h]
  wchar_t *v66; // [rsp+200h] [rbp-118h]
  _DWORD v67[2]; // [rsp+208h] [rbp-110h] BYREF
  int *v68; // [rsp+210h] [rbp-108h]
  __int64 v69; // [rsp+218h] [rbp-100h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+220h] [rbp-F8h] BYREF
  _DWORD *v71; // [rsp+240h] [rbp-D8h]
  __int64 v72; // [rsp+248h] [rbp-D0h]
  PVOID v73; // [rsp+250h] [rbp-C8h]
  _DWORD v74[2]; // [rsp+258h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+260h] [rbp-B8h] BYREF
  int *v76; // [rsp+280h] [rbp-98h]
  __int64 v77; // [rsp+288h] [rbp-90h]
  char v78; // [rsp+290h] [rbp-88h] BYREF

  v48 = a1;
  v51 = a2;
  *(_OWORD *)P = 0LL;
  *(_QWORD *)&GuidString.Length = 5111808LL;
  *(_OWORD *)v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  Destination = 0LL;
  *(_OWORD *)v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  Source = 0LL;
  String1 = 0LL;
  v58 = 0LL;
  EtwActivityIdControl(3u, &v58);
  v4 = *a1;
  GuidString.Buffer = (wchar_t *)&v78;
  v28 = 0;
  v30 = 0;
  v5 = *(const UNICODE_STRING **)(v4 + 72);
  v41 = 0LL;
  v38 = 0LL;
  Handle = 0LL;
  v43 = 0LL;
  v46 = 0LL;
  DmaAdapter = 0LL;
  v49 = 0LL;
  v6 = 0LL;
  v40 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  if ( v5 )
  {
    NamespaceNodePlaceholderKey = VrpBuildKeyPath(v5 + 1, *(PCUNICODE_STRING *)(v4 + 8), (PUNICODE_STRING)P);
    if ( NamespaceNodePlaceholderKey < 0 )
      goto LABEL_53;
    v28 = 1;
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
    v71 = v74;
    v72 = 2LL;
    v73 = v10;
    v74[0] = v9;
    v74[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02168, (unsigned __int8 *)byte_140023289, &v58, 0LL, 4u, &v70);
  }
  VrpGetNextToken((unsigned __int16 *)P, &v38, (__int64)&String1);
  if ( !RtlEqualUnicodeString(&String1, &VrpRegistryString, 1u) )
  {
LABEL_10:
    NamespaceNodePlaceholderKey = -1073741790;
    goto LABEL_55;
  }
  VrpGetNextToken((unsigned __int16 *)P, &v38, (__int64)&String1);
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
    Source.Buffer = (wchar_t *)((char *)P[1] + 2 * v38);
    Source.Length = LOWORD(P[0]) - 2 * v38;
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
      v30 = 1;
      v35 = 1;
      NamespaceNodePlaceholderKey = VrpCreateNamespaceNode(
                                      (__int64)a2,
                                      (const void **)P,
                                      0LL,
                                      (const void **)&Destination,
                                      0x80000000,
                                      -1,
                                      &v41);
      if ( NamespaceNodePlaceholderKey >= 0 )
      {
        v16 = v41;
        NamespaceNodePlaceholderKey = VrpAddNamespaceNodeToList((unsigned __int64 *)&a2->Data1, v41);
        if ( NamespaceNodePlaceholderKey >= 0 )
        {
          NamespaceNodePlaceholderKey = VrpCreateNamespaceNodePlaceholderKey(v16);
          if ( NamespaceNodePlaceholderKey >= 0 )
          {
            v52[0] = 48;
            *(_QWORD *)&v52[2] = 0LL;
            DWORD2(v53) = 576;
            *(_QWORD *)&v53 = *(_QWORD *)(v4 + 16);
            v54 = 0LL;
            v55[0] = 48;
            *(_QWORD *)&v55[2] = 0LL;
            DWORD2(v56) = 576;
            *(_QWORD *)&v56 = &Destination;
            v57 = 0LL;
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
                                                    &v43),
                    NamespaceNodePlaceholderKey >= 0) )
              {
                v19 = (void *)v48[1];
                if ( !v19
                  || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                      v19,
                                                      0x200u,
                                                      0LL,
                                                      0,
                                                      (POBJECT_TYPE)CmKeyObjectType,
                                                      0,
                                                      &v44),
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
                                                        &v45),
                        NamespaceNodePlaceholderKey >= 0) )
                  {
                    NamespaceNodePlaceholderKey = CmLoadDifferencingKey(
                                                    (__int64)v55,
                                                    v52,
                                                    *(_DWORD *)(v4 + 24),
                                                    Handle,
                                                    v43,
                                                    *(_DWORD *)(v4 + 48),
                                                    (HANDLE *)((unsigned __int64)&v46 & -(__int64)(*(_QWORD *)(v4 + 56) != 0LL)),
                                                    0,
                                                    v44,
                                                    *((_BYTE *)v48 + 16),
                                                    v45,
                                                    0);
                    if ( NamespaceNodePlaceholderKey >= 0 )
                    {
                      if ( *(_QWORD *)(v4 + 56) )
                      {
                        if ( v46 )
                        {
                          v21 = *(_DWORD *)(v4 + 48);
                          Object = 0LL;
                          v22 = ObReferenceObjectByHandle(v46, v21, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
                          v23 = Object;
                          DmaAdapter = (PADAPTER_OBJECT)Object;
                          if ( v22 >= 0 )
                          {
                            KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(a2);
                            v6 = KeyContext;
                            v40 = KeyContext;
                            if ( KeyContext )
                            {
                              if ( (int)VrpBuildKeyPath(0LL, (PCUNICODE_STRING)P, KeyContext + 1) >= 0 )
                              {
                                *(_DWORD *)(&v6[2].MaximumLength + 1) = 0x20000000;
                                if ( CmSetCallbackObjectContext(v23, &VrpCallbackCookie, v6, 0LL) >= 0 )
                                {
                                  v6 = 0LL;
                                  v40 = 0LL;
                                  ObOpenObjectByPointer(
                                    Object,
                                    KeGetCurrentThread()->PreviousMode != 0 ? 64 : 576,
                                    0LL,
                                    *(_DWORD *)(v4 + 48),
                                    (POBJECT_TYPE)CmKeyObjectType,
                                    KeGetCurrentThread()->PreviousMode,
                                    &v49);
                                }
                              }
                            }
                          }
                        }
                        **(_QWORD **)(v4 + 56) = v49;
                      }
                      NamespaceNodePlaceholderKey = -1073740541;
                      if ( (unsigned int)dword_140C02168 > 5 )
                      {
                        v25 = P;
                        if ( !P[1] )
                          v25 = (PVOID *)&EmptyUnicodeString;
                        v60 = v63;
                        v61 = 2LL;
                        v62 = v25[1];
                        v63[0] = *(unsigned __int16 *)v25;
                        v63[1] = 0;
                        p_Destination = &Destination;
                        if ( !Destination.Buffer )
                          p_Destination = (UNICODE_STRING *)&EmptyUnicodeString;
                        v64 = v67;
                        v65 = 2LL;
                        v66 = p_Destination->Buffer;
                        v67[0] = p_Destination->Length;
                        v67[1] = 0;
                        v36 = -1073740541;
                        v68 = &v36;
                        v69 = 4LL;
                        tlgWriteTransfer_EtwWriteTransfer(
                          (__int64)&dword_140C02168,
                          (unsigned __int8 *)byte_1400234A8,
                          &v58,
                          0LL,
                          7u,
                          &v59);
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
  if ( v41 )
    VrpDestroyNamespaceNode(a2, v41);
LABEL_58:
  if ( v30 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v11[1], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&v11[1]);
    KeAbPostRelease((ULONG_PTR)&v11[1]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( ((NamespaceNodePlaceholderKey + 0x80000000) & 0x80000000) == 0
    && NamespaceNodePlaceholderKey != -1073740541
    && (unsigned int)dword_140C02168 > 2 )
  {
    v37 = NamespaceNodePlaceholderKey;
    v76 = &v37;
    v77 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02168, (unsigned __int8 *)byte_1400232F1, &v58, 0LL, 3u, &v75);
  }
  if ( v6 )
    VrpFreeKeyContext((PVOID *)v6);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v43 )
    ObCloseHandle(v43, 0);
  if ( v44 )
    ObCloseHandle(v44, 0);
  if ( v45 )
    ObCloseHandle(v45, 0);
  if ( v46 )
    ObCloseHandle(v46, 0);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v28 == 1 )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x67655256u);
  return (unsigned int)NamespaceNodePlaceholderKey;
}
