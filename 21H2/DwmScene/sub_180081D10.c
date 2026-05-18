/*
 * XREFs of sub_180081D10 @ 0x180081D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall sub_180081D10(__int64 a1, unsigned __int64 *a2, _QWORD *a3, char a4)
{
  unsigned __int64 v5; // rsi
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx

  v5 = *a3 + a3[1];
  v8 = std::wstreambuf::gptr(a1);
  v9 = std::wstreambuf::pptr(a1);
  if ( v9 && *(_QWORD *)(a1 + 104) < v9 )
    *(_QWORD *)(a1 + 104) = v9;
  v10 = **(_QWORD **)(a1 + 24);
  if ( v5 > (*(_QWORD *)(a1 + 104) - v10) >> 1 || v5 && ((a4 & 1) != 0 && !v8 || (a4 & 2) != 0 && !v9) )
  {
    *a2 = -1LL;
  }
  else
  {
    v11 = v10 + 2 * v5;
    if ( (a4 & 1) != 0 && v8 )
    {
      v12 = (*(_QWORD *)(a1 + 104) - v11) >> 1;
      **(_QWORD **)(a1 + 56) = v11;
      **(_DWORD **)(a1 + 80) = v12;
    }
    if ( (a4 & 2) != 0 && v9 )
    {
      v13 = **(int **)(a1 + 88);
      v14 = **(_QWORD **)(a1 + 64);
      **(_QWORD **)(a1 + 32) = v10;
      **(_QWORD **)(a1 + 64) = v11;
      **(_DWORD **)(a1 + 88) = (v14 + 2 * v13 - v11) >> 1;
    }
    *a2 = v5;
  }
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}
