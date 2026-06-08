/*
 * XREFs of RegisterKernelPlatformStates @ 0x1C0031DD4
 * Callers:
 *     RegisterIdleComplete @ 0x1C00301C0 (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 *     HviIsAnyHypervisorPresent @ 0x1C000EA98 (HviIsAnyHypervisorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000EF40 (memset.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C001EC9C (ProcLibTracePlatformIdleStates.c)
 *     ValidatePlatformIdleState @ 0x1C002D288 (ValidatePlatformIdleState.c)
 *     PepQueryName @ 0x1C0034A2C (PepQueryName.c)
 */

__int64 __fastcall RegisterKernelPlatformStates(__int64 a1)
{
  int v1; // esi
  __int64 v2; // r14
  int ProcessorNumberFromIndex; // ebx
  unsigned int v4; // r12d
  char *PoolWithTag; // rax
  char *v6; // rdi
  SIZE_T v7; // rbx
  _DWORD *v8; // r15
  unsigned int v9; // r13d
  char *v10; // rbp
  int v11; // ecx
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rdx
  bool IsAnyHypervisorPresent; // al
  void *v16; // rcx
  unsigned __int16 v17; // r9
  unsigned __int8 v18; // dl
  unsigned int v19; // r8d
  PVOID *v20; // rsi
  __int64 v21; // rbp

  v1 = dword_1C00143F4;
  if ( byte_1C0014C10 && dword_1C0014C0C > (unsigned int)dword_1C00143F4 )
    v1 = dword_1C0014C0C;
  v2 = (unsigned int)dword_1C001499C;
  if ( !dword_1C001499C )
    return 0;
  v4 = (48 * dword_1C001499C + 59) & 0xFFFFFFFC;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v4 + 8 * dword_1C001499C * v1, 0x72637250u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0x12u,
        (__int64)&WPP_b2467729b80b3cd916f8b89f5820164f_Traceguids);
    return (unsigned int)-1073741670;
  }
  memset(PoolWithTag, 0, v4 + 8 * (_DWORD)v2 * v1);
  v7 = (unsigned int)(16 * v1 + 40);
  v8 = ExAllocatePoolWithTag(PagedPool, v7, 0x72637250u);
  if ( !v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0x13u,
        (__int64)&WPP_b2467729b80b3cd916f8b89f5820164f_Traceguids);
    ProcessorNumberFromIndex = -1073741670;
    goto LABEL_33;
  }
  v9 = 0;
  if ( (_DWORD)v2 )
  {
    v10 = v6 + 64;
    while ( 1 )
    {
      memset(v8, 0, v7);
      *v8 = v9;
      v8[8] = v1;
      ProcessorNumberFromIndex = ((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD))qword_1C00146B0)(
                                   *(_QWORD *)(a1 + 1104),
                                   v8,
                                   0LL);
      if ( ProcessorNumberFromIndex < 0 )
        break;
      ProcessorNumberFromIndex = ValidatePlatformIdleState(v8);
      if ( ProcessorNumberFromIndex < 0 )
        goto LABEL_32;
      PepQueryName(a1, v9, 27LL, v10 + 16);
      *(_DWORD *)v10 = v8[5];
      *((_DWORD *)v10 + 1) = v8[6];
      *(v10 - 3) = *((_BYTE *)v8 + 16);
      if ( *((_QWORD *)v8 + 1) )
      {
        *(v10 - 4) = 1;
        ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                     *(_DWORD *)(*((_QWORD *)v8 + 1) + 56LL),
                                     (PPROCESSOR_NUMBER)v10 - 2);
        if ( ProcessorNumberFromIndex < 0 )
          goto LABEL_32;
      }
      v11 = v8[7];
      v12 = 0LL;
      v13 = v4;
      v4 += 8 * v1;
      *((_DWORD *)v10 + 2) = v11;
      *((_QWORD *)v10 + 4) = &v6[v13];
      if ( v11 )
      {
        do
        {
          v14 = *((_QWORD *)v10 + 4);
          *(_DWORD *)(v14 + 8 * v12) = *(_DWORD *)(*(_QWORD *)&v8[4 * (unsigned int)v12 + 10] + 56LL);
          *(_BYTE *)(v14 + 8 * v12 + 4) = v8[4 * (unsigned int)v12 + 12];
          *(_BYTE *)(v14 + 8 * v12 + 6) = BYTE2(v8[4 * (unsigned int)v12 + 12]);
          *(_BYTE *)(v14 + 8 * v12 + 5) = BYTE1(v8[4 * (unsigned int)v12 + 12]);
          v12 = (unsigned int)(v12 + 1);
        }
        while ( (unsigned int)v12 < *((_DWORD *)v10 + 2) );
      }
      v7 = (unsigned int)(16 * v1 + 40);
      ++v9;
      v10 += 48;
      if ( v9 >= (unsigned int)v2 )
        goto LABEL_23;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_32;
    v17 = 20;
    v18 = 3;
    v19 = 2;
    goto LABEL_30;
  }
LABEL_23:
  *(_DWORD *)v6 = 62;
  *((_DWORD *)v6 + 1) = dword_1C001499C;
  *((_DWORD *)v6 + 2) = dword_1C001499C;
  *((_QWORD *)v6 + 5) = PepQueryPlatformStateResidency;
  IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
  v16 = PepIdleTest;
  if ( IsAnyHypervisorPresent )
    v16 = PepIdleVmTest;
  *((_QWORD *)v6 + 2) = v16;
  *((_QWORD *)v6 + 3) = PepIdlePreExecute;
  *((_QWORD *)v6 + 4) = PepIdleComplete;
  ProcessorNumberFromIndex = ((__int64 (__fastcall *)(char *))qword_1C0014640)(v6);
  if ( ProcessorNumberFromIndex >= 0 )
  {
    Src = v6;
    v6 = 0LL;
    ProcLibTracePlatformIdleStates(0);
    ProcessorNumberFromIndex = 0;
    goto LABEL_32;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = 21;
    v18 = 2;
    v19 = 3;
LABEL_30:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      v19,
      v17,
      (__int64)&WPP_b2467729b80b3cd916f8b89f5820164f_Traceguids,
      ProcessorNumberFromIndex);
  }
LABEL_32:
  ExFreePoolWithTag(v8, 0x72637250u);
LABEL_33:
  if ( v6 )
  {
    if ( (_DWORD)v2 )
    {
      v20 = (PVOID *)(v6 + 88);
      v21 = v2;
      do
      {
        if ( *v20 )
          ExFreePoolWithTag(*v20, 0x72637250u);
        v20 += 6;
        --v21;
      }
      while ( v21 );
    }
    ExFreePoolWithTag(v6, 0x72637250u);
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
