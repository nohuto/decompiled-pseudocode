/*
 * XREFs of _RtlValidRelativeSecurityDescriptor@12 @ 0x4B2EB6E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlpValidateSDOffsetAndSize@16 @ 0x4B2EB825 (_RtlpValidateSDOffsetAndSize@16.c)
 */

char __stdcall RtlValidRelativeSecurityDescriptor(int a1, unsigned int a2, char a3)
{
  __int16 v3; // bx
  int v4; // ecx
  unsigned __int8 v5; // al
  int v6; // ecx
  unsigned __int8 v7; // al
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned int v12; // [esp+Ch] [ebp-4h] BYREF

  if ( a2 < 0x14 )
    return 0;
  if ( *(_BYTE *)a1 != 1 )
    return 0;
  v3 = *(_WORD *)(a1 + 2);
  if ( v3 >= 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 4) )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(12, &v12) )
      return 0;
    if ( *(_BYTE *)(v4 + a1) != 1 )
      return 0;
    v5 = *(_BYTE *)(v4 + a1 + 1);
    if ( v5 > 0xFu || v12 < 4 * (unsigned int)v5 + 8 )
      return 0;
  }
  else if ( (a3 & 1) != 0 )
  {
    return 0;
  }
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(12, &v12) )
      return 0;
    if ( *(_BYTE *)(v6 + a1) != 1 )
      return 0;
    v7 = *(_BYTE *)(v6 + a1 + 1);
    if ( v7 > 0xFu || v12 < 4 * (unsigned int)v7 + 8 )
      return 0;
  }
  else if ( (a3 & 2) != 0 )
  {
    return 0;
  }
  if ( (v3 & 4) == 0
    || !*(_DWORD *)(a1 + 16)
    || (unsigned __int8)RtlpValidateSDOffsetAndSize(8, &v12)
    && (v9 = a1 + v8, v12 >= *(unsigned __int16 *)(v9 + 2))
    && RtlValidAcl(v9) )
  {
    if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0
      || !*(_DWORD *)(a1 + 12)
      || (unsigned __int8)RtlpValidateSDOffsetAndSize(8, &v12)
      && v12 >= *(unsigned __int16 *)(v10 + a1 + 2)
      && RtlValidAcl(v10 + a1) )
    {
      return 1;
    }
  }
  return 0;
}
