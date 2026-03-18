/*
 * XREFs of ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x1C0249498
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x1C0226C10 (DxgkUpdateGpuVirtualAddress.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EF94 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00249E0 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C010183C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C02490EC (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02809D4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateGpuVirtualAddress(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        int a4,
        struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *a5)
{
  unsigned __int64 v9; // rcx
  __int64 v10; // r15
  unsigned int v11; // esi
  struct _EX_RUNDOWN_REF *v12; // rdi
  unsigned int HostProcess; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  struct DXGPROCESS *v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ecx
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  int v23; // r13d
  int Count; // r12d
  UINT i; // r15d
  unsigned __int64 v26; // rsi
  int v27; // eax
  unsigned int v28; // r8d
  struct _EX_RUNDOWN_REF **AllocationUnsafe; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  struct _MDL *v32; // r9
  __int64 v33; // rax
  struct _EX_RUNDOWN_REF *v34; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v35[8]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v36; // [rsp+30h] [rbp-78h]
  char v37; // [rsp+38h] [rbp-70h]
  unsigned int v38; // [rsp+40h] [rbp-68h]
  unsigned int v39; // [rsp+44h] [rbp-64h]
  int v40; // [rsp+48h] [rbp-60h]
  struct _EX_RUNDOWN_REF *v41[2]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v42[72]; // [rsp+60h] [rbp-48h] BYREF

  v36 = *((_QWORD *)this + 8);
  v37 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
  if ( *(_DWORD *)(*((_QWORD *)this + 8) + 200LL) != 1 )
  {
    if ( v37 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
    return 3221226166LL;
  }
  v9 = (unsigned __int64)a5->NumOperations << 6;
  v10 = 0xFFFFFFFFLL;
  if ( v9 <= 0xFFFFFFFF )
    v10 = (unsigned int)v9;
  v40 = v10;
  v11 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v39 = v11;
  if ( (unsigned int)v10 >= 0x20000 || (v38 = v10 + 56, (unsigned int)(v10 + 56) > 0x20000) )
  {
    if ( v37 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
    return 3221225659LL;
  }
  v12 = (struct _EX_RUNDOWN_REF *)operator new[]((unsigned int)(v10 + 56), 0x4B677844u, (POOL_TYPE)512);
  v41[1] = v12;
  if ( !v12 )
  {
    if ( v37 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
    return 3221225495LL;
  }
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v12->Count = 0LL;
  LODWORD(v12[1].Count) = HostProcess;
  HIDWORD(v12[1].Ptr) = 0;
  LODWORD(v12[2].Count) = 19;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v42, (struct _KTHREAD **)a2);
  v15 = (a5->hFenceObject >> 6) & 0xFFFFFF;
  v16 = a5->hFenceObject >> 30;
  v17 = a2;
  if ( (unsigned int)v15 < *((_DWORD *)a2 + 64) )
  {
    v14 = (unsigned int)v15;
    v18 = *((_QWORD *)a2 + 30);
    v17 = (struct DXGPROCESS *)*(unsigned int *)(v18 + 16 * v15 + 8);
    if ( (_DWORD)v16 == ((*(_DWORD *)(v18 + 16 * v15 + 8) >> 5) & 3)
      && ((unsigned __int16)v17 & 0x2000) == 0
      && ((unsigned __int8)v17 & 0x1F) != 0 )
    {
      v14 = 2LL * (unsigned int)v15;
      v17 = (struct DXGPROCESS *)((unsigned __int8)v17 & 0x1F);
      if ( (_BYTE)v17 == 11 )
      {
        v20 = *(_QWORD *)(v18 + 16LL * (unsigned int)v15);
        if ( v20 )
        {
          v21 = *(_DWORD *)(v20 + 44);
          v12[3].Count = a5->FenceValue;
          LODWORD(v12[6].Count) = a5->Flags.Value;
          HIDWORD(v12[4].Ptr) = a4;
          LODWORD(v12[4].Count) = a3;
          LODWORD(v12[5].Count) = v21;
          HIDWORD(v12[5].Ptr) = a5->NumOperations;
          Operations = a5->Operations;
          if ( (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)((char *)Operations + v10) < Operations
            || (unsigned __int64)Operations + v10 > MmUserProbeAddress )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          memmove(&v12[7], Operations, (unsigned int)v10);
          v23 = 0;
          Count = 0;
          for ( i = 0; i < a5->NumOperations; ++i )
          {
            v26 = (unsigned __int64)i << 6;
            v27 = *(_DWORD *)((char *)&v12[7].Count + v26);
            if ( !v27 || v27 == 3 )
            {
              v28 = *(_DWORD *)((char *)&v12[10].Count + v26);
              if ( v28 == v23 )
              {
                *(_DWORD *)((char *)&v12[10].Count + v26) = Count;
              }
              else
              {
                v34 = 0LL;
                AllocationUnsafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationUnsafe(
                                                                (__int64)a2,
                                                                (DXGALLOCATIONREFERENCE *)v41,
                                                                v28);
                DXGALLOCATIONREFERENCE::MoveAssign(&v34, AllocationUnsafe);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v41, v30);
                if ( !v34 )
                {
                  v11 = -1073741811;
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v34, v31);
                  goto LABEL_37;
                }
                v23 = *(_DWORD *)((char *)&v12[10].Count + v26);
                Count = v34[12].Count;
                *(_DWORD *)((char *)&v12[10].Count + v26) = Count;
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v34, v31);
              }
            }
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v42);
          v11 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                  (struct _KTHREAD **)this,
                  (struct DXGKVMB_COMMAND_BASE *)v12,
                  v38,
                  v32);
          goto LABEL_38;
        }
      }
      else
      {
        v19 = WdLogNewEntry5_WdError(v17, v14);
        *(_QWORD *)(v19 + 24) = 267LL;
        WdLogEvent5_WdError(v19);
      }
    }
  }
  v33 = WdLogNewEntry5_WdWarning(v17, v14, v16);
  *(_QWORD *)(v33 + 24) = a5->hFenceObject;
  *(_QWORD *)(v33 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v33);
LABEL_37:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v42);
LABEL_38:
  operator delete[](v12);
  if ( v37 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
  return v11;
}
