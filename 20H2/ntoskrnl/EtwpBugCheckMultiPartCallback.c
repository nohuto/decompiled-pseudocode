/*
 * XREFs of EtwpBugCheckMultiPartCallback @ 0x1405A8EE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
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
  __int64 v11; // rsi
  unsigned int v12; // ebp
  unsigned __int16 v13; // ax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // edx

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
      v10 = (_DWORD *)*((_QWORD *)v4 + 1);
      if ( *(_DWORD *)(v7 + 8) <= *v10 )
        *(_DWORD *)(*((_QWORD *)v4 + 1) + 48LL) = v10[2];
      else
        v10[12] = v10[1];
      *(_DWORD *)ReasonSpecificData[2].Data4 = *(_DWORD *)(*((_QWORD *)v4 + 1) + 48LL);
      if ( *(_DWORD *)ReasonSpecificData->Data4 )
        *(_QWORD *)&ReasonSpecificData[2].Data1 = *((_QWORD *)v4 + 1);
      v18 = *(_QWORD *)(*((_QWORD *)v4 + 1) + 56LL);
      v19 = v18 - 56;
      if ( v18 == v9 + 96 )
        v19 = 0LL;
      *((_QWORD *)v4 + 1) = v19;
      v17 = v19 == 0;
LABEL_30:
      if ( v17 )
        ++*(_WORD *)v4;
    }
    else
    {
      while ( v8 < *(_DWORD *)(EtwpHostSiloState + 16) )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 456) + 8LL * (unsigned __int16)v8);
        if ( (v11 & 1) == 0 && *(int *)(v11 + 12) < 0 && (*(_DWORD *)(v11 + 316) & 1) == 0 )
        {
          if ( *(_QWORD *)(v11 + 712) )
          {
            _mm_pause();
          }
          else
          {
            v12 = 2 * *(unsigned __int16 *)(v11 + 152) + 48;
            *(_DWORD *)ReasonSpecificData[2].Data4 = v12;
            if ( !*(_DWORD *)ReasonSpecificData->Data4 )
              goto LABEL_21;
            if ( v12 <= *(_DWORD *)&ReasonSpecificData->Data4[4] )
            {
              v14 = *(_QWORD *)&ReasonSpecificData->Data1;
              *(_DWORD *)v14 = 32223201;
              *(_DWORD *)(v14 + 4) = *(_DWORD *)v11;
              *(_DWORD *)(v14 + 16) = *(_DWORD *)(v11 + 4);
              *(_DWORD *)(v14 + 12) = *(_DWORD *)(v11 + 216);
              *(_QWORD *)(v14 + 24) = *(_QWORD *)(v11 + 808);
              *(_DWORD *)(v14 + 8) = *(_DWORD *)(v11 + 12);
              *(_DWORD *)(v14 + 20) = *(unsigned __int16 *)(v11 + 152);
              *(_OWORD *)(v14 + 32) = *(_OWORD *)(v11 + 320);
              memmove((void *)(v14 + 48), *(const void **)(v11 + 160), 2LL * *(unsigned __int16 *)(v11 + 152));
              *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
              *(_DWORD *)ReasonSpecificData[2].Data4 = v12;
              *(_DWORD *)ReasonSpecificData->Data4 = v12;
LABEL_21:
              v15 = *(_QWORD *)(v11 + 96);
              v16 = v15 - 56;
              if ( v15 == v11 + 96 )
                v16 = 0LL;
              *((_QWORD *)v4 + 1) = v16;
              v17 = v16 == 0;
              goto LABEL_30;
            }
          }
        }
        v13 = *(_WORD *)v4 + 1;
        v8 = v13;
        *(_WORD *)v4 = v13;
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
  v20 = *(_DWORD *)ReasonSpecificData[3].Data4;
  if ( (unsigned int)*(unsigned __int16 *)v4 >= *(_DWORD *)(EtwpHostSiloState + 16) )
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 = v20 & 0xFFFFFFFE;
    *((_QWORD *)v4 + 1) = 0LL;
    *((_BYTE *)v4 + 2) = 0;
    *(_WORD *)v4 = 0;
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 = v20 | 1;
  }
}
