/*
 * XREFs of ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAU_VIDMM_PRIMARIES_REFERENCES@@PEAUVIDSCH_HW_QUEUE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C006AA90
 * Callers:
 *     VidMmReferenceWrittenPrimaries @ 0x1C0001640 (VidMmReferenceWrittenPrimaries.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001690 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReferenceWrittenPrimaries(
        VIDMM_GLOBAL *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const unsigned int *const a4,
        unsigned int a5,
        struct _VIDMM_PRIMARIES_REFERENCES *a6)
{
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  struct DXGPROCESS *v14; // r15
  unsigned int v15; // ebp
  struct VIDSCH_HW_QUEUE *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  VIDMM_GLOBAL *v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r11
  __int64 v25; // rax
  volatile signed __int32 *v26; // r10
  __int64 v27; // r11
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v37; // [rsp+50h] [rbp+8h]
  struct VIDSCH_HW_QUEUE *v39; // [rsp+80h] [rbp+38h]

  Current = DXGPROCESS::GetCurrent();
  v13 = 0LL;
  v14 = Current;
  v15 = 0;
  v16 = (struct DXGPROCESS *)((char *)Current + 208);
  v39 = (struct DXGPROCESS *)((char *)Current + 208);
  if ( Current != (struct DXGPROCESS *)-208LL && *((struct _KTHREAD **)Current + 27) == KeGetCurrentThread() )
  {
    v31 = WdLogNewEntry5_WdAssertion(v11, v10, v12);
    *(_QWORD *)(v31 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v31);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v16, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v32 = *((_DWORD *)v16 + 6);
      if ( v32 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (const EVENT_DESCRIPTOR *)"g", v18, v32);
    }
    ExAcquirePushLockSharedEx(v16, 0LL);
  }
  v19 = 0LL;
  *(_DWORD *)a6 = 0;
  if ( !a3 )
    goto LABEL_6;
  v21 = this;
  while ( 1 )
  {
    v22 = *a4;
    v23 = (*a4 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v23 >= *((_DWORD *)v14 + 64) )
      goto LABEL_23;
    v24 = *((_QWORD *)v14 + 30);
    v22 = ((unsigned int)v22 >> 25) & 0x60;
    v18 = *(unsigned int *)(v24 + 16 * v23 + 8);
    if ( (_BYTE)v22 != (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60) || (v18 & 0x2000) != 0 || (v18 & 0x1F) == 0 )
      goto LABEL_23;
    v18 &= 0x1Fu;
    if ( (_BYTE)v18 != 5 )
    {
      v35 = WdLogNewEntry5_WdError(v22, v19, v18, v21);
      *(_QWORD *)(v35 + 24) = 316LL;
      WdLogEvent5_WdError(v35);
LABEL_23:
      v30 = WdLogNewEntry5_WdError(v22, v19, v18, v21);
      *(_QWORD *)(v30 + 24) = 22403LL;
LABEL_24:
      WdLogEvent5_WdError(v30);
      goto LABEL_37;
    }
    v25 = *(_QWORD *)(v24 + 16LL * (unsigned int)v23);
    v37 = v25;
    if ( !v25 )
      goto LABEL_23;
    if ( *(struct DXGDEVICE **)(v25 + 8) != a2 )
      break;
    v26 = *(volatile signed __int32 **)(v25 + 24);
    v27 = **(_QWORD **)v26;
    v28 = **(unsigned int **)(v27 + 512);
    v18 = ((unsigned int)v28 >> 12) | ((unsigned int)v28 | (((unsigned int)v28 | (**(_DWORD **)(v27 + 512) >> 5)) >> 6)) & 0x80000;
    LOBYTE(v28) = (v28 & 0x100000) != 0;
    if ( (**(_DWORD **)(v27 + 512) & 0x200000) != 0 )
    {
      *((_DWORD *)a6 + 34) |= 1u;
      goto LABEL_26;
    }
    if ( (unsigned int)v18 < 0x80000 )
    {
      if ( !(_BYTE)v28 )
      {
        v30 = WdLogNewEntry5_WdError(v28, v19, v18, v21);
        *(_QWORD *)(v30 + 24) = 22435LL;
        goto LABEL_24;
      }
LABEL_26:
      if ( (unsigned int)v18 < 0x80000 )
        goto LABEL_21;
    }
    if ( *(_BYTE *)(v27 + 88) )
    {
      v33 = WdLogNewEntry5_WdWarning(v28, v19);
      WdLogEvent5_WdWarning(v33);
      v15 = -1071775482;
      goto LABEL_38;
    }
    _InterlockedExchangeAdd(v26 + 26, a5);
    *((_QWORD *)a6 + *(unsigned int *)a6 + 1) = v26;
    v29 = *(_DWORD *)a6;
    if ( *(_DWORD *)a6 >= 0x10u )
    {
      ++*((_DWORD *)v21 + 1806);
      v29 = *(_DWORD *)a6;
    }
    *(_DWORD *)a6 = v29 + 1;
LABEL_21:
    v19 = (unsigned int)(v19 + 1);
    ++a4;
    if ( (unsigned int)v19 >= a3 )
      goto LABEL_6;
  }
  v34 = WdLogNewEntry5_WdAssertion(v22, v19, v18);
  *(_QWORD *)(v34 + 24) = *(_QWORD *)(v37 + 8);
  *(_QWORD *)(v34 + 32) = a2;
  WdLogEvent5_WdAssertion(v34);
LABEL_37:
  v15 = -1073741811;
LABEL_38:
  if ( *(_DWORD *)a6 )
  {
    do
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a6 + v13 + 1) + 104LL), -a5);
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < *(_DWORD *)a6 );
    v16 = v39;
  }
LABEL_6:
  ExReleasePushLockSharedEx(v16, 0LL);
  KeLeaveCriticalRegion();
  return v15;
}
