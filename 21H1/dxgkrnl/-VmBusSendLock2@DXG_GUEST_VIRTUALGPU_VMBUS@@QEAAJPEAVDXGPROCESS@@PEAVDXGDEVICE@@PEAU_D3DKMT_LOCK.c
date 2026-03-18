/*
 * XREFs of ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0245110
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FD870 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkLock2 @ 0x1C0101890 (DxgkLock2.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0102370 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02F954C (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EF94 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C010183C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0248DD4 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02809D4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_LOCK2 *a4,
        unsigned __int8 a5)
{
  D3DKMT_HANDLE hAllocation; // ebx
  char *v6; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _EX_RUNDOWN_REF *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  struct _MDL *Count; // r10
  ULONG *v30; // r15
  char v31; // al
  PVOID v32; // rcx
  struct _MDL *v33; // r14
  NTSTATUS v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  PMDL Mdl; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  struct _MDL *v42; // rdx
  struct _MDL *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  NTSTATUS v46; // eax
  __int64 v47; // rax
  struct _MDL *Priority; // [rsp+28h] [rbp-A9h]
  PVOID BaseAddress; // [rsp+30h] [rbp-A1h] BYREF
  unsigned int v51; // [rsp+38h] [rbp-99h] BYREF
  struct _EX_RUNDOWN_REF *v52; // [rsp+40h] [rbp-91h] BYREF
  struct _EX_RUNDOWN_REF *v53; // [rsp+48h] [rbp-89h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-81h] BYREF
  ULONG_PTR v55; // [rsp+58h] [rbp-79h]
  __int64 v56; // [rsp+60h] [rbp-71h] BYREF
  unsigned int HostProcess; // [rsp+68h] [rbp-69h]
  int v58; // [rsp+6Ch] [rbp-65h]
  int v59; // [rsp+70h] [rbp-61h]
  int v60; // [rsp+78h] [rbp-59h]
  int v61; // [rsp+7Ch] [rbp-55h]
  struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB Value; // [rsp+80h] [rbp-51h]
  char v63; // [rsp+90h] [rbp-41h]
  __int64 v64; // [rsp+94h] [rbp-3Dh]
  _BYTE v65[24]; // [rsp+A0h] [rbp-31h] BYREF
  int v66; // [rsp+B8h] [rbp-19h] BYREF
  unsigned __int64 v67; // [rsp+C0h] [rbp-11h]

  hAllocation = a4->hAllocation;
  v6 = (char *)a2 + 208;
  v52 = 0LL;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v6, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v13 = *((_DWORD *)v6 + 6);
      if ( v13 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventBlockThread, v12, v13);
    }
    ExAcquirePushLockSharedEx(v6, 0LL);
  }
  v14 = (hAllocation >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 >= *((_DWORD *)a2 + 64) )
    goto LABEL_13;
  v15 = *((_QWORD *)a2 + 30);
  v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
  if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60)
    || (v16 & 0x2000) != 0
    || (v16 & 0x1F) == 0 )
  {
    goto LABEL_13;
  }
  v17 = v16 & 0x1F;
  if ( (_BYTE)v17 != 5 )
  {
    v18 = WdLogNewEntry5_WdError(v17, 2LL * (unsigned int)v14);
    *(_QWORD *)(v18 + 24) = 267LL;
    WdLogEvent5_WdError(v18);
LABEL_13:
    v19 = 0LL;
    goto LABEL_14;
  }
  v19 = *(struct _EX_RUNDOWN_REF **)(v15 + 16LL * (unsigned int)v14);
LABEL_14:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v53, v19);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign(&v52, &v53);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v53, v20);
  v24 = v52;
  LODWORD(v6) = -1073741811;
  if ( !v52 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = 9017LL;
    WdLogEvent5_WdWarning(v25);
    goto LABEL_54;
  }
  v26 = *(_QWORD *)(v52[1].Count + 16);
  v27 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL);
  if ( *(_QWORD *)(v26 + 16) != v27 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
    v28[3] = a3;
    v28[4] = v24;
    v28[5] = -1073741811LL;
LABEL_53:
    WdLogEvent5_WdError(v28);
    goto LABEL_54;
  }
  if ( v52[14].Count )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)&v52[13]) == 1
      && !(BYTE4(v52[16].Ptr) & 1 | ((BYTE4(v52[16].Ptr) & 2) != 0)) )
    {
      _InterlockedAdd(&g_VgpuNumAllocationsUnderCpuAccess, 1u);
    }
    Count = (struct _MDL *)v24[14].Count;
    if ( (BYTE4(v52[16].Ptr) & 1) != 0 )
    {
      if ( (Count->MdlFlags & 5) != 0 )
        Count = (struct _MDL *)Count->MappedSystemVa;
      else
        Count = (struct _MDL *)MmMapLockedPagesSpecifyCache(Count, 0, MmCached, 0LL, 0, 0x40000010u);
    }
    a4->pData = Count;
    LODWORD(v6) = 0;
    goto LABEL_54;
  }
  v30 = (ULONG *)&v52[15];
  RegionSize = v52[15].Count;
  v55 = v52[6].Count;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v56 = 0LL;
  v58 = 0;
  v63 = 0;
  v64 = 0LL;
  v59 = 23;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v65, (struct _KTHREAD **)a2);
  v61 = v24[12].Count;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v65);
  v60 = *((_DWORD *)a3 + 110);
  Value = (struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB)a4->Flags.Value;
  v31 = v63;
  if ( a5 )
    v31 = 1;
  v51 = 16;
  v63 = v31;
  LODWORD(v6) = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
                  this,
                  (struct DXGKVMB_COMMAND_BASE *)&v56,
                  0x40u,
                  &v66,
                  &v51,
                  Priority);
  if ( (int)v6 < 0 || (LODWORD(v6) = -1073741823, v51 < 0x10) || (LODWORD(v6) = v66, v66 < 0) )
  {
LABEL_52:
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v32, v26);
    v28[3] = (int)v6;
    goto LABEL_53;
  }
  BaseAddress = 0LL;
  v33 = 0LL;
  v34 = ZwAllocateVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &BaseAddress,
          0LL,
          &RegionSize,
          0x801000u,
          ~(unsigned __int16)(*(_DWORD *)(v55 + 4) >> 9) & 0x400 | 4);
  v6 = (char *)v34;
  if ( v34 < 0 )
  {
    v37 = WdLogNewEntry5_WdError(v36, v35);
    *(_QWORD *)(v37 + 24) = this;
    *(_QWORD *)(v37 + 32) = v6;
    goto LABEL_35;
  }
  Mdl = IoAllocateMdl(0LL, *v30, 0, 0, 0LL);
  v33 = Mdl;
  if ( Mdl )
  {
    v42 = Mdl + 1;
    v43 = (struct _MDL *)(v67 >> 12);
    v44 = *(_QWORD *)v30 >> 12;
    if ( (_DWORD)v44 )
    {
      v45 = (unsigned int)v44;
      do
      {
        v42->Next = v43;
        v43 = (struct _MDL *)((char *)v43 + 1);
        v42 = (struct _MDL *)((char *)v42 + 8);
        --v45;
      }
      while ( v45 );
    }
    v46 = MmRotatePhysicalView(BaseAddress, &RegionSize, v33, MmToFrameBufferNoCopy, 0LL, 0LL);
    v6 = (char *)v46;
    if ( v46 >= 0 )
    {
      LODWORD(v24[9].Count) |= 0x80000u;
      v24[14].Count = (ULONG_PTR)BaseAddress;
      _InterlockedAdd((volatile signed __int32 *)&v24[13], 1u);
      _InterlockedAdd(&g_VgpuNumAllocationsUnderCpuAccess, 1u);
      _InterlockedAdd(&g_VgpuNumAllocationsLocked, 1u);
      g_VgpuNumLockedBytes += *(_QWORD *)v30;
      a4->pData = BaseAddress;
LABEL_44:
      if ( (int)v6 >= 0 )
        goto LABEL_49;
      goto LABEL_45;
    }
    v37 = WdLogNewEntry5_WdError(v32, v26);
    *(_QWORD *)(v37 + 24) = v6;
    *(_QWORD *)(v37 + 32) = 9124LL;
LABEL_35:
    WdLogEvent5_WdError(v37);
    goto LABEL_44;
  }
  v41 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
  LODWORD(v6) = -1073741801;
  v41[3] = *((_QWORD *)this + 8);
  v41[4] = -1073741801LL;
  v41[5] = 9109LL;
  WdLogEvent5_WdError(v41);
LABEL_45:
  v47 = WdLogNewEntry5_WdError(v32, v26);
  *(_QWORD *)(v47 + 24) = (int)v6;
  WdLogEvent5_WdError(v47);
  v32 = BaseAddress;
  if ( BaseAddress )
  {
    if ( (*(_DWORD *)(v55 + 4) & 0x40000) != 0 )
      MmUnmapLockedPages(BaseAddress, v33);
    else
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v24[15].Count, 0x8000u);
  }
LABEL_49:
  if ( v33 )
    IoFreeMdl(v33);
  if ( (int)v6 < 0 )
    goto LABEL_52;
LABEL_54:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v52, v26);
  return (unsigned int)v6;
}
