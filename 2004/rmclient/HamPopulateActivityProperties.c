/*
 * XREFs of HamPopulateActivityProperties @ 0x1800071A0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18000AB30 (memset_0.c)
 */

__int64 __fastcall HamPopulateActivityProperties(_WORD *a1, _WORD *a2, __int64 a3)
{
  __int64 v6; // rbx
  _WORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _WORD *i; // rax
  _WORD *v11; // rcx
  char *v12; // rsi
  __int64 v13; // rdx
  __int16 v14; // ax
  _WORD *v15; // rax
  char *v16; // rdi
  __int16 v17; // cx
  __int64 result; // rax

  if ( !a1 )
    return 3221225711LL;
  v6 = 64LL;
  v7 = a1;
  v8 = 64LL;
  while ( *v7 )
  {
    ++v7;
    if ( !--v8 )
      return 3221225711LL;
  }
  if ( !a2 )
    return 3221225712LL;
  v9 = 64LL;
  for ( i = a2; *i; ++i )
  {
    if ( !--v9 )
      return 3221225712LL;
  }
  memset_0((void *)(a3 + 4), 0, 0x184uLL);
  v11 = (_WORD *)(a3 + 12);
  *(_DWORD *)a3 = 8397888;
  v12 = (char *)a1 - a3 - 12;
  v13 = 64LL;
  while ( v13 != -2147483582 )
  {
    v14 = *(_WORD *)((char *)v11 + (_QWORD)v12);
    if ( !v14 )
      break;
    *v11++ = v14;
    if ( !--v13 )
    {
      --v11;
      break;
    }
  }
  v15 = (_WORD *)(a3 + 140);
  *v11 = 0;
  v16 = (char *)a2 - a3 - 140;
  while ( v6 != -2147483582 )
  {
    v17 = *(_WORD *)((char *)v15 + (_QWORD)v16);
    if ( !v17 )
      break;
    *v15++ = v17;
    if ( !--v6 )
    {
      --v15;
      break;
    }
  }
  *v15 = 0;
  *(_DWORD *)(a3 + 268) = 5;
  result = 0LL;
  *(_DWORD *)(a3 + 276) = -1;
  *(_OWORD *)(a3 + 280) = 0LL;
  *(_OWORD *)(a3 + 296) = 0LL;
  *(_OWORD *)(a3 + 312) = 0LL;
  *(_OWORD *)(a3 + 328) = 0LL;
  *(_OWORD *)(a3 + 344) = 0LL;
  *(_OWORD *)(a3 + 360) = 0LL;
  *(_QWORD *)(a3 + 376) = 0LL;
  *(_OWORD *)(a3 + 320) = 0LL;
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
