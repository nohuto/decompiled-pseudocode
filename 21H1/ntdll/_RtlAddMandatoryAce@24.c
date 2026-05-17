/*
 * XREFs of _RtlAddMandatoryAce@24 @ 0x4B2D66E0
 * Callers:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 * Callees:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

int __stdcall RtlAddMandatoryAce(int a1, unsigned int a2, int a3, char *Src, char a5, int a6)
{
  unsigned __int8 v6; // bl
  int v7; // edx
  unsigned __int16 v8; // ax
  int result; // eax
  int v10; // [esp+Ch] [ebp-10h] BYREF
  int Buf2; // [esp+10h] [ebp-Ch] BYREF
  __int16 v12; // [esp+14h] [ebp-8h]

  Buf2 = 0;
  v12 = 4096;
  if ( !a1 )
    return -1073741705;
  if ( a5 != 17 )
    return -1073741811;
  if ( !RtlValidSid(Src) )
    return -1073741704;
  if ( memcmp(Src + 2, &Buf2, 6u) )
    return -1073741811;
  v6 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 > 4u || a2 > 4 )
    return -1073741735;
  if ( v6 <= (unsigned __int8)a2 )
    v6 = a2;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFFFFFFF8) != 0 )
    return -1073741811;
  if ( !RtlValidAcl(a1) || !(unsigned __int8)RtlFirstFreeAce(a1, &v10) )
    return -1073741705;
  v7 = v10;
  v8 = 4 * ((unsigned __int8)Src[1] + 4);
  Buf2 = v8;
  if ( !v10 || v10 + (unsigned int)v8 > a1 + (unsigned int)*(unsigned __int16 *)(a1 + 2) )
    return -1073741671;
  *(_BYTE *)(v10 + 1) = a3;
  *(_WORD *)(v7 + 2) = Buf2;
  *(_DWORD *)(v7 + 4) = a6;
  *(_BYTE *)v7 = 17;
  RtlCopySid(4 * (unsigned __int8)Src[1] + 8, (void *)(v7 + 8), Src);
  ++*(_WORD *)(a1 + 4);
  result = 0;
  *(_BYTE *)a1 = v6;
  return result;
}
