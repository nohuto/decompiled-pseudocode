/*
 * XREFs of _EtwpUpdateUmLogger@16 @ 0x4B3819CB
 * Callers:
 *     _EtwProcessPrivateLoggerRequest@4 @ 0x4B2EFF20 (_EtwProcessPrivateLoggerRequest@4.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _EtwpQueryUmLogger@16 @ 0x4B2ED9ED (_EtwpQueryUmLogger@16.c)
 *     @EtwpGetPrivateLoggerContext@8 @ 0x4B2EDADC (@EtwpGetPrivateLoggerContext@8.c)
 *     _EtwpSynchronizeWithLogger@8 @ 0x4B2EDB44 (_EtwpSynchronizeWithLogger@8.c)
 *     _EtwpAddInstanceIdToLogFileName@12 @ 0x4B2F1A0B (_EtwpAddInstanceIdToLogFileName@12.c)
 *     __allmul @ 0x4B2F6490 (__allmul.c)
 */

int __fastcall EtwpUpdateUmLogger(unsigned int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int result; // eax
  unsigned __int32 v5; // esi
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  bool v9; // zf
  int v10; // edx
  int v11; // eax
  int v12; // edx
  NTSTATUS v13; // eax
  _UNICODE_STRING UnicodeString; // [esp+10h] [ebp-18h] BYREF
  unsigned int v15; // [esp+18h] [ebp-10h]
  _DWORD *v16; // [esp+1Ch] [ebp-Ch]
  wchar_t *v17; // [esp+20h] [ebp-8h]
  int v18; // [esp+24h] [ebp-4h] BYREF

  v15 = a1;
  v16 = a2;
  v18 = 0;
  *a2 = 0;
  *a3 = 176;
  if ( a1 < 0xB0 )
    return 234;
  result = EtwpGetPrivateLoggerContext(a4, &v18);
  v5 = result;
  if ( !result )
  {
    v6 = v18;
    if ( (*(_BYTE *)(a4 + 64) & 2) != 0 && (*(_BYTE *)(v18 + 212) & 1) != 0
      || (*(_BYTE *)(a4 + 64) & 1) != 0 && (*(_BYTE *)(v18 + 212) & 2) != 0
      || (*(_DWORD *)(a4 + 64) & 0x100) != 0
      || (v7 = *(_DWORD *)(v18 + 212), (v7 & 0x400) != 0)
      || (v7 & 0x10000) != 0
      || (v8 = *(_DWORD *)(a4 + 76)) != 0 && *(_DWORD *)(a4 + 68) )
    {
      v5 = 87;
      goto LABEL_29;
    }
    *(_DWORD *)(a4 + 148) = a4 + 176;
    v9 = *(_DWORD *)(a4 + 68) == 0;
    *(_DWORD *)(a4 + 132) = a4 + *(unsigned __int16 *)(a4 + 146) + 176;
    if ( !v9 )
    {
      *(_QWORD *)(v6 + 232) = *(unsigned int *)(a4 + 68) * ((unsigned int)EtwpOneSecond | 0xFFFFFFFF00000000uLL);
      v8 = *(_DWORD *)(a4 + 76);
    }
    if ( v8 )
    {
      v10 = v8;
      v11 = *(_DWORD *)(v6 + 148) - *(_DWORD *)(v6 + 136) - 1;
      if ( v8 > v11 )
      {
        *(_DWORD *)(a4 + 76) = v11;
        v10 = v11;
      }
      v8 = v10;
      if ( v10 < 0 )
      {
        v8 = 0;
        *(_DWORD *)(a4 + 76) = 0;
      }
    }
    *(_DWORD *)(v6 + 256) = v8;
    if ( !*(_WORD *)(a4 + 128) )
      goto LABEL_28;
    v12 = *(_DWORD *)(v6 + 64);
    v18 = *(_DWORD *)(v6 + 116);
    *(_DWORD *)&UnicodeString.Length = v18;
    v17 = *(wchar_t **)(v6 + 120);
    UnicodeString.Buffer = v17;
    v5 = EtwpAddInstanceIdToLogFileName(a4, v12, (_UNICODE_STRING *)(v6 + 116));
    if ( v5 )
      goto LABEL_23;
    EtwpSynchronizeWithLogger(v6, 2);
    v13 = EtwpSynchronizeWithLogger(v6, 4);
    if ( v13 )
    {
      v5 = RtlNtStatusToDosError(v13);
      if ( v5 )
      {
        RtlFreeAnsiString((PUNICODE_STRING)(v6 + 116));
LABEL_23:
        *(_DWORD *)(v6 + 116) = v18;
        *(_DWORD *)(v6 + 120) = v17;
        goto LABEL_27;
      }
    }
    else
    {
      v5 = 0;
    }
    RtlFreeAnsiString(&UnicodeString);
LABEL_27:
    if ( !v5 )
LABEL_28:
      EtwpQueryUmLogger(v15, v16, a3, a4);
LABEL_29:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * *(_DWORD *)(v6 + 20) + 4));
    return v5;
  }
  return result;
}
