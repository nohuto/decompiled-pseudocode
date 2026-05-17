/*
 * XREFs of RtlAddAccessFilterAce @ 0x1800E9560
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x180037710 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180037760 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180037950 (RtlValidSid.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x180068700 (RtlIsValidProcessTrustLabelSid.c)
 *     RtlCopySid @ 0x180068900 (RtlCopySid.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     memmove @ 0x1800A44C0 (memmove.c)
 */

__int64 __fastcall RtlAddAccessFilterAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        char a5,
        int a6,
        _DWORD *Src,
        unsigned __int16 a8)
{
  __int64 result; // rax
  int v13; // ecx
  unsigned __int8 v14; // bp
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  __int64 v17; // rsi
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF

  LODWORD(v18) = 0;
  WORD2(v18) = 256;
  if ( !a1 || !RtlValidAcl((__int64)a1) )
    return 3221225591LL;
  if ( !Src || (unsigned __int16)(a8 - 6) > 0xFFF8u || *Src != 2020897377 || a5 != 21 )
    return 3221225485LL;
  if ( !RtlValidSid((_BYTE *)a4) )
    return 3221225592LL;
  if ( (a3 & 0x40) != 0 )
  {
    if ( !RtlIsValidProcessTrustLabelSid(a4) )
      return 3221225485LL;
  }
  else
  {
    v13 = *(_DWORD *)(a4 + 2) - v18;
    if ( !v13 )
      v13 = *(unsigned __int16 *)(a4 + 6) - WORD2(v18);
    if ( v13 || *(_BYTE *)(a4 + 1) != 1 || *(_DWORD *)(a4 + 8) )
      return 3221225485LL;
  }
  if ( *a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v14 = *a1;
  if ( *a1 <= a2 )
    v14 = a2;
  if ( (a3 & 0xFFFFFFA0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce((__int64)a1, &v18) )
    return 3221225591LL;
  v15 = (a8 + 3) & 0xFFFFFFFC;
  v16 = v15 + 4 * (*(unsigned __int8 *)(a4 + 1) + 4);
  if ( v16 < v15 )
    return 3221225621LL;
  if ( v16 > 0xFFFF )
    return 3221225485LL;
  v17 = v18;
  if ( !v18 || v18 + (unsigned __int64)v16 > (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
    return 3221225625LL;
  *(_WORD *)(v18 + 2) = v16;
  *(_BYTE *)(v17 + 1) = a3;
  *(_BYTE *)v17 = 21;
  *(_DWORD *)(v17 + 4) = a6;
  RtlCopySid(4 * *(unsigned __int8 *)(a4 + 1) + 8, (void *)(v17 + 8), (unsigned __int8 *)a4);
  memmove((void *)(v17 + 4 * (*(unsigned __int8 *)(a4 + 1) + 4LL)), Src, a8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v14;
  return result;
}
