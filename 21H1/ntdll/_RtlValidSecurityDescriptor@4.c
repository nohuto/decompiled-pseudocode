/*
 * XREFs of _RtlValidSecurityDescriptor@4 @ 0x4B2E8170
 * Callers:
 *     _RtlpConvertToAutoInheritSecurityObject@24 @ 0x4B348358 (_RtlpConvertToAutoInheritSecurityObject@24.c)
 * Callees:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

bool __stdcall RtlValidSecurityDescriptor(int a1)
{
  _BYTE *v1; // ecx
  _BYTE *v2; // ecx
  __int16 v3; // ax
  int v4; // ecx
  __int16 v5; // ax
  int v7; // ecx

  if ( *(_BYTE *)a1 != 1 )
    return 0;
  v1 = *(_BYTE **)(a1 + 4);
  if ( *(__int16 *)(a1 + 2) < 0 )
    v1 = v1 != 0 ? &v1[a1] : 0;
  if ( v1 && !RtlValidSid(v1) )
    return 0;
  v2 = *(_BYTE **)(a1 + 8);
  if ( *(__int16 *)(a1 + 2) < 0 )
    v2 = v2 != 0 ? &v2[a1] : 0;
  if ( v2 && !RtlValidSid(v2) )
    return 0;
  v3 = *(_WORD *)(a1 + 2);
  if ( (v3 & 4) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 16);
    if ( v3 < 0 )
      v4 = v4 != 0 ? v4 + a1 : 0;
    if ( v4 && !RtlValidAcl(v4) )
      return 0;
  }
  v5 = *(_WORD *)(a1 + 2);
  if ( (v5 & 0x10) == 0 )
    return 1;
  v7 = *(_DWORD *)(a1 + 12);
  if ( v5 < 0 )
    v7 = v7 != 0 ? v7 + a1 : 0;
  return !v7 || RtlValidAcl(v7);
}
