/*
 * XREFs of RtlLookupFunctionEntry @ 0x1402E9520
 * Callers:
 *     RtlRaiseException @ 0x1402E6830 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x1402E6C20 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402E70E0 (RtlUnwindEx.c)
 *     MmWriteSystemImageTracepoint @ 0x14053A228 (MmWriteSystemImageTracepoint.c)
 *     RtlpSameFunction @ 0x1405811D0 (RtlpSameFunction.c)
 *     KiTpBuildExcludedKernelTracepointRangeList @ 0x1408B9474 (KiTpBuildExcludedKernelTracepointRangeList.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     KiInitDynamicTraceSupport @ 0x140A45B30 (KiInitDynamicTraceSupport.c)
 *     RtlInitializeHistoryTable @ 0x140A54074 (RtlInitializeHistoryTable.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402E92F0 (RtlpxLookupFunctionTable.c)
 *     RtlpConvertFunctionEntry @ 0x1402E9860 (RtlpConvertFunctionEntry.c)
 */

PRUNTIME_FUNCTION __cdecl RtlLookupFunctionEntry(
        DWORD64 ControlPc,
        PDWORD64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  unsigned int GlobalHint; // edx
  unsigned int v7; // ecx
  unsigned int *v8; // r10
  unsigned __int64 v9; // r9
  PRUNTIME_FUNCTION result; // rax
  DWORD LocalHint; // edx
  DWORD v12; // r9d
  ULONG_PTR v13; // r8
  PRUNTIME_FUNCTION FunctionEntry; // rcx
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v15; // rbp
  __int64 Count; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned int *v19; // rsi
  __int64 v20; // r8
  unsigned __int128 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r11
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v25; // r10
  int v26; // r8d
  int i; // r9d
  int v28; // eax
  unsigned __int64 v29; // rdx
  __int128 v30; // [rsp+20h] [rbp-28h] BYREF
  __int64 v31; // [rsp+30h] [rbp-18h]

  if ( !HistoryTable )
    goto LABEL_29;
  if ( HistoryTable->Once )
  {
    HistoryTable->Once = 0;
    result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_140E01945 + 8];
    if ( result )
    {
      v29 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_140E01945 + 6];
      if ( ControlPc >= v29 + result->BeginAddress && ControlPc < v29 + result->EndAddress )
      {
        *ImageBase = v29;
        return result;
      }
    }
  }
  if ( !HistoryTable->Search )
    goto LABEL_29;
  if ( ControlPc >= qword_140E01950
    || ControlPc < qword_140E01948
    || (GlobalHint = HistoryTable->GlobalHint, v7 = GlobalHint, GlobalHint >= RtlpUnwindHistoryTable[0]) )
  {
LABEL_11:
    if ( ControlPc >= HistoryTable->LowAddress && ControlPc < HistoryTable->HighAddress )
    {
      LocalHint = HistoryTable->LocalHint;
      v12 = LocalHint;
      if ( LocalHint < HistoryTable->Count )
      {
        while ( 1 )
        {
          v13 = HistoryTable->Entry[v12].ImageBase;
          FunctionEntry = HistoryTable->Entry[v12].FunctionEntry;
          if ( ControlPc >= v13 + FunctionEntry->BeginAddress && ControlPc < v13 + FunctionEntry->EndAddress )
            break;
          if ( ++v12 >= HistoryTable->Count )
            goto LABEL_29;
        }
        HistoryTable->LocalHint = LocalHint + 1;
        *ImageBase = v13;
        return (PRUNTIME_FUNCTION)RtlpConvertFunctionEntry(FunctionEntry, v13);
      }
    }
LABEL_29:
    v31 = 0LL;
    v30 = 0LL;
    if ( ControlPc < *(&xmmword_140E00020 + 1) || ControlPc >= *(&xmmword_140E00020 + 1) + (unsigned int)qword_140E00030 )
    {
      v19 = (unsigned int *)RtlpxLookupFunctionTable(ControlPc, (__int64)&v30);
    }
    else
    {
      v19 = (unsigned int *)xmmword_140E00020;
      v30 = *(_OWORD *)&xmmword_140E00020;
      v31 = qword_140E00030;
    }
    v15 = 0LL;
    if ( v19 )
    {
      v20 = *((_QWORD *)&v30 + 1);
      v21 = HIDWORD(v31) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      *ImageBase = *((_QWORD *)&v30 + 1);
      v22 = *((_QWORD *)&v21 + 1) >> 3;
      if ( (_DWORD)v22 )
      {
        v23 = ControlPc - v20;
        v24 = v19[3 * (unsigned int)(v22 - 1)];
        v25 = (_IMAGE_RUNTIME_FUNCTION_ENTRY *)&v19[3 * (unsigned int)(v22 - 1)];
        if ( v23 < v24 )
        {
          v26 = v22 - 2;
          for ( i = 0; v26 >= i; LODWORD(v24) = v25->BeginAddress )
          {
            v28 = (i + v26) >> 1;
            v25 = (_IMAGE_RUNTIME_FUNCTION_ENTRY *)&v19[3 * v28];
            if ( v23 < v25->BeginAddress )
            {
              v26 = v28 - 1;
            }
            else
            {
              LODWORD(v24) = v25->BeginAddress;
              if ( v23 < v25[1].BeginAddress )
                break;
              i = v28 + 1;
            }
          }
        }
        if ( v23 >= (unsigned int)v24 && v23 < v25->EndAddress )
          v15 = v25;
      }
      if ( v15 )
      {
        if ( HistoryTable )
        {
          if ( !HistoryTable->Search )
          {
            Count = HistoryTable->Count;
            if ( (unsigned int)Count < 0xC )
            {
              HistoryTable->Count = Count + 1;
              HistoryTable->Entry[Count].ImageBase = *ImageBase;
              HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v15;
              v17 = *ImageBase + v15->BeginAddress;
              v18 = *ImageBase + v15->EndAddress;
              if ( v17 < HistoryTable->LowAddress )
                HistoryTable->LowAddress = v17;
              if ( v18 > HistoryTable->HighAddress )
                HistoryTable->HighAddress = v18;
            }
          }
        }
      }
    }
    return (PRUNTIME_FUNCTION)RtlpConvertFunctionEntry(v15, *ImageBase);
  }
  while ( 1 )
  {
    v8 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v7 + 8];
    v9 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * v7 + 6];
    if ( ControlPc >= v9 + *v8 && ControlPc < v9 + v8[1] )
      break;
    if ( ++v7 >= RtlpUnwindHistoryTable[0] )
      goto LABEL_11;
  }
  result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * v7 + 8];
  HistoryTable->GlobalHint = GlobalHint + 1;
  *ImageBase = v9;
  return result;
}
