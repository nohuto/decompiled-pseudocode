/*
 * XREFs of ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0234A68
 * Callers:
 *     ?VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023C450 (-VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000EEF0 (-AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C003D880 (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003F104 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01117A8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0116AA0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C0119608 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C011A8D0 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C028B5E4 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z.c)
 */

__int64 __fastcall DxgkpCreateSharedObjectFromHostDesc(
        struct ADAPTER_RENDER *this,
        const unsigned __int8 *a2,
        struct _LIST_ENTRY **a3)
{
  __int64 v3; // rdi
  ADAPTER_RENDER *v6; // r12
  __int64 v7; // rdx
  struct DXGSHAREDRESOURCE **v8; // rcx
  struct DXGSHAREDRESOURCE *SharedResource; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  const unsigned __int8 *v16; // r15
  const unsigned __int8 *v17; // r14
  SIZE_T v18; // rax
  unsigned __int64 v19; // kr00_8
  PVOID v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned int v23; // eax
  PVOID v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned int v30; // eax
  PVOID v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // eax
  const unsigned __int8 *v37; // r12
  DXGADAPTERALLOCATION_VGPU *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  DXGADAPTERALLOCATION_VGPU *v41; // r15
  unsigned int v42; // eax
  PVOID v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  struct DXGSHAREDRESOURCE *v48; // r15
  unsigned int v49; // edi
  int v50; // eax
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v54; // edi
  DXGGLOBAL *v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  struct DXGKEYEDMUTEX *v61; // rcx
  struct DXGSYNCOBJECT *v62; // rbx
  PERESOURCE *Global; // rax
  struct DXGKEYEDMUTEX **v65; // [rsp+20h] [rbp-B9h]
  struct DXGKEYEDMUTEX *v66; // [rsp+50h] [rbp-89h] BYREF
  struct DXGSYNCOBJECT *v67; // [rsp+58h] [rbp-81h] BYREF
  _DWORD v68[2]; // [rsp+60h] [rbp-79h] BYREF
  __int64 v69; // [rsp+68h] [rbp-71h]
  __int64 v70; // [rsp+70h] [rbp-69h]
  int v71; // [rsp+78h] [rbp-61h]
  int v72; // [rsp+7Ch] [rbp-5Dh]
  __int128 v73; // [rsp+80h] [rbp-59h]
  _DWORD v74[40]; // [rsp+90h] [rbp-49h] BYREF
  int v76; // [rsp+148h] [rbp+6Fh]
  struct _LIST_ENTRY *v78; // [rsp+158h] [rbp+7Fh] BYREF

  LODWORD(v3) = 0;
  v78 = 0LL;
  v67 = 0LL;
  v66 = 0LL;
  v6 = this;
  SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(this, 0LL, 0);
  if ( !SharedResource )
  {
    v12 = WdLogNewEntry5_WdLowResource(v8, v7, v10, v11);
    *(_QWORD *)(v12 + 24) = 11931LL;
    WdLogEvent5_WdLowResource(v12);
    LODWORD(v3) = -1073741801;
LABEL_42:
    if ( v78 )
    {
      v60 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v60 + 24) = 12123LL;
      WdLogEvent5_WdAssertion(v60);
    }
    if ( SharedResource && _InterlockedExchangeAdd((volatile signed __int32 *)SharedResource + 17, 0xFFFFFFFF) == 1 )
      DXGSHAREDRESOURCE::Destroy(SharedResource, 0LL, 0);
    v61 = v66;
    if ( v66 )
      DXGKEYEDMUTEX::ReleaseReference(v66, v13);
    v62 = v67;
    if ( v67 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v61, v13);
      DXGGLOBAL::DestroySyncObject(Global, v62, 0);
    }
    goto LABEL_51;
  }
  v15 = *((_DWORD *)a2 + 18);
  v16 = a2 + 80;
  v17 = a2 + 92;
  if ( v15 > 1 )
  {
    v19 = v15;
    v18 = 8LL * v15;
    if ( !is_mul_ok(v19, 8uLL) )
      v18 = -1LL;
    v20 = operator new[](v18, 0x4B677844u, PagedPool);
    if ( !v20 )
    {
      v22 = WdLogNewEntry5_WdWarning(v8, v7, v21);
      *(_QWORD *)(v22 + 24) = 11947LL;
      WdLogEvent5_WdWarning(v22);
LABEL_8:
      LODWORD(v3) = -1073741801;
      goto LABEL_42;
    }
    *((_QWORD *)SharedResource + 21) = v20;
  }
  *((_DWORD *)SharedResource + 3) = *(_DWORD *)v16;
  v23 = *((_DWORD *)v16 + 1);
  if ( v23 )
  {
    v24 = operator new[](v23, 0x4B677844u, PagedPool);
    *((_QWORD *)SharedResource + 15) = v24;
    if ( !v24 )
    {
      v29 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
      *(_QWORD *)(v29 + 24) = 11962LL;
LABEL_13:
      WdLogEvent5_WdLowResource(v29);
      goto LABEL_8;
    }
    memmove(v24, v17, *((unsigned int *)v16 + 1));
    *((_DWORD *)SharedResource + 32) = *((_DWORD *)v16 + 1);
    v17 += *((unsigned int *)v16 + 1);
  }
  v30 = *((_DWORD *)v16 + 2);
  if ( v30 )
  {
    v31 = operator new[](v30, 0x4B677844u, PagedPool);
    *((_QWORD *)SharedResource + 13) = v31;
    if ( !v31 )
    {
      v29 = WdLogNewEntry5_WdLowResource(v33, v32, v34, v35);
      *(_QWORD *)(v29 + 24) = 11977LL;
      goto LABEL_13;
    }
    memmove(v31, v17, *((unsigned int *)v16 + 2));
    *((_DWORD *)SharedResource + 28) = *((_DWORD *)v16 + 2);
    v17 += *((unsigned int *)v16 + 2);
  }
  v76 = 0;
  v36 = *((_DWORD *)a2 + 18);
  if ( !v36 )
  {
LABEL_30:
    *((_DWORD *)SharedResource + 33) = v36;
    v49 = *((_DWORD *)a2 + 14);
    if ( v49 )
    {
      memset(v74, 0, 0x60uLL);
      v74[3] |= 3u;
      LODWORD(v65) = 14;
      v74[2] = 3;
      v50 = CreateSynchronizationObjectInternal(
              0LL,
              1,
              (__int64)v6,
              (__int64)v74,
              (POBJECT_HANDLE_INFORMATION)v65,
              v49,
              &v67,
              0LL,
              0LL);
      v3 = v50;
      if ( v50 < 0 )
        goto LABEL_32;
    }
    v54 = *((_DWORD *)a2 + 15);
    if ( v54
      && (v55 = DXGGLOBAL::GetGlobal((__int64)v8, v7),
          v56 = DXGGLOBAL::CreateKeyedMutex(v55, *(_QWORD *)v17, (struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS)1, v54, &v66),
          v3 = v56,
          v56 < 0) )
    {
LABEL_32:
      v52 = WdLogNewEntry5_WdWarning(v8, v7, v51);
      *(_QWORD *)(v52 + 24) = v3;
      WdLogEvent5_WdWarning(v52);
    }
    else
    {
      v68[1] = 0;
      v72 = 0;
      v69 = 0LL;
      v70 = 0LL;
      LOBYTE(v11) = 1;
      v68[0] = 48;
      v71 = 64;
      v73 = 0LL;
      LODWORD(v3) = ObCreateObject(1LL, g_pDxgkSharedAllocationObjectType, v68, v11, 0LL, 48, 0, 0, &v78);
      if ( (int)v3 >= 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)SharedResource + 16, 1u);
        v78[1].Flink = (struct _LIST_ENTRY *)SharedResource;
        v78[1].Blink = (struct _LIST_ENTRY *)v66;
        v78[2].Flink = (struct _LIST_ENTRY *)v67;
        LODWORD(v78[2].Blink) = *((_DWORD *)a2 + 13);
        ADAPTER_RENDER::AddNtSharedAllocObject(v6, v78);
      }
      else
      {
        v59 = WdLogNewEntry5_WdError(v58, v57);
        *(_QWORD *)(v59 + 24) = 12103LL;
        WdLogEvent5_WdError(v59);
      }
    }
    if ( (int)v3 >= 0 )
      goto LABEL_51;
    goto LABEL_42;
  }
  while ( 1 )
  {
    v37 = v17;
    v17 += 56;
    v38 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x70uLL, 0x4B677844u, PagedPool);
    v41 = v38 ? DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v38) : 0LL;
    if ( !v41 )
      break;
    *((_DWORD *)v41 + 1) = *(_DWORD *)v37 | 0x20000;
    *((_OWORD *)v41 + 4) = *(_OWORD *)(v37 + 8);
    *((_OWORD *)v41 + 5) = *(_OWORD *)(v37 + 24);
    *((_OWORD *)v41 + 6) = *(_OWORD *)(v37 + 40);
    v42 = *((_DWORD *)v37 + 1);
    if ( v42 )
    {
      v43 = operator new[](v42, 0x4B677844u, PagedPool);
      *((_QWORD *)v41 + 4) = v43;
      if ( !v43 )
      {
        v29 = WdLogNewEntry5_WdLowResource(v45, v44, v46, v47);
        *(_QWORD *)(v29 + 24) = 12007LL;
        goto LABEL_13;
      }
      memmove(v43, v17, *((unsigned int *)v37 + 1));
      *((_DWORD *)v41 + 10) = *((_DWORD *)v37 + 1);
      v17 += *((unsigned int *)v37 + 1);
    }
    v48 = (DXGADAPTERALLOCATION_VGPU *)((char *)v41 + 48);
    v8 = (struct DXGSHAREDRESOURCE **)*((_QWORD *)SharedResource + 18);
    if ( *v8 != (struct DXGSHAREDRESOURCE *)((char *)SharedResource + 136) )
      __fastfail(3u);
    *(_QWORD *)v48 = (char *)SharedResource + 136;
    *((_QWORD *)v48 + 1) = v8;
    *v8 = v48;
    *((_QWORD *)SharedResource + 18) = v48;
    v36 = *((_DWORD *)a2 + 18);
    if ( ++v76 >= v36 )
    {
      v6 = this;
      goto LABEL_30;
    }
  }
  v53 = WdLogNewEntry5_WdLowResource(v39, v7, v40, v11);
  *(_QWORD *)(v53 + 24) = 11995LL;
  WdLogEvent5_WdLowResource(v53);
LABEL_51:
  *a3 = v78;
  return (unsigned int)v3;
}
