/*
 * XREFs of _EtwpEventWriteFull@44 @ 0x4B2E3CCF
 * Callers:
 *     _EtwEventWriteEx@40 @ 0x4B2ABAF0 (_EtwEventWriteEx@40.c)
 *     _EtwEventWriteTransfer@28 @ 0x4B2E3CA0 (_EtwEventWriteTransfer@28.c)
 *     _EtwEventWriteFull@32 @ 0x4B3803E0 (_EtwEventWriteFull@32.c)
 *     _EvtIntReportEventWorker@48 @ 0x4B382BB1 (_EvtIntReportEventWorker@48.c)
 * Callees:
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _EtwpReleasePrivateBuffers@8 @ 0x4B38192C (_EtwpReleasePrivateBuffers@8.c)
 *     _EtwpWriteToPrivateBuffers@40 @ 0x4B381B7E (_EtwpWriteToPrivateBuffers@40.c)
 */

NTSTATUS __fastcall EtwpEventWriteFull(
        int *a1,
        int a2,
        int a3,
        __int16 a4,
        __int16 a5,
        __int16 a6,
        __int16 a7,
        _GUID *a8,
        int *a9,
        int a10,
        int a11)
{
  NTSTATUS result; // eax
  int v12; // edx
  __int64 v13; // rdi
  unsigned __int8 v14; // cl
  _GUID *p_ActivityId; // esi
  unsigned __int16 *p_Data2; // esi
  unsigned __int8 v17; // cl
  char v19; // [esp+Bh] [ebp-E5h]
  NTSTATUS v20; // [esp+Ch] [ebp-E4h]
  _BYTE Fields[4]; // [esp+28h] [ebp-C8h] BYREF
  __int16 v23; // [esp+2Ch] [ebp-C4h]
  __int16 v24; // [esp+2Eh] [ebp-C2h]
  int v25; // [esp+50h] [ebp-A0h]
  int v26; // [esp+54h] [ebp-9Ch]
  __int64 v27; // [esp+58h] [ebp-98h]
  unsigned int Data1; // [esp+68h] [ebp-88h]
  int v29; // [esp+6Ch] [ebp-84h]
  int v30; // [esp+70h] [ebp-80h]
  int v31; // [esp+74h] [ebp-7Ch]
  char v32; // [esp+78h] [ebp-78h]
  __int16 v33; // [esp+7Ah] [ebp-76h]
  int v34; // [esp+7Ch] [ebp-74h]
  int v35; // [esp+80h] [ebp-70h]
  int v36; // [esp+84h] [ebp-6Ch]
  int v37; // [esp+88h] [ebp-68h]
  int v38; // [esp+8Ch] [ebp-64h]
  int v39; // [esp+90h] [ebp-60h]
  int v40; // [esp+94h] [ebp-5Ch]
  int v41; // [esp+98h] [ebp-58h]
  _BYTE v42[76]; // [esp+A0h] [ebp-50h] BYREF

  result = 0;
  v20 = 0;
  if ( !a1 )
    return 87;
  v25 = *a1;
  v26 = a1[1];
  v27 = *((_QWORD *)a1 + 1);
  if ( !a4 )
    return 6;
  v12 = a3;
  if ( (a3 & 1) != 0 || a4 != *(_WORD *)(a3 + 52) )
    return 6;
  v13 = v27;
  if ( !*(_BYTE *)(a3 + 196) )
  {
    v19 = 0;
    goto LABEL_7;
  }
  v17 = *(_BYTE *)(a3 + 197);
  if ( (unsigned __int8)v26 > v17 && v17 )
  {
LABEL_35:
    v19 = 0;
    goto LABEL_7;
  }
  if ( (*(_BYTE *)(a3 + 192) & 0x40) == 0 || v27 )
  {
    if ( (v27 & *(_QWORD *)(a3 + 184)) == 0 || (v12 = a3, (v27 & *(_QWORD *)(a3 + 176)) != *(_QWORD *)(a3 + 176)) )
    {
      result = 0;
      goto LABEL_35;
    }
  }
  v19 = 1;
  result = EtwpWriteToPrivateBuffers(a7, a6, 0, a8, a9, a10, a11, v42);
  v20 = result;
  if ( result )
  {
LABEL_38:
    EtwpReleasePrivateBuffers(result, v42);
    return v20;
  }
  v13 = v27;
  v12 = a3;
LABEL_7:
  if ( *(_BYTE *)(v12 + 76) )
  {
    v14 = *(_BYTE *)(v12 + 77);
    if ( (unsigned __int8)v26 <= v14 || !v14 )
    {
      if ( (*(_BYTE *)(v12 + 72) & 0x40) != 0 && !v13
        || (v13 & *(_QWORD *)(v12 + 64)) != 0 && (v13 & *(_QWORD *)(v12 + 56)) == *(_QWORD *)(v12 + 56) )
      {
        v36 = 0;
        v23 = 0;
        v24 = a7;
        v34 = a10;
        v35 = a11;
        if ( a8 )
          p_ActivityId = a8;
        else
          p_ActivityId = &NtCurrentTeb()->ActivityId;
        Data1 = p_ActivityId->Data1;
        p_Data2 = &p_ActivityId->Data2;
        v29 = *(_DWORD *)p_Data2;
        p_Data2 += 2;
        v30 = *(_DWORD *)p_Data2;
        v31 = *((_DWORD *)p_Data2 + 1);
        v32 = 0;
        if ( a9 )
        {
          v32 = 1;
          v37 = *a9;
          v38 = a9[1];
          v39 = a9[2];
          v40 = a9[3];
        }
        v33 = a5;
        v41 = a2;
        result = NtTraceEvent(*(HANDLE *)(v12 + 48), 0x300u, 0x78u, Fields);
        if ( result )
          result = RtlNtStatusToDosError(result);
        v20 = result;
      }
      else
      {
        result = 0;
      }
    }
  }
  if ( v19 )
    goto LABEL_38;
  return result;
}
