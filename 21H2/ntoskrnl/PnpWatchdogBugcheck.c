/*
 * XREFs of PnpWatchdogBugcheck @ 0x14050EDB0
 * Callers:
 *     <none>
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     PnpWatchdogExtractTriageInformation @ 0x14050F180 (PnpWatchdogExtractTriageInformation.c)
 */

void __fastcall __noreturn PnpWatchdogBugcheck(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rsi
  ULONG_PTR v4; // rbx
  ULONG_PTR v5; // rdx
  __int64 v6; // rcx
  _WORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  ULONG_PTR v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // rax
  ULONG_PTR BugCheckParameter2[10]; // [rsp+30h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+B0h] [rbp+30h] BYREF
  ULONG_PTR v27; // [rsp+B8h] [rbp+38h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+C0h] [rbp+40h] BYREF

  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  BugCheckParameter2[0] = 0x1504E5057LL;
  v2 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)a1;
  v27 = 0LL;
  BugCheckParameter1 = 0LL;
  BugCheckParameter2[2] = PnpDeviceEventThread;
  BugCheckParameter2[3] = PnpDeviceActionThread[0];
  BugCheckParameter2[4] = PnpDelayedRemoveWorkerThread;
  BugCheckParameter2[5] = (ULONG_PTR)&PnpDeviceCompletionQueue;
  BugCheckParameter2[6] = ExWorkerQueue;
  BugCheckParameter2[1] = *(unsigned int *)(a1 + 16);
  BugCheckParameter3 = 0LL;
  v3 = v2 / 0x2710;
  memset(&BugCheckParameter2[7], 0, 24);
  PnpWatchdogExtractTriageInformation(
    a1,
    (unsigned int)&v27,
    (unsigned int)&BugCheckParameter3,
    (unsigned int)&BugCheckParameter2[8],
    (__int64)&BugCheckParameter2[9]);
  v4 = v27;
  BugCheckParameter2[7] = v27;
  if ( BugCheckParameter2[8] )
  {
    IoAddTriageDumpDataBlock(BugCheckParameter2[8], (PVOID)*(unsigned __int16 *)(BugCheckParameter2[8] + 2));
    v5 = BugCheckParameter2[8];
    v6 = *(_QWORD *)(BugCheckParameter2[8] + 8);
    if ( v6 )
    {
      IoAddTriageDumpDataBlock(v6, (PVOID)(unsigned int)*(__int16 *)(v6 + 2));
      v5 = BugCheckParameter2[8];
      v7 = (_WORD *)(*(_QWORD *)(BugCheckParameter2[8] + 8) + 56LL);
      if ( *v7 )
      {
        IoAddTriageDumpDataBlock((ULONG)v7, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[8] + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2[8] + 8) + 56LL));
        v5 = BugCheckParameter2[8];
      }
    }
    if ( v5 )
      v8 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
    else
      v8 = 0LL;
    if ( v8 )
    {
      if ( v5 )
        v9 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
      else
        v9 = 0LL;
      if ( v5 )
        v10 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
      else
        LODWORD(v10) = 0;
      IoAddTriageDumpDataBlock(v10, (PVOID)0x310);
      if ( *(_WORD *)(v9 + 40) )
      {
        IoAddTriageDumpDataBlock(v9 + 40, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v9 + 48), (PVOID)*(unsigned __int16 *)(v9 + 40));
      }
      v11 = BugCheckParameter2[8];
      if ( BugCheckParameter2[8] )
        v12 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[8] + 312) + 40LL);
      else
        v12 = 0LL;
      if ( *(_WORD *)(v12 + 56) )
      {
        if ( BugCheckParameter2[8] )
          v13 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[8] + 312) + 40LL);
        else
          LODWORD(v13) = 0;
        IoAddTriageDumpDataBlock(v13 + 56, (PVOID)2);
        if ( BugCheckParameter2[8] )
          v14 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[8] + 312) + 40LL);
        else
          v14 = 0LL;
        if ( BugCheckParameter2[8] )
          v15 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[8] + 312) + 40LL);
        else
          v15 = 0LL;
        IoAddTriageDumpDataBlock(*(_QWORD *)(v15 + 64), (PVOID)*(unsigned __int16 *)(v14 + 56));
        v11 = BugCheckParameter2[8];
      }
      if ( v11 )
        v16 = *(_QWORD *)(*(_QWORD *)(v11 + 312) + 40LL);
      else
        v16 = 0LL;
      if ( *(_QWORD *)(v16 + 16) )
      {
        v17 = v11 ? *(_QWORD *)(*(_QWORD *)(v11 + 312) + 40LL) : 0LL;
        if ( *(_WORD *)(*(_QWORD *)(v17 + 16) + 56LL) )
        {
          if ( v11 )
            v18 = *(_QWORD *)(*(_QWORD *)(v11 + 312) + 40LL);
          else
            v18 = 0LL;
          IoAddTriageDumpDataBlock(*(_QWORD *)(v18 + 16) + 56, (PVOID)2);
          if ( BugCheckParameter2[8] )
            v19 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[8] + 312) + 40LL);
          else
            v19 = 0LL;
          if ( BugCheckParameter2[8] )
            v20 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[8] + 312) + 40LL);
          else
            v20 = 0LL;
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v20 + 16) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v19 + 16) + 56LL));
        }
      }
    }
  }
  if ( BugCheckParameter2[9] )
  {
    v21 = *(_QWORD *)(BugCheckParameter2[9] + 48) + 24LL;
  }
  else
  {
    if ( !v4 )
      goto LABEL_67;
    v21 = v4 + 56;
  }
  if ( v21 )
  {
    v22 = *(_QWORD **)(v21 + 8);
    if ( v22 )
    {
      v23 = *(unsigned __int16 *)(v21 + 2);
      if ( (_WORD)v23 )
      {
        if ( v23 < 8 )
          memmove(&BugCheckParameter1, v22, *(unsigned __int16 *)(v21 + 2));
        else
          BugCheckParameter1 = *v22;
      }
    }
    if ( v4 )
    {
      IoAddTriageDumpDataBlock(v4, (PVOID)0x310);
      if ( *(_WORD *)(v4 + 40) )
      {
        IoAddTriageDumpDataBlock(v4 + 40, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v4 + 48), (PVOID)*(unsigned __int16 *)(v4 + 40));
      }
      if ( *(_WORD *)(v4 + 56) )
      {
        IoAddTriageDumpDataBlock(v4 + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v4 + 64), (PVOID)*(unsigned __int16 *)(v4 + 56));
      }
      v24 = *(_QWORD *)(v4 + 16);
      if ( v24 )
      {
        if ( *(_WORD *)(v24 + 56) )
        {
          IoAddTriageDumpDataBlock(v24 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v4 + 16) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v4 + 16) + 56LL));
        }
      }
    }
  }
LABEL_67:
  KeBugCheckEx(0x1D5u, BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, (unsigned int)v3);
}
