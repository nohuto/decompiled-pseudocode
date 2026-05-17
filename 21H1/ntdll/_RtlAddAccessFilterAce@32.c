/*
 * XREFs of _RtlAddAccessFilterAce@32 @ 0x4B34AD40
 * Callers:
 *     <none>
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlIsValidProcessTrustLabelSid@4 @ 0x4B3466F0 (_RtlIsValidProcessTrustLabelSid@4.c)
 */

int __stdcall RtlAddAccessFilterAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        char *a4,
        char a5,
        int a6,
        void *a7,
        unsigned __int16 a8)
{
  unsigned __int8 v9; // cl
  __int16 v10; // dx
  unsigned int v11; // ebx
  unsigned __int8 v12; // al
  unsigned int v13; // [esp+Ch] [ebp-1Ch] BYREF
  void *Src; // [esp+10h] [ebp-18h]
  unsigned int v15; // [esp+14h] [ebp-14h] BYREF
  unsigned __int8 v16; // [esp+1Bh] [ebp-Dh]
  size_t Buf2; // [esp+1Ch] [ebp-Ch] BYREF
  __int16 v18; // [esp+20h] [ebp-8h]

  Src = a7;
  Buf2 = 0;
  v18 = 256;
  if ( !a1 || !RtlValidAcl((int)a1) )
    return -1073741705;
  if ( !a7 || a8 == 0xFFFF || a8 < 6u || *(_DWORD *)Src != 2020897377 || a5 != 21 )
    return -1073741811;
  if ( !RtlValidSid(a4) )
    return -1073741704;
  if ( (a3 & 0x40) != 0 )
  {
    if ( !RtlIsValidProcessTrustLabelSid((int)a4) )
      return -1073741811;
  }
  else if ( memcmp(a4 + 2, &Buf2, 6u) || a4[1] != 1 || *((_DWORD *)a4 + 2) )
  {
    return -1073741811;
  }
  v9 = *a1;
  v16 = v9;
  if ( v9 > 4u || a2 > 4 )
    return -1073741735;
  if ( v9 <= a2 )
    v16 = a2;
  if ( (a3 & 0xFFFFFFA0) != 0 || (a6 & 0xFF000000) != 0 )
    return -1073741811;
  if ( !RtlFirstFreeAce((int)a1, &v13) )
    return -1073741705;
  v15 = 4 * (unsigned __int8)a4[1] + 16;
  Buf2 = a8;
  if ( (RtlULongPtrAdd((a8 + 3) & 0xFFFFFFFC, v15, (int *)&v15) & 0x80000000) != 0 )
    return -1073741675;
  v10 = v15;
  if ( v15 > 0xFFFF )
    return -1073741811;
  v11 = v13;
  if ( !v13 || v15 + v13 > (unsigned int)&a1[*((unsigned __int16 *)a1 + 1)] )
    return -1073741671;
  *(_BYTE *)(v13 + 1) = a3;
  *(_DWORD *)(v11 + 4) = a6;
  *(_BYTE *)v11 = 21;
  *(_WORD *)(v11 + 2) = v10;
  RtlCopySid(4 * (unsigned __int8)a4[1] + 8, (void *)(v11 + 8), (unsigned __int8 *)a4);
  memcpy((void *)(v11 + 4 * ((unsigned __int8)a4[1] + 4)), Src, Buf2);
  v12 = v16;
  ++*((_WORD *)a1 + 2);
  *a1 = v12;
  return 0;
}
