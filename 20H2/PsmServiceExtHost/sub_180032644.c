/*
 * XREFs of sub_180032644 @ 0x180032644
 * Callers:
 *     sub_180032330 @ 0x180032330 (sub_180032330.c)
 * Callees:
 *     sub_18006E348 @ 0x18006E348 (sub_18006E348.c)
 *     sub_18006EA3C @ 0x18006EA3C (sub_18006EA3C.c)
 *     sub_18006EC04 @ 0x18006EC04 (sub_18006EC04.c)
 *     sub_18006EC58 @ 0x18006EC58 (sub_18006EC58.c)
 *     sub_18006F614 @ 0x18006F614 (sub_18006F614.c)
 */

signed __int64 __fastcall sub_180032644(__int64 a1, unsigned int a2, __int64 a3, bool *a4)
{
  signed __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  signed __int64 v11; // rcx
  signed __int64 v12; // rdi
  __int64 v13; // r8
  signed __int64 *v14; // rcx
  signed __int64 v15; // rbx
  signed __int64 v16; // rax
  bool v17; // zf
  char v18; // dl
  unsigned __int64 v19; // rcx
  __int64 v20; // r11
  __int64 i; // r10
  __int64 *v22; // r10

  *a4 = *(_DWORD *)(a1 + 136) != 0;
  result = a1 + 88;
  v8 = *(_QWORD *)(a1 + 88);
  if ( v8 != a1 + 88 )
  {
    v12 = v8 - 88;
    goto LABEL_26;
  }
  v9 = a1 + 8;
  result = *(_QWORD *)v9;
  if ( (*(_BYTE *)(v9 + 8) & 1) != 0 && result )
    result ^= v9;
  v10 = *(_BYTE *)(v9 + 8) & 1;
  while ( 1 )
  {
    if ( !result )
      return result;
    if ( a2 < *(_DWORD *)(result + 100) )
    {
      v11 = *(_QWORD *)result;
      goto LABEL_10;
    }
    if ( a2 <= *(_DWORD *)(result + 100) )
      break;
    v11 = *(_QWORD *)(result + 8);
LABEL_10:
    if ( (_DWORD)v10 && v11 )
      result ^= v11;
    else
      result = v11;
  }
  v12 = result - 8;
  result = _InterlockedIncrement64((volatile signed __int64 *)(result - 8));
  if ( result <= 1 )
    __fastfail(0xEu);
  if ( v12 )
  {
    if ( (*(_BYTE *)(v12 + 170) & 5) == 1 && (unsigned __int8)sub_18006EA3C(v12, v10) )
    {
      *(_DWORD *)(v12 + 104) = 0;
      result = v12 + 88;
      *(_BYTE *)(v12 + 171) |= 1u;
      v14 = *(signed __int64 **)(v13 + 8);
      if ( *v14 != a3 )
        __fastfail(3u);
      *(_QWORD *)result = a3;
      *(_QWORD *)(v12 + 96) = v14;
      *v14 = result;
      *(_QWORD *)(v13 + 8) = result;
LABEL_26:
      v15 = *(_QWORD *)(v12 + 72);
      if ( v15 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            result = sub_18006EC58(v15, a3);
            if ( (int)result < 0 )
              goto LABEL_47;
            v16 = *(_QWORD *)v15;
            if ( *(_QWORD *)v15 )
            {
              v17 = (*(_BYTE *)(v12 + 80) & 1) == 0;
              goto LABEL_32;
            }
            v16 = *(_QWORD *)(v15 + 8);
            v18 = *(_BYTE *)(v12 + 80) & 1;
            if ( v16 )
            {
              v17 = v18 == 0;
LABEL_32:
              if ( v17 )
                v15 = v16;
              else
                v15 ^= v16;
              continue;
            }
            break;
          }
          result = v15;
LABEL_36:
          result = *(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v18 )
          {
            if ( !result )
              goto LABEL_47;
            result ^= v15;
          }
          if ( !result )
            goto LABEL_47;
          v19 = *(_QWORD *)(result + 8);
          if ( v18 )
          {
            if ( v19 )
            {
              v19 ^= result;
              goto LABEL_43;
            }
          }
          else
          {
LABEL_43:
            if ( v19 && v19 != v15 )
            {
              v15 = v19;
              continue;
            }
          }
          break;
        }
        v15 = result;
        goto LABEL_36;
      }
LABEL_47:
      v20 = a1 + 24;
      for ( i = *(_QWORD *)(a1 + 24); i != v20; i = *v22 )
      {
        result = sub_18006F614(i - 56);
        if ( (_BYTE)result && (*((_BYTE *)v22 + 114) & 8) == 0 )
          result = sub_18006EC04(v22 - 7, a3);
      }
    }
    else
    {
      return sub_18006E348((PVOID)v12);
    }
  }
  return result;
}
