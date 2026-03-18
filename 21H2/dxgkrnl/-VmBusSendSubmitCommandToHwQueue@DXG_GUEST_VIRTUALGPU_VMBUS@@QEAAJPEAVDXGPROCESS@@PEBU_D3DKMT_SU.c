/*
 * XREFs of ?VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C037DD74
 * Callers:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C0223D28 (DxgkSubmitCommandToHwQueueInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C002B798 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0179F48 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z @ 0x1C037E9E4 (-VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommandToHwQueue(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct _EX_RUNDOWN_REF *a2,
        const struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a3)
{
  __int64 v7; // rsi
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  __int64 v10; // r14
  size_t v11; // r8
  void *v12; // rsi
  const D3DKMT_HANDLE *WrittenPrimaries; // rdx
  __int64 PrivateDriverDataSize; // rax
  char *pPrivateDriverData; // rdx
  unsigned int v16; // esi
  struct _EX_RUNDOWN_REF **AllocationUnsafe; // rax
  __int64 v18; // rax
  ULONG_PTR Count; // r9
  int v20; // ecx
  unsigned int v21; // edi
  __int64 v22; // rax
  int v23; // eax
  char v24[8]; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-1B0h]
  char v26; // [rsp+60h] [rbp-1A8h]
  struct _EX_RUNDOWN_REF *v27; // [rsp+68h] [rbp-1A0h] BYREF
  struct _EX_RUNDOWN_REF *v28[2]; // [rsp+70h] [rbp-198h] BYREF
  _BYTE v29[32]; // [rsp+80h] [rbp-188h] BYREF
  __int128 v30; // [rsp+A0h] [rbp-168h] BYREF
  int v31; // [rsp+B0h] [rbp-158h]

  v28[1] = a2;
  v25 = *((_QWORD *)this + 9);
  v26 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 200LL) == 1 )
  {
    if ( g_VgpuDisableSubmitCommand )
    {
      if ( v26 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
      return 0LL;
    }
    v7 = 4 * a3->NumPrimaries;
    v8 = v7 + 80;
    if ( (unsigned int)v7 >= 0xFFFFFFB0 )
    {
      WdLogSingleEntry1(3LL, 11819LL);
    }
    else
    {
      v9 = v8 + a3->PrivateDriverDataSize;
      if ( v9 >= v8 )
      {
        if ( v9 > 0x20000 )
        {
          WdLogSingleEntry1(3LL, 11831LL);
          if ( v26 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
          return 3221225659LL;
        }
        v30 = 0LL;
        v31 = 0;
        DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v30, this, v9, 0LL, 0LL, 0LL);
        v10 = v30;
        if ( !(_QWORD)v30 )
        {
          WdLogSingleEntry1(6LL, 11839LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate DXGKVMB_COMMAND_SUBMITCOMMANDTOHWQUEUE",
            11839LL,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v30);
          if ( v26 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
          return 3221225495LL;
        }
        *(_QWORD *)v30 = 0LL;
        *(_DWORD *)(v10 + 8) = 0;
        *(_BYTE *)(v10 + 12) = 0;
        *(_DWORD *)(v10 + 12) &= 0x1FFu;
        *(_QWORD *)(v10 + 16) = 52LL;
        *(_DWORD *)(v10 + 8) = DXGPROCESS::GetHostProcess((DXGPROCESS *)a2);
        *(_OWORD *)(v10 + 24) = *(_OWORD *)&a3->hHwQueue;
        *(_OWORD *)(v10 + 40) = *(_OWORD *)&a3->CommandBuffer;
        *(_OWORD *)(v10 + 56) = *(_OWORD *)&a3->pPrivateDriverData;
        *(_QWORD *)(v10 + 72) = a3->WrittenPrimaries;
        v11 = (unsigned int)v7;
        v12 = (void *)(v10 + 80 + v7);
        if ( a3->NumPrimaries )
        {
          WrittenPrimaries = a3->WrittenPrimaries;
          if ( (const D3DKMT_HANDLE *)((char *)WrittenPrimaries + v11) < WrittenPrimaries
            || (unsigned __int64)WrittenPrimaries + v11 > MmUserProbeAddress )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          memmove((void *)(v10 + 80), WrittenPrimaries, v11);
        }
        PrivateDriverDataSize = a3->PrivateDriverDataSize;
        if ( (_DWORD)PrivateDriverDataSize )
        {
          pPrivateDriverData = (char *)a3->pPrivateDriverData;
          if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
            || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          memmove(v12, pPrivateDriverData, (unsigned int)PrivateDriverDataSize);
        }
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v29, (struct DXGPROCESS *)a2);
        v16 = 0;
        if ( a3->NumPrimaries )
        {
          while ( 1 )
          {
            v27 = 0LL;
            AllocationUnsafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationUnsafe(
                                                            (__int64)a2,
                                                            (DXGALLOCATIONREFERENCE *)v28,
                                                            *(_DWORD *)(v10 + 4LL * v16 + 80));
            DXGALLOCATIONREFERENCE::MoveAssign(&v27, AllocationUnsafe);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v28);
            if ( !v27 )
              break;
            *(_DWORD *)(v10 + 4LL * v16 + 80) = HIDWORD(v27[2].Ptr);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v27);
            if ( ++v16 >= a3->NumPrimaries )
              goto LABEL_29;
          }
          WdLogSingleEntry1(3LL, 11881LL);
          v21 = -1073741811;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v27);
        }
        else
        {
LABEL_29:
          v18 = (*(_DWORD *)(v10 + 24) >> 6) & 0xFFFFFF;
          if ( (unsigned int)v18 < LODWORD(a2[37].Count) )
          {
            Count = a2[35].Count;
            v20 = *(_DWORD *)(Count + 16 * v18 + 8);
            if ( ((*(_DWORD *)(v10 + 24) >> 25) & 0x60) == (*(_BYTE *)(Count + 16 * v18 + 8) & 0x60)
              && (v20 & 0x2000) == 0
              && (v20 & 0x1F) != 0 )
            {
              if ( (v20 & 0x1F) == 0xF )
              {
                v22 = *(_QWORD *)(Count + 16LL * (unsigned int)v18);
                if ( v22 )
                {
                  *(_DWORD *)(v10 + 24) = *(_DWORD *)(v22 + 28);
                  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
                  v23 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncOrAsyncMessage(this, (struct DXGVMBUSMESSAGE *)&v30);
                  v21 = v23;
                  if ( v23 < 0 )
                    WdLogSingleEntry1(3LL, v23);
                  goto LABEL_41;
                }
              }
              else
              {
                WdLogSingleEntry1(2LL, 267LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Handle type mismatch",
                  267LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
          }
          WdLogSingleEntry1(3LL, 11891LL);
          v21 = -1073741811;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
LABEL_41:
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v30);
        if ( v26 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
        return v21;
      }
      WdLogSingleEntry1(3LL, 11825LL);
    }
    if ( v26 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
    return 3221225485LL;
  }
  else
  {
    if ( v26 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
    return 3221226166LL;
  }
}
