/*
 * XREFs of _EtwEventWrite@20 @ 0x4B2E1250
 * Callers:
 *     _SbSelectProcedure@16 @ 0x4B2B82A0 (_SbSelectProcedure@16.c)
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _LdrpLogDeprecatedDllEtwEvent@4 @ 0x4B2EBC3E (_LdrpLogDeprecatedDllEtwEvent@4.c)
 *     _LdrpAppxEtwGenericIntegrityFailure@4 @ 0x4B32C454 (_LdrpAppxEtwGenericIntegrityFailure@4.c)
 *     _LdrpAppxEtwIntegrityFailure@12 @ 0x4B32C4D5 (_LdrpAppxEtwIntegrityFailure@12.c)
 *     _LdrpLogFatalUserCallbackException@8 @ 0x4B330333 (_LdrpLogFatalUserCallbackException@8.c)
 *     _RtlpHpStackDbLogStackDbEnd@8 @ 0x4B36DCFB (_RtlpHpStackDbLogStackDbEnd@8.c)
 *     _RtlpHpStackDbLogStackDbSnapshot@16 @ 0x4B36DD5E (_RtlpHpStackDbLogStackDbSnapshot@16.c)
 *     _EtwEventWriteEndScenario@20 @ 0x4B380AB0 (_EtwEventWriteEndScenario@20.c)
 *     _EtwEventWriteStartScenario@20 @ 0x4B380B90 (_EtwEventWriteStartScenario@20.c)
 *     _SbpTraceContextUpdate@24 @ 0x4B385D98 (_SbpTraceContextUpdate@24.c)
 * Callees:
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _EtwpReleasePrivateBuffers@8 @ 0x4B38192C (_EtwpReleasePrivateBuffers@8.c)
 *     _EtwpWriteToPrivateBuffers@40 @ 0x4B381B7E (_EtwpWriteToPrivateBuffers@40.c)
 */

ULONG __cdecl EtwEventWrite(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG result; // eax
  int v5; // edx
  unsigned __int64 Keyword; // rdi
  unsigned __int8 v7; // cl
  _GUID *p_ActivityId; // esi
  void *v9; // [esp-10h] [ebp-F8h]
  char v11; // [esp+Fh] [ebp-D9h]
  ULONG v12; // [esp+10h] [ebp-D8h]
  _BYTE Fields[4]; // [esp+20h] [ebp-C8h] BYREF
  int v14; // [esp+24h] [ebp-C4h]
  EVENT_DESCRIPTOR v15; // [esp+48h] [ebp-A0h]
  unsigned int Data1; // [esp+60h] [ebp-88h]
  unsigned int v17; // [esp+64h] [ebp-84h]
  __int64 v18; // [esp+68h] [ebp-80h]
  char v19; // [esp+70h] [ebp-78h]
  __int16 v20; // [esp+72h] [ebp-76h]
  ULONG v21; // [esp+74h] [ebp-74h]
  PEVENT_DATA_DESCRIPTOR v22; // [esp+78h] [ebp-70h]
  int v23; // [esp+7Ch] [ebp-6Ch]
  int v24; // [esp+90h] [ebp-58h]
  _BYTE v25[76]; // [esp+98h] [ebp-50h] BYREF

  result = 0;
  v12 = 0;
  if ( !EventDescriptor )
    return 87;
  v15 = *EventDescriptor;
  if ( !WORD2(RegHandle) )
    return 6;
  v5 = RegHandle;
  if ( (RegHandle & 1) != 0 || WORD2(RegHandle) != *(_WORD *)(RegHandle + 52) )
    return 6;
  Keyword = v15.Keyword;
  if ( !*(_BYTE *)(RegHandle + 196) )
  {
    v11 = 0;
    goto LABEL_7;
  }
  result = 0;
  if ( v15.Level > *(_BYTE *)(RegHandle + 197) && *(_BYTE *)(RegHandle + 197) )
  {
LABEL_29:
    v11 = 0;
    goto LABEL_7;
  }
  if ( (*(_BYTE *)(RegHandle + 192) & 0x40) == 0 || v15.Keyword )
  {
    if ( (v15.Keyword & *(_QWORD *)(RegHandle + 184)) == 0
      || (v5 = RegHandle, (v15.Keyword & *(_QWORD *)(RegHandle + 176)) != *(_QWORD *)(RegHandle + 176)) )
    {
      result = 0;
      goto LABEL_29;
    }
  }
  v11 = 1;
  result = EtwpWriteToPrivateBuffers(0, 0, 0, 0, 0, UserDataCount, UserData, v25);
  v12 = result;
  if ( result )
  {
LABEL_32:
    EtwpReleasePrivateBuffers(result, v25);
    return v12;
  }
  Keyword = v15.Keyword;
  v5 = RegHandle;
LABEL_7:
  if ( *(_BYTE *)(v5 + 76) )
  {
    v7 = *(_BYTE *)(v5 + 77);
    if ( v15.Level <= v7 || !v7 )
    {
      if ( (*(_BYTE *)(v5 + 72) & 0x40) != 0 && !Keyword
        || (Keyword & *(_QWORD *)(v5 + 64)) != 0 && (Keyword & *(_QWORD *)(v5 + 56)) == *(_QWORD *)(v5 + 56) )
      {
        p_ActivityId = &NtCurrentTeb()->ActivityId;
        v14 = 0;
        v21 = UserDataCount;
        v22 = UserData;
        v23 = 0;
        Data1 = p_ActivityId->Data1;
        p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
        v17 = p_ActivityId->Data1;
        v18 = *(_QWORD *)&p_ActivityId->Data2;
        v20 = 0;
        v9 = *(void **)(v5 + 48);
        v19 = 0;
        v24 = 0;
        result = NtTraceEvent(v9, 0x300u, 0x78u, Fields);
        if ( result )
          result = RtlNtStatusToDosError(result);
        v12 = result;
      }
      else
      {
        result = 0;
      }
    }
  }
  if ( v11 )
    goto LABEL_32;
  return result;
}
