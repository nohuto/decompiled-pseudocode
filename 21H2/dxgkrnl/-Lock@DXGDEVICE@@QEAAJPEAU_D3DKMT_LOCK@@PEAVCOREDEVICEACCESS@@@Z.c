/*
 * XREFs of ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016C650
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0158B10 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkLock @ 0x1C016C080 (DxgkLock.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C01C24F0 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DD990 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02ED964 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03BE3B8 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0379004 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 */

__int64 __fastcall DXGDEVICE::Lock(DXGDEVICE *this, struct _D3DKMT_LOCK *a2, struct COREDEVICEACCESS *a3)
{
  int v5; // r15d
  struct _D3DDDICB_LOCKFLAGS::$ED792A498079A6342A08F53AEABA2A3A::$E5338CF7B743D9B09B49C7CF5F2B6ABC Value; // eax
  __int64 NumPages; // r8
  __int64 v8; // rbp
  D3DKMT_HANDLE v9; // ebx
  int v10; // r8d
  int v11; // edx
  int v12; // r8d
  int v13; // edx
  int v14; // r8d
  int v15; // edx
  int v16; // r8d
  unsigned int v17; // r12d
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // ecx
  struct DXGALLOCATION *v23; // rdx
  ULONG_PTR Count; // rbp
  ULONG_PTR v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // r13
  int v32; // ebp
  __int16 v33; // ax
  D3DKMT_HANDLE v34; // r15d
  __int16 v35; // r12
  __int64 v36; // rcx
  __int64 v37; // r8
  D3DKMT_HANDLE v38; // r14d
  unsigned int v39; // ecx
  __int64 v40; // r9
  int v41; // edx
  struct DXGTHREAD *DxgThread; // rax
  __int64 result; // rax
  int v44; // eax
  int v45; // eax
  COREDEVICEACCESS *v46; // rbx
  int v47; // eax
  int v48; // r9d
  D3DKMT_HANDLE hAllocation; // eax
  __int64 v50; // rbx
  struct DXGPROCESS *Current; // rax
  int v52; // r9d
  char *v53; // rdx
  ULONG_PTR v54; // r9
  DXGDEVICE *v55; // r8
  DXGDEVICE *v56; // rdx
  unsigned int v57; // [rsp+28h] [rbp-80h]
  unsigned int v58; // [rsp+30h] [rbp-78h]
  _D3DKMT_LOCK2 v59; // [rsp+50h] [rbp-58h] BYREF
  struct DXGTHREAD *v60; // [rsp+B0h] [rbp+8h] BYREF
  COREDEVICEACCESS *v61; // [rsp+C0h] [rbp+18h]
  struct _EX_RUNDOWN_REF *v62; // [rsp+C8h] [rbp+20h] BYREF

  v61 = a3;
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    hAllocation = a2->hAllocation;
    memset(&v59, 0, sizeof(v59));
    v59.hAllocation = hAllocation;
    v50 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    Current = DXGPROCESS::GetCurrent();
    result = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v50 + 4344),
               Current,
               this,
               &v59,
               1u,
               v57,
               v58);
    if ( (int)result >= 0 )
      a2->pData = v59.pData;
  }
  else
  {
    v5 = 1;
    Value = (struct _D3DDDICB_LOCKFLAGS::$ED792A498079A6342A08F53AEABA2A3A::$E5338CF7B743D9B09B49C7CF5F2B6ABC)a2->Flags.Value;
    LODWORD(v60) = 1;
    while ( *(unsigned int *)&Value < 0x800 )
    {
      NumPages = a2->NumPages;
      if ( ((_DWORD)NumPages == 0) != (a2->pPages == 0LL) )
        goto LABEL_82;
      v8 = *((_QWORD *)this + 5);
      v9 = a2->hAllocation;
      v10 = ((*(_BYTE *)&Value & 4) == 0) | 2;
      if ( (*(_BYTE *)&Value & 8) == 0 )
        v10 = (*(_BYTE *)&Value & 4) == 0;
      v11 = v10 | 4;
      if ( (*(_BYTE *)&Value & 0x20) == 0 )
        v11 = v10;
      v12 = v11 | 8;
      if ( (*(_BYTE *)&Value & 0x40) == 0 )
        v12 = v11;
      v13 = v12 | 0x10;
      if ( *(_BYTE *)&Value >= 0 )
        v13 = v12;
      v14 = v13 | 0x20;
      if ( (*(_WORD *)&Value & 0x100) == 0 )
        v14 = v13;
      v15 = v14 | 0x48;
      if ( (*(_WORD *)&Value & 0x200) == 0 )
        v15 = v14;
      v16 = v15 | 0x80;
      if ( (*(_WORD *)&Value & 0x400) == 0 )
        v16 = v15;
      v17 = v16 | 0x200;
      if ( (*(_BYTE *)&Value & 1) == 0 )
        v17 = v16;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8 + 248, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v52 = *(_DWORD *)(v8 + 272);
          if ( v52 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v18, (const EVENT_DESCRIPTOR *)"g", v19, v52);
        }
        ExAcquirePushLockSharedEx(v8 + 248, 0LL);
      }
      v20 = (v9 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v20 < *(_DWORD *)(v8 + 296) )
      {
        v21 = *(_QWORD *)(v8 + 280);
        v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
        if ( ((v9 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60) && (v22 & 0x2000) == 0 && (v22 & 0x1F) != 0 )
        {
          if ( (v22 & 0x1F) == 5 )
          {
            v23 = *(struct DXGALLOCATION **)(v21 + 16LL * (unsigned int)v20);
            goto LABEL_27;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v23 = 0LL;
LABEL_27:
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v62, v23);
      ExReleasePushLockSharedEx(v8 + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( !v62 )
        goto LABEL_75;
      Count = v62[3].Count;
      if ( !Count )
      {
        v55 = (DXGDEVICE *)a2->hAllocation;
        v54 = (ULONG_PTR)v62;
        v56 = this;
        goto LABEL_79;
      }
      if ( (DXGDEVICE *)v62[1].Count != this )
      {
        v54 = v62[1].Count;
        v55 = this;
        v56 = (DXGDEVICE *)v62;
LABEL_79:
        v32 = -1073741811;
        WdLogSingleEntry4(3LL, v56, v55, v54, -1073741811LL);
        goto LABEL_41;
      }
      if ( (*(_DWORD *)(v62[6].Count + 4) & 2) == 0 )
      {
        v25 = v62[5].Count;
        if ( v25 )
        {
          v44 = *(_DWORD *)(v25 + 4);
          if ( (v44 & 1) != 0 && (v44 & 2) == 0 )
          {
            v45 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 436LL);
            if ( (v45 & 0x10) == 0 && (v45 & 8) == 0 )
            {
LABEL_75:
              v32 = -1073741811;
              WdLogSingleEntry3(3LL, this, a2->hAllocation, -1073741811LL);
LABEL_41:
              if ( v62 )
                ExReleaseRundownProtection(v62 + 11);
              if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
              {
                v60 = 0LL;
                if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v60) >= 0 )
                {
                  DxgThread = v60;
                  if ( v60 || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v60 = DxgThread) != 0LL) )
                  {
                    if ( *((_DWORD *)DxgThread + 12) )
                      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
                  }
                }
              }
              return (unsigned int)v32;
            }
          }
        }
      }
      v26 = *((_QWORD *)this + 2);
      v27 = v17;
      LODWORD(v27) = v17 | 0x100;
      v28 = *(_QWORD *)(v26 + 656);
      v29 = *(_QWORD *)(v26 + 648);
      if ( v5 != 1 )
        v27 = v17;
      v30 = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, _QWORD, __int64, UINT, _QWORD, void **))(*(_QWORD *)(v29 + 8)
                                                                                                  + 272LL))(
              v28,
              Count,
              a2->hAllocation & 0x3F,
              v27,
              a2->PrivateDriverData,
              0LL,
              &a2->pData);
      v31 = *((_QWORD *)this + 5);
      v32 = v30;
      v33 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL)
                                                         + 288LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
              v62[3].Count);
      v34 = a2->hAllocation;
      v35 = v33;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v31 + 248, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v48 = *(_DWORD *)(v31 + 272);
          if ( v48 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v36, (const EVENT_DESCRIPTOR *)"g", v37, v48);
        }
        ExAcquirePushLockExclusiveEx(v31 + 248, 0LL);
      }
      v38 = 0;
      v39 = (v34 >> 6) & 0xFFFFFF;
      *(_QWORD *)(v31 + 256) = KeGetCurrentThread();
      if ( v39 < *(_DWORD *)(v31 + 296) )
      {
        v40 = *(_QWORD *)(v31 + 280);
        v41 = *(_DWORD *)(v40 + 16LL * v39 + 8);
        if ( ((v34 >> 25) & 0x60) == (*(_BYTE *)(v40 + 16LL * v39 + 8) & 0x60)
          && (v41 & 0x2000) == 0
          && (v41 & 0x1F) != 0 )
        {
          *(_DWORD *)(v40 + 16LL * v39 + 8) = v41 ^ ((unsigned __int16)v41 ^ (unsigned __int16)(v35 << 7)) & 0x1F80;
          v38 = (*(_DWORD *)(*(_QWORD *)(v31 + 280) + 16LL * v39 + 8) >> 7) & 0x3F | ((v39 | ((*(_DWORD *)(*(_QWORD *)(v31 + 280) + 16LL * v39 + 8) & 0xFFFFFFE0) << 19)) << 6);
        }
      }
      *(_QWORD *)(v31 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v31 + 248, 0LL);
      KeLeaveCriticalRegion();
      a2->hAllocation = v38;
      if ( v32 != -1071775484 )
        goto LABEL_41;
      v46 = v61;
      COREDEVICEACCESS::Release(v61);
      v32 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                  + 648LL)
                                                                                      + 8LL)
                                                                          + 624LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
              v62[3].Count,
              a2->hAllocation & 0x3F,
              2LL);
      if ( v32 < 0 )
        goto LABEL_41;
      v47 = COREDEVICEACCESS::AcquireShared(v46, 0LL);
      v32 = v47;
      if ( v47 < 0 )
      {
        WdLogSingleEntry1(4LL, v47);
        COREDEVICEACCESS::AcquireSharedUncheck(v46, v53);
        goto LABEL_41;
      }
      a2->Flags.Value &= ~0x80u;
      if ( (_DWORD)v60 != 1 )
        goto LABEL_41;
      v5 = 2;
      LODWORD(v60) = 2;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v62);
      Value = (struct _D3DDDICB_LOCKFLAGS::$ED792A498079A6342A08F53AEABA2A3A::$E5338CF7B743D9B09B49C7CF5F2B6ABC)a2->Flags.Value;
    }
    NumPages = (unsigned int)Value;
LABEL_82:
    v32 = -1073741811;
    WdLogSingleEntry3(3LL, this, NumPages, -1073741811LL);
    return (unsigned int)v32;
  }
  return result;
}
