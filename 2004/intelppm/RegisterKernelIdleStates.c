/*
 * XREFs of RegisterKernelIdleStates @ 0x1C0003B20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     DisplayKernelIdleStates @ 0x1C0003E78 (DisplayKernelIdleStates.c)
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00047C0 (memset.c)
 *     RegisterKernelIdleDomains @ 0x1C00252EC (RegisterKernelIdleDomains.c)
 *     RegisterIdleComplete @ 0x1C0025454 (RegisterIdleComplete.c)
 *     RegisterKernelCStates @ 0x1C0025510 (RegisterKernelCStates.c)
 *     DeregisterKernelIdleDomains @ 0x1C0025790 (DeregisterKernelIdleDomains.c)
 *     RegisterHiddenIdleStates @ 0x1C00355C0 (RegisterHiddenIdleStates.c)
 *     RegisterKernelLpiStates @ 0x1C0035B8C (RegisterKernelLpiStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C0035F90 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C00362FC (RegisterKernelPepIdleStatesV2.c)
 */

__int64 __fastcall RegisterKernelIdleStates(__int64 a1)
{
  void *v1; // r14
  _DWORD *v2; // rsi
  _QWORD *v3; // r15
  char v5; // r12
  __int64 v6; // rax
  int v7; // ebp
  _DWORD *PoolWithTag; // rax
  PVOID v9; // rax
  NTSTATUS ProcessorNumberFromIndex; // ebx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  int *v17; // rax
  __int64 v18; // rax
  unsigned __int16 v19; // r9
  __int64 v20; // r10
  unsigned int i; // r11d
  __int64 v22; // r8
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r9
  unsigned int v26; // eax
  unsigned int v27; // eax
  void *v28; // rcx
  void *v29; // rcx
  __int64 v30; // [rsp+28h] [rbp-20h]

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 80) )
    return (unsigned int)RegisterHiddenIdleStates();
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001C418,
    0LL);
  v5 = 0;
  if ( !*(_BYTE *)(a1 + 704) )
  {
    if ( qword_1C001C558 )
      qword_1C001C558(a1);
    *(_BYTE *)(a1 + 704) = 1;
    v5 = 1;
  }
  DeregisterKernelIdleDomains(a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001C418);
  v6 = *(_QWORD *)(a1 + 272);
  if ( (v6 & 0x200000200LL) != 0 )
  {
    v17 = *(int **)(a1 + 1136);
LABEL_37:
    if ( !v17 )
      return (unsigned int)-1073741823;
    v7 = *v17;
LABEL_39:
    if ( v7 )
      goto LABEL_11;
    return (unsigned int)-1073741823;
  }
  if ( (v6 & 0x100000100LL) != 0 )
  {
    v17 = *(int **)(a1 + 1128);
    goto LABEL_37;
  }
  if ( (v6 & 0xE0000000000LL) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 528);
    if ( !v18 )
      return (unsigned int)-1073741823;
    v7 = *(_DWORD *)(v18 + 16);
    goto LABEL_39;
  }
  if ( (v6 & 0x7F077) == 0 )
  {
    ProcessorNumberFromIndex = -1073741637;
    goto LABEL_29;
  }
  v7 = 3;
LABEL_11:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(88 * v7 + 64), 0x72637250u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, (unsigned int)(88 * v7 + 64));
  v9 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(32 * v7 + 120), 0x72637250u);
  v1 = v9;
  if ( v9 )
  {
    memset(v9, 0, (unsigned int)(32 * v7 + 120));
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 56), (PPROCESSOR_NUMBER)v1 + 1);
    if ( ProcessorNumberFromIndex < 0 )
      goto LABEL_29;
    *((_DWORD *)v1 + 29) = v7;
    *(_DWORD *)v1 = 62;
    *((_QWORD *)v1 + 1) = v2;
    v2[14] = v7;
    *(_QWORD *)v2 = *(_QWORD *)(a1 + 1104);
    v11 = *(_QWORD *)(a1 + 272);
    if ( (v11 & 0x200000200LL) != 0 )
    {
      v12 = RegisterKernelPepIdleStatesV2(a1, v1, v2);
      if ( v12 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v19 = 10;
    }
    else if ( (v11 & 0x100000100LL) != 0 )
    {
      v12 = RegisterKernelPepIdleStates(a1, v1, v2);
      if ( v12 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v19 = 11;
    }
    else if ( (v11 & 0xE0000000000LL) != 0 )
    {
      v12 = RegisterKernelLpiStates(a1, v1, v2);
      if ( v12 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v19 = 12;
    }
    else
    {
      if ( (v11 & 0x7F077) == 0 )
        goto LABEL_19;
      v12 = RegisterKernelCStates(a1, v1, v2);
      if ( v12 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v19 = 13;
    }
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v19,
      (__int64)&WPP_20b386df1d3035ae741743b1c4714e82_Traceguids,
      v12);
LABEL_19:
    v13 = *(_QWORD *)(a1 + 272);
    if ( (v13 & 0x300) != 0 )
    {
      v20 = 0LL;
      for ( i = 1; i <= 3; ++i )
      {
        v22 = 0LL;
        v23 = 0;
        if ( *((_DWORD *)v1 + 29) )
        {
          do
          {
            v24 = 22LL * v23;
            v25 = *(_QWORD *)&v2[v24 + 16];
            if ( v25 )
            {
              v26 = *(unsigned __int8 *)(v25 + 12);
              if ( v26 > 3 )
                v26 = 3;
              if ( v26 == i && (!v22 || *(_DWORD *)(v25 + 16) < *(_DWORD *)(v22 + 16)) )
              {
                v22 = *(_QWORD *)&v2[v24 + 16];
                *((_BYTE *)v2 + v20 + 21) = v23;
              }
            }
            ++v23;
          }
          while ( v23 < *((_DWORD *)v1 + 29) );
          if ( v22 )
            v20 = (unsigned int)(v20 + 1);
        }
      }
      *((_BYTE *)v2 + 20) = v20;
      v13 = *(_QWORD *)(a1 + 272);
    }
    if ( (v13 & 0x7F377) == 0 )
    {
      v27 = *((_DWORD *)v1 + 29);
      *((_BYTE *)v2 + 21) = 0;
      if ( v27 > 2 )
        LOBYTE(v27) = 2;
      *((_BYTE *)v2 + 20) = v27;
      if ( (_BYTE)v27 == 2 )
        *((_BYTE *)v2 + 22) = *((_BYTE *)v1 + 116) - 1;
      goto LABEL_22;
    }
    if ( *((_BYTE *)v2 + 20) )
    {
LABEL_22:
      DisplayKernelIdleStates(v1);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C001C418,
        0LL);
      if ( (*(_QWORD *)(a1 + 272) & 0x100300000300LL) != 0 && *(_QWORD *)(a1 + 696) )
        *((_BYTE *)v1 + 17) = 1;
      v14 = ((__int64 (__fastcall *)(void *))qword_1C001C648)(v1);
      ProcessorNumberFromIndex = v14;
      if ( v14 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v30) = v14;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0xEu,
            (__int64)&WPP_20b386df1d3035ae741743b1c4714e82_Traceguids,
            v30);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C001C418);
      }
      else
      {
        v3 = *(_QWORD **)(a1 + 696);
        *(_QWORD *)(a1 + 696) = v2;
        if ( v5 )
          RegisterIdleComplete(a1);
        v2 = 0LL;
        if ( (*(_DWORD *)(a1 + 272) & 0x7F070LL) != 0 )
        {
          v15 = RegisterKernelIdleDomains(a1);
          if ( v15 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v30) = v15;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0xFu,
              (__int64)&WPP_20b386df1d3035ae741743b1c4714e82_Traceguids,
              v30);
          }
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C001C418);
        ProcessorNumberFromIndex = 0;
      }
      goto LABEL_29;
    }
    ProcessorNumberFromIndex = -1073741823;
LABEL_29:
    if ( v1 )
      ExFreePoolWithTag(v1, 0x72637250u);
    goto LABEL_31;
  }
  ProcessorNumberFromIndex = -1073741670;
LABEL_31:
  if ( v2 )
  {
    v28 = (void *)*((_QWORD *)v2 + 6);
    if ( v28 )
      ExFreePoolWithTag(v28, 0x72637250u);
    ExFreePoolWithTag(v2, 0x72637250u);
  }
  if ( v3 )
  {
    v29 = (void *)v3[6];
    if ( v29 )
      ExFreePoolWithTag(v29, 0x72637250u);
    ExFreePoolWithTag(v3, 0x72637250u);
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
