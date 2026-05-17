/*
 * XREFs of _EtwTraceEventInstance@20 @ 0x4B380D50
 * Callers:
 *     <none>
 * Callees:
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     @EtwpTraceUmEvent@20 @ 0x4B381076 (@EtwpTraceUmEvent@20.c)
 */

ULONG __stdcall EtwTraceEventInstance(__int64 a1, _WORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // esi
  int *v5; // esi
  int v6; // edi
  int v7; // esi
  unsigned int v8; // ecx
  NTSTATUS v10; // eax
  _DWORD v12[13]; // [esp+10h] [ebp-150h] BYREF
  int v13; // [esp+44h] [ebp-11Ch]
  int v14; // [esp+48h] [ebp-118h]
  int v15; // [esp+4Ch] [ebp-114h]
  int v16; // [esp+50h] [ebp-110h]
  int v17; // [esp+54h] [ebp-10Ch]
  _DWORD v18[65]; // [esp+58h] [ebp-108h] BYREF

  if ( !a2 || !a3 || *a2 < 0x38u )
    return 87;
  qmemcpy(v12, a2, 0x30u);
  if ( (v12[11] & 0x80000) != 0 )
    v12[11] &= ~0x80000u;
  if ( !*a3 )
    return 87;
  v4 = (_DWORD *)(*a3 + 8);
  v12[12] = a3[1];
  v12[6] = *v4++;
  v12[7] = *v4++;
  v12[8] = *v4;
  v12[9] = v4[1];
  if ( a4 )
  {
    if ( !*a4 )
      return 87;
    v5 = (int *)(*a4 + 8);
    v13 = a4[1];
    v14 = *v5++;
    v15 = *v5++;
    v16 = *v5;
    v17 = v5[1];
  }
  else
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
  }
  v6 = (unsigned __int16)*a2;
  v7 = 0;
  v8 = v6 - 56;
  if ( (v12[11] & 0x100000) == 0 )
  {
    v18[1] = 0;
    v12[11] |= 0x100000u;
    LOWORD(v12[0]) = 88;
    v18[0] = a2 + 28;
    v18[2] = v6 - 56;
    v18[3] = 0;
LABEL_16:
    if ( (a1 & 0x1000000) != 0 )
      return EtwpTraceUmEvent(a1, HIDWORD(a1), -1073020928);
    v10 = NtTraceEvent((unsigned __int16)a1, 2048, 72, (int)v12);
    if ( !v10 )
      return v7;
    return RtlNtStatusToDosError(v10);
  }
  if ( (v8 & 0xF) == 0 && v8 <= 0x100 )
  {
    memcpy(v18, a2 + 28, v6 - 56);
    LOWORD(v12[0]) = v6 + 16;
    goto LABEL_16;
  }
  return 87;
}
