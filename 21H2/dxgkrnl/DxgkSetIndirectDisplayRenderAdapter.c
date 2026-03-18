/*
 * XREFs of DxgkSetIndirectDisplayRenderAdapter @ 0x1C02D4418
 * Callers:
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C02BB170 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1C02D48F4 (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000F25C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1C00446AC (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     DXGKCALLONEXIT__lambda_551b55b43c33c06817801b78f16a1bd1___ @ 0x1C0049558 (DXGKCALLONEXIT__lambda_551b55b43c33c06817801b78f16a1bd1___.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C0222D62 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x1C02C37B8 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z.c)
 *     _lambda_551b55b43c33c06817801b78f16a1bd1_::operator() @ 0x1C02CE3E8 (_lambda_551b55b43c33c06817801b78f16a1bd1_--operator().c)
 */

__int64 __fastcall DxgkSetIndirectDisplayRenderAdapter(struct DXGADAPTER *a1, struct _LUID *a2, _BYTE *a3)
{
  struct _LUID *v6; // rdx
  bool v7; // zf
  unsigned int v8; // ebx
  struct DXGADAPTER *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
  struct DXGADAPTER *v12; // rax
  __int64 v13; // r15
  struct DXGADAPTER *v14; // rdi
  int v15; // edi
  DXGADAPTERSTOPRESETLOCKSHARED *v16; // rcx
  struct DXGADAPTER *v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  DXGADAPTER *v20[3]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v21; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v22; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v23; // [rsp+98h] [rbp-68h]
  char *v24; // [rsp+A0h] [rbp-60h]
  _BYTE v25[8]; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGADAPTER *v26; // [rsp+B8h] [rbp-48h]
  char v27; // [rsp+C0h] [rbp-40h]
  _BYTE v28[16]; // [rsp+C8h] [rbp-38h] BYREF
  struct _GUID v29; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *v30[5]; // [rsp+E8h] [rbp-18h] BYREF
  char v31; // [rsp+110h] [rbp+10h]
  char v32; // [rsp+160h] [rbp+60h] BYREF
  int IndirectDisplayPairedAdapter; // [rsp+168h] [rbp+68h] BYREF
  __int64 v34; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v35; // [rsp+178h] [rbp+78h] BYREF

  IndirectDisplayPairedAdapter = 0;
  v34 = 0LL;
  v19 = 0LL;
  v32 = 0;
  v29 = 0LL;
  if ( a3 )
    *a3 = 0;
  *(_QWORD *)&v21 = a2;
  *((_QWORD *)&v21 + 1) = &IndirectDisplayPairedAdapter;
  v22 = &v34;
  v23 = &v19;
  v24 = &v32;
  DXGKCALLONEXIT__lambda_551b55b43c33c06817801b78f16a1bd1_((__int64)v30, &v21);
  v34 = *(_QWORD *)((char *)a1 + 404);
  v35 = 0LL;
  DXGADAPTER::IsAdapterSessionized(a1, v6, 0LL, &v35);
  v7 = (*((_DWORD *)a1 + 109) & 0x100) == 0;
  v19 = v35;
  if ( v7 )
  {
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.",
      (__int64)a1,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v8 = -1073741585;
    IndirectDisplayPairedAdapter = -1073741585;
    goto LABEL_46;
  }
  v9 = 0LL;
  v18[0] = 0LL;
  if ( !a2->HighPart && !a2->LowPart
    || (DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v18, a2), (v9 = v18[0]) != 0LL) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct DXGFASTMUTEX *const)(*((_QWORD *)a1 + 349) + 152LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
    v20[0] = 0LL;
    IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter((ADAPTER_DISPLAY **)a1, 0, v20);
    if ( IndirectDisplayPairedAdapter < 0 )
      WdLogSingleEntry1(4LL, a1);
    if ( v20[0] == v9 )
    {
      WdLogSingleEntry2(4LL, a2->HighPart, a2->LowPart);
      IndirectDisplayPairedAdapter = 0;
      v8 = 0;
      goto LABEL_43;
    }
    if ( v20[0] )
      v10 = *((_QWORD *)v20[0] + 350);
    else
      v10 = *((_QWORD *)v9 + 350);
    v11 = v10 + 24;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
    v12 = v20[0];
    if ( !v20[0] )
      v12 = v18[0];
    v13 = *((_QWORD *)v12 + 350) + 48LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13, 0LL);
    v14 = v18[0];
    *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
    if ( v14 )
    {
      v26 = v14;
      v27 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
      if ( !*((_QWORD *)v14 + 350) || (*((_DWORD *)v14 + 666) & 8) != 0 )
      {
        WdLogSingleEntry2(2LL, v14, -1073741584LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Caller specified adapter 0x%I64x is not a capable adapter, returning 0x%I64x",
          (__int64)v14,
          -1073741584LL,
          0LL,
          0LL,
          0LL);
        v15 = -1073741584;
      }
      else
      {
        if ( *((_DWORD *)v14 + 50) == 1 && !*((_BYTE *)v18[0] + 2705) )
        {
          v29 = *(struct _GUID *)((char *)v18[0] + 308);
          if ( v27 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
          goto LABEL_25;
        }
        v15 = -1073741130;
        WdLogSingleEntry2(3LL, v18[0], -1073741130LL);
      }
      IndirectDisplayPairedAdapter = v15;
      if ( v27 )
      {
        v16 = (DXGADAPTERSTOPRESETLOCKSHARED *)v25;
LABEL_40:
        DXGADAPTERSTOPRESETLOCKSHARED::Release(v16);
      }
LABEL_41:
      v8 = v15;
LABEL_42:
      *(_QWORD *)(v13 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v13, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(v11 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v11, 0LL);
      KeLeaveCriticalRegion();
LABEL_43:
      DXGADAPTER_REFERENCE::Assign(v20, 0LL);
      if ( v28[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
      goto LABEL_45;
    }
LABEL_25:
    *((_QWORD *)&v21 + 1) = a1;
    LOBYTE(v22) = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v21);
    if ( *((_DWORD *)a1 + 50) == 1 && !*((_BYTE *)a1 + 2705) )
    {
      if ( v20[0] )
        ADAPTER_RENDER::DisconnectFromDisplayAdapters(*((ADAPTER_RENDER **)v20[0] + 350), a1, *((_DWORD *)a1 + 50));
      ADAPTER_DISPLAY::SetPairedRenderAdapter(*((ADAPTER_DISPLAY **)a1 + 349), v18[0], &v29);
      if ( (_BYTE)v22 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v21);
      v32 = 1;
      if ( a3 )
        *a3 = 1;
      IndirectDisplayPairedAdapter = 0;
      v8 = 0;
      goto LABEL_42;
    }
    v15 = -1073741130;
    WdLogSingleEntry2(3LL, a1, -1073741130LL);
    IndirectDisplayPairedAdapter = -1073741130;
    if ( (_BYTE)v22 )
    {
      v16 = (DXGADAPTERSTOPRESETLOCKSHARED *)&v21;
      goto LABEL_40;
    }
    goto LABEL_41;
  }
  WdLogSingleEntry3(2LL, a2->HighPart, a2->LowPart, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid Render Adapter LUID (0x%I64x, 0x%I64x) specified, returning 0x%I64x",
    a2->HighPart,
    a2->LowPart,
    -1073741811LL,
    0LL,
    0LL);
  v8 = -1073741584;
  IndirectDisplayPairedAdapter = -1073741584;
LABEL_45:
  DXGADAPTER_REFERENCE::Assign(v18, 0LL);
LABEL_46:
  if ( v31 )
    lambda_551b55b43c33c06817801b78f16a1bd1_::operator()(v30);
  return v8;
}
