/*
 * XREFs of ExpGetNumberOfInitialSessionsFromRegistry @ 0x1407D1D88
 * Callers:
 *     ExIsMultiSessionSku @ 0x1407D1D18 (ExIsMultiSessionSku.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall ExpGetNumberOfInitialSessionsFromRegistry(_DWORD *a1)
{
  __int64 result; // rax
  _QWORD v3[15]; // [rsp+30h] [rbp-78h] BYREF
  int v4; // [rsp+B8h] [rbp+10h] BYREF

  v4 = 0;
  memset(v3, 0, 0x70uLL);
  LODWORD(v3[1]) = 292;
  LODWORD(v3[4]) = 67108868;
  v3[2] = L"NumberOfInitialSessions";
  v3[3] = &v4;
  result = RtlpQueryRegistryValues(2LL, L"Session Manager", (__int64)v3, 0LL);
  if ( (int)result >= 0 )
    *a1 = v4;
  return result;
}
