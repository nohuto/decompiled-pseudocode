/*
 * XREFs of sub_180081BA0 @ 0x180081BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180081BA0(__int64 a1, _QWORD *a2, __int64 a3, int a4, char a5)
{
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r11
  int v13; // esi
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx

  v9 = std::wstreambuf::gptr(a1);
  v10 = std::wstreambuf::pptr(a1);
  v11 = v10;
  if ( v10 && *(_QWORD *)(a1 + 104) < v10 )
    *(_QWORD *)(a1 + 104) = v10;
  v12 = **(_QWORD **)(a1 + 24);
  if ( !a4 )
  {
    v14 = 0LL;
    goto LABEL_19;
  }
  v13 = a4 - 1;
  if ( !v13 )
  {
    if ( (a5 & 3) != 3 )
    {
      if ( (a5 & 1) != 0 )
      {
        if ( !v9 && v12 )
          goto LABEL_32;
        v10 = v9;
      }
      else if ( (a5 & 2) == 0 || !v10 && v12 )
      {
        goto LABEL_32;
      }
      v14 = (__int64)(v10 - v12) >> 1;
      goto LABEL_19;
    }
LABEL_32:
    *a2 = -1LL;
    goto LABEL_33;
  }
  if ( v13 != 1 )
    goto LABEL_32;
  v14 = (*(_QWORD *)(a1 + 104) - v12) >> 1;
LABEL_19:
  v15 = v14 + a3;
  if ( v14 + a3 > (unsigned __int64)((*(_QWORD *)(a1 + 104) - v12) >> 1)
    || v15 && ((a5 & 1) != 0 && !v9 || (a5 & 2) != 0 && !v11) )
  {
    goto LABEL_32;
  }
  v16 = v12 + 2 * v15;
  if ( (a5 & 1) != 0 && v9 )
  {
    v17 = (*(_QWORD *)(a1 + 104) - v16) >> 1;
    **(_QWORD **)(a1 + 56) = v16;
    **(_DWORD **)(a1 + 80) = v17;
  }
  if ( (a5 & 2) != 0 && v11 )
  {
    v18 = **(int **)(a1 + 88);
    v19 = **(_QWORD **)(a1 + 64);
    **(_QWORD **)(a1 + 32) = v12;
    **(_QWORD **)(a1 + 64) = v16;
    **(_DWORD **)(a1 + 88) = (v19 + 2 * v18 - v16) >> 1;
  }
  *a2 = v15;
LABEL_33:
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}
