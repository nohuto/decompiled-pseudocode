/*
 * XREFs of _RtlAddCompoundAce@24 @ 0x4B34B010
 * Callers:
 *     <none>
 * Callees:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 */

int __stdcall RtlAddCompoundAce(
        int a1,
        unsigned int a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int8 *Src,
        unsigned __int8 *a6)
{
  unsigned __int8 v6; // bl
  unsigned int v7; // edi
  unsigned __int16 v8; // ax
  int result; // eax
  unsigned int v10; // [esp+10h] [ebp-4h] BYREF

  if ( !RtlValidSid(Src) || !RtlValidSid(a6) )
    return -1073741704;
  v6 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 > 4u || a2 < 3 || a2 > 4 )
    return -1073741735;
  if ( v6 <= (unsigned __int8)a2 )
    v6 = a2;
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, &v10) )
    return -1073741705;
  v7 = v10;
  v8 = 4 * (a6[1] + 7 + Src[1]);
  if ( !v10 || v10 + v8 > a1 + (unsigned int)*(unsigned __int16 *)(a1 + 2) )
    return -1073741671;
  *(_WORD *)(v10 + 2) = v8;
  *(_DWORD *)(v7 + 4) = a4;
  *(_WORD *)(v7 + 8) = a3;
  *(_WORD *)v7 = 4;
  RtlCopySid(4 * Src[1] + 8, (void *)(v7 + 12), Src);
  RtlCopySid(4 * a6[1] + 8, (void *)(v7 + 4 * (Src[1] + 5)), a6);
  ++*(_WORD *)(a1 + 4);
  result = 0;
  *(_BYTE *)a1 = v6;
  return result;
}
