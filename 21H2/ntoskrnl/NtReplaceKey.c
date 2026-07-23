/*
 * XREFs of NtReplaceKey @ 0x1408692A0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmObReferenceObjectByHandle @ 0x14065943C (CmObReferenceObjectByHandle.c)
 *     CmpNameFromAttributes @ 0x1406657AC (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x140665AE0 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x14070F860 (CmPostCallbackNotificationEx.c)
 *     CmReplaceKey @ 0x14086DB28 (CmReplaceKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtReplaceKey(POBJECT_ATTRIBUTES NewFile, HANDLE TargetHandle, POBJECT_ATTRIBUTES OldFile)
{
  char v3; // si
  char PreviousMode; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  BOOLEAN v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  NTSTATUS v16; // ebx
  struct _KTHREAD *v17; // rax
  int v18; // eax
  PADAPTER_OBJECT v19; // rdi
  int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  NTSTATUS v26; // [rsp+40h] [rbp-C0h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v30[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+88h] [rbp-78h] BYREF
  __int128 v33; // [rsp+90h] [rbp-70h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-60h]
  __int128 v35; // [rsp+B0h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+C0h] [rbp-40h] BYREF
  NTSTATUS *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  __int64 *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]

  DmaAdapter = 0LL;
  v3 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v28[1] = v28;
  v28[0] = v28;
  *(_OWORD *)v30 = 0LL;
  *(_OWORD *)P = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v12 )
  {
    v16 = CmCheckNoTxContext();
    if ( v16 >= 0 )
    {
      if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
      {
        v17 = KeGetCurrentThread();
        --v17->KernelApcDisable;
        v3 = 1;
        v16 = CmpNameFromAttributes(NewFile, PreviousMode, (UNICODE_STRING *)v30, v15);
        if ( v16 >= 0 )
        {
          v16 = CmpNameFromAttributes(OldFile, PreviousMode, (UNICODE_STRING *)P, v15);
          if ( v16 >= 0 )
          {
            v18 = CmObReferenceObjectByHandle(TargetHandle, 0, v14, PreviousMode, &DmaAdapter, 0LL);
            v19 = DmaAdapter;
            v16 = v18;
            if ( v18 >= 0 )
            {
              if ( (LODWORD(DmaAdapter->DmaOperations->PutDmaAdapter) & 0x80u) == 0 )
              {
                if ( !CmpCallBackCount
                  || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
                  || (*(_QWORD *)&v33 = v19,
                      *((_QWORD *)&v33 + 1) = P,
                      *(_QWORD *)&v34 = v30,
                      v20 = CmpCallCallBacksEx(0x2Du, (__int64)&v33, 0LL, 1, 0x2Eu, 0LL, (__int64)v28),
                      v16 = v20,
                      v20 >= 0) )
                {
                  v21 = CmReplaceKey(v19->DmaOperations->AllocateAdapterChannel, v13, v30, P);
                  v16 = CmPostCallbackNotificationEx(0x2Eu, (__int64)v19, v21, (__int64)&v33, 0LL, v28);
                  if ( v16 == -1073740541 )
                    v16 = 0;
                }
                else if ( v20 == -1073740541 )
                {
                  v16 = 0;
                }
              }
              else
              {
                v16 = -1073741790;
              }
            }
            if ( v19 )
              HalPutDmaAdapter(v19);
          }
        }
      }
      else
      {
        v16 = -1073741727;
      }
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
    v16 = -1073741431;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v30[1] )
    ExFreePoolWithTag(v30[1], 0);
  if ( v3 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  if ( v12 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
  }
  if ( v16 >= 0 )
  {
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
    {
      v32 = 0x1000000LL;
      v42 = &v32;
      v43 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)byte_1400229B8,
        0LL,
        0LL,
        3u,
        &v41);
    }
  }
  else if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
  {
    v26 = v16;
    v37 = &v26;
    v31 = 0x1000000LL;
    v39 = &v31;
    v38 = 4LL;
    v40 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)&word_1400229EE, 0LL, 0LL, 4u, &v36);
  }
  return v16;
}
