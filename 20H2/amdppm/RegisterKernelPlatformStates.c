/*
 * XREFs of RegisterKernelPlatformStates @ 0x1C0030FB4
 * Callers:
 *     RegisterIdleComplete @ 0x1C002F398 (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     HviIsAnyHypervisorPresent @ 0x1C000E938 (HviIsAnyHypervisorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000EDC0 (memset.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C001DC9C (ProcLibTracePlatformIdleStates.c)
 *     ValidatePlatformIdleState @ 0x1C002C530 (ValidatePlatformIdleState.c)
 *     PepQueryName @ 0x1C003398C (PepQueryName.c)
 */

__int64 __fastcall RegisterKernelPlatformStates(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbp
  int v3; // r13d
  int ProcessorNumberFromIndex; // ebx
  unsigned int v5; // r15d
  char *PoolWithTag; // rax
  char *v7; // rdi
  SIZE_T v8; // rbx
  _DWORD *v9; // rsi
  __int64 v10; // r12
  char *v11; // rbp
  int v12; // ecx
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int16 v16; // r9
  unsigned __int8 v17; // dl
  unsigned int v18; // r8d
  bool IsAnyHypervisorPresent; // al
  void *v20; // rcx
  PVOID *v21; // rsi
  __int64 v22; // rbp

  v1 = (unsigned int)dword_1C0013994;
  v2 = a1;
  v3 = dword_1C00133F4;
  if ( dword_1C0013994 )
  {
    v5 = (48 * dword_1C0013994 + 59) & 0xFFFFFFFC;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v5 + 8 * dword_1C0013994 * dword_1C00133F4, 0x72637250u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v5 + 8 * (_DWORD)v1 * v3);
      v8 = (unsigned int)(16 * v3 + 40);
      v9 = ExAllocatePoolWithTag(PagedPool, v8, 0x72637250u);
      if ( v9 )
      {
        v10 = 0LL;
        while ( (unsigned int)v10 < (unsigned int)v1 )
        {
          memset(v9, 0, v8);
          *v9 = v10;
          v9[8] = v3;
          ProcessorNumberFromIndex = ((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD))qword_1C00136B0)(
                                       *(_QWORD *)(v2 + 1104),
                                       v9,
                                       0LL);
          if ( ProcessorNumberFromIndex < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_29;
            v16 = 20;
            v17 = 3;
            v18 = 2;
            goto LABEL_22;
          }
          ProcessorNumberFromIndex = ValidatePlatformIdleState(v9);
          if ( ProcessorNumberFromIndex < 0 )
            goto LABEL_29;
          v11 = &v7[48 * v10];
          PepQueryName(a1, (unsigned int)v10, 27LL, v11 + 80);
          *((_DWORD *)v11 + 16) = v9[5];
          *((_DWORD *)v11 + 17) = v9[6];
          v11[61] = *((_BYTE *)v9 + 16);
          if ( *((_QWORD *)v9 + 1) )
          {
            v11[60] = 1;
            ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                         *(_DWORD *)(*((_QWORD *)v9 + 1) + 56LL),
                                         (PPROCESSOR_NUMBER)v11 + 14);
            if ( ProcessorNumberFromIndex < 0 )
              goto LABEL_29;
          }
          v12 = v9[7];
          v13 = 0LL;
          v14 = v5;
          v5 += 8 * v3;
          *((_DWORD *)v11 + 18) = v12;
          *((_QWORD *)v11 + 12) = &v7[v14];
          if ( v12 )
          {
            do
            {
              v15 = *((_QWORD *)v11 + 12);
              *(_DWORD *)(v15 + 8 * v13) = *(_DWORD *)(*(_QWORD *)&v9[4 * (unsigned int)v13 + 10] + 56LL);
              *(_BYTE *)(v15 + 8 * v13 + 4) = v9[4 * (unsigned int)v13 + 12];
              *(_BYTE *)(v15 + 8 * v13 + 6) = BYTE2(v9[4 * (unsigned int)v13 + 12]);
              *(_BYTE *)(v15 + 8 * v13 + 5) = BYTE1(v9[4 * (unsigned int)v13 + 12]);
              v13 = (unsigned int)(v13 + 1);
            }
            while ( (unsigned int)v13 < *((_DWORD *)v11 + 18) );
          }
          v2 = a1;
          v10 = (unsigned int)(v10 + 1);
          v8 = (unsigned int)(16 * v3 + 40);
        }
        *(_DWORD *)v7 = 62;
        *((_DWORD *)v7 + 1) = dword_1C0013994;
        *((_DWORD *)v7 + 2) = dword_1C0013994;
        *((_QWORD *)v7 + 5) = PepQueryPlatformStateResidency;
        IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
        v20 = PepIdleTest;
        if ( IsAnyHypervisorPresent )
          v20 = PepIdleVmTest;
        *((_QWORD *)v7 + 2) = v20;
        *((_QWORD *)v7 + 3) = PepIdlePreExecute;
        *((_QWORD *)v7 + 4) = PepIdleComplete;
        ProcessorNumberFromIndex = ((__int64 (__fastcall *)(char *))qword_1C0013640)(v7);
        if ( ProcessorNumberFromIndex >= 0 )
        {
          Src = v7;
          v7 = 0LL;
          ProcLibTracePlatformIdleStates(0);
          ProcessorNumberFromIndex = 0;
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = 21;
          v17 = 2;
          v18 = 3;
LABEL_22:
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v17,
            v18,
            v16,
            (__int64)&WPP_cab160ae24df3aaa3ae0e3c64f54f2b2_Traceguids,
            ProcessorNumberFromIndex);
        }
LABEL_29:
        ExFreePoolWithTag(v9, 0x72637250u);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            4u,
            0x13u,
            (__int64)&WPP_cab160ae24df3aaa3ae0e3c64f54f2b2_Traceguids);
        ProcessorNumberFromIndex = -1073741670;
      }
      if ( v7 )
      {
        if ( (_DWORD)v1 )
        {
          v21 = (PVOID *)(v7 + 88);
          v22 = v1;
          do
          {
            if ( *v21 )
              ExFreePoolWithTag(*v21, 0x72637250u);
            v21 += 6;
            --v22;
          }
          while ( v22 );
        }
        ExFreePoolWithTag(v7, 0x72637250u);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          4u,
          0x12u,
          (__int64)&WPP_cab160ae24df3aaa3ae0e3c64f54f2b2_Traceguids);
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
