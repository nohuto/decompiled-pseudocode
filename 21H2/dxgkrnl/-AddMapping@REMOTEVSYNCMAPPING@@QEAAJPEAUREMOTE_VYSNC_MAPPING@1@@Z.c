/*
 * XREFs of ?AddMapping@REMOTEVSYNCMAPPING@@QEAAJPEAUREMOTE_VYSNC_MAPPING@1@@Z @ 0x1C004F370
 * Callers:
 *     _lambda_743abd50e71d01f1d7427b1607719462_::operator() @ 0x1C00D7D84 (_lambda_743abd50e71d01f1d7427b1607719462_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00046F8 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C0009FFC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C000D518 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019134 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     REMOTEVSYNCMAPPING::IterateList__lambda_daaf3f6a0c98c285f3d4af1bfc621455___ @ 0x1C004EFA8 (REMOTEVSYNCMAPPING--IterateList__lambda_daaf3f6a0c98c285f3d4af1bfc621455___.c)
 *     McTemplateK0xqppq_EtwWriteTransfer @ 0x1C004F858 (McTemplateK0xqppq_EtwWriteTransfer.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01369BC (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ??_GREMOTE_VYSNC_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1C02C3CAC (--_GREMOTE_VYSNC_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall REMOTEVSYNCMAPPING::AddMapping(KSPIN_LOCK *this, struct _LUID *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  DXGADAPTER *v7; // r14
  int SourceConnectedToTargetInClientVidPn; // edi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  unsigned int LowPart; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  KSPIN_LOCK v24; // r14
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // r12d
  struct DXGADAPTER *v30; // rbx
  KSPIN_LOCK v31; // rax
  _QWORD *v32; // rax
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  DXGADAPTER *v37[2]; // [rsp+40h] [rbp-59h] BYREF
  char v38[8]; // [rsp+50h] [rbp-49h] BYREF
  DXGADAPTER *v39; // [rsp+58h] [rbp-41h]
  char v40; // [rsp+60h] [rbp-39h]
  _QWORD v41[5]; // [rsp+70h] [rbp-29h] BYREF
  char *v42; // [rsp+98h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp+7h] BYREF
  char v44; // [rsp+B8h] [rbp+1Fh]
  char v45; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int v46; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v47; // [rsp+118h] [rbp+7Fh] BYREF

  v37[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v37, a2);
  v7 = v37[0];
  if ( !v37[0] )
  {
    SourceConnectedToTargetInClientVidPn = -1073741585;
    v9 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v4, v6);
    v9[3] = a2->LowPart;
    v9[4] = a2->HighPart;
    v9[5] = -1073741585LL;
    WdLogEvent5_WdWarning(v9);
    goto LABEL_31;
  }
  v39 = v37[0];
  v40 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v38);
  if ( *((_BYTE *)v7 + 2609) || (v13 = *((_DWORD *)v7 + 50), v7 = v37[0], v13 != 1) || !*((_QWORD *)v37[0] + 337) )
  {
    SourceConnectedToTargetInClientVidPn = -1073741585;
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
    v18[3] = v7;
    v18[4] = -1073741585LL;
    goto LABEL_28;
  }
  LowPart = a2[1].LowPart;
  v46 = 0;
  SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v37[0], LowPart, &v46);
  if ( SourceConnectedToTargetInClientVidPn >= 0 )
  {
    v19 = operator new(0x48uLL, 0x4B677844u, 1, (POOL_TYPE)512);
    v24 = (KSPIN_LOCK)v19;
    if ( v19 )
      v19[7] = 0LL;
    else
      v24 = 0LL;
    if ( !v24 )
    {
      SourceConnectedToTargetInClientVidPn = -1073741801;
      v25 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
      *(_QWORD *)(v25 + 24) = 178LL;
      WdLogEvent5_WdLowResource(v25);
      goto LABEL_29;
    }
    v44 = 0;
    v42 = (char *)(this + 2);
    KeAcquireInStackQueuedSpinLock(this + 2, &LockHandle);
    this[3] = (KSPIN_LOCK)KeGetCurrentThread();
    v44 = 1;
    v41[0] = &v47;
    v41[1] = &v45;
    v47 = 0;
    v45 = 0;
    v41[2] = a2;
    REMOTEVSYNCMAPPING::IterateList__lambda_daaf3f6a0c98c285f3d4af1bfc621455___((_QWORD **)this, (__int64)v41);
    v29 = v46;
    v30 = v37[0];
    if ( v47 >= 0x10 )
    {
      SourceConnectedToTargetInClientVidPn = -1073741756;
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v32[3] = a2[2];
      v32[4] = -1073741756LL;
    }
    else
    {
      if ( !v45 )
      {
        *(_DWORD *)(v24 + 48) = v46;
        *(_OWORD *)(v24 + 16) = *(_OWORD *)&a2->LowPart;
        *(_OWORD *)(v24 + 32) = *(_OWORD *)&a2[2].LowPart;
        v31 = *this;
        if ( *(KSPIN_LOCK **)(*this + 8) != this )
          __fastfail(3u);
        *(_QWORD *)v24 = v31;
        *(_QWORD *)(v24 + 8) = this;
        *(_QWORD *)(v31 + 8) = v24;
        *this = v24;
        goto LABEL_21;
      }
      SourceConnectedToTargetInClientVidPn = -1073741723;
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v32[3] = v30;
      v32[4] = a2[1].LowPart;
      v32[5] = a2[2];
      v32[6] = -1073741723LL;
    }
    WdLogEvent5_WdWarning(v32);
LABEL_21:
    if ( SourceConnectedToTargetInClientVidPn >= 0 )
    {
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)(v24 + 56), v30);
      DXGADAPTER::IncrementVSyncWaiter(v30, v29);
    }
    if ( v44 )
    {
      v44 = 0;
      *((_QWORD *)v42 + 1) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    if ( SourceConnectedToTargetInClientVidPn < 0 )
      REMOTE_VYSNC_MAPPING_ENTRY::`scalar deleting destructor'((REMOTE_VYSNC_MAPPING_ENTRY *)v24, v26);
    goto LABEL_29;
  }
  SourceConnectedToTargetInClientVidPn = -1073741584;
  v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
  v18[3] = v7;
  v18[4] = a2[1].LowPart;
  v18[5] = -1073741584LL;
LABEL_28:
  WdLogEvent5_WdWarning(v18);
LABEL_29:
  if ( v40 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v38);
LABEL_31:
  DXGADAPTER_REFERENCE::Assign(v37, 0LL);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    McTemplateK0xqppq_EtwWriteTransfer(
      v34,
      v33,
      v35,
      *a2,
      a2[1].LowPart,
      *(_QWORD *)&a2[3],
      *(_QWORD *)&a2[2],
      SourceConnectedToTargetInClientVidPn);
  return (unsigned int)SourceConnectedToTargetInClientVidPn;
}
