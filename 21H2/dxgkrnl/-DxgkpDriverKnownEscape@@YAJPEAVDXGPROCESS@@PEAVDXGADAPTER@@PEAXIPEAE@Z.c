/*
 * XREFs of ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1C03083C4
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C019E94C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C033FB4C (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C033FD90 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall DxgkpDriverKnownEscape(
        struct DXGPROCESS *a1,
        struct ADAPTER_RENDER **a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r9
  int v13; // r8d
  unsigned int v14; // eax
  _DWORD *v15; // rsi
  int v16; // r15d
  int DxgAdapterSyncObject; // eax
  struct _KTHREAD **v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // esi
  unsigned int v23; // esi
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // ecx
  struct _EX_RUNDOWN_REF *v27; // rdx
  int v28; // ecx
  unsigned int v29; // r15d
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // ecx
  struct _EX_RUNDOWN_REF *v36; // rdx
  struct DXGADAPTERSYNCOBJECT *v37; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v38[24]; // [rsp+58h] [rbp-18h] BYREF

  if ( a4 < 4 )
  {
    WdLogSingleEntry1(3LL, 753LL);
    return 3221225485LL;
  }
  v9 = 0;
  if ( !*a3 )
  {
    if ( a4 < 8 )
    {
      WdLogSingleEntry1(3LL, 762LL);
      return 3221225485LL;
    }
    v29 = a3[1];
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a1 + 248, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v32 = *((_DWORD *)a1 + 68);
        if ( v32 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v30, (const EVENT_DESCRIPTOR *)"g", v31, v32);
      }
      ExAcquirePushLockSharedEx((char *)a1 + 248, 0LL);
    }
    v33 = (v29 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v33 < *((_DWORD *)a1 + 74) )
    {
      v34 = *((_QWORD *)a1 + 35);
      v35 = *(_DWORD *)(v34 + 16 * v33 + 8);
      if ( ((v29 >> 25) & 0x60) == (*(_BYTE *)(v34 + 16 * v33 + 8) & 0x60) && (v35 & 0x2000) == 0 && (v35 & 0x1F) != 0 )
      {
        if ( (v35 & 0x1F) == 5 )
        {
          v36 = *(struct _EX_RUNDOWN_REF **)(v34 + 16LL * (unsigned int)v33);
          goto LABEL_69;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v36 = 0LL;
LABEL_69:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v37, v36);
    ExReleasePushLockSharedEx((char *)a1 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v37 )
    {
      WdLogSingleEntry1(3LL, 769LL);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v37);
      return 3221225485LL;
    }
    if ( (*((_DWORD *)v37 + 18) & 0x40000) != 0 )
      a3[1] = *((_DWORD *)v37 + 5);
    *a5 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v37);
    return 0LL;
  }
  if ( *a3 == 1 )
  {
    if ( a4 < 8 )
    {
      WdLogSingleEntry1(3LL, 783LL);
      return 3221225485LL;
    }
    v23 = a3[1];
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 248));
    v24 = (v23 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < *((_DWORD *)a1 + 74) )
    {
      v25 = *((_QWORD *)a1 + 35);
      v26 = *(_DWORD *)(v25 + 16 * v24 + 8);
      if ( ((v23 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60) && (v26 & 0x2000) == 0 && (v26 & 0x1F) != 0 )
      {
        if ( (v26 & 0x1F) == 4 )
        {
          v27 = *(struct _EX_RUNDOWN_REF **)(v25 + 16LL * (unsigned int)v24);
          goto LABEL_48;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v27 = 0LL;
LABEL_48:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v37, v27);
    ExReleasePushLockSharedEx((char *)a1 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v37 )
    {
      WdLogSingleEntry1(3LL, 790LL);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v37);
      return 3221225485LL;
    }
    v28 = *((_DWORD *)v37 + 5);
    if ( v28 )
      a3[1] = v28;
    *a5 = 0;
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v37);
    return 0LL;
  }
  if ( *a3 != 2 )
  {
    WdLogSingleEntry1(3LL, 865LL);
    return 3221225485LL;
  }
  if ( a4 < 0x30 )
  {
    WdLogSingleEntry1(3LL, 804LL);
    return 3221225485LL;
  }
  if ( *((_QWORD *)a3 + 1) )
  {
    WdLogSingleEntry1(3LL, 814LL);
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v38, a1);
  v10 = (unsigned int)a3[1];
  v11 = (a3[1] >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 >= *((_DWORD *)a1 + 74)
    || (v12 = *((_QWORD *)a1 + 35),
        v13 = *(_DWORD *)(v12 + 16 * v11 + 8),
        (((unsigned int)v10 >> 25) & 0x60) != (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60))
    || (v13 & 0x2000) != 0
    || (v13 & 0x1F) == 0 )
  {
    v14 = a3[1];
    goto LABEL_34;
  }
  if ( (v13 & 0x1F) != 8 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    v14 = a3[1];
LABEL_34:
    WdLogSingleEntry1(3LL, v14);
    goto LABEL_35;
  }
  v15 = *(_DWORD **)(v12 + 16LL * (unsigned int)v11);
  v14 = a3[1];
  if ( !v15 || v15[50] != 4 )
    goto LABEL_34;
  v16 = v15[51];
  if ( (v16 & 0x100) == 0 )
  {
    WdLogSingleEntry2(3LL, v10, 828LL);
LABEL_35:
    LODWORD(v19) = -1073741811;
    goto LABEL_36;
  }
  if ( !*((_BYTE *)a2 + 209) )
  {
    v37 = 0LL;
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v15 + 8));
    DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject((DXGSYNCOBJECT *)v15, a2[350], &v37);
    v18 = (struct _KTHREAD **)(v15 + 8);
    v19 = DxgAdapterSyncObject;
    DXGFASTMUTEX::Release(v18);
    if ( (int)v19 < 0 )
    {
      WdLogSingleEntry2(3LL, (unsigned int)a3[1], v19);
LABEL_36:
      v9 = v19;
      goto LABEL_37;
    }
    v20 = *((_QWORD *)v37 + 5);
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 32);
      *((_QWORD *)a3 + 1) = v21;
      if ( v21 )
        goto LABEL_24;
    }
    else
    {
      *((_QWORD *)a3 + 1) = 0LL;
    }
    if ( (v16 & 0x10) == 0 )
    {
      WdLogSingleEntry2(3LL, (unsigned int)a3[1], 856LL);
      v22 = -1073741811;
LABEL_38:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
      return v22;
    }
    *a5 = 0;
LABEL_37:
    v22 = v9;
    goto LABEL_38;
  }
  a3[1] = DXGSYNCOBJECT::GetHostHandle((DXGSYNCOBJECT *)v15, v10, 8u);
LABEL_24:
  *a5 = 1;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
  return 0LL;
}
