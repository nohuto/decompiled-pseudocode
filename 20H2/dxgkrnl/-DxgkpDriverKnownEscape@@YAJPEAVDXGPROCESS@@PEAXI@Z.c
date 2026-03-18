/*
 * XREFs of ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAXI@Z @ 0x1C0266688
 * Callers:
 *     DxgkEscape @ 0x1C00F72C0 (DxgkEscape.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00F60C0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FBFC0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FD740 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01072A4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

__int64 __fastcall DxgkpDriverKnownEscape(struct DXGPROCESS *a1, _DWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  int Ptr_high; // ecx
  unsigned int v21; // ebp
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rax
  struct _EX_RUNDOWN_REF *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  struct _EX_RUNDOWN_REF *v36; // [rsp+48h] [rbp+20h] BYREF

  if ( (unsigned int)a3 < 4 )
  {
    v5 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v5 + 24) = 747LL;
LABEL_3:
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
  v7 = (unsigned int)*a2;
  if ( !(_DWORD)v7 )
  {
    if ( (unsigned int)a3 < 8 )
    {
      v5 = WdLogNewEntry5_WdWarning(v7, a2, a3);
      *(_QWORD *)(v5 + 24) = 756LL;
      goto LABEL_3;
    }
    v21 = a2[1];
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a1 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v24 = *((_DWORD *)a1 + 58);
        if ( v24 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v22, &EventBlockThread, v23, v24);
      }
      ExAcquirePushLockSharedEx((char *)a1 + 208, 0LL);
    }
    v25 = (v21 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v25 < *((_DWORD *)a1 + 64) )
    {
      v26 = *((_QWORD *)a1 + 30);
      v27 = *(_DWORD *)(v26 + 16 * v25 + 8);
      if ( ((v21 >> 25) & 0x60) == (*(_BYTE *)(v26 + 16 * v25 + 8) & 0x60) && (v27 & 0x2000) == 0 && (v27 & 0x1F) != 0 )
      {
        v28 = v27 & 0x1F;
        if ( (_BYTE)v28 == 5 )
        {
          v30 = *(struct _EX_RUNDOWN_REF **)(v26 + 16LL * (unsigned int)v25);
          goto LABEL_38;
        }
        v29 = WdLogNewEntry5_WdError(v28, 2LL * (unsigned int)v25);
        *(_QWORD *)(v29 + 24) = 267LL;
        WdLogEvent5_WdError(v29);
      }
    }
    v30 = 0LL;
LABEL_38:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v36, v30);
    ExReleasePushLockSharedEx((char *)a1 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( !v36 )
    {
      v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
      *(_QWORD *)(v34 + 24) = 763LL;
      WdLogEvent5_WdWarning(v34);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v36, v35);
      return 3221225485LL;
    }
    if ( (v36[9].Count & 0x40000) != 0 )
      a2[1] = v36[12].Count;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v36, v31);
    return 0LL;
  }
  if ( (_DWORD)v7 != 1 )
  {
    v5 = WdLogNewEntry5_WdWarning(v7, a2, a3);
    *(_QWORD *)(v5 + 24) = 793LL;
    goto LABEL_3;
  }
  if ( (unsigned int)a3 < 8 )
  {
    v5 = WdLogNewEntry5_WdWarning(v7, a2, a3);
    *(_QWORD *)(v5 + 24) = 776LL;
    goto LABEL_3;
  }
  v8 = a2[1];
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 208));
  v9 = (v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 < *((_DWORD *)a1 + 64) )
  {
    v10 = *((_QWORD *)a1 + 30);
    v11 = *(_DWORD *)(v10 + 16 * v9 + 8);
    if ( ((v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60) && (v11 & 0x2000) == 0 && (v11 & 0x1F) != 0 )
    {
      v12 = v11 & 0x1F;
      if ( (_BYTE)v12 == 4 )
      {
        v14 = *(struct _EX_RUNDOWN_REF **)(v10 + 16LL * (unsigned int)v9);
        goto LABEL_17;
      }
      v13 = WdLogNewEntry5_WdError(v12, 2LL * (unsigned int)v9);
      *(_QWORD *)(v13 + 24) = 267LL;
      WdLogEvent5_WdError(v13);
    }
  }
  v14 = 0LL;
LABEL_17:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v36, v14);
  ExReleasePushLockSharedEx((char *)a1 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v36 )
  {
    v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v18 + 24) = 783LL;
    WdLogEvent5_WdWarning(v18);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v36, v19);
    return 3221225485LL;
  }
  Ptr_high = HIDWORD(v36[2].Ptr);
  if ( Ptr_high )
    a2[1] = Ptr_high;
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v36, v15);
  return 0LL;
}
