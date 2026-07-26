/*
 * XREFs of NdisWriteEventLogEntry @ 0x1C001E200
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003BC68 (WPP_RECORDER_SF_qdL.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 */

NDIS_STATUS __stdcall NdisWriteEventLogEntry(
        PVOID LogHandle,
        NDIS_STATUS EventCode,
        ULONG UniqueEventValue,
        USHORT NumStrings,
        PVOID StringsList,
        ULONG DataSize,
        PVOID Data)
{
  NDIS_STATUS v7; // ebx
  __int64 v8; // r14
  int v9; // edi
  PVOID v12; // r10
  __int16 **v13; // r15
  _WORD **v14; // rdx
  __int64 v15; // r8
  _WORD *v16; // rax
  int v17; // ecx
  ULONG v18; // esi
  unsigned int v19; // ecx
  char v20; // dl
  _WORD *ErrorLogEntry; // rax
  _WORD *v22; // rdi
  unsigned __int16 v23; // ax
  _WORD *v24; // rcx
  __int64 v25; // r8
  __int16 *v26; // rdx
  __int16 v27; // ax

  v7 = 0;
  v8 = NumStrings;
  v9 = 0;
  v12 = LogHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      EventCode,
      13,
      48,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)LogHandle,
      EventCode,
      UniqueEventValue);
    v12 = LogHandle;
  }
  v13 = (__int16 **)StringsList;
  if ( (_WORD)v8 )
  {
    v14 = (_WORD **)StringsList;
    v15 = v8;
    do
    {
      v16 = *v14;
      v17 = 2;
      while ( *v16 )
      {
        ++v16;
        v17 += 2;
      }
      v9 += v17;
      ++v14;
      --v15;
    }
    while ( v15 );
  }
  v18 = DataSize;
  if ( (DataSize & 3) != 0 )
    v18 = DataSize - (DataSize & 3) + 4;
  v19 = v9 + v18;
  if ( v9 + v18 > 0xC4 )
  {
    v7 = -1073676266;
  }
  else
  {
    v20 = 44;
    if ( v19 <= 4 )
      v20 = 48;
    ErrorLogEntry = IoAllocateErrorLogEntry(v12, (unsigned __int8)v19 + v20);
    v22 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      *((_DWORD *)ErrorLogEntry + 4) = UniqueEventValue;
      *((_DWORD *)ErrorLogEntry + 3) = EventCode;
      ErrorLogEntry[2] = v8;
      v23 = v18 + 44;
      v22[1] = v18;
      v22[3] = v18 + 44;
      if ( DataSize )
      {
        memmove(v22 + 20, Data, DataSize);
        v23 = v22[3];
      }
      v24 = (_WORD *)((char *)v22 + v23);
      if ( (_WORD)v8 )
      {
        v25 = v8;
        do
        {
          v26 = *v13;
          do
          {
            v27 = *v26++;
            *v24++ = v27;
          }
          while ( v27 );
          ++v13;
          --v25;
        }
        while ( v25 );
      }
      IoWriteErrorLogEntry(v22);
    }
    else
    {
      v7 = -1073741670;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x31u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids);
  return v7;
}
