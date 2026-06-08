/*
 * XREFs of RegisterKernelIdleStates @ 0x1C0003B20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     DisplayKernelIdleStates @ 0x1C00040E4 (DisplayKernelIdleStates.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004AC0 (memset.c)
 *     RegisterKernelIdleDomains @ 0x1C002668C (RegisterKernelIdleDomains.c)
 *     RegisterIdleComplete @ 0x1C00267F4 (RegisterIdleComplete.c)
 *     RegisterKernelCStates @ 0x1C00268B0 (RegisterKernelCStates.c)
 *     DeregisterKernelIdleDomains @ 0x1C0026B30 (DeregisterKernelIdleDomains.c)
 *     RegisterKernelLpiStates @ 0x1C0036FCC (RegisterKernelLpiStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C00373D0 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C003773C (RegisterKernelPepIdleStatesV2.c)
 */

__int64 __fastcall RegisterKernelIdleStates(__int64 a1)
{
  struct _PROCESSOR_NUMBER *v1; // r14
  _DWORD *v2; // rsi
  _QWORD *v3; // r15
  NTSTATUS ProcessorNumberFromIndex; // ebx
  char v6; // r12
  __int64 v7; // rax
  int *v8; // rax
  int v9; // ebp
  __int64 v10; // rax
  _DWORD *PoolWithTag; // rax
  struct _PROCESSOR_NUMBER *v12; // rax
  __int64 v13; // rax
  int v14; // eax
  unsigned __int16 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r10
  unsigned int i; // r11d
  __int64 v19; // r8
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r9
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  int v26; // eax
  void *v27; // rcx
  void *v28; // rcx
  __int64 v30; // [rsp+28h] [rbp-20h]

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 80) )
    return (unsigned int)((__int64 (*)(void))qword_1C001C820)();
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001C3E8,
    0LL);
  v6 = 0;
  if ( !*(_BYTE *)(a1 + 704) )
  {
    if ( qword_1C001C528 )
      qword_1C001C528(a1);
    *(_BYTE *)(a1 + 704) = 1;
    v6 = 1;
  }
  DeregisterKernelIdleDomains(a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001C3E8);
  v7 = *(_QWORD *)(a1 + 272);
  if ( (v7 & 0x200000200LL) != 0 )
  {
    v8 = *(int **)(a1 + 1136);
LABEL_9:
    if ( !v8 )
      return (unsigned int)-1073741823;
    v9 = *v8;
    goto LABEL_11;
  }
  if ( (v7 & 0x100000100LL) != 0 )
  {
    v8 = *(int **)(a1 + 1128);
    goto LABEL_9;
  }
  if ( (v7 & 0xE0000000000LL) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 528);
    if ( !v10 )
      return (unsigned int)-1073741823;
    v9 = *(_DWORD *)(v10 + 16);
LABEL_11:
    if ( !v9 )
      return (unsigned int)-1073741823;
    goto LABEL_20;
  }
  if ( (v7 & 0x7F077) == 0 )
  {
    ProcessorNumberFromIndex = -1073741637;
LABEL_79:
    if ( v1 )
      ExFreePoolWithTag(v1, 0x72637250u);
    goto LABEL_81;
  }
  v9 = 3;
LABEL_20:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(88 * v9 + 64), 0x72637250u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, (unsigned int)(88 * v9 + 64));
  v12 = (struct _PROCESSOR_NUMBER *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(32 * v9 + 120), 0x72637250u);
  v1 = v12;
  if ( v12 )
  {
    memset(v12, 0, (unsigned int)(32 * v9 + 120));
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 56), v1 + 1);
    if ( ProcessorNumberFromIndex < 0 )
      goto LABEL_79;
    v1[29] = (struct _PROCESSOR_NUMBER)v9;
    *v1 = (struct _PROCESSOR_NUMBER)62;
    *(_QWORD *)&v1[2].Group = v2;
    v2[14] = v9;
    *(_QWORD *)v2 = *(_QWORD *)(a1 + 1104);
    v13 = *(_QWORD *)(a1 + 272);
    if ( (v13 & 0x200000200LL) != 0 )
    {
      v14 = RegisterKernelPepIdleStatesV2(a1, v1, v2);
      if ( v14 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 10;
LABEL_37:
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          v15,
          (__int64)&WPP_b2467729b80b3cd916f8b89f5820164f_Traceguids,
          v14);
      }
    }
    else if ( (v13 & 0x100000100LL) != 0 )
    {
      v14 = RegisterKernelPepIdleStates(a1, v1, v2);
      if ( v14 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 11;
        goto LABEL_37;
      }
    }
    else if ( (v13 & 0xE0000000000LL) != 0 )
    {
      v14 = RegisterKernelLpiStates(a1, v1, v2);
      if ( v14 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 12;
        goto LABEL_37;
      }
    }
    else if ( (v13 & 0x7F077) != 0 )
    {
      v14 = RegisterKernelCStates(a1, v1, v2);
      if ( v14 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 13;
        goto LABEL_37;
      }
    }
    v16 = *(_QWORD *)(a1 + 272);
    if ( (v16 & 0x300) != 0 )
    {
      v17 = 0LL;
      for ( i = 1; i <= 3; ++i )
      {
        v19 = 0LL;
        v20 = 0;
        if ( v1[29] )
        {
          do
          {
            v21 = 22LL * v20;
            v22 = *(_QWORD *)&v2[v21 + 16];
            if ( v22 )
            {
              v23 = *(unsigned __int8 *)(v22 + 12);
              if ( v23 > 3 )
                v23 = 3;
              if ( v23 == i && (!v19 || *(_DWORD *)(v22 + 16) < *(_DWORD *)(v19 + 16)) )
              {
                v19 = *(_QWORD *)&v2[v21 + 16];
                *((_BYTE *)v2 + v17 + 21) = v20;
              }
            }
            ++v20;
          }
          while ( v20 < *(_DWORD *)&v1[29] );
          if ( v19 )
            v17 = (unsigned int)(v17 + 1);
        }
      }
      *((_BYTE *)v2 + 20) = v17;
      v16 = *(_QWORD *)(a1 + 272);
    }
    if ( (v16 & 0x7F377) != 0 )
    {
      if ( !*((_BYTE *)v2 + 20) )
      {
        ProcessorNumberFromIndex = -1073741823;
        goto LABEL_79;
      }
    }
    else
    {
      v24 = (unsigned int)v1[29];
      *((_BYTE *)v2 + 21) = 0;
      if ( v24 > 2 )
        LOBYTE(v24) = 2;
      *((_BYTE *)v2 + 20) = v24;
      if ( (_BYTE)v24 == 2 )
        *((_BYTE *)v2 + 22) = LOBYTE(v1[29].Group) - 1;
    }
    DisplayKernelIdleStates(v1);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001C3E8,
      0LL);
    if ( (*(_QWORD *)(a1 + 272) & 0x100300000300LL) != 0 && *(_QWORD *)(a1 + 696) )
      HIBYTE(v1[4].Group) = 1;
    v25 = ((__int64 (__fastcall *)(struct _PROCESSOR_NUMBER *))qword_1C001C620)(v1);
    ProcessorNumberFromIndex = v25;
    if ( v25 >= 0 )
    {
      v3 = *(_QWORD **)(a1 + 696);
      *(_QWORD *)(a1 + 696) = v2;
      if ( v6 )
        RegisterIdleComplete(a1);
      v2 = 0LL;
      if ( (*(_DWORD *)(a1 + 272) & 0x7F070LL) != 0 )
      {
        v26 = RegisterKernelIdleDomains(a1);
        if ( v26 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v30) = v26;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0xFu,
            (__int64)&WPP_b2467729b80b3cd916f8b89f5820164f_Traceguids,
            v30);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C001C3E8);
      ProcessorNumberFromIndex = 0;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v30) = v25;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0xEu,
          (__int64)&WPP_b2467729b80b3cd916f8b89f5820164f_Traceguids,
          v30);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C001C3E8);
    }
    goto LABEL_79;
  }
  ProcessorNumberFromIndex = -1073741670;
LABEL_81:
  if ( v2 )
  {
    v27 = (void *)*((_QWORD *)v2 + 6);
    if ( v27 )
      ExFreePoolWithTag(v27, 0x72637250u);
    ExFreePoolWithTag(v2, 0x72637250u);
  }
  if ( v3 )
  {
    v28 = (void *)v3[6];
    if ( v28 )
      ExFreePoolWithTag(v28, 0x72637250u);
    ExFreePoolWithTag(v3, 0x72637250u);
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
