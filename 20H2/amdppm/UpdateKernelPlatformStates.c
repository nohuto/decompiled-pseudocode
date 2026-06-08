/*
 * XREFs of UpdateKernelPlatformStates @ 0x1C000B38C
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C0024710 (AcpiCStateNotifyWorker.c)
 *     PepUpdatePlatformStateWorker @ 0x1C0033E80 (PepUpdatePlatformStateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C000EB00 (memmove.c)
 *     memset @ 0x1C000EDC0 (memset.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C001DC9C (ProcLibTracePlatformIdleStates.c)
 *     ValidatePlatformIdleState @ 0x1C002C530 (ValidatePlatformIdleState.c)
 */

__int64 __fastcall UpdateKernelPlatformStates(__int64 a1, char a2)
{
  char v2; // bp
  unsigned int *v3; // rdi
  _DWORD *v4; // rsi
  int v5; // r13d
  unsigned int v6; // r12d
  const void *v7; // rbx
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  unsigned int *PoolWithTag; // rax
  int v11; // r13d
  unsigned int *v12; // rbp
  signed __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rcx
  _BYTE *v16; // rcx
  size_t v17; // r8
  void *v18; // r15
  NTSTATUS ProcessorNumberFromIndex; // ebx
  SIZE_T v20; // rbx
  __int64 i; // r14
  __int64 v22; // r8
  unsigned int *v23; // rbp
  unsigned int v24; // eax
  __int64 v25; // r10
  __int64 v26; // rdx
  __int64 v27; // rdx
  char v31; // [rsp+90h] [rbp+18h]
  int v32; // [rsp+98h] [rbp+20h]

  v31 = 0;
  v2 = a2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00133F8,
    0LL);
  v7 = Src;
  if ( Src )
  {
    v6 = *((_DWORD *)Src + 1);
    v5 = dword_1C00133F4;
    v32 = dword_1C00133F4;
    v8 = (48 * v6 + 59) & 0xFFFFFFFC;
    v9 = v8 + 8 * v6 * dword_1C00133F4;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v9, 0x72637250u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v9);
      memmove(v3, v7, (int)(48 * v6 + 56));
      if ( v6 )
      {
        v11 = 8 * v5;
        v12 = v3 + 18;
        v13 = (_BYTE *)v7 - (_BYTE *)v3;
        v14 = v6;
        do
        {
          v15 = v8;
          v8 += v11;
          v16 = (char *)v3 + v15;
          v17 = 8LL * *v12;
          *((_QWORD *)v12 + 3) = v16;
          memmove(v16, *(const void **)((char *)v12 + v13 + 24), v17);
          v12 += 12;
          --v14;
        }
        while ( v14 );
        v5 = v32;
      }
    }
    v2 = a2;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00133F8);
  v18 = 0LL;
  if ( !v3 )
  {
    ProcessorNumberFromIndex = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0x1Au,
        (__int64)&WPP_cab160ae24df3aaa3ae0e3c64f54f2b2_Traceguids);
    return (unsigned int)ProcessorNumberFromIndex;
  }
  if ( !v2 )
    goto LABEL_29;
  v20 = (unsigned int)(16 * v5 + 40);
  v4 = ExAllocatePoolWithTag(PagedPool, v20, 0x72637250u);
  if ( v4 )
  {
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
    {
      memset(v4, 0, v20);
      LOBYTE(v22) = 1;
      *v4 = i;
      v4[8] = v5;
      if ( (int)((__int64 (__fastcall *)(_QWORD, _DWORD *, __int64))qword_1C00136B0)(*(_QWORD *)(a1 + 1104), v4, v22) >= 0 )
      {
        ProcessorNumberFromIndex = ValidatePlatformIdleState(v4);
        if ( ProcessorNumberFromIndex < 0 )
          goto LABEL_35;
        v31 = 1;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C0013408,
          0LL);
        v23 = &v3[12 * i];
        v23[16] = v4[5];
        v23[17] = v4[6];
        *((_BYTE *)v23 + 61) = *((_BYTE *)v4 + 16);
        if ( *((_QWORD *)v4 + 1) )
        {
          *((_BYTE *)v23 + 60) = 1;
          ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                       *(_DWORD *)(*((_QWORD *)v4 + 1) + 56LL),
                                       (PPROCESSOR_NUMBER)v23 + 14);
          if ( ProcessorNumberFromIndex < 0 )
          {
            v27 = qword_1C0013408;
            goto LABEL_34;
          }
        }
        memset(*((void **)v23 + 12), 0, 8LL * v23[18]);
        v24 = v4[7];
        v25 = 0LL;
        for ( v23[18] = v24; (unsigned int)v25 < v23[18]; v25 = (unsigned int)(v25 + 1) )
        {
          v26 = *((_QWORD *)v23 + 12);
          *(_DWORD *)(v26 + 8 * v25) = *(_DWORD *)(*(_QWORD *)&v4[4 * (unsigned int)v25 + 10] + 56LL);
          *(_BYTE *)(v26 + 8 * v25 + 4) = v4[4 * (unsigned int)v25 + 12];
          *(_BYTE *)(v26 + 8 * v25 + 6) = BYTE2(v4[4 * (unsigned int)v25 + 12]);
          *(_BYTE *)(v26 + 8 * v25 + 5) = BYTE1(v4[4 * (unsigned int)v25 + 12]);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C0013408);
        v20 = (unsigned int)(16 * v5 + 40);
      }
    }
    if ( !v31 )
    {
      ProcessorNumberFromIndex = 0;
LABEL_35:
      if ( v4 )
        ExFreePoolWithTag(v4, 0x72637250u);
      goto LABEL_37;
    }
LABEL_29:
    *((_BYTE *)v3 + 48) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00133F8,
      0LL);
    ProcessorNumberFromIndex = ((__int64 (__fastcall *)(unsigned int *))qword_1C0013640)(v3);
    if ( ProcessorNumberFromIndex < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x1Cu,
          (__int64)&WPP_cab160ae24df3aaa3ae0e3c64f54f2b2_Traceguids,
          ProcessorNumberFromIndex);
    }
    else
    {
      v18 = Src;
      Src = v3;
      v3 = 0LL;
      ProcLibTracePlatformIdleStates(0LL);
    }
    v27 = qword_1C00133F8;
LABEL_34:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, v27);
    goto LABEL_35;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x1Bu,
      (__int64)&WPP_cab160ae24df3aaa3ae0e3c64f54f2b2_Traceguids);
  ProcessorNumberFromIndex = -1073741670;
LABEL_37:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v18 )
    ExFreePoolWithTag(v18, 0x72637250u);
  return (unsigned int)ProcessorNumberFromIndex;
}
