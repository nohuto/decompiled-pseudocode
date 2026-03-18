/*
 * XREFs of ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAU_VIDMM_PRIMARIES_REFERENCES@@PEAUVIDSCH_HW_QUEUE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C0092390
 * Callers:
 *     VidMmReferenceWrittenPrimaries @ 0x1C0002D90 (VidMmReferenceWrittenPrimaries.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002DE0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
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
  unsigned int v10; // edi
  struct DXGPROCESS *v11; // r15
  unsigned int v12; // esi
  struct VIDSCH_HW_QUEUE *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // edx
  __int64 v18; // rax
  __int64 v19; // r11
  int v20; // r9d
  __int64 v21; // rax
  volatile signed __int32 *v22; // r10
  __int64 v23; // r11
  unsigned int v24; // ecx
  unsigned int v25; // r9d
  bool v26; // cl
  int v27; // eax
  int v28; // r9d
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  struct VIDSCH_HW_QUEUE *v34; // [rsp+B0h] [rbp+38h]

  Current = DXGPROCESS::GetCurrent();
  v10 = 0;
  v11 = Current;
  v12 = 0;
  v13 = (struct DXGPROCESS *)((char *)Current + 248);
  v34 = (struct DXGPROCESS *)((char *)Current + 248);
  if ( Current != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)Current + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(v29, 262146LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v28 = *((_DWORD *)v13 + 6);
      if ( v28 != -1 && (byte_1C006E941 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventBlockThread, v15, v28);
    }
    ExAcquirePushLockSharedEx(v13, 0LL);
  }
  v16 = 0;
  *(_DWORD *)a6 = 0;
  if ( !a3 )
    goto LABEL_6;
  while ( 1 )
  {
    v18 = (*a4 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v18 >= *((_DWORD *)v11 + 74) )
      goto LABEL_22;
    v19 = *((_QWORD *)v11 + 35);
    v20 = *(_DWORD *)(v19 + 16 * v18 + 8);
    if ( ((*a4 >> 25) & 0x60) != (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60) || (v20 & 0x2000) != 0 || (v20 & 0x1F) == 0 )
      goto LABEL_22;
    if ( (v20 & 0x1F) != 5 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(v31, 0x40000LL);
LABEL_22:
      WdLogSingleEntry1(2LL, 22554LL);
LABEL_23:
      v12 = -1073741811;
      goto LABEL_34;
    }
    v21 = *(_QWORD *)(v19 + 16LL * (unsigned int)v18);
    if ( !v21 )
      goto LABEL_22;
    if ( *(struct DXGDEVICE **)(v21 + 8) != a2 )
    {
      WdLogSingleEntry2(1LL, *(_QWORD *)(v21 + 8), a2);
      DxgkLogInternalTriageEvent(v30, 0x40000LL);
      goto LABEL_23;
    }
    v22 = *(volatile signed __int32 **)(v21 + 24);
    v23 = **(_QWORD **)v22;
    v24 = **(_DWORD **)(v23 + 528);
    v25 = (v24 >> 12) | (v24 | ((v24 | (v24 >> 5)) >> 6)) & 0x80000;
    v26 = (v24 & 0x100000) != 0;
    if ( (**(_DWORD **)(v23 + 528) & 0x200000) != 0 )
      break;
    if ( v25 >= 0x80000 )
      goto LABEL_16;
    if ( !v26 )
    {
      WdLogSingleEntry1(2LL, 22586LL);
      goto LABEL_23;
    }
LABEL_20:
    ++v16;
    ++a4;
    if ( v16 >= a3 )
      goto LABEL_6;
  }
  *((_DWORD *)a6 + 34) |= 1u;
  if ( v25 < 0x80000 )
    goto LABEL_20;
LABEL_16:
  if ( !*(_BYTE *)(v23 + 81) )
  {
    _InterlockedExchangeAdd(v22 + 26, a5);
    *((_QWORD *)a6 + *(unsigned int *)a6 + 1) = v22;
    v27 = *(_DWORD *)a6;
    if ( *(_DWORD *)a6 >= 0x10u )
    {
      ++*((_DWORD *)this + 1808);
      v27 = *(_DWORD *)a6;
    }
    *(_DWORD *)a6 = v27 + 1;
    goto LABEL_20;
  }
  WdLogSingleEntry0(3LL);
  v12 = -1071775482;
LABEL_34:
  if ( *(_DWORD *)a6 )
  {
    do
      _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a6 + ++v10) + 104LL), -a5);
    while ( v10 < *(_DWORD *)a6 );
    v13 = v34;
  }
LABEL_6:
  ExReleasePushLockSharedEx(v13, 0LL);
  KeLeaveCriticalRegion();
  return v12;
}
