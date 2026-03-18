/*
 * XREFs of ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00EADB8
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00EABC0 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A30C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000AE64 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000F1E8 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqpttq_EtwWriteTransfer @ 0x1C0041864 (McTemplateK0ppqpttq_EtwWriteTransfer.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C00EB2D4 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0104280 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C01252F4 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCountedBuffer@@@Z @ 0x1C0242E4C (-VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCo.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02809D4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::Initialize(DXGDEVICE *this, char a2, unsigned __int8 a3)
{
  int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD **Current; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // r8d
  struct _ERESOURCE *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdi
  struct _KEVENT *v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // rax
  __int64 result; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  ADAPTER_RENDER *v35; // r8
  __int64 v36; // rcx
  int v37; // ecx
  int v38; // edx
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // eax
  unsigned int v42; // r8d
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rsi
  unsigned __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  UINT v56; // ecx
  int v57; // eax
  signed __int64 v58; // rcx
  signed __int64 v59; // rax
  signed __int64 v60; // rdi
  _QWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  _DWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  unsigned int HostProcess; // eax
  __int64 v72; // rcx
  __int64 v73; // rax
  unsigned int Device; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  unsigned int v77; // [rsp+50h] [rbp-11h]
  __int128 v78; // [rsp+58h] [rbp-9h] BYREF
  __int64 v79; // [rsp+68h] [rbp+7h]
  _BYTE v80[24]; // [rsp+70h] [rbp+Fh] BYREF
  _DXGKARG_CREATEDEVICE v81; // [rsp+88h] [rbp+27h] BYREF

  v4 = a3;
  if ( DXGADAPTER::IsComputeOnlyAdapter(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v57 = *(_DWORD *)(v7 + 2036);
    if ( (v57 & 0x80u) == 0 && (v57 & 0x40) == 0 )
    {
      v58 = *((_QWORD *)this + 5);
      v59 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 176), v58, 0LL);
      v60 = v59;
      if ( v59 && *((_QWORD *)this + 5) != v59 )
      {
        v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v6, v8);
        v61[3] = this;
        v61[5] = -1071775744LL;
        v61[4] = v60;
        WdLogEvent5_WdWarning(v61);
        return 3223191552LL;
      }
      *((_BYTE *)this + 1869) |= 4u;
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 184LL), 1u);
    }
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v80, Current);
  v11 = HMGRTABLE::AllocHandle(*((_QWORD *)this + 5) + 240LL, this, 3LL);
  *((_DWORD *)this + 109) = v11;
  v14 = v11;
  if ( !v11 )
  {
    v62 = WdLogNewEntry5_WdWarning(v12, 0LL, v13);
    *(_QWORD *)(v62 + 24) = this;
    *(_QWORD *)(v62 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v62);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v80);
    return 3221225495LL;
  }
  v15 = *((_QWORD *)this + 5);
  v16 = (v11 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 < *(_DWORD *)(v15 + 256) )
  {
    v17 = *(_QWORD *)(v15 + 240);
    v18 = *(_DWORD *)(v17 + 16 * v16 + 8);
    if ( ((v14 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60) && (v18 & 0x2000) == 0 && (v18 & 0x1F) != 0 )
      *(_DWORD *)(v17 + 16 * (((unsigned __int64)v14 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v80);
  v19 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 17) = v19;
  if ( !v19 )
  {
LABEL_53:
    v64 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v64 + 24) = this;
    *(_QWORD *)(v64 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v64);
    return 3221225495LL;
  }
  v23 = ExInitializeResourceLite(v19);
  v27 = v23;
  if ( v23 < 0 )
    goto LABEL_54;
  if ( (*((_BYTE *)this + 1869) & 1) == 0 )
  {
    v28 = (struct _KEVENT *)operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    *((_QWORD *)this + 235) = v28;
    if ( v28 )
    {
      KeInitializeEvent(v28, NotificationEvent, 1u);
      v29 = (_QWORD *)*((_QWORD *)this + 2);
      memset(&v81.8, 0, 24);
      v81.hDevice = this;
      if ( (*(_DWORD *)(v29[2] + 2032LL) & 1) != 0 )
      {
        if ( (*((_BYTE *)this + 1869) & 8) != 0 )
          v81.Flags.Value |= 2u;
      }
      else
      {
        v81.pInfo = (DXGK_DEVICEINFO *)((char *)this + 592);
      }
      if ( (*(_DWORD *)(v29[2] + 348LL) & 0x10) != 0 )
      {
        v56 = v81.Flags.Value & 0x7FFFFFFF | (v4 << 31);
        LOBYTE(v4) = 1;
        v81.Flags.Value = v56;
      }
      *((_BYTE *)this + 1865) = a2;
      *((_BYTE *)this + 1866) = v4;
      v30 = (*(__int64 (__fastcall **)(_QWORD, DXGDEVICE *))(*(_QWORD *)(v29[80] + 8LL) + 392LL))(v29[81], this);
      *((_QWORD *)this + 95) = v30;
      v20 = v30;
      if ( v30 )
      {
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL)
                                                    + 400LL))(v30);
        if ( (int)result < 0 )
          return result;
        LODWORD(v27) = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)this + 5), *((struct ADAPTER_RENDER **)this + 2), 1);
        if ( (int)v27 < 0 )
          goto LABEL_55;
        v35 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        *((_BYTE *)this + 1870) = 1;
        v36 = *((_QWORD *)v35 + 2);
        if ( (*(_DWORD *)(v36 + 2036) & 0x80u) != 0 )
        {
          v81.Pasid = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL)
                                              + 8LL * *(unsigned int *)(v36 + 232))
                                  + 8LL);
          v36 = *((_QWORD *)v35 + 2);
        }
        if ( (*(_DWORD *)(v36 + 2036) & 0x40) != 0 )
        {
          v54 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL) + 8LL * *(unsigned int *)(v36 + 232));
          if ( v54 )
            v54 = (_QWORD *)v54[2];
          v81.hKmdProcess = v54;
        }
        LODWORD(v27) = ADAPTER_RENDER::DdiCreateDevice(v35, &v81);
        if ( (int)v27 < 0 )
        {
LABEL_55:
          v65 = WdLogNewEntry5_WdWarning(v33, v32, v34);
          *(_QWORD *)(v65 + 24) = this;
          goto LABEL_56;
        }
        v37 = 0;
        v38 = *((_DWORD *)this + 108);
        *((_QWORD *)this + 73) = v81.hDevice;
        v39 = _mm_cvtsi128_si32((__m128i)0LL);
        v78 = 0LL;
        if ( v38 == 2 )
          v37 = 8;
        v40 = v39 & 0xFFFFFFF1 | v37;
        v41 = 0;
        if ( v38 == 1 )
          v41 = 32;
        v42 = v41 | v40 & 0xFFFFFFDF | (2 * (a2 & 1 | (2 * (v4 & 1))));
        v79 = *((_QWORD *)this + 56);
        v43 = *((_QWORD *)this + 2);
        LODWORD(v78) = v42;
        v44 = (*(__int64 (__fastcall **)(DXGDEVICE *, __int128 *, char *))(*(_QWORD *)(*(_QWORD *)(v43 + 616) + 8LL)
                                                                         + 112LL))(
                this,
                &v78,
                (char *)this + 768);
        v27 = v44;
        if ( v44 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 1088LL))(
            *((_QWORD *)this + 95),
            *((_QWORD *)this + 96));
          goto LABEL_30;
        }
LABEL_54:
        v65 = WdLogNewEntry5_WdWarning(v25, v24, v26);
        *(_QWORD *)(v65 + 24) = this;
        *(_QWORD *)(v65 + 32) = v27;
LABEL_56:
        WdLogEvent5_WdWarning(v65);
        return (unsigned int)v27;
      }
    }
    goto LABEL_53;
  }
  v66 = operator new(0x14uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  *((_QWORD *)this + 56) = v66;
  if ( !v66 )
  {
    v63 = WdLogNewEntry5_WdLowResource(v68, v67, v69, v70);
    *(_QWORD *)(v63 + 24) = 1045LL;
    WdLogEvent5_WdLowResource(v63);
    return 3221225495LL;
  }
  *(_QWORD *)v66 = 0LL;
  v66[2] = 4;
  v66[3] = 1;
  *(_DWORD *)(*((_QWORD *)this + 56) + 16LL) = 0;
  HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)this + 5));
  if ( !HostProcess )
  {
    v73 = WdLogNewEntry5_WdError(v72, 0LL);
    *(_QWORD *)(v73 + 24) = -1073741823LL;
LABEL_60:
    WdLogEvent5_WdError(v73);
    return 3221225473LL;
  }
  Device = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateDevice(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4208LL),
             HostProcess,
             *(struct _D3DKMT_CREATEDEVICEFLAGS *)((char *)this + 456),
             *((_DWORD *)this + 108) == 2,
             *((PSLIST_ENTRY *)this + 56));
  *((_DWORD *)this + 110) = Device;
  if ( !Device )
  {
    v73 = WdLogNewEntry5_WdError(v76, v75);
    *(_QWORD *)(v73 + 24) = 1066LL;
    goto LABEL_60;
  }
LABEL_30:
  v45 = *((_QWORD *)this + 5);
  v46 = *((unsigned int *)this + 109);
  *((_DWORD *)this + 144) = 1;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v45 + 208));
  v47 = ((unsigned int)v46 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v47 < *(_DWORD *)(v45 + 256) )
  {
    v48 = *(_QWORD *)(v45 + 240);
    v49 = ((unsigned int)v46 >> 25) & 0x60;
    if ( (((unsigned int)v46 >> 25) & 0x60) == (*(_BYTE *)(v48 + 16 * v47 + 8) & 0x60)
      && (*(_DWORD *)(v48 + 16 * v47 + 8) & 0x1F) != 0 )
    {
      v50 = 2 * ((v46 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v48 + 8 * v50 + 8) & 0x2000) == 0 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v49, v48);
        *(_QWORD *)(v55 + 24) = 217LL;
        WdLogEvent5_WdAssertion(v55);
        v48 = *(_QWORD *)(v45 + 240);
      }
      *(_DWORD *)(v48 + 8 * v50 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v45 + 216) = 0LL;
  ExReleasePushLockExclusiveEx(v45 + 208, 0LL);
  KeLeaveCriticalRegion();
  v53 = (_QWORD *)WdLogNewEntry5_WdEvent(v52, v51);
  v53[3] = this;
  v53[4] = *((unsigned int *)this + 109);
  v53[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v53);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v77 = *((_DWORD *)this + 109);
      McTemplateK0ppqpttq_EtwWriteTransfer(
        *((unsigned __int8 *)this + 1866),
        &EventCreateDevice,
        v77,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 72LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        *((_DWORD *)this + 108),
        this,
        *((unsigned __int8 *)this + 1865),
        *((unsigned __int8 *)this + 1866),
        v77);
    }
  }
  return 0LL;
}
