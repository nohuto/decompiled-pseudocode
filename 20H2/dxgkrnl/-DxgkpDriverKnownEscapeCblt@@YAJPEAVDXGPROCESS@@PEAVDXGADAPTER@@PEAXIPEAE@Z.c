/*
 * XREFs of ?DxgkpDriverKnownEscapeCblt@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1C00DA314
 * Callers:
 *     DxgkEscape @ 0x1C00F72C0 (DxgkEscape.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00F60C0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FBFC0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FD740 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01072A4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C028F6BC (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C028F8B8 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall DxgkpDriverKnownEscapeCblt(
        struct DXGPROCESS *a1,
        struct ADAPTER_RENDER **a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  __int64 v8; // rax
  __int64 v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  unsigned int v22; // edi
  _DWORD *v23; // rdi
  int v24; // r15d
  int DxgAdapterSyncObject; // eax
  struct _KTHREAD **v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // edi
  __int64 v36; // rax
  __int64 v37; // r8
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rax
  struct DXGRESOURCE *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  int v46; // ecx
  unsigned int v47; // edi
  __int64 v48; // rax
  __int64 v49; // r8
  int v50; // ecx
  __int64 v51; // rcx
  __int64 v52; // rax
  struct DXGALLOCATION *v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  struct DXGADAPTERSYNCOBJECT *v58; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v59[24]; // [rsp+28h] [rbp-18h] BYREF

  if ( a4 < 4 )
  {
    v8 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v8 + 24) = 811LL;
LABEL_3:
    WdLogEvent5_WdWarning(v8);
    return 3221225485LL;
  }
  v10 = (unsigned int)*a3;
  v11 = 0;
  if ( !(_DWORD)v10 )
  {
    if ( a4 < 8 )
    {
      v8 = WdLogNewEntry5_WdWarning(v10, a2, a3);
      *(_QWORD *)(v8 + 24) = 820LL;
      goto LABEL_3;
    }
    v47 = a3[1];
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 208));
    v48 = (v47 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v48 < *((_DWORD *)a1 + 64) )
    {
      v49 = *((_QWORD *)a1 + 30);
      v50 = *(_DWORD *)(v49 + 16 * v48 + 8);
      if ( ((v47 >> 25) & 0x60) == (*(_BYTE *)(v49 + 16 * v48 + 8) & 0x60) && (v50 & 0x2000) == 0 && (v50 & 0x1F) != 0 )
      {
        v51 = v50 & 0x1F;
        if ( (_BYTE)v51 == 5 )
        {
          v53 = *(struct DXGALLOCATION **)(v49 + 16LL * (unsigned int)v48);
          goto LABEL_64;
        }
        v52 = WdLogNewEntry5_WdError(v51, 2LL * (unsigned int)v48);
        *(_QWORD *)(v52 + 24) = 267LL;
        WdLogEvent5_WdError(v52);
      }
    }
    v53 = 0LL;
LABEL_64:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v58, v53);
    ExReleasePushLockSharedEx((char *)a1 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( !v58 )
    {
      v57 = WdLogNewEntry5_WdWarning(v55, v54, v56);
      *(_QWORD *)(v57 + 24) = 827LL;
      WdLogEvent5_WdWarning(v57);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v58);
      return 3221225485LL;
    }
    if ( (*((_DWORD *)v58 + 18) & 0x40000) != 0 )
      a3[1] = *((_DWORD *)v58 + 24);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v58);
    return 0LL;
  }
  v12 = (unsigned int)(v10 - 1);
  if ( !(_DWORD)v12 )
  {
    if ( a4 < 8 )
    {
      v8 = WdLogNewEntry5_WdWarning(v12, a2, a3);
      *(_QWORD *)(v8 + 24) = 840LL;
      goto LABEL_3;
    }
    v35 = a3[1];
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 208));
    v36 = (v35 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v36 < *((_DWORD *)a1 + 64) )
    {
      v37 = *((_QWORD *)a1 + 30);
      v38 = *(_DWORD *)(v37 + 16 * v36 + 8);
      if ( ((v35 >> 25) & 0x60) == (*(_BYTE *)(v37 + 16 * v36 + 8) & 0x60) && (v38 & 0x2000) == 0 && (v38 & 0x1F) != 0 )
      {
        v39 = v38 & 0x1F;
        if ( (_BYTE)v39 == 4 )
        {
          v41 = *(struct DXGRESOURCE **)(v37 + 16LL * (unsigned int)v36);
          goto LABEL_49;
        }
        v40 = WdLogNewEntry5_WdError(v39, 2LL * (unsigned int)v36);
        *(_QWORD *)(v40 + 24) = 267LL;
        WdLogEvent5_WdError(v40);
      }
    }
    v41 = 0LL;
LABEL_49:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v58, v41);
    ExReleasePushLockSharedEx((char *)a1 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( !v58 )
    {
      v45 = WdLogNewEntry5_WdWarning(v43, v42, v44);
      *(_QWORD *)(v45 + 24) = 847LL;
      WdLogEvent5_WdWarning(v45);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v58);
      return 3221225485LL;
    }
    v46 = *((_DWORD *)v58 + 5);
    if ( v46 )
      a3[1] = v46;
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v58);
    return 0LL;
  }
  if ( (_DWORD)v12 != 1 )
  {
    v8 = WdLogNewEntry5_WdWarning(v12, a2, a3);
    *(_QWORD *)(v8 + 24) = 921LL;
    goto LABEL_3;
  }
  if ( a4 < 0x30 )
  {
    v8 = WdLogNewEntry5_WdWarning(v12, a2, a3);
    *(_QWORD *)(v8 + 24) = 860LL;
    goto LABEL_3;
  }
  if ( *((_QWORD *)a3 + 1) )
  {
    v8 = WdLogNewEntry5_WdWarning(v12, a2, a3);
    *(_QWORD *)(v8 + 24) = 870LL;
    goto LABEL_3;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v59, (struct _KTHREAD **)a1);
  v15 = (unsigned int)a3[1];
  v16 = (a3[1] >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 >= *((_DWORD *)a1 + 64) )
    goto LABEL_19;
  v17 = *((_QWORD *)a1 + 30);
  v14 = ((unsigned int)v15 >> 25) & 0x60;
  v13 = *(unsigned int *)(v17 + 16 * v16 + 8);
  if ( (((unsigned int)v15 >> 25) & 0x60) != (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60)
    || (v13 & 0x2000) != 0
    || (v13 & 0x1F) == 0 )
  {
    goto LABEL_19;
  }
  v13 &= 0x1Fu;
  if ( (_BYTE)v13 != 8 )
  {
    v18 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v18 + 24) = 267LL;
    WdLogEvent5_WdError(v18);
LABEL_19:
    v19 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    v20 = (unsigned int)a3[1];
LABEL_20:
    *(_QWORD *)(v19 + 24) = v20;
    WdLogEvent5_WdWarning(v19);
    LODWORD(v21) = -1073741811;
LABEL_21:
    v11 = v21;
    goto LABEL_22;
  }
  v23 = *(_DWORD **)(v17 + 16LL * (unsigned int)v16);
  if ( !v23 || v23[48] != 4 )
    goto LABEL_19;
  v24 = v23[49];
  if ( (v24 & 0x100) == 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    v20 = (unsigned int)a3[1];
    *(_QWORD *)(v19 + 32) = 884LL;
    goto LABEL_20;
  }
  if ( *((_BYTE *)a2 + 209) )
  {
    a3[1] = DXGSYNCOBJECT::GetHostHandle((DXGSYNCOBJECT *)v23, v15, v15);
  }
  else
  {
    v58 = 0LL;
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v23 + 8));
    DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject((DXGSYNCOBJECT *)v23, a2[338], &v58);
    v26 = (struct _KTHREAD **)(v23 + 8);
    v21 = DxgAdapterSyncObject;
    DXGFASTMUTEX::Release(v26, v27);
    if ( (int)v21 < 0 )
    {
      v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v31 + 24) = (unsigned int)a3[1];
      *(_QWORD *)(v31 + 32) = v21;
      WdLogEvent5_WdWarning(v31);
      goto LABEL_21;
    }
    v32 = *((_QWORD *)v58 + 5);
    if ( v32 )
      v33 = *(_QWORD *)(v32 + 48);
    else
      v33 = 0LL;
    *((_QWORD *)a3 + 1) = v33;
    if ( !v33 )
    {
      if ( (v24 & 0x10) == 0 )
      {
        v34 = WdLogNewEntry5_WdWarning(v29, v28, v30);
        *(_QWORD *)(v34 + 24) = (unsigned int)a3[1];
        *(_QWORD *)(v34 + 32) = 912LL;
        WdLogEvent5_WdWarning(v34);
        v22 = -1073741811;
        goto LABEL_23;
      }
      *a5 = 0;
LABEL_22:
      v22 = v11;
LABEL_23:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v59);
      return v22;
    }
  }
  *a5 = 1;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v59);
  return 0LL;
}
