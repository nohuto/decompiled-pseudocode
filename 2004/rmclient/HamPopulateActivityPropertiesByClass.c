/*
 * XREFs of HamPopulateActivityPropertiesByClass @ 0x180007CD0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18000AB30 (memset_0.c)
 */

__int64 __fastcall HamPopulateActivityPropertiesByClass(_WORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdi
  _WORD *v7; // rax
  __int64 v8; // r9
  wchar_t *v9; // r14
  _WORD *v10; // rax
  char *v11; // rbx
  __int64 v12; // rdx
  __int16 v13; // cx
  _WORD *v14; // rcx
  char *v15; // r14
  __int16 v16; // ax
  __int64 result; // rax
  unsigned int v18; // ebp
  unsigned int v19; // ebp
  unsigned int v20; // ebp
  unsigned int v21; // ebp

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
  if ( a2 > 6 )
    return 3221225712LL;
  _mm_lfence();
  v9 = off_180016250[a2];
  memset_0((void *)(a3 + 4), 0, 0x184uLL);
  v10 = (_WORD *)(a3 + 12);
  *(_DWORD *)a3 = 8397888;
  v11 = (char *)a1 - a3 - 12;
  v12 = 64LL;
  while ( v12 != -2147483582 )
  {
    v13 = *(_WORD *)&v11[(_QWORD)v10];
    if ( !v13 )
      break;
    *v10++ = v13;
    if ( !--v12 )
    {
      --v10;
      break;
    }
  }
  v14 = (_WORD *)(a3 + 140);
  *v10 = 0;
  v15 = (char *)v9 - a3 - 140;
  while ( v6 != -2147483582 )
  {
    v16 = *(_WORD *)((char *)v14 + (_QWORD)v15);
    if ( !v16 )
      break;
    *v14++ = v16;
    if ( !--v6 )
    {
      --v14;
      break;
    }
  }
  *v14 = 0;
  result = 0LL;
  *(_DWORD *)(a3 + 268) = 5;
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
  if ( a2 )
  {
    if ( a2 == 4 )
    {
      *(_DWORD *)(a3 + 276) = 0;
      *(_QWORD *)(a3 + 320) |= 0xAFuLL;
      *(_DWORD *)(a3 + 368) &= 0xFFFFFFDC;
      *(_QWORD *)(a3 + 352) = 0LL;
      *(_QWORD *)(a3 + 344) = 0LL;
      *(_QWORD *)(a3 + 336) = 0LL;
      *(_QWORD *)(a3 + 328) = 0LL;
      return result;
    }
    v18 = a2 - 1;
    if ( !v18 )
      goto LABEL_30;
    v19 = v18 - 1;
    if ( !v19 )
    {
      *(_DWORD *)(a3 + 4) |= 1u;
      *(_DWORD *)(a3 + 8) |= 1u;
      *(_DWORD *)(a3 + 4) |= 8u;
      *(_DWORD *)(a3 + 8) |= 0x10u;
      *(_DWORD *)(a3 + 268) = 3;
      *(_DWORD *)(a3 + 272) = 300;
      return result;
    }
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 2;
      if ( v21 )
      {
        if ( v21 == 1 )
        {
          *(_QWORD *)(a3 + 320) |= 0xAFuLL;
          *(_DWORD *)(a3 + 368) &= 0xFFFFFFDC;
          *(_DWORD *)(a3 + 276) = 0;
          *(_QWORD *)(a3 + 352) = 0LL;
          *(_QWORD *)(a3 + 344) = 0LL;
          *(_QWORD *)(a3 + 336) = 0LL;
          *(_QWORD *)(a3 + 328) = 0LL;
          *(_DWORD *)a3 &= ~0x400u;
          *(_DWORD *)a3 |= 0x1000u;
        }
      }
      else
      {
        *(_DWORD *)(a3 + 276) = 0;
        *(_QWORD *)(a3 + 320) |= 0xAFuLL;
        *(_DWORD *)(a3 + 368) &= 0xFFFFFFDC;
        *(_QWORD *)(a3 + 352) = 0LL;
        *(_QWORD *)(a3 + 344) = 0LL;
        *(_QWORD *)(a3 + 336) = 0LL;
        *(_QWORD *)(a3 + 328) = 0LL;
        *(_DWORD *)a3 &= ~0x400u;
      }
    }
    else
    {
LABEL_30:
      *(_DWORD *)(a3 + 276) = 0;
      *(_DWORD *)(a3 + 4) |= 4u;
      *(_DWORD *)(a3 + 8) |= 8u;
      *(_DWORD *)(a3 + 4) |= 1u;
      *(_DWORD *)(a3 + 8) |= 1u;
      *(_DWORD *)(a3 + 4) |= 8u;
      *(_DWORD *)(a3 + 8) |= 0x10u;
    }
  }
  else
  {
    *(_DWORD *)(a3 + 276) = 0;
    *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFE7FBE7F | 0x1804100;
  }
  return result;
}
