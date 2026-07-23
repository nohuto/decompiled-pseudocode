/*
 * XREFs of CmUnloadKey @ 0x1405DF54C
 * Callers:
 *     NtUnloadKey @ 0x1405DE860 (NtUnloadKey.c)
 *     NtUnloadKeyEx @ 0x1405DF440 (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x140773A50 (NtUnloadKey2.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14026CEF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpPerformUnloadKey @ 0x1405DFA8C (CmpPerformUnloadKey.c)
 *     CmpReleaseShutdownRundown @ 0x14064A4A0 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x14064A8A0 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x14064B8D0 (CmpAcquireShutdownRundown.c)
 *     CmPostCallbackNotification @ 0x14065C5F0 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x14065C84C (CmpCallCallBacks.c)
 *     CmConvertHandleToKernelHandle @ 0x140665704 (CmConvertHandleToKernelHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByNameEx @ 0x1406CDDFC (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     CmpRetryBackOff @ 0x1408751A0 (CmpRetryBackOff.c)
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
  NTSTATUS v20; // ebx
  int v21; // eax
  __int64 v22; // r8
  int v23; // eax
  char v26; // [rsp+42h] [rbp-256h]
  PADAPTER_OBJECT v27; // [rsp+48h] [rbp-250h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-248h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-238h]
  unsigned int v30; // [rsp+68h] [rbp-230h]
  _DWORD v31[3]; // [rsp+6Ch] [rbp-22Ch] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-220h]
  HANDLE Handle; // [rsp+80h] [rbp-218h] BYREF
  PVOID Object; // [rsp+88h] [rbp-210h] BYREF
  _QWORD v35[2]; // [rsp+90h] [rbp-208h] BYREF
  int v36; // [rsp+A0h] [rbp-1F8h]
  UNICODE_STRING v37; // [rsp+B0h] [rbp-1E8h]
  __int128 v38; // [rsp+C0h] [rbp-1D8h] BYREF
  __int128 v39; // [rsp+D0h] [rbp-1C8h]
  __int128 v40; // [rsp+E0h] [rbp-1B8h]
  _OWORD v41[2]; // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v42; // [rsp+110h] [rbp-188h]
  _OWORD v43[19]; // [rsp+120h] [rbp-178h] BYREF

  v5 = a3;
  v6 = a2;
  v30 = a2;
  v36 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v43, 0, 0x128uLL);
  LODWORD(v43[6]) = -1;
  *((_QWORD *)&v43[9] + 1) = &v43[9];
  *(_QWORD *)&v43[9] = &v43[9];
  memset((char *)&v43[13] + 8, 0, 0x50uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v27 = 0LL;
  DmaAdapter = 0LL;
  Privileges = 0LL;
  Handle = 0LL;
  memset(v41, 0, sizeof(v41));
  v42 = 0LL;
  v9 = 0;
  v35[1] = v35;
  v35[0] = v35;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v26 = CmpAcquireShutdownRundown();
  if ( !v26 )
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
      v38 = *(_OWORD *)a1;
      v39 = *(_OWORD *)(a1 + 16);
      v40 = *(_OWORD *)(a1 + 32);
      if ( PreviousMode == 1 )
      {
        v37 = 0LL;
        v16 = v39;
        if ( (unsigned __int64)v39 >= 0x7FFFFFFF0000LL )
          v16 = 0x7FFFFFFF0000LL;
        v17 = *(_DWORD *)v16;
        *(_DWORD *)&v37.Length = v17;
        v18 = *(_QWORD *)(v16 + 8);
        v37.Buffer = (wchar_t *)v18;
        DestinationString = v37;
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
          v31[1] = -1073741670;
          goto LABEL_36;
        }
        v13 = (wchar_t *)TransientPoolWithQuotaTag;
        memmove(TransientPoolWithQuotaTag, DestinationString.Buffer, Length);
        DestinationString.Length = Length;
        DestinationString.MaximumLength = Length;
        DestinationString.Buffer = v13;
        v6 = v30;
        v5 = a3;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, 0LL);
      }
      *(_QWORD *)&v39 = &DestinationString;
      v40 = 0LL;
      if ( PreviousMode == 1 )
      {
        LOBYTE(v15) = 1;
        v20 = CmConvertHandleToKernelHandle(*((_QWORD *)&v38 + 1), v14, v15, 0LL, &Handle);
        if ( v20 < 0 )
          goto LABEL_36;
        *((_QWORD *)&v38 + 1) = Handle;
      }
      DWORD2(v43[1]) = 0;
      LODWORD(v43[0]) = 4;
      v21 = ObReferenceObjectByNameEx((unsigned int)&v38, 0, 0, (_DWORD)CmKeyObjectType, 0, (__int64)v43, (__int64)&v27);
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
        *(_QWORD *)&v41[0] = v27;
        *((_QWORD *)&v41[0] + 1) = DmaAdapter;
        v23 = CmpCallCallBacks(34, (unsigned int)v41, v22, 35, (__int64)v27, (__int64)v35);
        v20 = v23;
        if ( v23 >= 0 )
        {
          v9 = 1;
LABEL_33:
          v31[0] = 0;
          while ( (CmpShutdownRundown & 1) == 0 )
          {
            LOBYTE(v22) = v5;
            v20 = CmpPerformUnloadKey(v27, v6, v22, DmaAdapter);
            if ( v20 != -1073741267 )
              goto LABEL_36;
            CmpRetryBackOff(v31);
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
    v20 = CmPostCallbackNotification(35, (_DWORD)v27, v20, (unsigned int)v41, (__int64)v35);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v27 )
    HalPutDmaAdapter(v27);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( Handle )
    ZwClose(Handle);
  CmpCleanupParseContext(v43, 0LL);
  if ( v26 )
    CmpReleaseShutdownRundown();
  KeLeaveCriticalRegion();
  return (unsigned int)v20;
}
