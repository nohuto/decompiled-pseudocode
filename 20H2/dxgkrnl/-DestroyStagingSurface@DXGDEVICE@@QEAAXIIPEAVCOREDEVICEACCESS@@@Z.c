/*
 * XREFs of ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C02531D4
 * Callers:
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C0253024 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0280458 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02B89B0 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01165A8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall DXGDEVICE::DestroyStagingSurface(
        DXGDEVICE *this,
        unsigned int a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v13; // rax
  struct DXGRESOURCE *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // edi
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // edx
  unsigned __int64 v23; // rax
  unsigned int v24; // edi
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // edx
  struct DXGALLOCATION **v29; // r8
  struct DXGRESOURCE *v30; // r9
  unsigned int v31; // edx
  _BYTE v32[32]; // [rsp+30h] [rbp-48h] BYREF
  struct DXGALLOCATION *v33; // [rsp+80h] [rbp+8h] BYREF
  struct COREDEVICEACCESS *v34; // [rsp+98h] [rbp+20h]

  v34 = a4;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 8745LL;
    WdLogEvent5_WdAssertion(v9);
  }
  Current = DXGPROCESS::GetCurrent(v8, v7);
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v13 + 24) = 8753LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = 0LL;
  v33 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v32,
    (struct _KTHREAD **)Current);
  if ( !a3 )
  {
    v24 = (a2 >> 6) & 0xFFFFFF;
    if ( v24 < *((_DWORD *)Current + 64) )
    {
      v25 = *((_QWORD *)Current + 30);
      v16 = (a2 >> 25) & 0x60;
      v15 = *(unsigned int *)(v25 + 16LL * v24 + 8);
      if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0x60) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
      {
        v15 &= 0x1Fu;
        if ( (_BYTE)v15 == 5 )
        {
          v33 = *(struct DXGALLOCATION **)(v25 + 16LL * v24);
          if ( v33 )
            goto LABEL_29;
        }
        else
        {
          v26 = WdLogNewEntry5_WdError(v16, v15);
          *(_QWORD *)(v26 + 24) = 267LL;
          WdLogEvent5_WdError(v26);
        }
      }
    }
    v27 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v27 + 24) = 8770LL;
    WdLogEvent5_WdAssertion(v27);
LABEL_29:
    if ( v24 >= *((_DWORD *)Current + 64) )
      goto LABEL_35;
    v21 = *((_QWORD *)Current + 30);
    v28 = *(_DWORD *)(v21 + 16LL * v24 + 8);
    if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(v21 + 16LL * v24 + 8) & 0x60) || (v28 & 0x2000) != 0 || (v28 & 0x1F) == 0 )
      goto LABEL_35;
    v23 = a2;
    goto LABEL_34;
  }
  v17 = (a3 >> 6) & 0xFFFFFF;
  if ( v17 >= *((_DWORD *)Current + 64) )
    goto LABEL_12;
  v18 = *((_QWORD *)Current + 30);
  v16 = (a3 >> 25) & 0x60;
  v15 = *(unsigned int *)(v18 + 16LL * v17 + 8);
  if ( ((a3 >> 25) & 0x60) != (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x60) || (v15 & 0x2000) != 0 || (v15 & 0x1F) == 0 )
    goto LABEL_12;
  v15 &= 0x1Fu;
  if ( (_BYTE)v15 != 4 )
  {
    v19 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v19 + 24) = 267LL;
    WdLogEvent5_WdError(v19);
LABEL_12:
    v14 = 0LL;
LABEL_13:
    v20 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v20 + 24) = 8764LL;
    WdLogEvent5_WdAssertion(v20);
    goto LABEL_14;
  }
  v14 = *(struct DXGRESOURCE **)(v18 + 16LL * v17);
  if ( !v14 )
    goto LABEL_13;
LABEL_14:
  if ( v17 >= *((_DWORD *)Current + 64) )
    goto LABEL_35;
  v21 = *((_QWORD *)Current + 30);
  v22 = *(_DWORD *)(v21 + 16LL * v17 + 8);
  if ( ((a3 >> 25) & 0x60) != (*(_BYTE *)(v21 + 16LL * v17 + 8) & 0x60) || (v22 & 0x2000) != 0 || (v22 & 0x1F) == 0 )
    goto LABEL_35;
  v23 = a3;
LABEL_34:
  *(_DWORD *)(v21 + 16 * ((v23 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
LABEL_35:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
  if ( a3 )
  {
    v29 = 0LL;
    v30 = v14;
    v31 = 0;
  }
  else
  {
    v30 = 0LL;
    v29 = &v33;
    v31 = 1;
  }
  DXGDEVICE::DestroyAllocationInternal(this, v31, v29, v30, (char **)v34, DXGDEVICE::DestroyFlagsDefault);
}
