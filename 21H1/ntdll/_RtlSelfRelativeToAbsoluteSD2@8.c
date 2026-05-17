/*
 * XREFs of _RtlSelfRelativeToAbsoluteSD2@8 @ 0x4B345B10
 * Callers:
 *     _RtlpSysVolCheckOwnerAndSecurity@8 @ 0x4B35DAEE (_RtlpSysVolCheckOwnerAndSecurity@8.c)
 * Callees:
 *     _RtlpQuerySecurityDescriptor@36 @ 0x4B2E6B3E (_RtlpQuerySecurityDescriptor@36.c)
 */

int __stdcall RtlSelfRelativeToAbsoluteSD2(int a1, _DWORD *a2)
{
  int result; // eax
  __int16 v3; // si
  int v4; // ecx
  unsigned int v5; // [esp+0h] [ebp-20h] BYREF
  unsigned int v6; // [esp+4h] [ebp-1Ch] BYREF
  unsigned int v7; // [esp+8h] [ebp-18h] BYREF
  unsigned int v8; // [esp+Ch] [ebp-14h] BYREF
  int v9; // [esp+10h] [ebp-10h] BYREF
  int v10; // [esp+14h] [ebp-Ch] BYREF
  int v11; // [esp+18h] [ebp-8h] BYREF
  int v12; // [esp+1Ch] [ebp-4h] BYREF

  if ( !a1 )
    return -1073741585;
  if ( !a2 )
    return -1073741584;
  if ( *a2 < 0x14u )
    return -1073741811;
  v3 = *(_WORD *)(a1 + 2);
  if ( v3 >= 0 )
    return -1073741593;
  RtlpQuerySecurityDescriptor(a1, &v12, &v5, &v11, &v6, &v9, &v7, &v10, &v8);
  *(_DWORD *)(v4 + 4) = v12;
  *(_DWORD *)(v4 + 8) = v11;
  *(_DWORD *)(v4 + 12) = v10;
  *(_DWORD *)(v4 + 16) = v9;
  result = 0;
  *(_WORD *)(v4 + 2) = v3 & 0x7FFF;
  return result;
}
