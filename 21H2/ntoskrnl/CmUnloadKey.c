/*
 * XREFs of CmUnloadKey @ 0x140719C78
 * Callers:
 *     NtUnloadKeyEx @ 0x1406C3520 (NtUnloadKeyEx.c)
 *     NtUnloadKey @ 0x1406C3E90 (NtUnloadKey.c)
 *     NtUnloadKey2 @ 0x140773890 (NtUnloadKey2.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     KeResetEvent @ 0x14027BC40 (KeResetEvent.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14027EF58 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14034FE80 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140655680 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x140655A80 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x140656AB0 (CmpAcquireShutdownRundown.c)
 *     CmPostCallbackNotification @ 0x1406677D0 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x140667A2C (CmpCallCallBacks.c)
 *     CmConvertHandleToKernelHandle @ 0x14066F224 (CmConvertHandleToKernelHandle.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     CmpPerformUnloadKey @ 0x14071A1B8 (CmpPerformUnloadKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 *     CmpRetryBackOff @ 0x140875040 (CmpRetryBackOff.c)
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
  void *v14; // rdx
  __int64 v15; // rax
  int v16; // r8d
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  signed int v19; // ebx
  int v20; // eax
  __int64 v21; // r8
  int v22; // eax
  BOOLEAN v25; // [rsp+42h] [rbp-256h]
  PADAPTER_OBJECT v26; // [rsp+48h] [rbp-250h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-248h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-238h]
  unsigned int v29; // [rsp+68h] [rbp-230h]
  _DWORD v30[3]; // [rsp+6Ch] [rbp-22Ch] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-220h]
  HANDLE Handle; // [rsp+80h] [rbp-218h] BYREF
  PVOID Object; // [rsp+88h] [rbp-210h] BYREF
  _QWORD v34[2]; // [rsp+90h] [rbp-208h] BYREF
  int v35; // [rsp+A0h] [rbp-1F8h]
  UNICODE_STRING v36; // [rsp+B0h] [rbp-1E8h]
  __int128 v37; // [rsp+C0h] [rbp-1D8h] BYREF
  __int128 v38; // [rsp+D0h] [rbp-1C8h]
  __int128 v39; // [rsp+E0h] [rbp-1B8h]
  _OWORD v40[2]; // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v41; // [rsp+110h] [rbp-188h]
  _OWORD v42[19]; // [rsp+120h] [rbp-178h] BYREF

  v5 = a3;
  v6 = a2;
  v29 = a2;
  v35 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v42, 0, 0x128uLL);
  LODWORD(v42[6]) = -1;
  *((_QWORD *)&v42[9] + 1) = &v42[9];
  *(_QWORD *)&v42[9] = &v42[9];
  memset((char *)&v42[13] + 8, 0, 0x50uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v26 = 0LL;
  DmaAdapter = 0LL;
  Privileges = 0LL;
  Handle = 0LL;
  memset(v40, 0, sizeof(v40));
  v41 = 0LL;
  v9 = 0;
  v34[1] = v34;
  v34[0] = v34;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v25 = CmpAcquireShutdownRundown();
  if ( !v25 )
  {
LABEL_51:
    v19 = -1073741431;
    goto LABEL_36;
  }
  if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    if ( (v6 & 0xFFFFFFFE) != 0 )
    {
      v19 = -1073741811;
    }
    else
    {
      if ( PreviousMode == 1 && (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v37 = *(_OWORD *)a1;
      v38 = *(_OWORD *)(a1 + 16);
      v39 = *(_OWORD *)(a1 + 32);
      if ( PreviousMode == 1 )
      {
        v36 = 0LL;
        v15 = v38;
        if ( (unsigned __int64)v38 >= 0x7FFFFFFF0000LL )
          v15 = 0x7FFFFFFF0000LL;
        v16 = *(_DWORD *)v15;
        *(_DWORD *)&v36.Length = v16;
        v17 = *(_QWORD *)(v15 + 8);
        v36.Buffer = (wchar_t *)v17;
        DestinationString = v36;
        if ( (_WORD)v16 )
        {
          if ( (v17 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v18 = v17 + (unsigned __int16)v16;
          if ( v18 > 0x7FFFFFFF0000LL || v18 < v17 )
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
          v19 = -1073741670;
          v30[1] = -1073741670;
          goto LABEL_36;
        }
        v13 = (wchar_t *)TransientPoolWithQuotaTag;
        memmove(TransientPoolWithQuotaTag, DestinationString.Buffer, Length);
        DestinationString.Length = Length;
        DestinationString.MaximumLength = Length;
        DestinationString.Buffer = v13;
        v6 = v29;
        v5 = a3;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, 0LL);
      }
      *(_QWORD *)&v38 = &DestinationString;
      v39 = 0LL;
      if ( PreviousMode == 1 )
      {
        v19 = CmConvertHandleToKernelHandle(*((void **)&v37 + 1), v14, 1, 0, &Handle);
        if ( v19 < 0 )
          goto LABEL_36;
        *((_QWORD *)&v37 + 1) = Handle;
      }
      DWORD2(v42[1]) = 0;
      LODWORD(v42[0]) = 4;
      v20 = ObReferenceObjectByNameEx((__int64)&v37, 0LL, 0, (__int64)CmKeyObjectType, 0, (__int64)v42, &v26);
      if ( v20 == -1073741772 )
        v20 = -1073741811;
      v19 = v20;
      if ( v20 >= 0 )
      {
        if ( a4 )
        {
          Object = 0LL;
          v19 = ObReferenceObjectByHandle(a4, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
          DmaAdapter = (PADAPTER_OBJECT)Object;
          if ( v19 < 0 )
            goto LABEL_36;
          KeResetEvent((PRKEVENT)Object);
        }
        if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
          goto LABEL_33;
        *(_QWORD *)&v40[0] = v26;
        *((_QWORD *)&v40[0] + 1) = DmaAdapter;
        v22 = CmpCallCallBacks(34, (int)v40, v21, 35, (__int64)v26, (__int64)v34);
        v19 = v22;
        if ( v22 >= 0 )
        {
          v9 = 1;
LABEL_33:
          v30[0] = 0;
          while ( (CmpShutdownRundown & 1) == 0 )
          {
            LOBYTE(v21) = v5;
            v19 = CmpPerformUnloadKey(v26, v6, v21, DmaAdapter);
            if ( v19 != -1073741267 )
              goto LABEL_36;
            CmpRetryBackOff(v30);
          }
          goto LABEL_51;
        }
        if ( v22 == -1073740541 )
          v19 = 0;
      }
    }
  }
  else
  {
    v19 = -1073741727;
  }
LABEL_36:
  if ( v9 )
    v19 = CmPostCallbackNotification(35, (__int64)v26, v19, (__int64)v40, v34);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v26 )
    HalPutDmaAdapter(v26);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( Handle )
    ZwClose(Handle);
  CmpCleanupParseContext((__int64)v42, 0);
  if ( v25 )
    CmpReleaseShutdownRundown();
  KeLeaveCriticalRegion();
  return (unsigned int)v19;
}
