/*
 * XREFs of Controller_DetectFrameMicroframeBoundary @ 0x1C0031F7C
 * Callers:
 *     Controller_Start @ 0x1C0011474 (Controller_Start.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x1C00344C0 (Controller_TimeSyncStartTrackingWorker.c)
 * Callees:
 *     DynamicLock_Release @ 0x1C0006D40 (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0007340 (DynamicLock_Acquire.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0013F1C (XilRegister_WriteUlong.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     Controller_GetFrameNumber @ 0x1C00326B4 (Controller_GetFrameNumber.c)
 */

__int64 __fastcall Controller_DetectFrameMicroframeBoundary(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int v3; // r15d
  bool v4; // zf
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // r14
  LARGE_INTEGER v8; // rbx
  int FrameNumber; // eax
  int v10; // r12d
  LARGE_INTEGER v11; // rdi
  __int64 v12; // rbx
  char v13; // cl
  __int64 v14; // rax
  _QWORD *v15; // rdx
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rcx
  unsigned int *v20; // rbx
  int Ulong; // eax
  __int64 v22; // rcx
  int v23; // edx
  int v24; // r8d
  int v25; // r9d
  int v27; // [rsp+30h] [rbp-48h] BYREF
  int v28; // [rsp+34h] [rbp-44h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-40h] BYREF
  KIRQL NewIrql[8]; // [rsp+40h] [rbp-38h]
  _QWORD v31[2]; // [rsp+48h] [rbp-30h] BYREF
  int v32; // [rsp+58h] [rbp-20h]
  int v33; // [rsp+5Ch] [rbp-1Ch]
  int v34; // [rsp+60h] [rbp-18h]
  int v35; // [rsp+64h] [rbp-14h]
  int v36; // [rsp+C8h] [rbp+50h] BYREF
  int v37; // [rsp+D0h] [rbp+58h] BYREF
  int v38; // [rsp+D8h] [rbp+60h] BYREF

  v1 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v37 = 0;
  v38 = 0;
  v36 = 0;
  v27 = 0;
  *(_QWORD *)NewIrql = KeGetCurrentIrql();
  KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = 1;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 )
      NewIrql[0] = KfRaiseIrql(2u);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( v3 == 1 )
      v6 = 100 * PerformanceFrequency.QuadPart;
    else
      v6 = 10 * PerformanceFrequency.QuadPart;
    v7 = v6 / 1000;
    Controller_GetFrameNumber(a1, 0LL, &v37, &v38);
    do
    {
      v8 = KeQueryPerformanceCounter(0LL);
      FrameNumber = Controller_GetFrameNumber(a1, 0LL, &v36, &v27);
      v10 = v27;
      v28 = FrameNumber;
    }
    while ( v8.QuadPart - PerformanceCounter.QuadPart <= v7 && v37 == v36 && v38 == v27 );
    v11 = KeQueryPerformanceCounter(0LL);
    v12 = 1000000 * (v11.QuadPart - v8.QuadPart) / PerformanceFrequency.QuadPart;
    if ( v3 == 2 )
      KeLowerIrql(NewIrql[0]);
    if ( (v37 != v36 || v38 != v10) && v12 <= 10 )
      break;
    v4 = ++v3 == 2;
    if ( v3 > 2 )
    {
      v13 = 0;
      goto LABEL_19;
    }
  }
  v13 = 1;
LABEL_19:
  if ( v13 )
  {
    v33 = v36;
    v14 = *(_QWORD *)(a1 + 128);
    v31[0] = a1 + 608;
    v32 = v28;
    v15 = *(_QWORD **)(v14 + 40);
    v35 = 0;
    v31[1] = v11.QuadPart;
    v34 = v10;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, char (__fastcall *)(__int64, __int64 *), _QWORD *))(WdfFunctions_01023 + 1144))(
      WdfDriverGlobals,
      *v15,
      Interrupter_SetBusEdgeInformationRoutineWithIsrSync,
      v31);
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01023 + 1144))(
      WdfDriverGlobals,
      **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
      Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
      a1 + 608);
    DynamicLock_Acquire(*(_QWORD *)(a1 + 616), v16, v17, v18);
    v19 = *(_QWORD *)(a1 + 88);
    v20 = *(unsigned int **)(v19 + 32);
    Ulong = XilRegister_ReadUlong(v19, v20);
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v20, Ulong & 0xFFFFFBFF);
    v22 = *(_QWORD *)(a1 + 616);
    *(_BYTE *)(a1 + 608) = 0;
    DynamicLock_Release(v22, v23, v24, v25);
    return (unsigned int)-1073741823;
  }
  return v1;
}
