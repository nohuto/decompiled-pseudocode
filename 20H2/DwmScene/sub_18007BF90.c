/*
 * XREFs of sub_18007BF90 @ 0x18007BF90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012A38 @ 0x180012A38 (sub_180012A38.c)
 *     memcpy @ 0x18011E094 (memcpy.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18007BF90(__int64 a1, unsigned __int16 a2)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r12
  const void *v10; // rsi
  unsigned __int64 v11; // r13
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    if ( a2 == 0xFFFF )
      return 0LL;
    v5 = std::wstreambuf::pptr();
    v6 = v5;
    v7 = **(_QWORD **)(a1 + 64) + 2LL * **(int **)(a1 + 88);
    if ( v5 && v5 < v7 )
    {
      *(_WORD *)std::wstreambuf::_Pninc(a1) = a2;
      *(_QWORD *)(a1 + 104) = v6 + 2;
      return a2;
    }
    v8 = 0LL;
    v9 = 32LL;
    v10 = **(const void ***)(a1 + 24);
    if ( !v5 || (v8 = (__int64)(v7 - (_QWORD)v10) >> 1, v8 < 0x20) )
    {
LABEL_13:
      v11 = 2 * v8;
      v12 = (__int64)sub_180012A38(a1 + 116, v9);
      memcpy((void *)v12, v10, 2 * v8);
      v13 = v12 + 2 * v8;
      *(_QWORD *)(a1 + 104) = v13 + 2;
      **(_QWORD **)(a1 + 32) = v12;
      **(_QWORD **)(a1 + 64) = v13;
      **(_DWORD **)(a1 + 88) = (__int64)(2 * v9 - 2 * v8) >> 1;
      if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      {
        **(_QWORD **)(a1 + 24) = v12;
        **(_QWORD **)(a1 + 56) = 0LL;
        **(_DWORD **)(a1 + 80) = v12 >> 1;
      }
      else
      {
        v14 = *(_QWORD *)(a1 + 104);
        v15 = v12 + 2 * ((std::wstreambuf::gptr(a1) - (__int64)v10) >> 1);
        **(_QWORD **)(a1 + 24) = v12;
        **(_QWORD **)(a1 + 56) = v15;
        **(_DWORD **)(a1 + 80) = (v14 - v15) >> 1;
      }
      v16 = *(_DWORD *)(a1 + 112);
      if ( (v16 & 1) != 0 )
      {
        if ( v11 >= 0x1000 )
        {
          v17 = *((_QWORD *)v10 - 1);
          if ( (unsigned __int64)v10 - v17 - 8 > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v17, v13);
            __debugbreak();
          }
          v10 = (const void *)*((_QWORD *)v10 - 1);
        }
        j_j__o_free(v10);
        v16 = *(_DWORD *)(a1 + 112);
      }
      *(_DWORD *)(a1 + 112) = v16 | 1;
      *(_WORD *)std::wstreambuf::_Pninc(a1) = a2;
      return a2;
    }
    if ( v8 < 0x3FFFFFFF )
    {
      v9 = 2 * v8;
      goto LABEL_13;
    }
    v9 = 0x7FFFFFFFLL;
    if ( v8 < 0x7FFFFFFF )
      goto LABEL_13;
  }
  return 0xFFFFLL;
}
