/*
 * XREFs of _EtwTraceMessageVa@24 @ 0x4B2EA130
 * Callers:
 *     _EtwTraceMessage @ 0x4B2EA100 (_EtwTraceMessage.c)
 * Callees:
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _EtwpTraceUmMessage@24 @ 0x4B2EFAD2 (_EtwpTraceUmMessage@24.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

ULONG __stdcall EtwTraceMessageVa(int a1, uintptr_t a2, int *a3, __int16 a4, _DWORD *a5)
{
  int v5; // esi
  int v6; // ecx
  _DWORD *v7; // eax
  NTSTATUS v8; // eax
  _BYTE Fields[4]; // [esp+10h] [ebp-30h] BYREF
  __int16 v11; // [esp+14h] [ebp-2Ch]
  int v12; // [esp+18h] [ebp-28h]
  int v13; // [esp+1Ch] [ebp-24h]
  int v14; // [esp+20h] [ebp-20h]
  int v15; // [esp+24h] [ebp-1Ch]
  int v16; // [esp+28h] [ebp-18h]
  int v17; // [esp+2Ch] [ebp-14h]
  _DWORD *v18; // [esp+30h] [ebp-10h]

  if ( (a1 & 0x1000000) != 0 )
    return EtwpTraceUmMessage(a1, a2, a4, a5);
  v5 = 0;
  v6 = 0;
  if ( *a5 )
  {
    v7 = a5;
    do
    {
      v7 += 2;
      ++v6;
    }
    while ( *v7 );
  }
  v11 = a4;
  v16 = HIDWORD(a2);
  if ( (a2 & 0x400000000LL) != 0 )
  {
    v12 = *a3;
  }
  else if ( (a2 & 0x200000000LL) != 0 )
  {
    v12 = *a3;
    v13 = a3[1];
    v14 = a3[2];
    v15 = a3[3];
    v5 = 0;
  }
  v18 = a5;
  v17 = 8 * v6 + 4;
  v8 = NtTraceEvent((HANDLE)a1, 0x200u, 0x28u, Fields);
  if ( v8 )
    return RtlNtStatusToDosError(v8);
  return v5;
}
