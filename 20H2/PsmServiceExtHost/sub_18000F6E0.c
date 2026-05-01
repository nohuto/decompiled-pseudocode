/*
 * XREFs of sub_18000F6E0 @ 0x18000F6E0
 * Callers:
 *     sub_180027DE0 @ 0x180027DE0 (sub_180027DE0.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18000F6E0(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *v6; // rax
  __int64 v7; // r10
  __int64 v8; // rbx
  __int64 v9; // r9
  __int16 v10; // cx
  _WORD *v11; // rcx
  __int64 v12; // rdi
  __int16 v13; // ax
  __int64 result; // rax

  memset((void *)(a3 + 4), 0, 0x184uLL);
  v6 = (_WORD *)(a3 + 12);
  *(_DWORD *)a3 = 8397888;
  v7 = 64LL;
  v8 = a1 - (a3 + 12);
  v9 = 64LL;
  while ( v9 != -2147483582 )
  {
    v10 = *(_WORD *)((char *)v6 + v8);
    if ( !v10 )
      break;
    *v6++ = v10;
    if ( !--v9 )
    {
      --v6;
      break;
    }
  }
  v11 = (_WORD *)(a3 + 140);
  *v6 = 0;
  v12 = a2 - (a3 + 140);
  while ( v7 != -2147483582 )
  {
    v13 = *(_WORD *)((char *)v11 + v12);
    if ( !v13 )
      break;
    *v11++ = v13;
    if ( !--v7 )
    {
      --v11;
      break;
    }
  }
  *v11 = 0;
  *(_DWORD *)(a3 + 268) = 5;
  *(_DWORD *)(a3 + 276) = -1;
  memset((void *)(a3 + 280), 0, 0x68uLL);
  *(_OWORD *)(a3 + 320) = 0LL;
  result = 0LL;
  *(_OWORD *)(a3 + 336) = 0LL;
  *(_OWORD *)(a3 + 352) = 0LL;
  *(_QWORD *)(a3 + 368) = 0LL;
  *(_QWORD *)(a3 + 352) = -1LL;
  *(_QWORD *)(a3 + 344) = -1LL;
  *(_QWORD *)(a3 + 336) = -1LL;
  *(_QWORD *)(a3 + 328) = -1LL;
  *(_QWORD *)(a3 + 320) |= 0x80uLL;
  *(_DWORD *)(a3 + 368) = 33;
  return result;
}
