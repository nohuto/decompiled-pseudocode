/*
 * XREFs of IopUpdateMinidumpContext @ 0x140504764
 * Callers:
 *     IoWriteCrashDump @ 0x140502C50 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x140504B8C (IopWriteCapsuleTriageDumpToFirmware.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14050BCF0 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KiIsAddressRangeValid @ 0x1403CA40C (KiIsAddressRangeValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x1405033FC (IopAddBugcheckTriageDataFromParameters.c)
 *     IopGetMaxValidMemorySize @ 0x1405040CC (IopGetMaxValidMemorySize.c)
 */

char __fastcall IopUpdateMinidumpContext(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _KTHREAD *a7)
{
  struct _KPRCB *CurrentPrcb; // rsi
  char v8; // r12
  __int64 v10; // r14
  int v11; // ebp
  __int64 v12; // rdi
  char *v13; // rdx
  unsigned __int64 v14; // rbx
  unsigned int v15; // edx
  unsigned int MaxValidMemorySize; // eax
  __int64 v17; // r15
  char *IsrStack; // rcx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  char *v21; // rsi
  unsigned __int64 *v22; // rbp
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rbp
  unsigned int v25; // esi
  unsigned int v26; // eax
  __int64 Prcb; // rbp
  _QWORD *v28; // r14
  _QWORD *i; // rsi
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned int v33; // r8d
  PVOID *j; // rbx
  _OWORD *v35; // rax
  __int64 v36; // rcx
  __int128 v37; // xmm1

  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  v10 = a2;
  v11 = a1;
  if ( a1 != 126 )
  {
    if ( a1 == 127 )
    {
      v12 = (__int64)a6;
      if ( a2 == 8 )
      {
        a6[20] = a3[43];
        a6[31] = a3[45];
        a6[19] = a3[48];
      }
      goto LABEL_5;
    }
LABEL_8:
    v12 = (__int64)a6;
    goto LABEL_9;
  }
  if ( !a5 )
    goto LABEL_8;
  v12 = a5;
LABEL_5:
  v8 = 1;
LABEL_9:
  v13 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
  v14 = *(_QWORD *)(v12 + 152);
  if ( (unsigned __int64)&v13[-(unsigned int)KeKernelStackSize] <= v14 && v14 < (unsigned __int64)v13 )
  {
    if ( (unsigned __int64)&v13[-v14] >= 0x7FFF )
      v15 = 0x7FFF;
    else
      v15 = (_DWORD)v13 - v14;
    MaxValidMemorySize = IopGetMaxValidMemorySize(*(_QWORD *)(v12 + 152), v15);
    IoAddTriageDumpDataBlock(v14, (PVOID)MaxValidMemorySize);
  }
  v17 = 2LL;
  if ( CurrentPrcb->DebuggerSavedIRQL > 2u )
  {
    IsrStack = (char *)KeGetPcr()->Prcb.IsrStack;
    if ( (unsigned __int64)(IsrStack - 24576) <= v14 && v14 < (unsigned __int64)IsrStack )
    {
      if ( (unsigned __int64)&IsrStack[-v14] >= 0x7FFF )
        v19 = 0x7FFF;
      else
        v19 = (_DWORD)IsrStack - v14;
      v20 = IopGetMaxValidMemorySize(v14, v19);
      IoAddTriageDumpDataBlock(v14, (PVOID)v20);
    }
  }
  if ( v11 == 307 )
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && a7 != CurrentPrcb->IdleThread )
    {
      v21 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
      v22 = (unsigned __int64 *)((char *)KeGetPcr()->Prcb.IsrStack - 8);
      v23 = (unsigned __int64)&v21[-(unsigned int)KeKernelStackSize];
      if ( KiIsAddressRangeValid((__int64)v22, 8LL) )
      {
        v24 = *v22;
        if ( KiIsAddressRangeValid(v24, 8LL) )
        {
          if ( v23 <= v24 && v24 < (unsigned __int64)v21 )
            v23 = v24;
        }
      }
      if ( (unsigned __int64)&v21[-v23] >= 0x7FFF )
        v25 = 0x7FFF;
      else
        v25 = (_DWORD)v21 - v23;
      v26 = IopGetMaxValidMemorySize(v23, v25);
      IoAddTriageDumpDataBlock(v23, (PVOID)v26);
    }
    Prcb = KeGetPrcb(a7->NextProcessor);
    v28 = (_QWORD *)(Prcb + 12480);
    do
    {
      for ( i = (_QWORD *)*v28; i; i = (_QWORD *)*i )
      {
        IoAddTriageDumpDataBlock((_DWORD)i - 8, (PVOID)0x40);
        v30 = i[6];
        if ( v30 != 1 )
          IoAddTriageDumpDataBlock(v30, (PVOID)0x60);
      }
      v28 += 5;
      --v17;
    }
    while ( v17 );
    v31 = *(_QWORD *)(Prcb + 33960);
    if ( v31 && v31 != *(_QWORD *)(Prcb + 33968) )
    {
      v32 = (unsigned int)(8 * dword_140CFB32C);
      v33 = *(_DWORD *)(Prcb + 33968) - v31;
      if ( v33 <= (unsigned int)v32 )
        v32 = v33;
      IoAddTriageDumpDataBlock(v31, (PVOID)v32);
    }
    v11 = a1;
    v10 = a2;
  }
  for ( j = (PVOID *)PopThermal; j != &PopThermal; j = (PVOID *)*j )
    IoAddTriageDumpDataBlock((ULONG)j, (PVOID)0x420);
  LOBYTE(v35) = IopAddBugcheckTriageDataFromParameters(v11, v10, (__int64)a3, a4, a5);
  if ( v8 )
  {
    LOBYTE(v35) = CrashdmpDumpBlock;
    if ( CrashdmpDumpBlock )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 24) |= 0x10000000u;
      v36 = 9LL;
      v35 = (_OWORD *)(CrashdmpDumpBlock + 64);
      do
      {
        *v35 = *(_OWORD *)v12;
        v35[1] = *(_OWORD *)(v12 + 16);
        v35[2] = *(_OWORD *)(v12 + 32);
        v35[3] = *(_OWORD *)(v12 + 48);
        v35[4] = *(_OWORD *)(v12 + 64);
        v35[5] = *(_OWORD *)(v12 + 80);
        v35[6] = *(_OWORD *)(v12 + 96);
        v35 += 8;
        v37 = *(_OWORD *)(v12 + 112);
        v12 += 128LL;
        *(v35 - 1) = v37;
        --v36;
      }
      while ( v36 );
      *v35 = *(_OWORD *)v12;
      v35[1] = *(_OWORD *)(v12 + 16);
      v35[2] = *(_OWORD *)(v12 + 32);
      v35[3] = *(_OWORD *)(v12 + 48);
      v35[4] = *(_OWORD *)(v12 + 64);
    }
  }
  return (char)v35;
}
