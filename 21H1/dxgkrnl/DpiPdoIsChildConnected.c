/*
 * XREFs of DpiPdoIsChildConnected @ 0x1C01652A4
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001FE48 (DpiFdoHandleDisplayDetectControl.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C00196A0 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00E444C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C012726C (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C01275D0 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0161AF0 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0161B70 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryChildStatus @ 0x1C016552C (DpiDxgkDdiQueryChildStatus.c)
 *     DpiFdoPendingCreatePdoCompletion @ 0x1C02C389C (DpiFdoPendingCreatePdoCompletion.c)
 */

__int64 __fastcall DpiPdoIsChildConnected(__int64 a1, int a2, char a3, char a4, char *a5, bool *a6)
{
  bool v6; // bl
  __int64 v7; // r14
  __int64 v10; // r13
  __int64 ChildStatus; // r15
  PVOID *ChildDescriptor; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  PVOID *v16; // rdi
  unsigned int v17; // eax
  int v18; // r12d
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _DWORD v35[2]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v36; // [rsp+50h] [rbp-59h]
  _DWORD v37[2]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v38[24]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v39; // [rsp+80h] [rbp-29h]
  int v40; // [rsp+88h] [rbp-21h]
  int v41; // [rsp+8Ch] [rbp-1Dh]
  int v42; // [rsp+90h] [rbp-19h]
  int v43; // [rsp+94h] [rbp-15h]
  int v44; // [rsp+98h] [rbp-11h]
  int v45; // [rsp+9Ch] [rbp-Dh]
  __int64 v46; // [rsp+A0h] [rbp-9h]

  v6 = 0;
  v7 = *(_QWORD *)(a1 + 64);
  v10 = a1;
  LODWORD(ChildStatus) = 0;
  *a5 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v7 + 3304), 1u);
  ChildDescriptor = (PVOID *)DpiFdoGetChildDescriptor(v7, a2);
  v16 = ChildDescriptor;
  if ( !ChildDescriptor )
  {
    v29 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v29 + 24) = 0LL;
    WdLogEvent5_WdError(v29);
    v18 = a2;
    goto LABEL_16;
  }
  if ( *(_DWORD *)ChildDescriptor == 1 )
  {
    v17 = *((_DWORD *)ChildDescriptor + 1);
    if ( v17 >= 0xF )
      v6 = v17 <= 0x11;
  }
  switch ( *((_DWORD *)v16 + 4) )
  {
    case 1:
      *a5 = 1;
      break;
    case 3:
LABEL_10:
      v36 = 0LL;
      v18 = a2;
      v19 = *(_QWORD *)(v7 + 3896);
      v20 = *(_QWORD *)(v7 + 40);
      v35[1] = a2;
      v35[0] = v6 ? 3 : 1;
      DxgkAcquireAdapterCoreSync(v19, 1, v15);
      KeWaitForSingleObject(v16[9], Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 3896), 1LL);
      LOBYTE(v21) = a4;
      ChildStatus = (int)DpiDxgkDdiQueryChildStatus(v20, *(_QWORD *)(v7 + 48), v35, v21);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v7 + 3896), v22);
      KeReleaseMutex((PRKMUTEX)v16[9], 0);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v7 + 3896), 1u, v23);
      if ( (int)ChildStatus < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v25, v24);
        *(_QWORD *)(v31 + 24) = *(_QWORD *)(v20 + 208);
        *(_QWORD *)(v31 + 32) = ChildStatus;
        WdLogEvent5_WdError(v31);
        goto LABEL_16;
      }
      v10 = a1;
      *a5 = v36;
      goto LABEL_12;
    case 4:
      if ( (!v6 || *((_DWORD *)v16 + 1) != 15 || *(_QWORD *)(v7 + 3232)) && a3 )
        goto LABEL_10;
      *a5 = *((_BYTE *)v16 + 65);
      break;
    default:
      v30 = WdLogNewEntry5_WdError((unsigned int)(*((_DWORD *)v16 + 4) - 3), 1LL);
      *(_QWORD *)(v30 + 24) = 0LL;
      WdLogEvent5_WdError(v30);
      break;
  }
  v18 = a2;
LABEL_12:
  v26 = *a5;
  if ( !*a5 && *((_BYTE *)v16 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v7 + 3408), Executive, 0, 0, 0LL);
    DpiFdoPendingCreatePdoCompletion(v10, v16);
    KeReleaseMutex((PRKMUTEX)(v7 + 3408), 0);
    v26 = *a5;
  }
  *a6 = v26 == (v16[6] == 0LL);
LABEL_16:
  ExReleaseResourceLite((PERESOURCE)(v7 + 3304));
  KeLeaveCriticalRegion();
  memset(v38, 0, sizeof(v38));
  v41 = 0;
  v27 = *(_QWORD *)(v7 + 2672);
  v40 = 0;
  v39 = 0LL;
  v45 = (unsigned __int8)*a5;
  v37[0] = 30;
  v37[1] = 72;
  memset(v38, 0, sizeof(v38));
  v42 = 38;
  v43 = v18;
  v44 = ChildStatus;
  v46 = v27;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v37, *(_QWORD *)(v7 + 5936));
  return (unsigned int)ChildStatus;
}
