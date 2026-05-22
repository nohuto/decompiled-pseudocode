/*
 * XREFs of ??0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z @ 0x1800313E0
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x180030FE4 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ??$swprintf_s@$0FC@@@YAHAEAY0FC@GPEBGZZ @ 0x1800314F0 (--$swprintf_s@$0FC@@@YAHAEAY0FC@GPEBGZZ.c)
 *     ?FailFast_Unexpected@in1diag0@details@wil@@YAXXZ @ 0x1800C02B0 (-FailFast_Unexpected@in1diag0@details@wil@@YAXXZ.c)
 */

__int64 __fastcall AlpcPortString::AlpcPortString(__int64 a1, unsigned int *a2, int a3)
{
  int v3; // eax
  int v5; // ecx
  int v7; // r10d
  int v8; // r11d
  int v9; // esi
  int v10; // ebp
  int v11; // r14d
  int v12; // r15d
  int v13; // r12d
  int v14; // r13d
  __int64 SessionId; // r8
  const unsigned __int16 *v16; // rdx
  int v17; // eax
  wil::details::in1diag0 *v18; // rcx
  unsigned int v20; // [rsp+B0h] [rbp+8h]

  v3 = *((unsigned __int16 *)a2 + 2);
  v5 = *((unsigned __int8 *)a2 + 15);
  v7 = *((unsigned __int8 *)a2 + 14);
  v8 = *((unsigned __int8 *)a2 + 13);
  v9 = *((unsigned __int8 *)a2 + 12);
  v10 = *((unsigned __int8 *)a2 + 11);
  v11 = *((unsigned __int8 *)a2 + 10);
  v12 = *((unsigned __int8 *)a2 + 9);
  v13 = *((unsigned __int8 *)a2 + 8);
  v14 = *((unsigned __int16 *)a2 + 3);
  v20 = *a2;
  if ( a3 == 1 )
  {
    SessionId = NtCurrentPeb()->SessionId;
    v3 = *((unsigned __int16 *)a2 + 2);
  }
  else
  {
    SessionId = 0LL;
  }
  v16 = L"\\Sessions\\%lu\\BaseNamedObjects\\SIPC_{%08lX-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}";
  if ( a3 != 1 )
    v16 = L"%.0lu\\BaseNamedObjects\\SIPC_{%08lX-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}";
  v17 = swprintf_s<82>(a1 + 16, v16, SessionId, v20, v3, v14, v13, v12, v11, v10, v9, v8, v7, v5);
  if ( v17 <= 0 )
  {
    wil::details::in1diag0::FailFast_Unexpected(v18);
    JUMPOUT(0x1800314E9LL);
  }
  *(_QWORD *)(a1 + 8) = a1 + 16;
  *(_WORD *)a1 = 2 * v17;
  *(_WORD *)(a1 + 2) = 164;
  return a1;
}
