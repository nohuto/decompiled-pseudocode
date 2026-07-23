/*
 * XREFs of _RtlIsElevatedRid@4 @ 0x4B346500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsElevatedRid(PSID_AND_ATTRIBUTES SidAttr)
{
  _DWORD *Sid; // ecx
  unsigned __int8 v2; // dl
  int v3; // ecx
  int v4; // eax

  if ( !SidAttr )
    return 0;
  if ( (SidAttr->Attributes & 0x30) != 0 )
    return 0;
  Sid = SidAttr->Sid;
  v2 = *((_BYTE *)SidAttr->Sid + 1);
  if ( !v2 || (unsigned int)(Sid[2] - 80) <= 0x1F )
    return 0;
  v3 = Sid[v2 + 1];
  v4 = 0;
  while ( v3 != dword_4B2980A0[v4] )
  {
    if ( (unsigned int)++v4 >= 19 )
      return 0;
  }
  return 1;
}
