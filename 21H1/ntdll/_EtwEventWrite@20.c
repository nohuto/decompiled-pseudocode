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

NTSTATUS __stdcall EtwEventWrite(int a1, __int16 a2, int *a3, int a4, int a5)
{
  NTSTATUS result; // eax
  int v6; // edx
  __int64 v7; // rdi
  unsigned __int8 v8; // cl
  _GUID *p_ActivityId; // esi
  int v10; // [esp-10h] [ebp-F8h]
  char v12; // [esp+Fh] [ebp-D9h]
  NTSTATUS v13; // [esp+10h] [ebp-D8h]
  _BYTE v14[4]; // [esp+20h] [ebp-C8h] BYREF
  int v15; // [esp+24h] [ebp-C4h]
  int v16; // [esp+48h] [ebp-A0h]
  int v17; // [esp+4Ch] [ebp-9Ch]
  __int64 v18; // [esp+50h] [ebp-98h]
  unsigned int Data1; // [esp+60h] [ebp-88h]
  unsigned int v20; // [esp+64h] [ebp-84h]
  __int64 v21; // [esp+68h] [ebp-80h]
  char v22; // [esp+70h] [ebp-78h]
  __int16 v23; // [esp+72h] [ebp-76h]
  int v24; // [esp+74h] [ebp-74h]
  int v25; // [esp+78h] [ebp-70h]
  int v26; // [esp+7Ch] [ebp-6Ch]
  int v27; // [esp+90h] [ebp-58h]
  _BYTE v28[76]; // [esp+98h] [ebp-50h] BYREF

  result = 0;
  v13 = 0;
  if ( !a3 )
    return 87;
  v16 = *a3;
  v17 = a3[1];
  v18 = *((_QWORD *)a3 + 1);
  if ( !a2 )
    return 6;
  v6 = a1;
  if ( (a1 & 1) != 0 || a2 != *(_WORD *)(a1 + 52) )
    return 6;
  v7 = v18;
  if ( !*(_BYTE *)(a1 + 196) )
  {
    v12 = 0;
    goto LABEL_7;
  }
  result = 0;
  if ( (unsigned __int8)v17 > *(_BYTE *)(a1 + 197) && *(_BYTE *)(a1 + 197) )
  {
LABEL_29:
    v12 = 0;
    goto LABEL_7;
  }
  if ( (*(_BYTE *)(a1 + 192) & 0x40) == 0 || v18 )
  {
    if ( (v18 & *(_QWORD *)(a1 + 184)) == 0 || (v6 = a1, (v18 & *(_QWORD *)(a1 + 176)) != *(_QWORD *)(a1 + 176)) )
    {
      result = 0;
      goto LABEL_29;
    }
  }
  v12 = 1;
  result = EtwpWriteToPrivateBuffers(0, 0, 0, 0, 0, a4, a5, v28);
  v13 = result;
  if ( result )
  {
LABEL_32:
    EtwpReleasePrivateBuffers(result, v28);
    return v13;
  }
  v7 = v18;
  v6 = a1;
LABEL_7:
  if ( *(_BYTE *)(v6 + 76) )
  {
    v8 = *(_BYTE *)(v6 + 77);
    if ( (unsigned __int8)v17 <= v8 || !v8 )
    {
      if ( (*(_BYTE *)(v6 + 72) & 0x40) != 0 && !v7
        || (v7 & *(_QWORD *)(v6 + 64)) != 0 && (v7 & *(_QWORD *)(v6 + 56)) == *(_QWORD *)(v6 + 56) )
      {
        p_ActivityId = &NtCurrentTeb()->ActivityId;
        v15 = 0;
        v24 = a4;
        v25 = a5;
        v26 = 0;
        Data1 = p_ActivityId->Data1;
        p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
        v20 = p_ActivityId->Data1;
        v21 = *(_QWORD *)&p_ActivityId->Data2;
        v23 = 0;
        v10 = *(_DWORD *)(v6 + 48);
        v22 = 0;
        v27 = 0;
        result = NtTraceEvent(v10, 768, 120, v14);
        if ( result )
          result = RtlNtStatusToDosError(result);
        v13 = result;
      }
      else
      {
        result = 0;
      }
    }
  }
  if ( v12 )
    goto LABEL_32;
  return result;
}
