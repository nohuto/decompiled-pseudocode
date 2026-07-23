/*
 * XREFs of CmLoadDifferencingKey @ 0x140664A6C
 * Callers:
 *     NtLoadKey3 @ 0x1405CC3B0 (NtLoadKey3.c)
 *     VrpLoadDifferencingHive @ 0x1405D5E44 (VrpLoadDifferencingHive.c)
 *     NtLoadKeyEx @ 0x140664A00 (NtLoadKeyEx.c)
 *     NtLoadKey2 @ 0x140781CE0 (NtLoadKey2.c)
 *     VrpPreLoadKey @ 0x1408834EC (VrpPreLoadKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14026CEF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmLoadKey @ 0x140619944 (CmLoadKey.c)
 *     CmpReleaseShutdownRundown @ 0x14064A4A0 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x14064A8A0 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x14064B8D0 (CmpAcquireShutdownRundown.c)
 *     ObReferenceObjectByName @ 0x140655F20 (ObReferenceObjectByName.c)
 *     CmObReferenceObjectByHandle @ 0x14065943C (CmObReferenceObjectByHandle.c)
 *     CmpTraceHiveLoadStop @ 0x14066562C (CmpTraceHiveLoadStop.c)
 *     CmpTraceHiveLoadStart @ 0x140665688 (CmpTraceHiveLoadStart.c)
 *     CmConvertHandleToKernelHandle @ 0x140665704 (CmConvertHandleToKernelHandle.c)
 *     CmpNameFromAttributes @ 0x1406657AC (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x140665AE0 (CmCheckNoTxContext.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 *     ObDeleteCapturedInsertInfo @ 0x140667490 (ObDeleteCapturedInsertInfo.c)
 *     CmReleaseLoadKeyContext @ 0x140667510 (CmReleaseLoadKeyContext.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmPostCallbackNotificationEx @ 0x14070F860 (CmPostCallbackNotificationEx.c)
 *     CmpDereferenceKeyControlBlock @ 0x1407129F0 (CmpDereferenceKeyControlBlock.c)
 *     ObOpenObjectByPointer @ 0x14071DC60 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  int Handle; // [rsp+30h] [rbp-348h]
  BOOLEAN v39; // [rsp+60h] [rbp-318h]
  char v40; // [rsp+63h] [rbp-315h]
  char v41; // [rsp+64h] [rbp-314h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp-308h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-300h] BYREF
  void *v44[2]; // [rsp+80h] [rbp-2F8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-2E8h] BYREF
  HANDLE *v46; // [rsp+A0h] [rbp-2D8h]
  PADAPTER_OBJECT v47; // [rsp+A8h] [rbp-2D0h]
  PADAPTER_OBJECT v48; // [rsp+B0h] [rbp-2C8h]
  PADAPTER_OBJECT v49; // [rsp+B8h] [rbp-2C0h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-2B8h] BYREF
  HANDLE v51; // [rsp+C8h] [rbp-2B0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+D0h] [rbp-2A8h]
  unsigned int v53; // [rsp+D8h] [rbp-2A0h]
  UNICODE_STRING v54; // [rsp+E0h] [rbp-298h] BYREF
  PVOID v55; // [rsp+F0h] [rbp-288h] BYREF
  PVOID v56; // [rsp+F8h] [rbp-280h] BYREF
  HANDLE v57; // [rsp+100h] [rbp-278h] BYREF
  HANDLE v58; // [rsp+108h] [rbp-270h]
  PVOID v59; // [rsp+110h] [rbp-268h] BYREF
  _QWORD v60[2]; // [rsp+118h] [rbp-260h] BYREF
  HANDLE v61[2]; // [rsp+128h] [rbp-250h] BYREF
  __int128 v62; // [rsp+138h] [rbp-240h]
  __int128 v63; // [rsp+148h] [rbp-230h]
  __int128 v64; // [rsp+158h] [rbp-220h] BYREF
  __int64 v65; // [rsp+168h] [rbp-210h]
  int v66; // [rsp+170h] [rbp-208h]
  void *v67; // [rsp+178h] [rbp-200h]
  void *v68; // [rsp+180h] [rbp-1F8h]
  HANDLE v69; // [rsp+188h] [rbp-1F0h]
  UNICODE_STRING v70; // [rsp+190h] [rbp-1E8h]
  _QWORD v71[12]; // [rsp+1A0h] [rbp-1D8h] BYREF
  _OWORD v72[19]; // [rsp+200h] [rbp-178h] BYREF

  v67 = a4;
  Object = a2;
  v53 = a3;
  v58 = a5;
  v46 = a7;
  v68 = a9;
  v69 = a11;
  *(_OWORD *)v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  DestinationString = 0LL;
  v54 = 0LL;
  v44[0] = 0LL;
  v57 = 0LL;
  v40 = 0;
  v66 = 0;
  v14 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v41 = 0;
  RtlInitUnicodeString(&v54, 0LL);
  DmaAdapter = 0LL;
  BugCheckParameter2 = 0LL;
  v49 = 0LL;
  v51 = 0LL;
  v48 = 0LL;
  Privileges = 0LL;
  memset(v72, 0, 0x128uLL);
  LODWORD(v72[6]) = -1;
  *((_QWORD *)&v72[9] + 1) = &v72[9];
  *(_QWORD *)&v72[9] = &v72[9];
  memset((char *)&v72[13] + 8, 0, 0x50uLL);
  v47 = 0LL;
  v15 = CmpAcquireShutdownRundown();
  v39 = v15;
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
        if ( v46 )
        {
          if ( (a3 & 0x444) != 0 && (a3 & 0x10) != 0 )
          {
            v17 = -1073741583;
            goto LABEL_12;
          }
LABEL_41:
          LOBYTE(v16) = PreviousMode;
          v17 = CmpNameFromAttributes(Object, v16, &v54);
          if ( v17 >= 0 )
          {
            if ( PreviousMode == 1 )
            {
              if ( (a1 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (a3 & 0x810) != 0 )
              {
                v19 = (__int64)v46;
                if ( (unsigned __int64)v46 >= 0x7FFFFFFF0000LL )
                  v19 = 0x7FFFFFFF0000LL;
                *(_QWORD *)v19 = 0LL;
              }
            }
            *(_OWORD *)v61 = *(_OWORD *)a1;
            v62 = *(_OWORD *)(a1 + 16);
            v63 = *(_OWORD *)(a1 + 32);
            if ( (a3 & 0x10) != 0 && v61[1] )
            {
              v17 = -1073741585;
              goto LABEL_13;
            }
            if ( PreviousMode == 1 )
            {
              v70 = 0LL;
              v20 = v62;
              if ( (unsigned __int64)v62 >= 0x7FFFFFFF0000LL )
                v20 = 0x7FFFFFFF0000LL;
              v21 = *(_DWORD *)v20;
              *(_DWORD *)&v70.Length = v21;
              v22 = *(_QWORD *)(v20 + 8);
              v70.Buffer = (wchar_t *)v22;
              DestinationString = v70;
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
            *(_QWORD *)&v62 = &DestinationString;
            *(_QWORD *)&v63 = 0LL;
            if ( !v67 || (v17 = CmObReferenceObjectByHandle(v67, 0, v28, PreviousMode, &DmaAdapter, 0LL), v17 >= 0) )
            {
              if ( !v58
                || (v59 = 0LL,
                    v17 = ObReferenceObjectByHandle(v58, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v59, 0LL),
                    v48 = (PADAPTER_OBJECT)v59,
                    v17 >= 0) )
              {
                if ( !v68 || (v17 = CmObReferenceObjectByHandle(v68, 0, v28, PreviousMode, &v49, 0LL), v17 >= 0) )
                {
                  if ( v69 )
                  {
                    v55 = 0LL;
                    v17 = ObReferenceObjectByHandle(v69, 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v55, 0LL);
                    v47 = (PADAPTER_OBJECT)v55;
                    if ( v17 < 0 )
                      goto LABEL_12;
                    if ( *((_DWORD *)v55 + 48) != 2 )
                    {
                      v17 = -1073741656;
                      goto LABEL_12;
                    }
                  }
                  CurrentThread = KeGetCurrentThread();
                  --CurrentThread->KernelApcDisable;
                  v41 = 1;
                  LOBYTE(v28) = PreviousMode;
                  v17 = CmConvertHandleToKernelHandle(v61[1], v27, v28, 131097LL, &v51);
                  if ( v17 >= 0 )
                  {
                    v61[1] = v51;
                    v30 = 0LL;
                    memset(v71, 0, sizeof(v71));
                    v64 = 0LL;
                    v65 = 0LL;
                    v60[1] = v60;
                    v60[0] = v60;
                    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
                    {
                      if ( v61[1] )
                      {
                        v56 = 0LL;
                        ObReferenceObjectByHandle(v61[1], 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v56, 0LL);
                        v30 = (struct _DMA_ADAPTER *)v56;
                      }
                      v71[10] = 2LL;
                      v71[0] = v30;
                      v71[1] = &DestinationString;
                      v71[2] = &v54;
                      LODWORD(v71[3]) = a3;
                      v71[4] = DmaAdapter;
                      v71[5] = v48;
                      LODWORD(v71[6]) = DesiredAccess;
                      v71[7] = v46;
                      v71[11] = v47;
                      *(_QWORD *)&v64 = v71;
                      *((_QWORD *)&v64 + 1) = v49;
                      LOBYTE(v65) = a10;
                      LOBYTE(v31) = 1;
                      v17 = CmpCallCallBacksEx(32, (unsigned int)v71, (unsigned int)&v64, v31, 33, 0LL, (__int64)v60);
                    }
                    if ( v17 < 0 )
                    {
                      if ( v17 == -1073740541 )
                      {
                        v17 = 0;
                        v40 = 1;
                      }
                    }
                    else
                    {
                      CmpTraceHiveLoadStart(&v54, a3);
                      v14 = 1;
                      if ( (a3 & 0x10) != 0 )
                      {
                        CmpReleaseShutdownRundown();
                        v39 = 0;
                        LOBYTE(Handle) = PreviousMode;
                        v32 = CmLoadAppKey(v61, &v54, a3, DmaAdapter, v48, v47, Handle, v44, &BugCheckParameter2);
                      }
                      else
                      {
                        v32 = CmLoadKey(
                                v61,
                                &v54,
                                a3,
                                (__int64)DmaAdapter,
                                (__int64)v49,
                                a10,
                                (__int64)v48,
                                (__int64)v47,
                                PreviousMode,
                                (__int64)v44,
                                &BugCheckParameter2);
                      }
                      v17 = CmPostCallbackNotificationEx(
                              33,
                              (_DWORD)v30,
                              v32,
                              (unsigned int)v71,
                              (__int64)&v64,
                              (__int64)v60);
                    }
                    if ( v30 )
                      HalPutDmaAdapter(v30);
                    if ( DmaAdapter )
                    {
                      HalPutDmaAdapter(DmaAdapter);
                      DmaAdapter = 0LL;
                    }
                    if ( v17 >= 0 && (a3 & 0x810) != 0 && !v40 )
                    {
                      Object = 0LL;
                      v33 = v72[0];
                      if ( (a3 & 0x10) != 0 )
                        v33 = 64;
                      LODWORD(v72[0]) = v33;
                      p_DestinationString = &DestinationString;
                      if ( v44[0] )
                        p_DestinationString = (UNICODE_STRING *)v44[0];
                      v44[0] = p_DestinationString;
                      v17 = ObReferenceObjectByName(
                              (unsigned __int64)p_DestinationString,
                              64LL,
                              0LL,
                              0,
                              (__int64)CmKeyObjectType,
                              0,
                              (__int64)v72,
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
                                &v57);
                        HalPutDmaAdapter(v35);
                        if ( v17 >= 0 )
                          *v46 = v57;
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
          v15 = v39;
          goto LABEL_13;
        }
      }
      else if ( !v46 )
      {
        if ( v58 )
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
  if ( v44[0] && v44[0] != &DestinationString )
    CmpFreeTransientPoolWithTag(v44[0], 0x624E4D43u);
  if ( v51 )
    ZwClose(v51);
  if ( v41 )
    KeLeaveCriticalRegion();
  if ( v47 )
    HalPutDmaAdapter(v47);
  if ( v49 )
    HalPutDmaAdapter(v49);
  if ( v48 )
    HalPutDmaAdapter(v48);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v54.Buffer )
    ExFreePoolWithTag(v54.Buffer, 0);
  CmpCleanupParseContext((__int64)v72, 0);
  if ( v15 )
    CmpReleaseShutdownRundown();
  if ( v14 )
    CmpTraceHiveLoadStop((unsigned int)v17);
  return (unsigned int)v17;
}
