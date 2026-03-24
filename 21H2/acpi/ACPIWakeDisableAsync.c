/*
 * XREFs of ACPIWakeDisableAsync @ 0x1C00619AC
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C0058CEC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0058F78 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C0059198 (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C001467C (AMLIAsyncEvalObject.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C001C8A4 (ExAllocateFromNPagedLookasideList.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C002F754 (ACPIWakeEnableDisablePciDevice.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0059380 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0061EE0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     WPP_RECORDER_SF_LLLqss @ 0x1C00624C4 (WPP_RECORDER_SF_LLLqss.c)
 */

__int64 __fastcall ACPIWakeDisableAsync(__int64 a1, _QWORD **a2, __int64 a3, _QWORD **a4)
{
  int v4; // edi
  _QWORD *v8; // rax
  int v9; // ebp
  void *v10; // rsi
  __int64 v11; // r8
  void *v12; // r9
  void *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 *v16; // r12
  __int64 v17; // rcx
  void *v18; // rax
  __int64 *v20; // rax
  __int64 *v21; // r14
  __int64 v22; // r15
  __int64 **v23; // rax
  __int64 v24; // r13
  __int64 v25; // rcx
  bool v26; // zf
  unsigned int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // edi
  void *v30; // rax
  void *v31; // rax
  int v32; // [rsp+30h] [rbp-108h]
  int v33; // [rsp+38h] [rbp-100h]
  __int64 v34; // [rsp+40h] [rbp-F8h]
  void *v35; // [rsp+48h] [rbp-F0h]
  void *v36; // [rsp+50h] [rbp-E8h]
  KIRQL NewIrql; // [rsp+60h] [rbp-D8h]
  _QWORD v38[16]; // [rsp+70h] [rbp-C8h] BYREF

  v4 = 0;
  memset(v38, 0, 0x78uLL);
  v8 = *a2;
  v9 = 0;
  while ( v8 != a2 )
  {
    v8 = (_QWORD *)*v8;
    ++v9;
  }
  v10 = &unk_1C00701BA;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v11 = 0LL;
  v12 = &unk_1C00701BA;
  v13 = &unk_1C00701BA;
  if ( a1 )
  {
    v14 = *(_QWORD *)(a1 + 8);
    v11 = a1;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v12 = *(void **)(a1 + 568);
      if ( (v14 & 0x400000000000LL) != 0 )
        v13 = *(void **)(a1 + 576);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v36 = v13;
    v35 = v12;
    v34 = v11;
    v33 = *(_DWORD *)(a1 + 512) - v9;
    v32 = v9;
    WPP_RECORDER_SF_LLLqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v13, v11, (_DWORD)v12);
  }
  v15 = *(_DWORD *)(a1 + 512) - v9;
  *(_DWORD *)(a1 + 512) = v15;
  v16 = *(__int64 **)(a1 + 416);
  if ( !v16 )
    goto LABEL_14;
  if ( v15 )
  {
    if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) != 0 )
      ACPIWakeEnableDisablePciDevice(a1, 1);
    goto LABEL_14;
  }
  v20 = (__int64 *)ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
  v21 = v20;
  if ( !v20 )
  {
    v4 = -1073741670;
LABEL_14:
    KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
    v17 = *(_QWORD *)(a1 + 8);
    v18 = &unk_1C00701BA;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v10 = *(void **)(a1 + 568);
      if ( (v17 & 0x400000000000LL) != 0 )
        v18 = *(void **)(a1 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0xEu,
        (__int64)&WPP_78661b2d78ff34e38fc1910a80efa3ce_Traceguids,
        v4,
        a1,
        (__int64)v10,
        (__int64)v18);
    OSNotifyDeviceWakeCallBack((__int64)v16, v4, 0LL, a4);
    return 259LL;
  }
  *((_BYTE *)v20 + 24) = 0;
  v22 = a1 + 520;
  v20[5] = (__int64)a4;
  v20[4] = (__int64)OSNotifyDeviceWakeCallBack;
  v20[2] = a1;
  *((_DWORD *)v20 + 7) = v9;
  v23 = *(__int64 ***)(a1 + 528);
  v24 = *(_QWORD *)(a1 + 520);
  if ( *v23 != (__int64 *)(a1 + 520) )
    __fastfail(3u);
  *v21 = v22;
  v21[1] = (__int64)v23;
  *v23 = v21;
  *(_QWORD *)(a1 + 528) = v21;
  KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
  v25 = *(_QWORD *)(a1 + 8);
  if ( v24 == v22 )
  {
    if ( (v25 & 0x800000000000000LL) != 0 )
      ACPIWakeEnableDisablePciDevice(a1, 0);
    v26 = (*(_DWORD *)(a1 + 560) & 0x40) == 0;
    v38[2] = 0LL;
    WORD1(v38[0]) = 1;
    if ( v26 )
    {
      v27 = AMLIAsyncEvalObject(v16, 0LL, 1u, v38, ACPIWakeEnableDisableAsyncCallBack, v21, v32, v33, v34, v35, v36);
    }
    else
    {
      WORD1(v38[5]) = 1;
      v38[7] = 0LL;
      WORD1(v38[10]) = 1;
      v38[12] = 0LL;
      v27 = AMLIAsyncEvalObject(v16, 0LL, 3u, v38, ACPIWakeEnableDisableAsyncCallBack, v21, v32, v33, v34, v35, v36);
    }
    v28 = *(_QWORD *)(a1 + 8);
    v29 = v27;
    v30 = &unk_1C00701BA;
    if ( (v28 & 0x200000000000LL) != 0 )
    {
      v10 = *(void **)(a1 + 568);
      if ( (v28 & 0x400000000000LL) != 0 )
        v30 = *(void **)(a1 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0xCu,
        (__int64)&WPP_78661b2d78ff34e38fc1910a80efa3ce_Traceguids,
        v29,
        a1,
        (__int64)v10,
        (__int64)v30);
    if ( v29 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(v16, v29, 0LL, v21);
  }
  else
  {
    v31 = &unk_1C00701BA;
    if ( (v25 & 0x200000000000LL) != 0 )
    {
      v10 = *(void **)(a1 + 568);
      if ( (v25 & 0x400000000000LL) != 0 )
        v31 = *(void **)(a1 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0xDu,
        (__int64)&WPP_78661b2d78ff34e38fc1910a80efa3ce_Traceguids,
        3,
        a1,
        (__int64)v10,
        (__int64)v31);
  }
  return 259LL;
}
