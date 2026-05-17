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

ULONG __stdcall EtwEventWriteString(int a1, __int16 a2, unsigned __int8 a3, int a4, int a5, const unsigned __int16 *a6)
{
  int v6; // edx
  __int64 v7; // rdi
  unsigned __int8 v8; // al
  char v9; // al
  unsigned __int8 v10; // al
  ULONG result; // eax
  _GUID *p_ActivityId; // esi
  NTSTATUS v13; // eax
  bool v15; // [esp+Eh] [ebp-E2h]
  char v16; // [esp+Fh] [ebp-E1h]
  ULONG v17; // [esp+10h] [ebp-E0h]
  _DWORD v18[4]; // [esp+18h] [ebp-D8h] BYREF
  _BYTE v19[4]; // [esp+28h] [ebp-C8h] BYREF
  __int16 v20; // [esp+2Ch] [ebp-C4h]
  __int16 v21; // [esp+2Eh] [ebp-C2h]
  int v22; // [esp+50h] [ebp-A0h]
  int v23; // [esp+54h] [ebp-9Ch]
  int v24; // [esp+58h] [ebp-98h]
  int v25; // [esp+5Ch] [ebp-94h]
  _DWORD v26[2]; // [esp+68h] [ebp-88h] BYREF
  __int64 v27; // [esp+70h] [ebp-80h]
  char v28; // [esp+78h] [ebp-78h]
  __int16 v29; // [esp+7Ah] [ebp-76h]
  int v30; // [esp+7Ch] [ebp-74h]
  _DWORD *v31; // [esp+80h] [ebp-70h]
  int v32; // [esp+84h] [ebp-6Ch]
  int v33; // [esp+98h] [ebp-58h]
  _BYTE v34[76]; // [esp+A0h] [ebp-50h] BYREF

  v17 = 0;
  if ( !a2 )
    return 6;
  v6 = a1;
  if ( (a1 & 1) != 0 || a2 != *(_WORD *)(a1 + 52) )
    return 6;
  if ( !a6 )
    return 87;
  HIDWORD(v7) = a5;
  v15 = 0;
  if ( *(_BYTE *)(a1 + 76) )
  {
    v8 = *(_BYTE *)(a1 + 77);
    if ( a3 <= v8 || !v8 )
    {
      if ( (LODWORD(v7) = a4, (*(_BYTE *)(a1 + 72) & 0x40) != 0) && !v7
        || (v7 & *(_QWORD *)(a1 + 64)) != 0
        && (a4 & *(_DWORD *)(a1 + 56)) == *(_DWORD *)(a1 + 56)
        && (a5 & *(_DWORD *)(a1 + 60)) == *(_DWORD *)(a1 + 60) )
      {
        v15 = 1;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 196) )
  {
    v10 = *(_BYTE *)(a1 + 197);
    if ( (a3 <= v10 || !v10)
      && ((LODWORD(v7) = a4, (*(_BYTE *)(a1 + 192) & 0x40) != 0) && !v7
       || (v7 & *(_QWORD *)(a1 + 184)) != 0
       && (a4 & *(_DWORD *)(a1 + 176)) == *(_DWORD *)(a1 + 176)
       && (a5 & *(_DWORD *)(a1 + 180)) == *(_DWORD *)(a1 + 180)) )
    {
      v9 = 1;
      v16 = 1;
    }
    else
    {
      v9 = 0;
      v16 = 0;
    }
  }
  else
  {
    v9 = 0;
    v16 = 0;
  }
  if ( !v15 && !v9 )
    return 0;
  v20 = 4;
  v21 = 0;
  v22 = 0;
  v25 = a5;
  v23 = a3;
  p_ActivityId = &NtCurrentTeb()->ActivityId;
  v24 = a4;
  v31 = v18;
  v32 = 0;
  v30 = 1;
  v26[0] = p_ActivityId->Data1;
  p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
  v26[1] = p_ActivityId->Data1;
  v27 = *(_QWORD *)&p_ActivityId->Data2;
  v28 = 0;
  v33 = 0;
  v29 = 0;
  v18[0] = a6;
  v18[1] = 0;
  v18[3] = 0;
  v18[2] = 2 * wcslen(a6) + 2;
  if ( v16 == 1 )
  {
    result = EtwpWriteToPrivateBuffers(0, 0, 4, v26, 0, 1, v18, v34);
    v17 = result;
    if ( result )
    {
LABEL_40:
      EtwpReleasePrivateBuffers(result, v34);
      return v17;
    }
    v6 = a1;
  }
  else
  {
    result = 0;
  }
  if ( v15 )
  {
    v13 = NtTraceEvent(*(_DWORD *)(v6 + 48), 768, 120, (int)v19);
    if ( v13 )
      result = RtlNtStatusToDosError(v13);
    else
      result = 0;
    v17 = result;
  }
  if ( v16 )
    goto LABEL_40;
  return result;
}
