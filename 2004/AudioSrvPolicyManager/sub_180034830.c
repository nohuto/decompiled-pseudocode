/*
 * XREFs of sub_180034830 @ 0x180034830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180034830(_QWORD *a1)
{
  __int64 v1; // rbx
  int v2; // edi
  DWORD LengthSid; // eax
  int v4; // ecx

  v1 = a1[20];
  v2 = a1[19] != 0LL ? 44 : 28;
  LengthSid = GetLengthSid(a1 + 2);
  v4 = v2 - 16;
  if ( v1 )
    v4 = v2;
  return v4 + LengthSid;
}
