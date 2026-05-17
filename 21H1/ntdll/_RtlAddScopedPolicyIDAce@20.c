/*
 * XREFs of _RtlAddScopedPolicyIDAce@20 @ 0x4B34B5F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

int __stdcall RtlAddScopedPolicyIDAce(int a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src)
{
  int result; // eax
  unsigned __int8 v6; // bl
  unsigned int v7; // edx
  unsigned __int16 v8; // ax
  unsigned int v9; // [esp+Ch] [ebp-10h] BYREF
  int Buf2; // [esp+10h] [ebp-Ch] BYREF
  __int16 v11; // [esp+14h] [ebp-8h]

  v9 = 0;
  Buf2 = 0;
  v11 = 4352;
  if ( !a1 )
    return -1073741705;
  if ( !RtlValidSid(Src) )
    return -1073741704;
  if ( memcmp(Src + 2, &Buf2, 6u) )
    return -1073741811;
  v6 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 > 4u || a2 > 4 )
    return -1073741735;
  if ( v6 <= (unsigned __int8)a2 )
    v6 = a2;
  if ( (a3 & 0xFFFFFFE0) != 0 || a4 )
    return -1073741811;
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, &v9) )
    return -1073741705;
  v7 = v9;
  v8 = 4 * (Src[1] + 4);
  Buf2 = v8;
  if ( !v9 || v9 + v8 > a1 + (unsigned int)*(unsigned __int16 *)(a1 + 2) )
    return -1073741671;
  *(_DWORD *)(v9 + 4) = 0;
  *(_BYTE *)(v7 + 1) = a3;
  *(_WORD *)(v7 + 2) = Buf2;
  *(_BYTE *)v7 = 19;
  RtlCopySid(4 * Src[1] + 8, (void *)(v7 + 8), Src);
  ++*(_WORD *)(a1 + 4);
  result = 0;
  *(_BYTE *)a1 = v6;
  return result;
}
