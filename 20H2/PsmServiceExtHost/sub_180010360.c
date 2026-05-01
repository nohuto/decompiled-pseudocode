/*
 * XREFs of sub_180010360 @ 0x180010360
 * Callers:
 *     sub_180009F5C @ 0x180009F5C (sub_180009F5C.c)
 *     sub_18000D590 @ 0x18000D590 (sub_18000D590.c)
 *     sub_180010990 @ 0x180010990 (sub_180010990.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180010360(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // r10
  _WORD *v9; // rax
  __int64 v10; // rbx
  __int16 v11; // cx
  __int64 result; // rax

  memset((void *)a4, 0, 0x218uLL);
  v8 = 232LL;
  v9 = (_WORD *)a4;
  v10 = a1 - a4;
  while ( v8 != -2147483414 )
  {
    v11 = *(_WORD *)((char *)v9 + v10);
    if ( !v11 )
      break;
    *v9++ = v11;
    if ( !--v8 )
    {
      --v9;
      break;
    }
  }
  *v9 = 0;
  *(_OWORD *)(a4 + 464) = *(_OWORD *)a2;
  *(_OWORD *)(a4 + 480) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a4 + 496) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a4 + 512) = *(_OWORD *)(a2 + 48);
  result = *(unsigned int *)(a2 + 64);
  *(_DWORD *)(a4 + 532) = a3;
  *(_DWORD *)(a4 + 528) = result;
  return result;
}
