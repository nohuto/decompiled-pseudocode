/*
 * XREFs of NtReplaceKey @ 0x14086B510
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140225FD0 (ExIsResourceAcquiredSharedLite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     CmpCallCallBacksEx @ 0x140614140 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x140618F00 (CmPostCallbackNotificationEx.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     CmObReferenceObjectByHandle @ 0x14066E70C (CmObReferenceObjectByHandle.c)
 *     CmpNameFromAttributes @ 0x1406FEF3C (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x1406FF270 (CmCheckNoTxContext.c)
 *     CmReplaceKey @ 0x1408701CC (CmReplaceKey.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtReplaceKey(POBJECT_ATTRIBUTES NewFile, HANDLE TargetHandle, POBJECT_ATTRIBUTES OldFile)
{
  char v3; // si
  char PreviousMode; // di
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v9; // r13
  NTSTATUS v10; // ebx
  __int64 v11; // r9
  struct _KTHREAD *v12; // rax
  __int64 v13; // r9
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  PADAPTER_OBJECT v17; // rdi
  int v18; // eax
  unsigned int v19; // eax
  NTSTATUS v21; // [rsp+40h] [rbp-C0h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v25[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  __int128 v28; // [rsp+90h] [rbp-70h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-60h]
  __int128 v30; // [rsp+B0h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+C0h] [rbp-40h] BYREF
  NTSTATUS *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  __int64 *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]

  DmaAdapter = 0LL;
  v3 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v23[1] = v23;
  v23[0] = v23;
  *(_OWORD *)v25 = 0LL;
  *(_OWORD *)P = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v9 )
  {
    v10 = CmCheckNoTxContext();
    if ( v10 >= 0 )
    {
      if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
      {
        v12 = KeGetCurrentThread();
        --v12->KernelApcDisable;
        v3 = 1;
        v10 = CmpNameFromAttributes(NewFile, PreviousMode, (UNICODE_STRING *)v25, v11);
        if ( v10 >= 0 )
        {
          v10 = CmpNameFromAttributes(OldFile, PreviousMode, (UNICODE_STRING *)P, v13);
          if ( v10 >= 0 )
          {
            v15 = CmObReferenceObjectByHandle(TargetHandle, 0, v14, PreviousMode, &DmaAdapter, 0LL);
            v17 = DmaAdapter;
            v10 = v15;
            if ( v15 >= 0 )
            {
              if ( (LODWORD(DmaAdapter->DmaOperations->PutDmaAdapter) & 0x80u) == 0 )
              {
                if ( !CmpCallBackCount
                  || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
                  || (*(_QWORD *)&v28 = v17,
                      *((_QWORD *)&v28 + 1) = P,
                      *(_QWORD *)&v29 = v25,
                      v18 = CmpCallCallBacksEx(0x2Du, (__int64)&v28, 0LL, 1, 0x2Eu, 0LL, (__int64)v23),
                      v10 = v18,
                      v18 >= 0) )
                {
                  v19 = CmReplaceKey(v17->DmaOperations->AllocateAdapterChannel, v16, v25, P);
                  v10 = CmPostCallbackNotificationEx(0x2Eu, (__int64)v17, v19, (__int64)&v28, 0LL, v23);
                  if ( v10 == -1073740541 )
                    v10 = 0;
                }
                else if ( v18 == -1073740541 )
                {
                  v10 = 0;
                }
              }
              else
              {
                v10 = -1073741790;
              }
            }
            if ( v17 )
              HalPutDmaAdapter(v17);
          }
        }
      }
      else
      {
        v10 = -1073741727;
      }
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v10 = -1073741431;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v25[1] )
    ExFreePoolWithTag(v25[1], 0);
  if ( v3 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v9 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v10 >= 0 )
  {
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
    {
      v27 = 0x1000000LL;
      v37 = &v27;
      v38 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)byte_140021AF8,
        0LL,
        0LL,
        3u,
        &v36);
    }
  }
  else if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
  {
    v21 = v10;
    v32 = &v21;
    v26 = 0x1000000LL;
    v34 = &v26;
    v33 = 4LL;
    v35 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)&word_140021B2E, 0LL, 0LL, 4u, &v31);
  }
  return v10;
}
