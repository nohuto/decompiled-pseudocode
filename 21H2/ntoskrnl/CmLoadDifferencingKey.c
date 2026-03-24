/*
 * XREFs of CmLoadDifferencingKey @ 0x14066E58C
 * Callers:
 *     NtLoadKey3 @ 0x1405CC3B0 (NtLoadKey3.c)
 *     VrpLoadDifferencingHive @ 0x1405D5E44 (VrpLoadDifferencingHive.c)
 *     NtLoadKeyEx @ 0x14066E520 (NtLoadKeyEx.c)
 *     NtLoadKey2 @ 0x140781B20 (NtLoadKey2.c)
 *     VrpPreLoadKey @ 0x14088338C (VrpPreLoadKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     CmpFreeTransientPoolWithTag @ 0x140206FA8 (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14027EF58 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14034FE80 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140655680 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x140655A80 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x140656AB0 (CmpAcquireShutdownRundown.c)
 *     ObReferenceObjectByName @ 0x140661100 (ObReferenceObjectByName.c)
 *     CmObReferenceObjectByHandle @ 0x14066461C (CmObReferenceObjectByHandle.c)
 *     CmpTraceHiveLoadStop @ 0x14066F14C (CmpTraceHiveLoadStop.c)
 *     CmpTraceHiveLoadStart @ 0x14066F1A8 (CmpTraceHiveLoadStart.c)
 *     CmConvertHandleToKernelHandle @ 0x14066F224 (CmConvertHandleToKernelHandle.c)
 *     CmpNameFromAttributes @ 0x14066F2CC (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x14066F600 (CmCheckNoTxContext.c)
 *     CmLoadAppKey @ 0x14066FEEC (CmLoadAppKey.c)
 *     ObDeleteCapturedInsertInfo @ 0x140671F50 (ObDeleteCapturedInsertInfo.c)
 *     CmReleaseLoadKeyContext @ 0x140671FD0 (CmReleaseLoadKeyContext.c)
 *     CmLoadKey @ 0x1406BA714 (CmLoadKey.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1406F3440 (CmpCallCallBacksEx.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     CmPostCallbackNotificationEx @ 0x1406F8480 (CmPostCallbackNotificationEx.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406FB610 (CmpDereferenceKeyControlBlock.c)
 *     ObOpenObjectByPointer @ 0x140706880 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  BOOLEAN v15; // r15
  __int64 v16; // rdx
  int v17; // esi
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // r8d
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned int Length; // esi
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  wchar_t *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v30; // rbx
  int v31; // r9d
  int v32; // eax
  int v33; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  struct _DMA_ADAPTER *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  int AccessMode; // [rsp+28h] [rbp-350h]
  int Handle; // [rsp+30h] [rbp-348h]
  BOOLEAN v40; // [rsp+60h] [rbp-318h]
  char v41; // [rsp+63h] [rbp-315h]
  char v42; // [rsp+64h] [rbp-314h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp-308h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-300h] BYREF
  void *v45[2]; // [rsp+80h] [rbp-2F8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-2E8h] BYREF
  HANDLE *v47; // [rsp+A0h] [rbp-2D8h]
  PADAPTER_OBJECT v48; // [rsp+A8h] [rbp-2D0h]
  PADAPTER_OBJECT v49; // [rsp+B0h] [rbp-2C8h]
  PADAPTER_OBJECT v50; // [rsp+B8h] [rbp-2C0h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-2B8h] BYREF
  HANDLE v52; // [rsp+C8h] [rbp-2B0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+D0h] [rbp-2A8h]
  unsigned int v54; // [rsp+D8h] [rbp-2A0h]
  UNICODE_STRING v55; // [rsp+E0h] [rbp-298h] BYREF
  PVOID v56; // [rsp+F0h] [rbp-288h] BYREF
  PVOID v57; // [rsp+F8h] [rbp-280h] BYREF
  HANDLE v58; // [rsp+100h] [rbp-278h] BYREF
  HANDLE v59; // [rsp+108h] [rbp-270h]
  PVOID v60; // [rsp+110h] [rbp-268h] BYREF
  _QWORD v61[2]; // [rsp+118h] [rbp-260h] BYREF
  HANDLE v62[2]; // [rsp+128h] [rbp-250h] BYREF
  __int128 v63; // [rsp+138h] [rbp-240h]
  __int128 v64; // [rsp+148h] [rbp-230h]
  __int128 v65; // [rsp+158h] [rbp-220h] BYREF
  __int64 v66; // [rsp+168h] [rbp-210h]
  int v67; // [rsp+170h] [rbp-208h]
  void *v68; // [rsp+178h] [rbp-200h]
  void *v69; // [rsp+180h] [rbp-1F8h]
  HANDLE v70; // [rsp+188h] [rbp-1F0h]
  UNICODE_STRING v71; // [rsp+190h] [rbp-1E8h]
  _QWORD v72[12]; // [rsp+1A0h] [rbp-1D8h] BYREF
  _OWORD v73[19]; // [rsp+200h] [rbp-178h] BYREF

  v68 = a4;
  Object = a2;
  v54 = a3;
  v59 = a5;
  v47 = a7;
  v69 = a9;
  v70 = a11;
  *(_OWORD *)v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  DestinationString = 0LL;
  v55 = 0LL;
  v45[0] = 0LL;
  v58 = 0LL;
  v41 = 0;
  v67 = 0;
  v14 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v42 = 0;
  RtlInitUnicodeString(&v55, 0LL);
  DmaAdapter = 0LL;
  BugCheckParameter2 = 0LL;
  v50 = 0LL;
  v52 = 0LL;
  v49 = 0LL;
  Privileges = 0LL;
  memset(v73, 0, 0x128uLL);
  LODWORD(v73[6]) = -1;
  *((_QWORD *)&v73[9] + 1) = &v73[9];
  *(_QWORD *)&v73[9] = &v73[9];
  memset((char *)&v73[13] + 8, 0, 0x50uLL);
  v48 = 0LL;
  v15 = CmpAcquireShutdownRundown();
  v40 = v15;
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
        if ( v47 )
        {
          if ( (a3 & 0x444) != 0 && (a3 & 0x10) != 0 )
          {
            v17 = -1073741583;
            goto LABEL_12;
          }
LABEL_41:
          LOBYTE(v16) = PreviousMode;
          v17 = CmpNameFromAttributes(Object, v16, &v55);
          if ( v17 >= 0 )
          {
            if ( PreviousMode == 1 )
            {
              if ( (a1 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (a3 & 0x810) != 0 )
              {
                v19 = (__int64)v47;
                if ( (unsigned __int64)v47 >= 0x7FFFFFFF0000LL )
                  v19 = 0x7FFFFFFF0000LL;
                *(_QWORD *)v19 = 0LL;
              }
            }
            *(_OWORD *)v62 = *(_OWORD *)a1;
            v63 = *(_OWORD *)(a1 + 16);
            v64 = *(_OWORD *)(a1 + 32);
            if ( (a3 & 0x10) != 0 && v62[1] )
            {
              v17 = -1073741585;
              goto LABEL_13;
            }
            if ( PreviousMode == 1 )
            {
              v71 = 0LL;
              v20 = v63;
              if ( (unsigned __int64)v63 >= 0x7FFFFFFF0000LL )
                v20 = 0x7FFFFFFF0000LL;
              v21 = *(_DWORD *)v20;
              *(_DWORD *)&v71.Length = v21;
              v22 = *(_QWORD *)(v20 + 8);
              v71.Buffer = (wchar_t *)v22;
              DestinationString = v71;
              if ( (_WORD)v21 )
              {
                if ( (v22 & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v23 = v22 + (unsigned __int16)v21;
                if ( v23 > 0x7FFFFFFF0000LL || v23 < v22 )
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
              v26 = (wchar_t *)TransientPoolWithQuotaTag;
              memmove(TransientPoolWithQuotaTag, DestinationString.Buffer, Length);
              DestinationString.Length = Length;
              DestinationString.MaximumLength = Length;
              DestinationString.Buffer = v26;
              v14 = 0;
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, 0LL);
            }
            *(_QWORD *)&v63 = &DestinationString;
            *(_QWORD *)&v64 = 0LL;
            if ( !v68 || (v17 = CmObReferenceObjectByHandle(v68, 0, v28, PreviousMode, &DmaAdapter, 0LL), v17 >= 0) )
            {
              if ( !v59
                || (v60 = 0LL,
                    v17 = ObReferenceObjectByHandle(v59, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v60, 0LL),
                    v49 = (PADAPTER_OBJECT)v60,
                    v17 >= 0) )
              {
                if ( !v69 || (v17 = CmObReferenceObjectByHandle(v69, 0, v28, PreviousMode, &v50, 0LL), v17 >= 0) )
                {
                  if ( v70 )
                  {
                    v56 = 0LL;
                    v17 = ObReferenceObjectByHandle(v70, 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v56, 0LL);
                    v48 = (PADAPTER_OBJECT)v56;
                    if ( v17 < 0 )
                      goto LABEL_12;
                    if ( *((_DWORD *)v56 + 48) != 2 )
                    {
                      v17 = -1073741656;
                      goto LABEL_12;
                    }
                  }
                  CurrentThread = KeGetCurrentThread();
                  --CurrentThread->KernelApcDisable;
                  v42 = 1;
                  LOBYTE(v28) = PreviousMode;
                  v17 = CmConvertHandleToKernelHandle(v62[1], v27, v28, 131097LL, &v52);
                  if ( v17 >= 0 )
                  {
                    v62[1] = v52;
                    v30 = 0LL;
                    memset(v72, 0, sizeof(v72));
                    v65 = 0LL;
                    v66 = 0LL;
                    v61[1] = v61;
                    v61[0] = v61;
                    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
                    {
                      if ( v62[1] )
                      {
                        v57 = 0LL;
                        ObReferenceObjectByHandle(v62[1], 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v57, 0LL);
                        v30 = (struct _DMA_ADAPTER *)v57;
                      }
                      v72[10] = 2LL;
                      v72[0] = v30;
                      v72[1] = &DestinationString;
                      v72[2] = &v55;
                      LODWORD(v72[3]) = a3;
                      v72[4] = DmaAdapter;
                      v72[5] = v49;
                      LODWORD(v72[6]) = DesiredAccess;
                      v72[7] = v47;
                      v72[11] = v48;
                      *(_QWORD *)&v65 = v72;
                      *((_QWORD *)&v65 + 1) = v50;
                      LOBYTE(v66) = a10;
                      LOBYTE(v31) = 1;
                      v17 = CmpCallCallBacksEx(32, (unsigned int)v72, (unsigned int)&v65, v31, 33, 0LL, (__int64)v61);
                    }
                    if ( v17 < 0 )
                    {
                      if ( v17 == -1073740541 )
                      {
                        v17 = 0;
                        v41 = 1;
                      }
                    }
                    else
                    {
                      CmpTraceHiveLoadStart(&v55, a3);
                      v14 = 1;
                      if ( (a3 & 0x10) != 0 )
                      {
                        CmpReleaseShutdownRundown();
                        v40 = 0;
                        LOBYTE(Handle) = PreviousMode;
                        v32 = CmLoadAppKey(v62, &v55, a3, DmaAdapter, v49, v48, Handle, v45, &BugCheckParameter2);
                      }
                      else
                      {
                        LOBYTE(AccessMode) = a10;
                        v32 = CmLoadKey(
                                v62,
                                &v55,
                                a3,
                                DmaAdapter,
                                v50,
                                AccessMode,
                                v49,
                                v48,
                                PreviousMode,
                                v45,
                                &BugCheckParameter2);
                      }
                      v17 = CmPostCallbackNotificationEx(
                              33,
                              (_DWORD)v30,
                              v32,
                              (unsigned int)v72,
                              (__int64)&v65,
                              (__int64)v61);
                    }
                    if ( v30 )
                      HalPutDmaAdapter(v30);
                    if ( DmaAdapter )
                    {
                      HalPutDmaAdapter(DmaAdapter);
                      DmaAdapter = 0LL;
                    }
                    if ( v17 >= 0 && (a3 & 0x810) != 0 && !v41 )
                    {
                      Object = 0LL;
                      v33 = v73[0];
                      if ( (a3 & 0x10) != 0 )
                        v33 = 64;
                      LODWORD(v73[0]) = v33;
                      p_DestinationString = &DestinationString;
                      if ( v45[0] )
                        p_DestinationString = (UNICODE_STRING *)v45[0];
                      v45[0] = p_DestinationString;
                      v17 = ObReferenceObjectByName(
                              (unsigned __int64)p_DestinationString,
                              64LL,
                              0LL,
                              0,
                              (__int64)CmKeyObjectType,
                              0,
                              (__int64)v73,
                              (PADAPTER_OBJECT *)&Object);
                      if ( v17 >= 0 )
                      {
                        v35 = (struct _DMA_ADAPTER *)Object;
                        ObDeleteCapturedInsertInfo(Object);
                        v17 = ObOpenObjectByPointer(
                                v35,
                                PreviousMode != 0 ? 64 : 576,
                                0LL,
                                DesiredAccess,
                                (POBJECT_TYPE)CmKeyObjectType,
                                PreviousMode,
                                &v58);
                        HalPutDmaAdapter(v35);
                        if ( v17 >= 0 )
                          *v47 = v58;
                      }
                      if ( BugCheckParameter2 )
                      {
                        if ( (a3 & 0x10) != 0 )
                        {
                          CmReleaseLoadKeyContext(BugCheckParameter2);
                        }
                        else
                        {
                          CmpLockRegistry(BugCheckParameter2);
                          CmpDereferenceKeyControlBlock(BugCheckParameter2);
                          CmpUnlockRegistry(v37, v36);
                        }
                        BugCheckParameter2 = 0LL;
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
          v15 = v40;
          goto LABEL_13;
        }
      }
      else if ( !v47 )
      {
        if ( v59 )
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
  if ( BugCheckParameter2 )
    CmReleaseLoadKeyContext(BugCheckParameter2);
  if ( v45[0] && v45[0] != &DestinationString )
    CmpFreeTransientPoolWithTag(v45[0], 0x624E4D43u);
  if ( v52 )
    ZwClose(v52);
  if ( v42 )
    KeLeaveCriticalRegion();
  if ( v48 )
    HalPutDmaAdapter(v48);
  if ( v50 )
    HalPutDmaAdapter(v50);
  if ( v49 )
    HalPutDmaAdapter(v49);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v55.Buffer )
    ExFreePoolWithTag(v55.Buffer, 0);
  CmpCleanupParseContext((__int64)v73, 0);
  if ( v15 )
    CmpReleaseShutdownRundown();
  if ( v14 )
    CmpTraceHiveLoadStop((unsigned int)v17);
  return (unsigned int)v17;
}
