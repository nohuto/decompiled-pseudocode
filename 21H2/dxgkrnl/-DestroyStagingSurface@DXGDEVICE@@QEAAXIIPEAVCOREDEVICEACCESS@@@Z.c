/*
 * XREFs of ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C02E4610
 * Callers:
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C02E440C (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02EDA94 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0331EE0 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019EA90 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall DXGDEVICE::DestroyStagingSurface(
        DXGDEVICE *this,
        unsigned int a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4)
{
  DXGDEVICE *v4; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGPROCESS *Current; // rbx
  struct DXGRESOURCE *v12; // rbp
  unsigned int v13; // edi
  __int64 v14; // r8
  int v15; // edx
  __int64 v16; // r8
  int v17; // edx
  unsigned __int64 v18; // rax
  unsigned int v19; // edi
  __int64 v20; // r9
  int v21; // edx
  int v22; // edx
  struct DXGALLOCATION **v23; // r8
  struct DXGRESOURCE *v24; // r9
  __int64 v25; // rdx
  struct DXGALLOCATION *v26; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v27[24]; // [rsp+58h] [rbp-40h] BYREF

  v4 = this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 8858LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8858LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v8, v7, v9, v10);
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 8866LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 8866LL, 0LL, 0LL, 0LL, 0LL);
  }
  v26 = 0LL;
  v12 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v27, Current);
  if ( !a3 )
  {
    v19 = (a2 >> 6) & 0xFFFFFF;
    if ( v19 < *((_DWORD *)Current + 74) )
    {
      v20 = *((_QWORD *)Current + 35);
      v21 = *(_DWORD *)(v20 + 16LL * v19 + 8);
      if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0x60) && (v21 & 0x2000) == 0 && (v21 & 0x1F) != 0 )
      {
        if ( (v21 & 0x1F) == 5 )
        {
          v26 = *(struct DXGALLOCATION **)(v20 + 16LL * v19);
          if ( v26 )
            goto LABEL_29;
        }
        else
        {
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          v4 = this;
        }
      }
    }
    WdLogSingleEntry1(1LL, 8883LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAllocation != NULL", 8883LL, 0LL, 0LL, 0LL, 0LL);
LABEL_29:
    if ( v19 >= *((_DWORD *)Current + 74) )
      goto LABEL_35;
    v16 = *((_QWORD *)Current + 35);
    v22 = *(_DWORD *)(v16 + 16LL * v19 + 8);
    if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(v16 + 16LL * v19 + 8) & 0x60) || (v22 & 0x2000) != 0 || (v22 & 0x1F) == 0 )
      goto LABEL_35;
    v18 = a2;
    goto LABEL_34;
  }
  v13 = (a3 >> 6) & 0xFFFFFF;
  if ( v13 < *((_DWORD *)Current + 74)
    && (v14 = *((_QWORD *)Current + 35),
        v15 = *(_DWORD *)(v14 + 16LL * v13 + 8),
        ((a3 >> 25) & 0x60) == (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x60))
    && (v15 & 0x2000) == 0
    && (v15 & 0x1F) != 0 )
  {
    if ( (v15 & 0x1F) == 4 )
    {
      v12 = *(struct DXGRESOURCE **)(v14 + 16LL * v13);
      if ( v12 )
        goto LABEL_16;
    }
    else
    {
      WdLogSingleEntry1(2LL, 267LL);
      v12 = 0LL;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      v4 = this;
    }
  }
  else
  {
    v12 = 0LL;
  }
  WdLogSingleEntry1(1LL, 8877LL);
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource != NULL", 8877LL, 0LL, 0LL, 0LL, 0LL);
LABEL_16:
  if ( v13 >= *((_DWORD *)Current + 74) )
    goto LABEL_35;
  v16 = *((_QWORD *)Current + 35);
  v17 = *(_DWORD *)(v16 + 16LL * v13 + 8);
  if ( ((a3 >> 25) & 0x60) != (*(_BYTE *)(v16 + 16LL * v13 + 8) & 0x60) || (v17 & 0x2000) != 0 || (v17 & 0x1F) == 0 )
    goto LABEL_35;
  v18 = a3;
LABEL_34:
  *(_DWORD *)(v16 + 16 * ((v18 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
LABEL_35:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
  if ( a3 )
  {
    v23 = 0LL;
    v24 = v12;
    v25 = 0LL;
  }
  else
  {
    v24 = 0LL;
    v23 = &v26;
    v25 = 1LL;
  }
  DXGDEVICE::DestroyAllocationInternal(v4, v25, v23, v24, a4, DXGDEVICE::DestroyFlagsDefault);
}
