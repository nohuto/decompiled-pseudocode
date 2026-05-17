/*
 * XREFs of _RtlAddProcessTrustLabelAce@24 @ 0x4B34B140
 * Callers:
 *     <none>
 * Callees:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 *     _RtlIsValidProcessTrustLabelSid@4 @ 0x4B3466F0 (_RtlIsValidProcessTrustLabelSid@4.c)
 */

int __stdcall RtlAddProcessTrustLabelAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *Src,
        char a5,
        int a6)
{
  int result; // eax
  unsigned __int8 v7; // bl
  unsigned int v8; // edx
  __int16 v9; // [esp+Ch] [ebp-8h]
  unsigned int v10; // [esp+10h] [ebp-4h] BYREF

  if ( !a1 || !RtlValidAcl((int)a1) )
    return -1073741705;
  if ( a5 != 20 )
    return -1073741811;
  if ( !RtlValidSid(Src) )
    return -1073741704;
  if ( !RtlIsValidProcessTrustLabelSid((int)Src) )
    return -1073741811;
  v7 = *a1;
  if ( *a1 > 4u || a2 > 4 )
    return -1073741735;
  if ( v7 <= a2 )
    v7 = a2;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFF000000) != 0 )
    return -1073741811;
  if ( !RtlFirstFreeAce((int)a1, &v10) )
    return -1073741705;
  v8 = v10;
  v9 = 4 * (Src[1] + 4);
  if ( !v10 || v10 + (unsigned __int16)(4 * (Src[1] + 4)) > (unsigned int)&a1[*((unsigned __int16 *)a1 + 1)] )
    return -1073741671;
  *(_BYTE *)(v10 + 1) = a3;
  *(_WORD *)(v8 + 2) = v9;
  *(_DWORD *)(v8 + 4) = a6;
  *(_BYTE *)v8 = 20;
  RtlCopySid(4 * Src[1] + 8, (void *)(v8 + 8), Src);
  ++*((_WORD *)a1 + 2);
  result = 0;
  *a1 = v7;
  return result;
}
