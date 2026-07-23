/*
 * XREFs of _EtwEventWriteString@24 @ 0x4B380420
 * Callers:
 *     <none>
 * Callees:
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _EtwpReleasePrivateBuffers@8 @ 0x4B38192C (_EtwpReleasePrivateBuffers@8.c)
 *     _EtwpWriteToPrivateBuffers@40 @ 0x4B381B7E (_EtwpWriteToPrivateBuffers@40.c)
 */

ULONG __cdecl EtwEventWriteString(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword, PCWSTR String)
{
  int v4; // edx
  __int64 v5; // rdi
  UCHAR v6; // al
  char v7; // al
  UCHAR v8; // al
  ULONG result; // eax
  _GUID *p_ActivityId; // esi
  NTSTATUS v11; // eax
  bool v13; // [esp+Eh] [ebp-E2h]
  char v14; // [esp+Fh] [ebp-E1h]
  ULONG v15; // [esp+10h] [ebp-E0h]
  _DWORD v16[4]; // [esp+18h] [ebp-D8h] BYREF
  _BYTE Fields[4]; // [esp+28h] [ebp-C8h] BYREF
  __int16 v18; // [esp+2Ch] [ebp-C4h]
  __int16 v19; // [esp+2Eh] [ebp-C2h]
  int v20; // [esp+50h] [ebp-A0h]
  int v21; // [esp+54h] [ebp-9Ch]
  ULONGLONG v22; // [esp+58h] [ebp-98h]
  _DWORD v23[2]; // [esp+68h] [ebp-88h] BYREF
  __int64 v24; // [esp+70h] [ebp-80h]
  char v25; // [esp+78h] [ebp-78h]
  __int16 v26; // [esp+7Ah] [ebp-76h]
  int v27; // [esp+7Ch] [ebp-74h]
  _DWORD *v28; // [esp+80h] [ebp-70h]
  int v29; // [esp+84h] [ebp-6Ch]
  int v30; // [esp+98h] [ebp-58h]
  _BYTE v31[76]; // [esp+A0h] [ebp-50h] BYREF

  v15 = 0;
  if ( !WORD2(RegHandle) )
    return 6;
  v4 = RegHandle;
  if ( (RegHandle & 1) != 0 || WORD2(RegHandle) != *(_WORD *)(RegHandle + 52) )
    return 6;
  if ( !String )
    return 87;
  HIDWORD(v5) = HIDWORD(Keyword);
  v13 = 0;
  if ( *(_BYTE *)(RegHandle + 76) )
  {
    v6 = *(_BYTE *)(RegHandle + 77);
    if ( Level <= v6 || !v6 )
    {
      if ( (LODWORD(v5) = Keyword, (*(_BYTE *)(RegHandle + 72) & 0x40) != 0) && !v5
        || (v5 & *(_QWORD *)(RegHandle + 64)) != 0
        && (Keyword & *(_QWORD *)(RegHandle + 56)) == *(_QWORD *)(RegHandle + 56) )
      {
        v13 = 1;
      }
    }
  }
  if ( *(_BYTE *)(RegHandle + 196) )
  {
    v8 = *(_BYTE *)(RegHandle + 197);
    if ( (Level <= v8 || !v8)
      && ((LODWORD(v5) = Keyword, (*(_BYTE *)(RegHandle + 192) & 0x40) != 0) && !v5
       || (v5 & *(_QWORD *)(RegHandle + 184)) != 0
       && (Keyword & *(_QWORD *)(RegHandle + 176)) == *(_QWORD *)(RegHandle + 176)) )
    {
      v7 = 1;
      v14 = 1;
    }
    else
    {
      v7 = 0;
      v14 = 0;
    }
  }
  else
  {
    v7 = 0;
    v14 = 0;
  }
  if ( !v13 && !v7 )
    return 0;
  v18 = 4;
  v19 = 0;
  v20 = 0;
  v21 = Level;
  p_ActivityId = &NtCurrentTeb()->ActivityId;
  v22 = Keyword;
  v28 = v16;
  v29 = 0;
  v27 = 1;
  v23[0] = p_ActivityId->Data1;
  p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
  v23[1] = p_ActivityId->Data1;
  v24 = *(_QWORD *)&p_ActivityId->Data2;
  v25 = 0;
  v30 = 0;
  v26 = 0;
  v16[0] = String;
  v16[1] = 0;
  v16[3] = 0;
  v16[2] = 2 * wcslen((const unsigned __int16 *)String) + 2;
  if ( v14 == 1 )
  {
    result = EtwpWriteToPrivateBuffers(0, 0, 4, v23, 0, 1, v16, v31);
    v15 = result;
    if ( result )
    {
LABEL_38:
      EtwpReleasePrivateBuffers(result, v31);
      return v15;
    }
    v4 = RegHandle;
  }
  else
  {
    result = 0;
  }
  if ( v13 )
  {
    v11 = NtTraceEvent(*(HANDLE *)(v4 + 48), 0x300u, 0x78u, Fields);
    if ( v11 )
      result = RtlNtStatusToDosError(v11);
    else
      result = 0;
    v15 = result;
  }
  if ( v14 )
    goto LABEL_38;
  return result;
}
