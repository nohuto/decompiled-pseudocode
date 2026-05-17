/*
 * XREFs of RtlLookupFunctionEntry @ 0x180032BE0
 * Callers:
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x180052310 (RtlDispatchException.c)
 *     RtlInitializeHistoryTable @ 0x180079C8C (RtlInitializeHistoryTable.c)
 *     RtlpSameFunction @ 0x18007AFA0 (RtlpSameFunction.c)
 *     _invalid_parameter @ 0x18008C868 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x18008C990 (__report_gsfailure.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x18007CE00 (RtlpLookupDynamicFunctionEntry.c)
 */

PRUNTIME_FUNCTION __stdcall RtlLookupFunctionEntry(
        ULONG64 ControlPc,
        PULONG64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  __int64 v6; // rdi
  __int64 v7; // r8
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v8; // rsi
  unsigned __int128 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r11
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v13; // r10
  int v14; // r8d
  int i; // r9d
  int v16; // eax
  __int64 UnwindInfoAddress; // rax
  PRUNTIME_FUNCTION result; // rax
  DWORD LocalHint; // r10d
  DWORD v20; // edx
  DWORD64 v21; // r8
  PRUNTIME_FUNCTION FunctionEntry; // rcx
  __int64 Count; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  DWORD64 v26; // rdx
  unsigned int GlobalHint; // ecx
  unsigned int v28; // edx
  unsigned int *v29; // r9
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rdx
  __int128 v32; // [rsp+20h] [rbp-28h] BYREF
  __int64 v33; // [rsp+30h] [rbp-18h]

  if ( !HistoryTable )
    goto LABEL_2;
  if ( HistoryTable->Once )
  {
    HistoryTable->Once = 0;
    result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_180181425 + 8];
    if ( result )
    {
      v31 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_180181425 + 6];
      if ( ControlPc >= v31 + result->BeginAddress && ControlPc < v31 + result->EndAddress )
      {
        *ImageBase = v31;
        return result;
      }
    }
  }
  if ( !HistoryTable->Search )
    goto LABEL_2;
  if ( ControlPc < qword_180181428
    || ControlPc >= qword_180181430
    || (GlobalHint = HistoryTable->GlobalHint, v28 = GlobalHint, GlobalHint >= RtlpUnwindHistoryTable[0]) )
  {
LABEL_26:
    if ( ControlPc >= HistoryTable->LowAddress && ControlPc < HistoryTable->HighAddress )
    {
      LocalHint = HistoryTable->LocalHint;
      v20 = LocalHint;
      if ( LocalHint < HistoryTable->Count )
      {
        while ( 1 )
        {
          v21 = HistoryTable->Entry[v20].ImageBase;
          FunctionEntry = HistoryTable->Entry[v20].FunctionEntry;
          if ( ControlPc >= v21 + FunctionEntry->BeginAddress && ControlPc < v21 + FunctionEntry->EndAddress )
            break;
          if ( ++v20 >= HistoryTable->Count )
            goto LABEL_2;
        }
        v26 = HistoryTable->Entry[v20].ImageBase;
        HistoryTable->LocalHint = LocalHint + 1;
        *ImageBase = v21;
        return (PRUNTIME_FUNCTION)RtlpConvertFunctionEntry(FunctionEntry, v26);
      }
    }
LABEL_2:
    if ( ControlPc < *((_QWORD *)&xmmword_180181510 + 1)
      || ControlPc >= *((_QWORD *)&xmmword_180181510 + 1) + (unsigned __int64)(unsigned int)qword_180181520 )
    {
      v6 = RtlpxLookupFunctionTable(ControlPc, &v32);
    }
    else
    {
      v6 = xmmword_180181510;
      v32 = xmmword_180181510;
      v33 = qword_180181520;
    }
    if ( v6 )
    {
      v7 = *((_QWORD *)&v32 + 1);
      v8 = 0LL;
      v9 = HIDWORD(v33) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      *ImageBase = *((_QWORD *)&v32 + 1);
      v10 = *((_QWORD *)&v9 + 1) >> 3;
      if ( (_DWORD)v10 )
      {
        v11 = ControlPc - v7;
        v12 = *(unsigned int *)(v6 + 12LL * (unsigned int)(v10 - 1));
        v13 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v6 + 12LL * (unsigned int)(v10 - 1));
        if ( v11 < v12 )
        {
          v14 = v10 - 2;
          for ( i = 0; v14 >= i; LODWORD(v12) = v13->BeginAddress )
          {
            v16 = (v14 + i) >> 1;
            v13 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v6 + 12LL * v16);
            if ( v11 < v13->BeginAddress )
            {
              v14 = v16 - 1;
            }
            else
            {
              LODWORD(v12) = v13->BeginAddress;
              if ( v11 < v13[1].BeginAddress )
                break;
              i = v16 + 1;
            }
          }
        }
        if ( v11 >= (unsigned int)v12 && v11 < v13->EndAddress )
          v8 = v13;
      }
    }
    else
    {
      v8 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlpLookupDynamicFunctionEntry(ControlPc, ImageBase);
    }
    if ( v8 )
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
            HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v8;
            v24 = *ImageBase + v8->BeginAddress;
            v25 = *ImageBase + v8->EndAddress;
            if ( v24 < HistoryTable->LowAddress )
              HistoryTable->LowAddress = v24;
            if ( v25 > HistoryTable->HighAddress )
              HistoryTable->HighAddress = v25;
          }
        }
      }
      UnwindInfoAddress = v8->UnwindInfoAddress;
      if ( (UnwindInfoAddress & 1) != 0 )
        return (PRUNTIME_FUNCTION)(UnwindInfoAddress + *ImageBase - 1);
    }
    return v8;
  }
  while ( 1 )
  {
    v29 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v28 + 8];
    v30 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * v28 + 6];
    if ( ControlPc >= v30 + *v29 && ControlPc < v30 + v29[1] )
      break;
    if ( ++v28 >= RtlpUnwindHistoryTable[0] )
      goto LABEL_26;
  }
  result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * v28 + 8];
  HistoryTable->GlobalHint = GlobalHint + 1;
  *ImageBase = v30;
  return result;
}
