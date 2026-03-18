/*
 * XREFs of ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C03627DC
 * Callers:
 *     ?VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036C5F0 (-VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001B28C (-AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C004A86C (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@PEBX@Z @ 0x1C0054CF8 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@PEBX@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005591C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C0189364 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01996EC (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C019A7B8 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C019EFEC (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C033EDB8 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z.c)
 */

__int64 __fastcall DxgkpCreateSharedObjectFromHostDesc(
        struct ADAPTER_RENDER *a1,
        const unsigned __int8 *a2,
        struct _LIST_ENTRY **a3,
        __int64 a4)
{
  __int64 v6; // rdi
  struct DXGSHAREDRESOURCE *SharedResource; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r8
  struct DXGSHAREDRESOURCE *v11; // rsi
  const wchar_t *v12; // r9
  unsigned int v13; // eax
  const unsigned __int8 *v14; // r15
  const unsigned __int8 *v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // kr00_8
  __int64 v18; // rax
  unsigned int v19; // eax
  void *v20; // rax
  unsigned int v21; // eax
  void *v22; // rax
  unsigned int v23; // eax
  DXGADAPTERALLOCATION_VGPU *v24; // rax
  DXGADAPTERALLOCATION_VGPU *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  DXGADAPTERALLOCATION_VGPU *v28; // r15
  const unsigned __int8 *v29; // rcx
  unsigned int v30; // eax
  void *v31; // rax
  const unsigned __int8 *v32; // rcx
  struct DXGSHAREDRESOURCE *v33; // r15
  struct DXGSHAREDRESOURCE **v34; // rcx
  unsigned int v35; // edi
  ADAPTER_RENDER *v36; // r15
  int v37; // eax
  DXGGLOBAL *v38; // rax
  int v39; // eax
  struct DXGSYNCOBJECT *v40; // rbx
  PERESOURCE *Global; // rax
  struct DXGKEYEDMUTEX *v43; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGSYNCOBJECT *v44; // [rsp+58h] [rbp-A8h] BYREF
  const unsigned __int8 *v45; // [rsp+60h] [rbp-A0h]
  _DWORD v46[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v47; // [rsp+70h] [rbp-90h]
  __int64 v48; // [rsp+78h] [rbp-88h]
  int v49; // [rsp+80h] [rbp-80h]
  int v50; // [rsp+84h] [rbp-7Ch]
  __int128 v51; // [rsp+88h] [rbp-78h]
  _DWORD v52[40]; // [rsp+A0h] [rbp-60h] BYREF
  int v54; // [rsp+158h] [rbp+58h]
  struct _LIST_ENTRY *v56; // [rsp+168h] [rbp+68h] BYREF

  v56 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  LODWORD(v6) = 0;
  SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(a1, 0LL, 0, a4);
  v10 = -1LL;
  v11 = SharedResource;
  if ( !SharedResource )
  {
    v6 = 13805LL;
    WdLogSingleEntry1(6LL, 13805LL);
    v12 = L"Failed to create shared resource for host shared resource";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v12, v6, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v6) = -1073741801;
LABEL_38:
    if ( v56 )
    {
      WdLogSingleEntry1(1LL, 13997LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSharedAllocObject == nullptr",
        13997LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 17, 0xFFFFFFFF) == 1 )
      DXGSHAREDRESOURCE::Destroy(v11, 0LL, 0);
    if ( v43 )
      DXGKEYEDMUTEX::ReleaseReference(v43);
    v40 = v44;
    if ( v44 )
    {
      Global = (PERESOURCE *)DXGGLOBAL_GetGlobal();
      DXGGLOBAL::DestroySyncObject(Global, v40, 0);
    }
    goto LABEL_48;
  }
  v13 = *((_DWORD *)a2 + 18);
  v14 = a2 + 80;
  v15 = a2 + 92;
  if ( v13 > 1 )
  {
    v17 = v13;
    v16 = 8LL * v13;
    if ( !is_mul_ok(v17, 8uLL) )
      v16 = -1LL;
    v18 = operator new[](v16, 0x4B677844u, 256LL, v9);
    if ( !v18 )
    {
      WdLogSingleEntry1(3LL, 13821LL);
      LODWORD(v6) = -1073741801;
      goto LABEL_38;
    }
    *((_QWORD *)v11 + 21) = v18;
  }
  *((_DWORD *)v11 + 3) = *(_DWORD *)v14;
  v19 = *((_DWORD *)v14 + 1);
  if ( v19 )
  {
    v20 = operator new(v19, v8, v10, v15);
    *((_QWORD *)v11 + 15) = v20;
    if ( !v20 )
    {
      v6 = 13837LL;
      WdLogSingleEntry1(6LL, 13837LL);
      v12 = L"Failed to allocate shared resource private driver data";
      goto LABEL_3;
    }
    *((_DWORD *)v11 + 32) = *((_DWORD *)v14 + 1);
    v15 += *((unsigned int *)v14 + 1);
  }
  v21 = *((_DWORD *)v14 + 2);
  if ( v21 )
  {
    v22 = operator new(v21, v8, v10, v15);
    *((_QWORD *)v11 + 13) = v22;
    if ( !v22 )
    {
      v6 = 13852LL;
      WdLogSingleEntry1(6LL, 13852LL);
      v12 = L"Failed to allocate shared resource runtime data";
      goto LABEL_3;
    }
    *((_DWORD *)v11 + 28) = *((_DWORD *)v14 + 2);
    v15 += *((unsigned int *)v14 + 2);
  }
  v54 = 0;
  v23 = *((_DWORD *)a2 + 18);
  if ( !v23 )
  {
LABEL_27:
    *((_DWORD *)v11 + 33) = v23;
    v35 = *((_DWORD *)a2 + 14);
    if ( v35 )
    {
      memset(v52, 0, 0x60uLL);
      v36 = a1;
      v52[3] |= 3u;
      v52[2] = 3;
      v37 = CreateSynchronizationObjectInternal(0LL, 1, a1, (__int64)v52, 0xEu, v35, &v44, 0LL, 0LL);
      v6 = v37;
      if ( v37 < 0 )
      {
LABEL_29:
        WdLogSingleEntry1(3LL, v6);
        goto LABEL_38;
      }
    }
    else
    {
      v36 = a1;
    }
    if ( !*((_DWORD *)a2 + 15)
      || (v38 = DXGGLOBAL_GetGlobal(),
          v39 = DXGGLOBAL::CreateKeyedMutex(
                  v38,
                  *(_QWORD *)v15,
                  (struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS)1,
                  *((unsigned int *)a2 + 15),
                  &v43),
          v6 = v39,
          v39 >= 0) )
    {
      v46[1] = 0;
      v50 = 0;
      v47 = 0LL;
      v48 = 0LL;
      LOBYTE(v9) = 1;
      v46[0] = 48;
      v49 = 64;
      v51 = 0LL;
      LODWORD(v6) = ObCreateObject(1LL, g_pDxgkSharedAllocationObjectType, v46, v9, 0LL, 48, 0, 0, &v56);
      if ( (int)v6 >= 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)v11 + 16, 1u);
        v56[1].Flink = (struct _LIST_ENTRY *)v11;
        v56[1].Blink = (struct _LIST_ENTRY *)v43;
        v56[2].Flink = (struct _LIST_ENTRY *)v44;
        LODWORD(v56[2].Blink) = *((_DWORD *)a2 + 13);
        ADAPTER_RENDER::AddNtSharedAllocObject(v36, v56);
        goto LABEL_48;
      }
      WdLogSingleEntry1(2LL, 13977LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create shared alloc object",
        13977LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_38;
    }
    goto LABEL_29;
  }
  while ( 1 )
  {
    v45 = v15;
    v15 += 56;
    v24 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x78uLL, 0x4B677844u, 256LL, v9);
    if ( !v24 )
      break;
    v25 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v24);
    v28 = v25;
    if ( !v25 )
      break;
    v29 = v45;
    *((_DWORD *)v25 + 1) = *(_DWORD *)v45 | 0x20000;
    *((_OWORD *)v25 + 4) = *(_OWORD *)(v29 + 8);
    *((_OWORD *)v25 + 5) = *(_OWORD *)(v29 + 24);
    *((_OWORD *)v25 + 6) = *(_OWORD *)(v29 + 40);
    v30 = *((_DWORD *)v29 + 1);
    if ( v30 )
    {
      v31 = operator new(v30, v26, v27, v15);
      *((_QWORD *)v28 + 4) = v31;
      if ( !v31 )
      {
        v6 = 13882LL;
        WdLogSingleEntry1(6LL, 13882LL);
        v12 = L"Failed to allocate private driver data for DXGADAPTERALLOCATION_VGPU";
        goto LABEL_3;
      }
      v32 = v45;
      *((_DWORD *)v28 + 10) = *((_DWORD *)v45 + 1);
      v15 += *((unsigned int *)v32 + 1);
    }
    v33 = (DXGADAPTERALLOCATION_VGPU *)((char *)v28 + 48);
    v34 = (struct DXGSHAREDRESOURCE **)*((_QWORD *)v11 + 18);
    if ( *v34 != (struct DXGSHAREDRESOURCE *)((char *)v11 + 136) )
      __fastfail(3u);
    *(_QWORD *)v33 = (char *)v11 + 136;
    *((_QWORD *)v33 + 1) = v34;
    *v34 = v33;
    *((_QWORD *)v11 + 18) = v33;
    v23 = *((_DWORD *)a2 + 18);
    if ( ++v54 >= v23 )
      goto LABEL_27;
  }
  WdLogSingleEntry1(6LL, 13869LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate DXGADAPTERALLOCATION_VGPU object for shared host resource",
    13869LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_48:
  *a3 = v56;
  return (unsigned int)v6;
}
