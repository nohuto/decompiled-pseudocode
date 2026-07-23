/*
 * XREFs of EtwpBugCheckMultiPartCallback @ 0x1405AAB40
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 */

void __fastcall EtwpBugCheckMultiPartCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        GUID *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int128 *v4; // rbx
  LARGE_INTEGER *v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 v9; // r9
  _DWORD *v10; // rcx
  int v11; // eax
  __int64 v12; // rsi
  unsigned int v13; // ebp
  unsigned __int16 v14; // ax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // edx

  v4 = *(__int128 **)&ReasonSpecificData[3].Data1;
  *(_DWORD *)ReasonSpecificData[2].Data4 = 0;
  ReasonSpecificData[1] = EtwSecondaryDumpDataGuid;
  if ( !v4 )
  {
    v4 = &EtwpDumpCallbackContext;
    EtwpDumpCallbackContext = 0LL;
    *(_QWORD *)&ReasonSpecificData[3].Data1 = &EtwpDumpCallbackContext;
  }
  if ( *((_BYTE *)v4 + 2) )
  {
    v7 = *((_QWORD *)v4 + 1);
    v8 = *(unsigned __int16 *)v4;
    if ( v7 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 456) + 8LL * *(unsigned __int16 *)v4);
      v10 = *(_DWORD **)(v7 + 16);
      if ( v10[2] <= *v10 )
        v11 = v10[2];
      else
        v11 = v10[1];
      v10[12] = v11;
      *(_DWORD *)ReasonSpecificData[2].Data4 = v11;
      if ( *(_DWORD *)ReasonSpecificData->Data4 )
        *(_QWORD *)&ReasonSpecificData[2].Data1 = v10;
      v17 = **((_QWORD **)v4 + 1);
      v16 = v9 + 96;
LABEL_26:
      if ( v17 == v16 )
        v17 = 0LL;
      *((_QWORD *)v4 + 1) = v17;
      if ( !v17 )
        ++*(_WORD *)v4;
    }
    else
    {
      while ( v8 < *(_DWORD *)(EtwpHostSiloState + 16) )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 456) + 8LL * (unsigned __int16)v8);
        if ( (v12 & 1) == 0 && *(int *)(v12 + 12) < 0 && (*(_DWORD *)(v12 + 316) & 1) == 0 )
        {
          if ( *(_QWORD *)(v12 + 712) )
          {
            _mm_pause();
          }
          else
          {
            v13 = 2 * *(unsigned __int16 *)(v12 + 152) + 48;
            *(_DWORD *)ReasonSpecificData[2].Data4 = v13;
            if ( !*(_DWORD *)ReasonSpecificData->Data4 )
              goto LABEL_21;
            if ( v13 <= *(_DWORD *)&ReasonSpecificData->Data4[4] )
            {
              v15 = *(_QWORD *)&ReasonSpecificData->Data1;
              *(_DWORD *)v15 = 32223201;
              *(_DWORD *)(v15 + 4) = *(_DWORD *)v12;
              *(_DWORD *)(v15 + 16) = *(_DWORD *)(v12 + 4);
              *(_DWORD *)(v15 + 12) = *(_DWORD *)(v12 + 216);
              *(_QWORD *)(v15 + 24) = *(_QWORD *)(v12 + 808);
              *(_DWORD *)(v15 + 8) = *(_DWORD *)(v12 + 12);
              *(_DWORD *)(v15 + 20) = *(unsigned __int16 *)(v12 + 152);
              *(_OWORD *)(v15 + 32) = *(_OWORD *)(v12 + 320);
              memmove((void *)(v15 + 48), *(const void **)(v12 + 160), 2LL * *(unsigned __int16 *)(v12 + 152));
              *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
              *(_DWORD *)ReasonSpecificData[2].Data4 = v13;
              *(_DWORD *)ReasonSpecificData->Data4 = v13;
LABEL_21:
              v16 = v12 + 96;
              v17 = *(_QWORD *)(v12 + 96);
              goto LABEL_26;
            }
          }
        }
        v14 = *(_WORD *)v4 + 1;
        v8 = v14;
        *(_WORD *)v4 = v14;
      }
    }
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
    if ( *(_DWORD *)ReasonSpecificData->Data4 )
    {
      v6 = *(LARGE_INTEGER **)&ReasonSpecificData->Data1;
      v6[2].QuadPart = EtwpBootTime;
      v6[1].LowPart = EtwCPUSpeedInMHz;
      v6[3] = EtwPerfFreq;
      v6->LowPart = KeMaximumIncrement;
      v6->HighPart = NtBuildNumber;
      *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
      *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
      *(_DWORD *)ReasonSpecificData->Data4 = 32;
    }
    *((_BYTE *)v4 + 2) = 1;
  }
  v18 = *(_DWORD *)ReasonSpecificData[3].Data4;
  if ( (unsigned int)*(unsigned __int16 *)v4 >= *(_DWORD *)(EtwpHostSiloState + 16) )
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 = v18 & 0xFFFFFFFE;
    *((_QWORD *)v4 + 1) = 0LL;
    *((_BYTE *)v4 + 2) = 0;
    *(_WORD *)v4 = 0;
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 = v18 | 1;
  }
}
