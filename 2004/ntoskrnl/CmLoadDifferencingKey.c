/*
 * XREFs of CmLoadDifferencingKey @ 0x140650EAC
 * Callers:
 *     NtLoadKey3 @ 0x1405C73B0 (NtLoadKey3.c)
 *     VrpLoadDifferencingHive @ 0x1405CC858 (VrpLoadDifferencingHive.c)
 *     NtLoadKeyEx @ 0x140650E40 (NtLoadKeyEx.c)
 *     NtLoadKey2 @ 0x14076F740 (NtLoadKey2.c)
 *     VrpPreLoadKey @ 0x14088029C (VrpPreLoadKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402036B8 (CmpFreeTransientPoolWithTag.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140297D80 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14029BBE0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmLoadAppKey @ 0x1405DE288 (CmLoadAppKey.c)
 *     CmObReferenceObjectByHandle @ 0x1405E3EAC (CmObReferenceObjectByHandle.c)
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 *     CmpCallCallBacksEx @ 0x1405F1510 (CmpCallCallBacksEx.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     CmpTraceHiveLoadStop @ 0x140651A6C (CmpTraceHiveLoadStop.c)
 *     CmpTraceHiveLoadStart @ 0x140651AC8 (CmpTraceHiveLoadStart.c)
 *     CmConvertHandleToKernelHandle @ 0x140651B44 (CmConvertHandleToKernelHandle.c)
 *     CmpNameFromAttributes @ 0x140651BEC (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x140651F20 (CmCheckNoTxContext.c)
 *     ObDeleteCapturedInsertInfo @ 0x140652520 (ObDeleteCapturedInsertInfo.c)
 *     CmReleaseLoadKeyContext @ 0x1406525A0 (CmReleaseLoadKeyContext.c)
 *     CmLoadKey @ 0x1406525D0 (CmLoadKey.c)
 *     ObOpenObjectByPointer @ 0x140667220 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByName @ 0x140668760 (ObReferenceObjectByName.c)
 *     CmpReleaseShutdownRundown @ 0x1406941E0 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x140694400 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x140695430 (CmpAcquireShutdownRundown.c)
 *     CmPostCallbackNotificationEx @ 0x140696470 (CmPostCallbackNotificationEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmLoadDifferencingKey(
        __int64 a1,
        void *a2,
        unsigned int a3,
        void *a4,
        void *a5,
        ACCESS_MASK DesiredAccess,
        HANDLE *a7,
        int a8,
        void *a9,
        char a10,
        void *a11,
        KPROCESSOR_MODE PreviousMode)
{
  char v14; // r13
  char v15; // r15
  __int64 v16; // rdx
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // r8d
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned int Length; // esi
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  wchar_t *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // eax
  int v38; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  struct _DMA_ADAPTER *v40; // rbx
  int AccessMode; // [rsp+28h] [rbp-350h]
  char v42; // [rsp+60h] [rbp-318h]
  char v43; // [rsp+63h] [rbp-315h]
  char v44; // [rsp+64h] [rbp-314h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp-308h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp-300h] BYREF
  void *v47[2]; // [rsp+80h] [rbp-2F8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-2E8h] BYREF
  HANDLE *v49; // [rsp+A0h] [rbp-2D8h]
  PADAPTER_OBJECT v50; // [rsp+A8h] [rbp-2D0h]
  PADAPTER_OBJECT v51; // [rsp+B0h] [rbp-2C8h]
  PADAPTER_OBJECT v52; // [rsp+B8h] [rbp-2C0h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-2B8h]
  HANDLE v54; // [rsp+C8h] [rbp-2B0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+D0h] [rbp-2A8h]
  unsigned int v56; // [rsp+D8h] [rbp-2A0h]
  UNICODE_STRING v57; // [rsp+E0h] [rbp-298h] BYREF
  PVOID v58; // [rsp+F0h] [rbp-288h] BYREF
  PVOID v59; // [rsp+F8h] [rbp-280h] BYREF
  HANDLE Handle; // [rsp+100h] [rbp-278h] BYREF
  HANDLE v61; // [rsp+108h] [rbp-270h]
  PVOID v62; // [rsp+110h] [rbp-268h] BYREF
  _QWORD v63[2]; // [rsp+118h] [rbp-260h] BYREF
  HANDLE v64[2]; // [rsp+128h] [rbp-250h] BYREF
  __int128 v65; // [rsp+138h] [rbp-240h]
  __int128 v66; // [rsp+148h] [rbp-230h]
  _SLIST_ENTRY v67; // [rsp+158h] [rbp-220h] BYREF
  __int64 v68; // [rsp+168h] [rbp-210h]
  int v69; // [rsp+170h] [rbp-208h]
  void *v70; // [rsp+178h] [rbp-200h]
  void *v71; // [rsp+180h] [rbp-1F8h]
  HANDLE v72; // [rsp+188h] [rbp-1F0h]
  UNICODE_STRING v73; // [rsp+190h] [rbp-1E8h]
  _QWORD v74[12]; // [rsp+1A0h] [rbp-1D8h] BYREF
  _OWORD v75[19]; // [rsp+200h] [rbp-178h] BYREF

  v70 = a4;
  Object = a2;
  v56 = a3;
  v61 = a5;
  v49 = a7;
  v71 = a9;
  v72 = a11;
  *(_OWORD *)v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  DestinationString = 0LL;
  v57 = 0LL;
  v47[0] = 0LL;
  Handle = 0LL;
  v43 = 0;
  v69 = 0;
  v14 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v44 = 0;
  RtlInitUnicodeString(&v57, 0LL);
  DmaAdapter = 0LL;
  BugCheckParameter4 = 0LL;
  v52 = 0LL;
  v54 = 0LL;
  v51 = 0LL;
  Privileges = 0LL;
  memset(v75, 0, 0x128uLL);
  LODWORD(v75[6]) = -1;
  *((_QWORD *)&v75[9] + 1) = &v75[9];
  *(_QWORD *)&v75[9] = &v75[9];
  memset((char *)&v75[13] + 8, 0, 0x50uLL);
  v50 = 0LL;
  v15 = CmpAcquireShutdownRundown();
  v42 = v15;
  if ( v15 )
  {
    if ( (a3 & 0xFFFF000B) != 0 || a9 && (a3 & 0xFFFF9EFF) != 0 )
      goto LABEL_113;
    if ( !a10 )
      goto LABEL_5;
    if ( a9 )
    {
      if ( (a3 & 0x4000) == 0 )
      {
LABEL_113:
        v17 = -1073741583;
        goto LABEL_13;
      }
LABEL_5:
      if ( (a3 & 0x1000) != 0 && (a3 & 0x600) != 0x600 )
        goto LABEL_113;
      v17 = CmCheckNoTxContext();
      if ( v17 < 0 )
        goto LABEL_13;
      if ( (a3 & 0x10) == 0 && !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
      {
        v17 = -1073741727;
        goto LABEL_12;
      }
      if ( (a3 & 0x810) != 0 )
      {
        if ( v49 )
        {
          if ( (a3 & 0x444) != 0 && (a3 & 0x10) != 0 )
          {
            v17 = -1073741583;
            goto LABEL_12;
          }
LABEL_41:
          LOBYTE(v16) = PreviousMode;
          v17 = CmpNameFromAttributes(Object, v16, &v57);
          if ( v17 >= 0 )
          {
            if ( PreviousMode == 1 )
            {
              if ( (a1 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (a3 & 0x810) != 0 )
              {
                v22 = (__int64)v49;
                if ( (unsigned __int64)v49 >= 0x7FFFFFFF0000LL )
                  v22 = 0x7FFFFFFF0000LL;
                *(_QWORD *)v22 = 0LL;
              }
            }
            *(_OWORD *)v64 = *(_OWORD *)a1;
            v65 = *(_OWORD *)(a1 + 16);
            v66 = *(_OWORD *)(a1 + 32);
            if ( (a3 & 0x10) != 0 && v64[1] )
            {
              v17 = -1073741585;
              goto LABEL_13;
            }
            if ( PreviousMode == 1 )
            {
              v73 = 0LL;
              v23 = v65;
              if ( (unsigned __int64)v65 >= 0x7FFFFFFF0000LL )
                v23 = 0x7FFFFFFF0000LL;
              v24 = *(_DWORD *)v23;
              *(_DWORD *)&v73.Length = v24;
              v25 = *(_QWORD *)(v23 + 8);
              v73.Buffer = (wchar_t *)v25;
              DestinationString = v73;
              if ( (_WORD)v24 )
              {
                if ( (v25 & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v26 = v25 + (unsigned __int16)v24;
                if ( v26 > 0x7FFFFFFF0000LL || v26 < v25 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
            }
            else
            {
              DestinationString = *(UNICODE_STRING *)*(_QWORD *)(a1 + 16);
            }
            Length = DestinationString.Length;
            if ( DestinationString.Length )
            {
              TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(
                                                                     0x7FFFFFFF0000LL,
                                                                     DestinationString.Length,
                                                                     0x6B624D43u);
              Privileges = TransientPoolWithQuotaTag;
              if ( !TransientPoolWithQuotaTag )
              {
                v17 = -1073741670;
                v14 = 0;
                goto LABEL_13;
              }
              v29 = (wchar_t *)TransientPoolWithQuotaTag;
              memmove(TransientPoolWithQuotaTag, DestinationString.Buffer, Length);
              DestinationString.Length = Length;
              DestinationString.MaximumLength = Length;
              DestinationString.Buffer = v29;
              v14 = 0;
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, 0LL);
            }
            *(_QWORD *)&v65 = &DestinationString;
            *(_QWORD *)&v66 = 0LL;
            if ( !v70 || (v17 = CmObReferenceObjectByHandle(v70, 0, v31, PreviousMode, &DmaAdapter, 0LL), v17 >= 0) )
            {
              if ( !v61
                || (v62 = 0LL,
                    v17 = ObReferenceObjectByHandle(v61, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v62, 0LL),
                    v51 = (PADAPTER_OBJECT)v62,
                    v17 >= 0) )
              {
                if ( !v71 || (v17 = CmObReferenceObjectByHandle(v71, 0, v31, PreviousMode, &v52, 0LL), v17 >= 0) )
                {
                  if ( v72 )
                  {
                    v58 = 0LL;
                    v17 = ObReferenceObjectByHandle(v72, 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v58, 0LL);
                    v50 = (PADAPTER_OBJECT)v58;
                    if ( v17 < 0 )
                      goto LABEL_12;
                    if ( *((_DWORD *)v58 + 48) != 2 )
                    {
                      v17 = -1073741656;
                      goto LABEL_12;
                    }
                  }
                  CurrentThread = KeGetCurrentThread();
                  --CurrentThread->KernelApcDisable;
                  v44 = 1;
                  LOBYTE(v31) = PreviousMode;
                  v17 = CmConvertHandleToKernelHandle(v64[1], v30, v31, 131097LL, &v54);
                  if ( v17 >= 0 )
                  {
                    v64[1] = v54;
                    v33 = 0LL;
                    memset(v74, 0, sizeof(v74));
                    v67 = 0LL;
                    v68 = 0LL;
                    v63[1] = v63;
                    v63[0] = v63;
                    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
                    {
                      if ( v64[1] )
                      {
                        v59 = 0LL;
                        ObReferenceObjectByHandle(v64[1], 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v59, 0LL);
                        v33 = (struct _DMA_ADAPTER *)v59;
                      }
                      v74[10] = 2LL;
                      v74[0] = v33;
                      v74[1] = &DestinationString;
                      v74[2] = &v57;
                      LODWORD(v74[3]) = a3;
                      v74[4] = DmaAdapter;
                      v74[5] = v51;
                      LODWORD(v74[6]) = DesiredAccess;
                      v74[7] = v49;
                      v74[11] = v50;
                      v67.Next = (_SLIST_ENTRY *)v74;
                      *((_QWORD *)&v67.Next + 1) = v52;
                      LOBYTE(v68) = a10;
                      v17 = CmpCallCallBacksEx(0x20u, (__int64)v74, &v67, 1, 0x21u, 0LL, (__int64)v63);
                    }
                    if ( v17 < 0 )
                    {
                      if ( v17 == -1073740541 )
                      {
                        v17 = 0;
                        v43 = 1;
                      }
                    }
                    else
                    {
                      CmpTraceHiveLoadStart(&v57, a3);
                      v14 = 1;
                      if ( (a3 & 0x10) != 0 )
                      {
                        CmpReleaseShutdownRundown(v35, v34, v36);
                        v42 = 0;
                        v37 = CmLoadAppKey(
                                v64,
                                &v57,
                                a3,
                                (__int64)DmaAdapter,
                                (__int64)v51,
                                (POBJECT_HANDLE_INFORMATION)v50,
                                PreviousMode,
                                v47,
                                &BugCheckParameter4);
                      }
                      else
                      {
                        LOBYTE(AccessMode) = a10;
                        v37 = CmLoadKey(
                                v64,
                                &v57,
                                a3,
                                DmaAdapter,
                                v52,
                                AccessMode,
                                v51,
                                v50,
                                PreviousMode,
                                v47,
                                &BugCheckParameter4);
                      }
                      v17 = CmPostCallbackNotificationEx(
                              33,
                              (_DWORD)v33,
                              v37,
                              (unsigned int)v74,
                              (__int64)&v67,
                              (__int64)v63);
                    }
                    if ( v33 )
                      HalPutDmaAdapter(v33);
                    if ( DmaAdapter )
                    {
                      HalPutDmaAdapter(DmaAdapter);
                      DmaAdapter = 0LL;
                    }
                    if ( v17 >= 0 && (a3 & 0x810) != 0 && !v43 )
                    {
                      Object = 0LL;
                      v38 = v75[0];
                      if ( (a3 & 0x10) != 0 )
                        v38 = 64;
                      LODWORD(v75[0]) = v38;
                      p_DestinationString = &DestinationString;
                      if ( v47[0] )
                        p_DestinationString = (UNICODE_STRING *)v47[0];
                      v47[0] = p_DestinationString;
                      v17 = ObReferenceObjectByName(p_DestinationString, 64LL, 0LL);
                      if ( v17 >= 0 )
                      {
                        v40 = (struct _DMA_ADAPTER *)Object;
                        ObDeleteCapturedInsertInfo(Object);
                        v17 = ObOpenObjectByPointer(
                                v40,
                                PreviousMode != 0 ? 64 : 576,
                                0LL,
                                DesiredAccess,
                                (POBJECT_TYPE)CmKeyObjectType,
                                PreviousMode,
                                &Handle);
                        HalPutDmaAdapter(v40);
                        if ( v17 >= 0 )
                          *v49 = Handle;
                      }
                      if ( BugCheckParameter4 )
                      {
                        if ( (a3 & 0x10) != 0 )
                        {
                          CmReleaseLoadKeyContext(BugCheckParameter4);
                        }
                        else
                        {
                          CmpLockRegistry();
                          CmpDereferenceKeyControlBlock(BugCheckParameter4);
                          CmpUnlockRegistry();
                        }
                        BugCheckParameter4 = 0LL;
                      }
                      if ( v17 < 0 && (a3 & 0x800) != 0 )
                        v17 = 0;
                    }
                  }
                }
              }
            }
          }
LABEL_12:
          v15 = v42;
          goto LABEL_13;
        }
      }
      else if ( !v49 )
      {
        if ( v61 )
        {
          v17 = -1073741581;
          goto LABEL_12;
        }
        goto LABEL_41;
      }
      v17 = -1073741579;
      goto LABEL_12;
    }
    v17 = -1073741576;
  }
  else
  {
    v17 = -1073741431;
  }
LABEL_13:
  if ( BugCheckParameter4 )
    CmReleaseLoadKeyContext(BugCheckParameter4);
  if ( v47[0] && v47[0] != &DestinationString )
    CmpFreeTransientPoolWithTag(v47[0], 0x624E4D43u);
  if ( v54 )
    ZwClose(v54);
  if ( v44 )
    KeLeaveCriticalRegion();
  if ( v50 )
    HalPutDmaAdapter(v50);
  if ( v52 )
    HalPutDmaAdapter(v52);
  if ( v51 )
    HalPutDmaAdapter(v51);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v57.Buffer )
    ExFreePoolWithTag(v57.Buffer, 0);
  CmpCleanupParseContext(v75, 0LL);
  if ( v15 )
    CmpReleaseShutdownRundown(v19, v18, v20);
  if ( v14 )
    CmpTraceHiveLoadStop((unsigned int)v17);
  return (unsigned int)v17;
}
