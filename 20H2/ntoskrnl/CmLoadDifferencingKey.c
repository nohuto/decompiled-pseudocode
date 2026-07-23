/*
 * XREFs of CmLoadDifferencingKey @ 0x1406FE1FC
 * Callers:
 *     NtLoadKey3 @ 0x1405CB3B0 (NtLoadKey3.c)
 *     VrpLoadDifferencingHive @ 0x1405D2EB8 (VrpLoadDifferencingHive.c)
 *     NtLoadKeyEx @ 0x1406FE190 (NtLoadKeyEx.c)
 *     NtLoadKey2 @ 0x14077DD40 (NtLoadKey2.c)
 *     VrpPreLoadKey @ 0x140885DEC (VrpPreLoadKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14020A020 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140225FD0 (ExIsResourceAcquiredSharedLite.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     CmpFreeTransientPoolWithTag @ 0x140268308 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObReferenceObjectByName @ 0x1405FDA80 (ObReferenceObjectByName.c)
 *     CmpReleaseShutdownRundown @ 0x14060C670 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x14060C8A0 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x14060D8D0 (CmpAcquireShutdownRundown.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140614140 (CmpCallCallBacksEx.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmPostCallbackNotificationEx @ 0x140618F00 (CmPostCallbackNotificationEx.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     CmObReferenceObjectByHandle @ 0x14066E70C (CmObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x14067EA30 (ObOpenObjectByPointer.c)
 *     CmLoadKey @ 0x1406DAE70 (CmLoadKey.c)
 *     CmpTraceHiveLoadStop @ 0x1406FEDBC (CmpTraceHiveLoadStop.c)
 *     CmpTraceHiveLoadStart @ 0x1406FEE18 (CmpTraceHiveLoadStart.c)
 *     CmConvertHandleToKernelHandle @ 0x1406FEE94 (CmConvertHandleToKernelHandle.c)
 *     CmpNameFromAttributes @ 0x1406FEF3C (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x1406FF270 (CmCheckNoTxContext.c)
 *     CmLoadAppKey @ 0x1406FFDC0 (CmLoadAppKey.c)
 *     ObDeleteCapturedInsertInfo @ 0x140700E80 (ObDeleteCapturedInsertInfo.c)
 *     CmReleaseLoadKeyContext @ 0x140700F00 (CmReleaseLoadKeyContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  unsigned int v31; // eax
  int v32; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  struct _DMA_ADAPTER *v34; // rbx
  int Handle; // [rsp+30h] [rbp-348h]
  BOOLEAN v36; // [rsp+60h] [rbp-318h]
  char v37; // [rsp+63h] [rbp-315h]
  char v38; // [rsp+64h] [rbp-314h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp-308h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp-300h] BYREF
  void *v41[2]; // [rsp+80h] [rbp-2F8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-2E8h] BYREF
  HANDLE *v43; // [rsp+A0h] [rbp-2D8h]
  PADAPTER_OBJECT v44; // [rsp+A8h] [rbp-2D0h]
  PADAPTER_OBJECT v45; // [rsp+B0h] [rbp-2C8h]
  PADAPTER_OBJECT v46; // [rsp+B8h] [rbp-2C0h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-2B8h] BYREF
  HANDLE v48; // [rsp+C8h] [rbp-2B0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+D0h] [rbp-2A8h]
  unsigned int v50; // [rsp+D8h] [rbp-2A0h]
  UNICODE_STRING v51; // [rsp+E0h] [rbp-298h] BYREF
  PVOID v52; // [rsp+F0h] [rbp-288h] BYREF
  PVOID v53; // [rsp+F8h] [rbp-280h] BYREF
  HANDLE v54; // [rsp+100h] [rbp-278h] BYREF
  HANDLE v55; // [rsp+108h] [rbp-270h]
  PVOID v56; // [rsp+110h] [rbp-268h] BYREF
  _QWORD v57[2]; // [rsp+118h] [rbp-260h] BYREF
  HANDLE v58[2]; // [rsp+128h] [rbp-250h] BYREF
  __int128 v59; // [rsp+138h] [rbp-240h]
  __int128 v60; // [rsp+148h] [rbp-230h]
  _SLIST_ENTRY v61; // [rsp+158h] [rbp-220h] BYREF
  __int64 v62; // [rsp+168h] [rbp-210h]
  int v63; // [rsp+170h] [rbp-208h]
  void *v64; // [rsp+178h] [rbp-200h]
  void *v65; // [rsp+180h] [rbp-1F8h]
  HANDLE v66; // [rsp+188h] [rbp-1F0h]
  UNICODE_STRING v67; // [rsp+190h] [rbp-1E8h]
  _QWORD v68[12]; // [rsp+1A0h] [rbp-1D8h] BYREF
  _OWORD v69[19]; // [rsp+200h] [rbp-178h] BYREF

  v64 = a4;
  Object = a2;
  v50 = a3;
  v55 = a5;
  v43 = a7;
  v65 = a9;
  v66 = a11;
  *(_OWORD *)v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  DestinationString = 0LL;
  v51 = 0LL;
  v41[0] = 0LL;
  v54 = 0LL;
  v37 = 0;
  v63 = 0;
  v14 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v38 = 0;
  RtlInitUnicodeString(&v51, 0LL);
  DmaAdapter = 0LL;
  BugCheckParameter4 = 0LL;
  v46 = 0LL;
  v48 = 0LL;
  v45 = 0LL;
  Privileges = 0LL;
  memset(v69, 0, 0x128uLL);
  LODWORD(v69[6]) = -1;
  *((_QWORD *)&v69[9] + 1) = &v69[9];
  *(_QWORD *)&v69[9] = &v69[9];
  memset((char *)&v69[13] + 8, 0, 0x50uLL);
  v44 = 0LL;
  v15 = CmpAcquireShutdownRundown();
  v36 = v15;
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
        if ( v43 )
        {
          if ( (a3 & 0x444) != 0 && (a3 & 0x10) != 0 )
          {
            v17 = -1073741583;
            goto LABEL_12;
          }
LABEL_41:
          LOBYTE(v16) = PreviousMode;
          v17 = CmpNameFromAttributes(Object, v16, &v51);
          if ( v17 >= 0 )
          {
            if ( PreviousMode == 1 )
            {
              if ( (a1 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (a3 & 0x810) != 0 )
              {
                v19 = (__int64)v43;
                if ( (unsigned __int64)v43 >= 0x7FFFFFFF0000LL )
                  v19 = 0x7FFFFFFF0000LL;
                *(_QWORD *)v19 = 0LL;
              }
            }
            *(_OWORD *)v58 = *(_OWORD *)a1;
            v59 = *(_OWORD *)(a1 + 16);
            v60 = *(_OWORD *)(a1 + 32);
            if ( (a3 & 0x10) != 0 && v58[1] )
            {
              v17 = -1073741585;
              goto LABEL_13;
            }
            if ( PreviousMode == 1 )
            {
              v67 = 0LL;
              v20 = v59;
              if ( (unsigned __int64)v59 >= 0x7FFFFFFF0000LL )
                v20 = 0x7FFFFFFF0000LL;
              v21 = *(_DWORD *)v20;
              *(_DWORD *)&v67.Length = v21;
              v22 = *(_QWORD *)(v20 + 8);
              v67.Buffer = (wchar_t *)v22;
              DestinationString = v67;
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
            *(_QWORD *)&v59 = &DestinationString;
            *(_QWORD *)&v60 = 0LL;
            if ( !v64 || (v17 = CmObReferenceObjectByHandle(v64, 0, v28, PreviousMode, &DmaAdapter, 0LL), v17 >= 0) )
            {
              if ( !v55
                || (v56 = 0LL,
                    v17 = ObReferenceObjectByHandle(v55, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v56, 0LL),
                    v45 = (PADAPTER_OBJECT)v56,
                    v17 >= 0) )
              {
                if ( !v65 || (v17 = CmObReferenceObjectByHandle(v65, 0, v28, PreviousMode, &v46, 0LL), v17 >= 0) )
                {
                  if ( v66 )
                  {
                    v52 = 0LL;
                    v17 = ObReferenceObjectByHandle(v66, 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v52, 0LL);
                    v44 = (PADAPTER_OBJECT)v52;
                    if ( v17 < 0 )
                      goto LABEL_12;
                    if ( *((_DWORD *)v52 + 48) != 2 )
                    {
                      v17 = -1073741656;
                      goto LABEL_12;
                    }
                  }
                  CurrentThread = KeGetCurrentThread();
                  --CurrentThread->KernelApcDisable;
                  v38 = 1;
                  LOBYTE(v28) = PreviousMode;
                  v17 = CmConvertHandleToKernelHandle(v58[1], v27, v28, 131097LL, &v48);
                  if ( v17 >= 0 )
                  {
                    v58[1] = v48;
                    v30 = 0LL;
                    memset(v68, 0, sizeof(v68));
                    v61 = 0LL;
                    v62 = 0LL;
                    v57[1] = v57;
                    v57[0] = v57;
                    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
                    {
                      if ( v58[1] )
                      {
                        v53 = 0LL;
                        ObReferenceObjectByHandle(v58[1], 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v53, 0LL);
                        v30 = (struct _DMA_ADAPTER *)v53;
                      }
                      v68[10] = 2LL;
                      v68[0] = v30;
                      v68[1] = &DestinationString;
                      v68[2] = &v51;
                      LODWORD(v68[3]) = a3;
                      v68[4] = DmaAdapter;
                      v68[5] = v45;
                      LODWORD(v68[6]) = DesiredAccess;
                      v68[7] = v43;
                      v68[11] = v44;
                      v61.Next = (_SLIST_ENTRY *)v68;
                      *((_QWORD *)&v61.Next + 1) = v46;
                      LOBYTE(v62) = a10;
                      v17 = CmpCallCallBacksEx(0x20u, (__int64)v68, &v61, 1, 0x21u, 0LL, (__int64)v57);
                    }
                    if ( v17 < 0 )
                    {
                      if ( v17 == -1073740541 )
                      {
                        v17 = 0;
                        v37 = 1;
                      }
                    }
                    else
                    {
                      CmpTraceHiveLoadStart(&v51, a3);
                      v14 = 1;
                      if ( (a3 & 0x10) != 0 )
                      {
                        CmpReleaseShutdownRundown();
                        v36 = 0;
                        LOBYTE(Handle) = PreviousMode;
                        v31 = CmLoadAppKey(v58, &v51, a3, DmaAdapter, v45, v44, Handle, v41, &BugCheckParameter4);
                      }
                      else
                      {
                        v31 = CmLoadKey(
                                v58,
                                &v51,
                                a3,
                                (__int64)DmaAdapter,
                                (__int64)v46,
                                a10,
                                (__int64)v45,
                                (__int64)v44,
                                PreviousMode,
                                (__int64)v41,
                                &BugCheckParameter4);
                      }
                      v17 = CmPostCallbackNotificationEx(0x21u, (__int64)v30, v31, (__int64)v68, (__int64)&v61, v57);
                    }
                    if ( v30 )
                      HalPutDmaAdapter(v30);
                    if ( DmaAdapter )
                    {
                      HalPutDmaAdapter(DmaAdapter);
                      DmaAdapter = 0LL;
                    }
                    if ( v17 >= 0 && (a3 & 0x810) != 0 && !v37 )
                    {
                      Object = 0LL;
                      v32 = v69[0];
                      if ( (a3 & 0x10) != 0 )
                        v32 = 64;
                      LODWORD(v69[0]) = v32;
                      p_DestinationString = &DestinationString;
                      if ( v41[0] )
                        p_DestinationString = (UNICODE_STRING *)v41[0];
                      v41[0] = p_DestinationString;
                      v17 = ObReferenceObjectByName(
                              (__int64)p_DestinationString,
                              64LL,
                              0LL,
                              0,
                              (__int64)CmKeyObjectType,
                              0,
                              (__int64)v69,
                              (PADAPTER_OBJECT *)&Object);
                      if ( v17 >= 0 )
                      {
                        v34 = (struct _DMA_ADAPTER *)Object;
                        ObDeleteCapturedInsertInfo(Object);
                        v17 = ObOpenObjectByPointer(
                                v34,
                                PreviousMode != 0 ? 64 : 576,
                                0LL,
                                DesiredAccess,
                                (POBJECT_TYPE)CmKeyObjectType,
                                PreviousMode,
                                &v54);
                        HalPutDmaAdapter(v34);
                        if ( v17 >= 0 )
                          *v43 = v54;
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
          v15 = v36;
          goto LABEL_13;
        }
      }
      else if ( !v43 )
      {
        if ( v55 )
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
  if ( v41[0] && v41[0] != &DestinationString )
    CmpFreeTransientPoolWithTag(v41[0], 0x624E4D43u);
  if ( v48 )
    ZwClose(v48);
  if ( v38 )
    KeLeaveCriticalRegion();
  if ( v44 )
    HalPutDmaAdapter(v44);
  if ( v46 )
    HalPutDmaAdapter(v46);
  if ( v45 )
    HalPutDmaAdapter(v45);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v51.Buffer )
    ExFreePoolWithTag(v51.Buffer, 0);
  CmpCleanupParseContext((__int64)v69, 0);
  if ( v15 )
    CmpReleaseShutdownRundown();
  if ( v14 )
    CmpTraceHiveLoadStop((unsigned int)v17);
  return (unsigned int)v17;
}
