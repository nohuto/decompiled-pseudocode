/*
 * XREFs of _RtlpAddKnownObjectAce@32 @ 0x4B34B856
 * Callers:
 *     _RtlAddAccessAllowedObjectAce@28 @ 0x4B34AC40 (_RtlAddAccessAllowedObjectAce@28.c)
 *     _RtlAddAccessDeniedObjectAce@28 @ 0x4B34ACF0 (_RtlAddAccessDeniedObjectAce@28.c)
 *     _RtlAddAuditAccessObjectAce@36 @ 0x4B34AFA0 (_RtlAddAuditAccessObjectAce@36.c)
 * Callees:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 */

int __fastcall RtlpAddKnownObjectAce(
        int a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        _DWORD *a6,
        unsigned __int8 *Src,
        char a8)
{
  int result; // eax
  unsigned int v11; // eax
  unsigned __int16 v12; // si
  unsigned int v13; // edx
  int v14; // eax
  _DWORD *v15; // edx
  _DWORD *v16; // edi
  _DWORD *v17; // edi
  unsigned int v18; // [esp+Ch] [ebp-Ch]
  unsigned int v19; // [esp+10h] [ebp-8h] BYREF
  int v20; // [esp+14h] [ebp-4h]

  if ( !RtlValidSid(Src) )
    return -1073741704;
  if ( *(_BYTE *)a1 > 4u || a2 != 4 )
    return -1073741735;
  v11 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a8 == 7 )
      v11 = a3 & 0xFFFFFF20;
    if ( v11 )
      return -1073741811;
  }
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, &v19) )
    return -1073741705;
  v18 = 4 * Src[1] + 8;
  v12 = 4 * Src[1] + 20;
  if ( a5 )
    v12 = 4 * Src[1] + 36;
  v20 = a5 != 0;
  if ( a6 )
  {
    v12 += 16;
    v20 = (a5 != 0) | 2;
  }
  v13 = v19;
  if ( !v19 || v19 + v12 > a1 + (unsigned int)*(unsigned __int16 *)(a1 + 2) )
    return -1073741671;
  *(_BYTE *)(v19 + 1) = a3;
  *(_BYTE *)v13 = a8;
  *(_DWORD *)(v13 + 4) = a4;
  v14 = v20;
  *(_WORD *)(v13 + 2) = v12;
  *(_DWORD *)(v13 + 8) = v14;
  v15 = (_DWORD *)(v13 + 12);
  if ( a5 )
  {
    v16 = v15;
    v15 += 4;
    *v16++ = *a5;
    *v16++ = a5[1];
    *v16 = a5[2];
    v16[1] = a5[3];
  }
  if ( a6 )
  {
    v17 = v15;
    v15 += 4;
    *v17++ = *a6;
    *v17++ = a6[1];
    *v17 = a6[2];
    v17[1] = a6[3];
  }
  RtlCopySid(v18, v15, Src);
  ++*(_WORD *)(a1 + 4);
  result = 0;
  *(_BYTE *)a1 = 4;
  return result;
}
