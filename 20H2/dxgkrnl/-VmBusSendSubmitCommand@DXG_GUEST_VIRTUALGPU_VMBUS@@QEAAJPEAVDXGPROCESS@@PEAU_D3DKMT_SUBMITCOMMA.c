/*
 * XREFs of ?VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x1C024B418
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00EF780 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00249E0 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FBFC0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C014EADC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024C330 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0283E84 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_SUBMITCOMMAND *a3)
{
  struct DXGPROCESS *v4; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v10; // r14
  __int64 v11; // rcx
  unsigned int v12; // r15d
  __int64 v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _EX_RUNDOWN_REF *v19; // rsi
  __int64 v20; // rax
  struct _EX_RUNDOWN_REF *v21; // rax
  struct _D3DKMT_SUBMITCOMMAND *v22; // rcx
  __int64 v23; // rdx
  struct _EX_RUNDOWN_REF *v24; // r12
  size_t v25; // r8
  char *v26; // r14
  D3DKMT_HANDLE *HistoryBufferArray; // rdx
  size_t PrivateDriverDataSize; // r8
  char *pPrivateDriverData; // rdx
  __int64 v30; // rcx
  unsigned int v31; // r14d
  struct _EX_RUNDOWN_REF **AllocationUnsafe; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // r14d
  struct _EX_RUNDOWN_REF **v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // r11
  __int64 v47; // rax
  struct _MDL *v48; // r9
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  struct _EX_RUNDOWN_REF **v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  char v62[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v63; // [rsp+28h] [rbp-90h]
  char v64; // [rsp+30h] [rbp-88h]
  struct _EX_RUNDOWN_REF *v65; // [rsp+38h] [rbp-80h] BYREF
  struct _EX_RUNDOWN_REF *v66; // [rsp+40h] [rbp-78h] BYREF
  int v67; // [rsp+48h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v68; // [rsp+50h] [rbp-68h] BYREF
  struct _EX_RUNDOWN_REF *v69[2]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v70[80]; // [rsp+68h] [rbp-50h] BYREF

  v4 = a2;
  v63 = *((_QWORD *)this + 8);
  v64 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
  if ( *(_DWORD *)(*((_QWORD *)this + 8) + 200LL) != 1 )
  {
    if ( v64 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
    return 3221226166LL;
  }
  if ( g_VgpuDisableSubmitCommand )
  {
    if ( v64 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
    return 0LL;
  }
  v10 = 4LL * a3->NumHistoryBuffers;
  if ( v10 > 0xFFFFFFFF )
  {
    v61 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v61 + 24) = 10134LL;
  }
  else
  {
    v11 = (unsigned int)(v10 + 408);
    if ( (unsigned int)v10 >= 0xFFFFFE68 )
    {
      v61 = WdLogNewEntry5_WdWarning(v11, v6, v8);
      *(_QWORD *)(v61 + 24) = 10139LL;
    }
    else
    {
      v12 = v11 + a3->PrivateDriverDataSize;
      if ( v12 >= (unsigned int)v11 )
      {
        v67 = v11 + a3->PrivateDriverDataSize;
        if ( v12 > 0x20000 )
        {
          v13 = WdLogNewEntry5_WdWarning(v11, v6, v8);
          *(_QWORD *)(v13 + 24) = 10149LL;
          WdLogEvent5_WdWarning(v13);
          if ( v64 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
          return 3221225659LL;
        }
        v14 = (struct _EX_RUNDOWN_REF *)operator new[](v12, 0x4B677844u, (POOL_TYPE)512);
        v19 = v14;
        v69[1] = v14;
        if ( !v14 )
        {
          v20 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
          *(_QWORD *)(v20 + 24) = 10155LL;
          WdLogEvent5_WdLowResource(v20);
          if ( v64 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
          return 3221225495LL;
        }
        v14->Count = 0LL;
        v14[1].Count = 0LL;
        LODWORD(v14[2].Count) = 20;
        LODWORD(v14[1].Count) = DXGPROCESS::GetHostProcess(v4);
        v21 = v19 + 3;
        v22 = a3;
        v23 = 3LL;
        do
        {
          *(_OWORD *)&v21->Count = *(_OWORD *)&v22->Commands;
          *(_OWORD *)&v21[2].Count = *(_OWORD *)&v22->PresentHistoryToken;
          *(_OWORD *)&v21[4].Count = *(_OWORD *)&v22->BroadcastContext[1];
          *(_OWORD *)&v21[6].Count = *(_OWORD *)&v22->BroadcastContext[5];
          *(_OWORD *)&v21[8].Count = *(_OWORD *)&v22->BroadcastContext[9];
          *(_OWORD *)&v21[10].Count = *(_OWORD *)&v22->BroadcastContext[13];
          *(_OWORD *)&v21[12].Count = *(_OWORD *)&v22->BroadcastContext[17];
          v21 += 16;
          *(_OWORD *)&v21[-2].Count = *(_OWORD *)&v22->BroadcastContext[21];
          v22 = (struct _D3DKMT_SUBMITCOMMAND *)((char *)v22 + 128);
          --v23;
        }
        while ( v23 );
        v24 = v19 + 51;
        v25 = (unsigned int)v10;
        v26 = (char *)&v19[51] + (unsigned int)v10;
        HistoryBufferArray = a3->HistoryBufferArray;
        if ( (D3DKMT_HANDLE *)((char *)HistoryBufferArray + v25) < HistoryBufferArray
          || (unsigned __int64)HistoryBufferArray + v25 > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(&v19[51], HistoryBufferArray, v25);
        PrivateDriverDataSize = a3->PrivateDriverDataSize;
        pPrivateDriverData = (char *)a3->pPrivateDriverData;
        if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
          || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v26, pPrivateDriverData, PrivateDriverDataSize);
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v70, (struct _KTHREAD **)v4);
        v31 = 0;
        if ( a3->NumPrimaries )
        {
          while ( 1 )
          {
            v65 = 0LL;
            AllocationUnsafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationUnsafe(
                                                            (__int64)v4,
                                                            (DXGALLOCATIONREFERENCE *)&v68,
                                                            *((_DWORD *)&v19[41].Count + v31));
            DXGALLOCATIONREFERENCE::MoveAssign(&v65, AllocationUnsafe);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v68, v33);
            if ( !v65 )
              break;
            *((_DWORD *)&v19[41].Count + v31) = v65[12].Count;
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v65, v34);
            if ( ++v31 >= a3->NumPrimaries )
              goto LABEL_31;
          }
          v55 = WdLogNewEntry5_WdWarning(v35, v34, v36);
          *(_QWORD *)(v55 + 24) = 10191LL;
          WdLogEvent5_WdWarning(v55);
          v57 = &v65;
        }
        else
        {
LABEL_31:
          v37 = 0;
          if ( !a3->NumHistoryBuffers )
          {
LABEL_35:
            v43 = 0LL;
            if ( !LODWORD(v19[6].Count) )
            {
LABEL_43:
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
              v49 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                      this,
                      (struct DXGKVMB_COMMAND_BASE *)v19,
                      v12,
                      v48);
              v53 = v49;
              if ( v49 < 0 )
              {
                v54 = WdLogNewEntry5_WdWarning(v51, v50, v52);
                *(_QWORD *)(v54 + 24) = v53;
                WdLogEvent5_WdWarning(v54);
              }
              goto LABEL_51;
            }
            while ( 1 )
            {
              v44 = *((unsigned int *)&v19[6].Ptr + (unsigned int)v43 + 1);
              v45 = (*((_DWORD *)&v19[6].Ptr + (unsigned int)v43 + 1) >> 6) & 0xFFFFFF;
              if ( (unsigned int)v45 >= *((_DWORD *)v4 + 64) )
                break;
              v46 = *((_QWORD *)v4 + 30);
              v30 = *(unsigned int *)(v46 + 16 * v45 + 8);
              v44 = ((unsigned int)v44 >> 25) & 0x60;
              if ( (_BYTE)v44 != (*(_BYTE *)(v46 + 16 * v45 + 8) & 0x60) || (v30 & 0x2000) != 0 || (v30 & 0x1F) == 0 )
                break;
              v30 &= 0x1Fu;
              if ( (_BYTE)v30 != 7 )
              {
                v59 = WdLogNewEntry5_WdError(v30, v43);
                *(_QWORD *)(v59 + 24) = 267LL;
                WdLogEvent5_WdError(v59);
                break;
              }
              v47 = *(_QWORD *)(v46 + 16LL * (unsigned int)v45);
              if ( !v47 )
                break;
              *((_DWORD *)&v19[6].Ptr + (unsigned int)v43 + 1) = *(_DWORD *)(v47 + 28);
              v43 = (unsigned int)(v43 + 1);
              if ( (unsigned int)v43 >= LODWORD(v19[6].Count) )
                goto LABEL_43;
            }
            v60 = WdLogNewEntry5_WdWarning(v30, v43, v44);
            *(_QWORD *)(v60 + 24) = 10214LL;
            WdLogEvent5_WdWarning(v60);
            LODWORD(v53) = -1073741811;
LABEL_47:
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
LABEL_51:
            operator delete[](v19);
            if ( v64 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
            return (unsigned int)v53;
          }
          while ( 1 )
          {
            v66 = 0LL;
            v38 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationUnsafe(
                                               (__int64)a2,
                                               (DXGALLOCATIONREFERENCE *)v69,
                                               *((_DWORD *)&v24->Count + v37));
            DXGALLOCATIONREFERENCE::MoveAssign(&v66, v38);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v69, v39);
            if ( !v66 )
              break;
            *((_DWORD *)&v24->Count + v37) = v66[12].Count;
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v66, v40);
            if ( ++v37 >= a3->NumHistoryBuffers )
            {
              v4 = a2;
              goto LABEL_35;
            }
          }
          v58 = WdLogNewEntry5_WdWarning(v41, v40, v42);
          *(_QWORD *)(v58 + 24) = 10203LL;
          WdLogEvent5_WdWarning(v58);
          v57 = &v66;
        }
        LODWORD(v53) = -1073741811;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v57, v56);
        goto LABEL_47;
      }
      v61 = WdLogNewEntry5_WdWarning(v11, v6, v8);
      *(_QWORD *)(v61 + 24) = 10144LL;
    }
  }
  WdLogEvent5_WdWarning(v61);
  if ( v64 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
  return 3221225485LL;
}
