/*
 * XREFs of _RtlSidHashInitialize@12 @ 0x4B347390
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __cdecl RtlSidHashInitialize(
        PSID_AND_ATTRIBUTES SidAttr,
        ULONG SidCount,
        PSID_AND_ATTRIBUTES_HASH SidAttrHash)
{
  int v3; // esi
  ULONG v5; // esi
  PSID_AND_ATTRIBUTES v6; // eax
  ULONG v7; // ebx
  _BYTE *Sid; // edx
  int v9; // ecx
  int v10; // eax
  size_t v11; // [esp-8h] [ebp-10h]
  ULONG v12; // [esp+4h] [ebp-4h]

  if ( !SidAttrHash )
    return -1073741811;
  HIDWORD(v11) = v3;
  LODWORD(v11) = 136;
  v5 = 0;
  v12 = 0;
  memset(SidAttrHash, 0, v11);
  v6 = SidAttr;
  if ( SidAttr )
  {
    v7 = SidCount;
    if ( SidCount )
    {
      SidAttrHash->SidAttr = SidAttr;
      SidAttrHash->SidCount = SidCount;
      if ( SidCount > 0x20 )
        v7 = 32;
      if ( v7 )
      {
        do
        {
          Sid = v6[v5].Sid;
          v9 = (unsigned __int8)Sid[4 * (unsigned __int8)Sid[1] + 4] >> 4;
          v10 = Sid[4 * (unsigned __int8)Sid[1] + 4] & 0xF;
          *((_DWORD *)SidAttrHash->Hash + v10) |= 1 << v12;
          *((_DWORD *)&SidAttrHash->Hash[8] + v9) |= 1 << v12;
          v6 = SidAttr;
          v5 = v12 + 1;
          v12 = v5;
        }
        while ( v5 < v7 );
      }
    }
  }
  return 0;
}
