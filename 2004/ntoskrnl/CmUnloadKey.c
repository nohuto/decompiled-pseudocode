/*
 * XREFs of CmUnloadKey @ 0x14064FEBC
 * Callers:
 *     NtUnloadKey @ 0x14064FA50 (NtUnloadKey.c)
 *     NtUnloadKeyEx @ 0x14064FDB0 (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x140761370 (NtUnloadKey2.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140297D80 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14029BBE0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpCallCallBacks @ 0x1405ED374 (CmpCallCallBacks.c)
 *     CmPostCallbackNotification @ 0x1405ED6C0 (CmPostCallbackNotification.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByNameEx @ 0x14062DD40 (ObReferenceObjectByNameEx.c)
 *     CmpPerformUnloadKey @ 0x1406503FC (CmpPerformUnloadKey.c)
 *     CmConvertHandleToKernelHandle @ 0x140651B44 (CmConvertHandleToKernelHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     CmpReleaseShutdownRundown @ 0x1406941E0 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x140694400 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x140695430 (CmpAcquireShutdownRundown.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     CmpRetryBackOff @ 0x140871C08 (CmpRetryBackOff.c)
 */

__int64 __fastcall CmUnloadKey(__int64 a1, unsigned int a2, char a3, void *a4)
{
  char v5; // r15
  unsigned int v6; // esi
  KPROCESSOR_MODE PreviousMode; // r14
  char v9; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Length; // ebx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  wchar_t *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // r8d
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  signed int v20; // ebx
  int v21; // eax
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  char v29; // [rsp+42h] [rbp-256h]
  PADAPTER_OBJECT v30; // [rsp+48h] [rbp-250h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-248h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-238h]
  unsigned int v33; // [rsp+68h] [rbp-230h]
  _DWORD v34[3]; // [rsp+6Ch] [rbp-22Ch] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-220h]
  HANDLE Handle; // [rsp+80h] [rbp-218h] BYREF
  PVOID Object; // [rsp+88h] [rbp-210h] BYREF
  _QWORD v38[2]; // [rsp+90h] [rbp-208h] BYREF
  int v39; // [rsp+A0h] [rbp-1F8h]
  UNICODE_STRING v40; // [rsp+B0h] [rbp-1E8h]
  __int128 v41; // [rsp+C0h] [rbp-1D8h] BYREF
  __int128 v42; // [rsp+D0h] [rbp-1C8h]
  __int128 v43; // [rsp+E0h] [rbp-1B8h]
  _OWORD v44[2]; // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v45; // [rsp+110h] [rbp-188h]
  _OWORD v46[19]; // [rsp+120h] [rbp-178h] BYREF

  v5 = a3;
  v6 = a2;
  v33 = a2;
  v39 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v46, 0, 0x128uLL);
  LODWORD(v46[6]) = -1;
  *((_QWORD *)&v46[9] + 1) = &v46[9];
  *(_QWORD *)&v46[9] = &v46[9];
  memset((char *)&v46[13] + 8, 0, 0x50uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v30 = 0LL;
  DmaAdapter = 0LL;
  Privileges = 0LL;
  Handle = 0LL;
  memset(v44, 0, sizeof(v44));
  v45 = 0LL;
  v9 = 0;
  v38[1] = v38;
  v38[0] = v38;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v29 = CmpAcquireShutdownRundown();
  if ( !v29 )
  {
LABEL_51:
    v20 = -1073741431;
    goto LABEL_36;
  }
  if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    if ( (v6 & 0xFFFFFFFE) != 0 )
    {
      v20 = -1073741811;
    }
    else
    {
      if ( PreviousMode == 1 && (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v41 = *(_OWORD *)a1;
      v42 = *(_OWORD *)(a1 + 16);
      v43 = *(_OWORD *)(a1 + 32);
      if ( PreviousMode == 1 )
      {
        v40 = 0LL;
        v16 = v42;
        if ( (unsigned __int64)v42 >= 0x7FFFFFFF0000LL )
          v16 = 0x7FFFFFFF0000LL;
        v17 = *(_DWORD *)v16;
        *(_DWORD *)&v40.Length = v17;
        v18 = *(_QWORD *)(v16 + 8);
        v40.Buffer = (wchar_t *)v18;
        DestinationString = v40;
        if ( (_WORD)v17 )
        {
          if ( (v18 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v19 = v18 + (unsigned __int16)v17;
          if ( v19 > 0x7FFFFFFF0000LL || v19 < v18 )
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
                                                               0x35374D43u);
        Privileges = TransientPoolWithQuotaTag;
        if ( !TransientPoolWithQuotaTag )
        {
          v20 = -1073741670;
          v34[1] = -1073741670;
          goto LABEL_36;
        }
        v13 = (wchar_t *)TransientPoolWithQuotaTag;
        memmove(TransientPoolWithQuotaTag, DestinationString.Buffer, Length);
        DestinationString.Length = Length;
        DestinationString.MaximumLength = Length;
        DestinationString.Buffer = v13;
        v6 = v33;
        v5 = a3;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, 0LL);
      }
      *(_QWORD *)&v42 = &DestinationString;
      v43 = 0LL;
      if ( PreviousMode == 1 )
      {
        LOBYTE(v15) = 1;
        v20 = CmConvertHandleToKernelHandle(*((_QWORD *)&v41 + 1), v14, v15, 0LL, &Handle);
        if ( v20 < 0 )
          goto LABEL_36;
        *((_QWORD *)&v41 + 1) = Handle;
      }
      DWORD2(v46[1]) = 0;
      LODWORD(v46[0]) = 4;
      v21 = ObReferenceObjectByNameEx((__int64)&v41, v14, 0, (__int64)CmKeyObjectType, 0, (__int64)v46, &v30);
      if ( v21 == -1073741772 )
        v21 = -1073741811;
      v20 = v21;
      if ( v21 >= 0 )
      {
        if ( a4 )
        {
          Object = 0LL;
          v20 = ObReferenceObjectByHandle(a4, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
          DmaAdapter = (PADAPTER_OBJECT)Object;
          if ( v20 < 0 )
            goto LABEL_36;
          KeResetEvent((PRKEVENT)Object);
        }
        if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
          goto LABEL_33;
        *(_QWORD *)&v44[0] = v30;
        *((_QWORD *)&v44[0] + 1) = DmaAdapter;
        v23 = CmpCallCallBacks(34, (int)v44, v22, 35, (__int64)v30, (__int64)v38);
        v20 = v23;
        if ( v23 >= 0 )
        {
          v9 = 1;
LABEL_33:
          v34[0] = 0;
          while ( (CmpShutdownRundown & 1) == 0 )
          {
            LOBYTE(v22) = v5;
            v20 = CmpPerformUnloadKey(v30, v6, v22, DmaAdapter);
            if ( v20 != -1073741267 )
              goto LABEL_36;
            CmpRetryBackOff(v34);
          }
          goto LABEL_51;
        }
        if ( v23 == -1073740541 )
          v20 = 0;
      }
    }
  }
  else
  {
    v20 = -1073741727;
  }
LABEL_36:
  if ( v9 )
    v20 = CmPostCallbackNotification(35, (__int64)v30, v20, (__int64)v44, v38);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v30 )
    HalPutDmaAdapter(v30);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( Handle )
    ZwClose(Handle);
  CmpCleanupParseContext(v46, 0LL);
  if ( v29 )
    CmpReleaseShutdownRundown(v25, v24, v26);
  KeLeaveCriticalRegion();
  return (unsigned int)v20;
}
