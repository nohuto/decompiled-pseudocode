/*
 * XREFs of DxgkSetIndirectDisplayRenderAdapter @ 0x1C0226338
 * Callers:
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C020C91C (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1C02267C8 (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0007C88 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C0009FFC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D178 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019134 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DXGKCALLONEXIT__lambda_412e717f5b4824a72ec987e49bacdc3c___ @ 0x1C0025A38 (DXGKCALLONEXIT__lambda_412e717f5b4824a72ec987e49bacdc3c___.c)
 *     _DXGKCALLONEXIT__lambda_412e717f5b4824a72ec987e49bacdc3c____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C0025B10 (_DXGKCALLONEXIT__lambda_412e717f5b4824a72ec987e49bacdc3c____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1C003908C (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x1C02159B0 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C0221720 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 */

__int64 __fastcall DxgkSetIndirectDisplayRenderAdapter(struct DXGADAPTER *a1, struct _LUID *a2, _BYTE *a3)
{
  struct _LUID *v6; // rdx
  __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rax
  unsigned int v10; // ebx
  DXGADAPTER *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  DXGADAPTER *v21; // rax
  __int64 v22; // r15
  DXGADAPTER *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  DXGADAPTER *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  DXGADAPTERSTOPRESETLOCKSHARED *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  DXGADAPTER *v38[2]; // [rsp+20h] [rbp-B9h] BYREF
  DXGADAPTER *v39[2]; // [rsp+30h] [rbp-A9h] BYREF
  _BYTE v40[8]; // [rsp+40h] [rbp-99h] BYREF
  DXGADAPTER *v41; // [rsp+48h] [rbp-91h]
  char v42; // [rsp+50h] [rbp-89h]
  _BYTE v43[8]; // [rsp+58h] [rbp-81h] BYREF
  struct DXGADAPTER *v44; // [rsp+60h] [rbp-79h]
  char v45; // [rsp+68h] [rbp-71h]
  unsigned __int64 v46; // [rsp+70h] [rbp-69h] BYREF
  _BYTE v47[16]; // [rsp+78h] [rbp-61h] BYREF
  struct _GUID v48; // [rsp+88h] [rbp-51h] BYREF
  __int128 v49; // [rsp+A0h] [rbp-39h] BYREF
  __int64 *v50; // [rsp+B0h] [rbp-29h]
  unsigned __int64 *v51; // [rsp+B8h] [rbp-21h]
  char *v52; // [rsp+C0h] [rbp-19h]
  _BYTE v53[96]; // [rsp+D0h] [rbp-9h] BYREF
  char v54; // [rsp+140h] [rbp+67h] BYREF
  int IndirectDisplayPairedAdapter; // [rsp+148h] [rbp+6Fh] BYREF
  unsigned __int64 v56; // [rsp+150h] [rbp+77h] BYREF
  __int64 v57; // [rsp+158h] [rbp+7Fh] BYREF

  IndirectDisplayPairedAdapter = 0;
  v54 = 0;
  v48 = 0LL;
  if ( a3 )
    *a3 = 0;
  *(_QWORD *)&v49 = a2;
  *((_QWORD *)&v49 + 1) = &IndirectDisplayPairedAdapter;
  v50 = &v57;
  v51 = &v46;
  v52 = &v54;
  DXGKCALLONEXIT__lambda_412e717f5b4824a72ec987e49bacdc3c_((__int64)v53, &v49);
  v57 = *(_QWORD *)((char *)a1 + 316);
  v56 = 0LL;
  DXGADAPTER::IsAdapterSessionized(a1, v6, 0LL, &v56);
  v8 = (*((_DWORD *)a1 + 87) & 0x100) == 0;
  v46 = v56;
  if ( !v8 )
  {
    v11 = 0LL;
    v38[0] = 0LL;
    if ( a2->HighPart || a2->LowPart )
    {
      DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v38, a2);
      v11 = v38[0];
      if ( !v38[0] )
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
        v14[3] = a2->HighPart;
        v14[4] = a2->LowPart;
        v14[5] = -1073741811LL;
        WdLogEvent5_WdError(v14);
        v10 = -1073741584;
        IndirectDisplayPairedAdapter = -1073741584;
LABEL_44:
        DXGADAPTER_REFERENCE::Assign(v38, 0LL);
        goto LABEL_45;
      }
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v47, (struct DXGFASTMUTEX *const)(*((_QWORD *)a1 + 337) + 136LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
    v39[0] = 0LL;
    IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter((ADAPTER_DISPLAY **)a1, 0, v39);
    if ( IndirectDisplayPairedAdapter < 0 )
    {
      v17 = WdLogNewEntry5_WdEvent(v16, v15);
      *(_QWORD *)(v17 + 24) = a1;
      WdLogEvent5_WdEvent(v17);
    }
    if ( v39[0] == v11 )
    {
      v18 = WdLogNewEntry5_WdEvent(v16, v15);
      *(_QWORD *)(v18 + 24) = a2->HighPart;
      *(_QWORD *)(v18 + 32) = a2->LowPart;
      WdLogEvent5_WdEvent(v18);
      IndirectDisplayPairedAdapter = 0;
      v10 = 0;
      goto LABEL_42;
    }
    if ( v39[0] )
      v19 = *((_QWORD *)v39[0] + 338);
    else
      v19 = *((_QWORD *)v11 + 338);
    v20 = v19 + 24;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v20, 0LL);
    *(_QWORD *)(v20 + 8) = KeGetCurrentThread();
    v21 = v39[0];
    if ( !v39[0] )
      v21 = v38[0];
    v22 = *((_QWORD *)v21 + 338) + 48LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v22, 0LL);
    v23 = v38[0];
    *(_QWORD *)(v22 + 8) = KeGetCurrentThread();
    if ( v23 )
    {
      v41 = v23;
      v42 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
      if ( !*((_QWORD *)v23 + 338) || DXGADAPTER::IsComputeOnlyAdapter(v23) )
      {
        v33 = WdLogNewEntry5_WdError(v25, v24);
        v10 = -1073741584;
        *(_QWORD *)(v33 + 24) = v23;
        *(_QWORD *)(v33 + 32) = -1073741584LL;
        WdLogEvent5_WdError(v33);
      }
      else
      {
        v27 = *((_DWORD *)v23 + 50);
        v28 = v38[0];
        if ( v27 == 1 && !*((_BYTE *)v38[0] + 2609) )
        {
          v48 = *(struct _GUID *)((char *)v38[0] + 300);
          if ( v42 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
          goto LABEL_25;
        }
        v32 = WdLogNewEntry5_WdWarning(v25, v24, v26);
        v10 = -1073741130;
        *(_QWORD *)(v32 + 24) = v28;
        *(_QWORD *)(v32 + 32) = -1073741130LL;
        WdLogEvent5_WdWarning(v32);
      }
      IndirectDisplayPairedAdapter = v10;
      if ( v42 )
      {
        v34 = (DXGADAPTERSTOPRESETLOCKSHARED *)v40;
LABEL_40:
        DXGADAPTERSTOPRESETLOCKSHARED::Release(v34);
      }
LABEL_41:
      *(_QWORD *)(v22 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v22, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(v20 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v20, 0LL);
      KeLeaveCriticalRegion();
LABEL_42:
      DXGADAPTER_REFERENCE::Assign(v39, 0LL);
      if ( v47[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47, v36);
      goto LABEL_44;
    }
LABEL_25:
    v44 = a1;
    v45 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
    if ( *((_DWORD *)a1 + 50) == 1 && !*((_BYTE *)a1 + 2609) )
    {
      if ( v39[0] )
        ADAPTER_RENDER::DisconnectFromDisplayAdapters(*((ADAPTER_RENDER **)v39[0] + 338), a1, *((_DWORD *)a1 + 50));
      ADAPTER_DISPLAY::SetPairedRenderAdapter(*((ADAPTER_DISPLAY **)a1 + 337), v38[0], &v48);
      if ( v45 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
      v54 = 1;
      if ( a3 )
        *a3 = 1;
      IndirectDisplayPairedAdapter = 0;
      v10 = 0;
      goto LABEL_41;
    }
    v35 = WdLogNewEntry5_WdWarning(v30, v29, v31);
    *(_QWORD *)(v35 + 24) = a1;
    v10 = -1073741130;
    *(_QWORD *)(v35 + 32) = -1073741130LL;
    WdLogEvent5_WdWarning(v35);
    IndirectDisplayPairedAdapter = -1073741130;
    if ( v45 )
    {
      v34 = (DXGADAPTERSTOPRESETLOCKSHARED *)v43;
      goto LABEL_40;
    }
    goto LABEL_41;
  }
  v9 = WdLogNewEntry5_WdError(v56, v7);
  *(_QWORD *)(v9 + 24) = a1;
  *(_QWORD *)(v9 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v9);
  v10 = -1073741585;
  IndirectDisplayPairedAdapter = -1073741585;
LABEL_45:
  DXGKCALLONEXIT__lambda_412e717f5b4824a72ec987e49bacdc3c____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v53);
  return v10;
}
