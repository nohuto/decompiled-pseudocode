/*
 * XREFs of ACPIWakeEnableDisableAsyncCallBack @ 0x1C00631D0
 * Callers:
 *     ACPIWakeDisableAsync @ 0x1C00627FC (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0062CD8 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C00631D0 (ACPIWakeEnableDisableAsyncCallBack.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     ExFreeToNPagedLookasideList @ 0x1C00309D4 (ExFreeToNPagedLookasideList.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C00631D0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C006352C (ACPIWakeEnableDisablePciDevice.c)
 *     WPP_RECORDER_SF_LsLLqss @ 0x1C0063A40 (WPP_RECORDER_SF_LsLLqss.c)
 */

void __fastcall ACPIWakeEnableDisableAsyncCallBack(__int64 *a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  void *v5; // rbp
  __int64 v6; // rdi
  __int64 v9; // r11
  void *v10; // r14
  void *v11; // r10
  __int64 v12; // rax
  KIRQL v13; // al
  _QWORD *v14; // rdx
  KIRQL v15; // r8
  void **v16; // rcx
  char v17; // r11
  void *v18; // r14
  void *v19; // r10
  __int64 v20; // rax
  int v21; // r9d
  int v22; // r8d
  char v23; // cl
  const char *v24; // rax
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  __int64 v28; // r14
  __int64 v29; // r12
  __int64 v30; // rdx
  char v31; // cl
  unsigned int v32; // ebx
  void *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // [rsp+20h] [rbp-A8h]
  _OWORD v37[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v38; // [rsp+80h] [rbp-48h]
  KIRQL v41; // [rsp+E8h] [rbp+20h]

  v4 = a4[2];
  v5 = &unk_1C006FB8B;
  LOBYTE(v6) = 0;
  LOBYTE(v9) = 0;
  v10 = &unk_1C006FB8B;
  v11 = &unk_1C006FB8B;
  if ( v4 )
  {
    v12 = *(_QWORD *)(v4 + 8);
    v9 = a4[2];
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v10 = *(void **)(v4 + 608);
      if ( (v12 & 0x400000000000LL) != 0 )
        v11 = *(void **)(v4 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x14u,
      (__int64)&WPP_f2b70cf489233296687a8e467b880eb0_Traceguids,
      a2,
      v9,
      (__int64)v10,
      (__int64)v11);
  v13 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v14 = (_QWORD *)*a4;
  v15 = v13;
  v41 = v13;
  if ( *(_QWORD **)(*a4 + 8LL) != a4 || (v16 = (void **)a4[1], *v16 != a4) )
    __fastfail(3u);
  *v16 = v14;
  v14[1] = v16;
  if ( a2 < 0 )
  {
    v17 = 0;
    v18 = &unk_1C006FB8B;
    v19 = &unk_1C006FB8B;
    if ( v4 )
    {
      v20 = *(_QWORD *)(v4 + 8);
      v17 = v4;
      if ( (v20 & 0x200000000000LL) != 0 )
      {
        v18 = *(void **)(v4 + 608);
        if ( (v20 & 0x400000000000LL) != 0 )
          v19 = *(void **)(v4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = *(_DWORD *)(v4 + 552);
      v22 = *((_DWORD *)a4 + 7);
      LOBYTE(v14) = *((_BYTE *)a4 + 24);
      v23 = v21 - v22;
      if ( !(_BYTE)v14 )
        v23 = v22 + v21;
      v24 = "-";
      if ( !(_BYTE)v14 )
        v24 = "+";
      WPP_RECORDER_SF_LsLLqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v14,
        v22,
        v21,
        v36,
        v21,
        (__int64)v24,
        v22,
        v23,
        v17,
        (__int64)v18,
        (__int64)v19);
      v15 = v41;
    }
    v25 = *(_DWORD *)(v4 + 552);
    v26 = *((_DWORD *)a4 + 7);
    if ( *((_BYTE *)a4 + 24) )
      v27 = v25 - v26;
    else
      v27 = v26 + v25;
    *(_DWORD *)(v4 + 552) = v27;
  }
  v28 = 0LL;
  v29 = *(_QWORD *)(v4 + 560);
  if ( v29 != v4 + 560 )
    v28 = *(_QWORD *)(v4 + 560);
  KeReleaseSpinLock(&AcpiPowerLock, v15);
  if ( _bittest64((const signed __int64 *)(v4 + 8), 0x3Bu) && *((_BYTE *)a4 + 24) == 1 )
  {
    LOBYTE(v30) = 1;
    ACPIWakeEnableDisablePciDevice(v4, v30);
  }
  ((void (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))a4[4])(a1, (unsigned int)a2, a3, a4[5]);
  ExFreeToNPagedLookasideList(&XswContextLookAsideList, a4);
  if ( v29 != v4 + 560 )
  {
    v31 = *(_BYTE *)(v28 + 24);
    v38 = 0LL;
    v37[0] = 0LL;
    WORD1(v37[0]) = 1;
    v37[1] = v31 != 0;
    if ( _bittest64((const signed __int64 *)(v4 + 8), 0x3Bu) && !v31 )
      ACPIWakeEnableDisablePciDevice(v4, 0LL);
    v32 = AMLIAsyncEvalObject(a1, 0LL, 1u, v37, ACPIWakeEnableDisableAsyncCallBack, v28);
    v33 = &unk_1C006FB8B;
    v34 = *(_QWORD *)(v28 + 16);
    if ( v34 )
    {
      v6 = *(_QWORD *)(v28 + 16);
      v35 = *(_QWORD *)(v34 + 8);
      if ( (v35 & 0x200000000000LL) != 0 )
      {
        v5 = *(void **)(v6 + 608);
        if ( (v35 & 0x400000000000LL) != 0 )
          v33 = *(void **)(v6 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x16u,
        (__int64)&WPP_f2b70cf489233296687a8e467b880eb0_Traceguids,
        v32,
        v6,
        (__int64)v5,
        (__int64)v33);
    if ( v32 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(a1, v32, 0LL, v28);
  }
}
