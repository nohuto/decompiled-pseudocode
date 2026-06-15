/*
 * XREFs of sub_18002903C @ 0x18002903C
 * Callers:
 *     sub_180028F24 @ 0x180028F24 (sub_180028F24.c)
 * Callees:
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_18002903C(__int64 a1, unsigned int a2, _OWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v7; // rcx
  __int64 *v10; // rdi
  __int64 v11; // rcx
  unsigned int v12; // r14d
  int v13; // eax
  int v14; // esi
  __int64 v15; // rax
  _OWORD *v16; // rcx
  int v17; // eax
  int v18; // esi
  __int64 v19; // rax
  _OWORD *v20; // rcx
  unsigned int v21; // ebx
  __int64 v23; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
  {
    _o_free(v7);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  *(_DWORD *)(a1 + 48) = 0;
  v10 = (__int64 *)(a1 + 56);
  *(_DWORD *)(a1 + 52) = 0;
  v11 = *(_QWORD *)(a1 + 56);
  if ( v11 )
  {
    _o_free(v11);
    *v10 = 0LL;
  }
  *(_DWORD *)(a1 + 64) = 0;
  v12 = 0;
  for ( *(_DWORD *)(a1 + 68) = 0; v12 < a2; *(_DWORD *)(a1 + 64) = v17 + 1 )
  {
    v13 = *(_DWORD *)(a1 + 48);
    if ( v13 == *(_DWORD *)(a1 + 52) )
    {
      if ( *(_DWORD *)(a1 + 52) )
      {
        v14 = 2 * v13;
        if ( (v13 & 0x40000000) != 0 )
          goto LABEL_26;
      }
      else
      {
        v14 = 1;
      }
      if ( (unsigned __int64)v14 > 0x7FFFFFF || (v15 = o__recalloc(*(_QWORD *)(a1 + 40), v14, 16LL)) == 0 )
      {
LABEL_26:
        v23 = 70LL;
        goto LABEL_30;
      }
      *(_QWORD *)(a1 + 40) = v15;
      v13 = *(_DWORD *)(a1 + 48);
      *(_DWORD *)(a1 + 52) = v14;
    }
    v16 = (_OWORD *)(*(_QWORD *)(a1 + 40) + 16LL * v13);
    if ( v16 )
    {
      *v16 = *a3;
      v13 = *(_DWORD *)(a1 + 48);
    }
    *(_DWORD *)(a1 + 48) = v13 + 1;
    v17 = *(_DWORD *)(a1 + 64);
    if ( v17 == *(_DWORD *)(a1 + 68) )
    {
      if ( *(_DWORD *)(a1 + 68) )
      {
        v18 = 2 * v17;
        if ( (v17 & 0x40000000) != 0 )
          goto LABEL_28;
      }
      else
      {
        v18 = 1;
      }
      if ( (unsigned __int64)v18 > 0x7FFFFFF || (v19 = o__recalloc(*v10, v18, 16LL)) == 0 )
      {
LABEL_28:
        v23 = 72LL;
        goto LABEL_30;
      }
      *v10 = v19;
      v17 = *(_DWORD *)(a1 + 64);
      *(_DWORD *)(a1 + 68) = v18;
    }
    v20 = (_OWORD *)(*v10 + 16LL * v17);
    if ( v20 )
    {
      *v20 = *a3;
      v17 = *(_DWORD *)(a1 + 64);
    }
    ++v12;
    ++a3;
  }
  v21 = 0;
  if ( !a4 )
    return 0LL;
  while ( (unsigned int)sub_1800273F8((__int64)v10, (_OWORD *)(a5 + 16LL * v21)) )
  {
    if ( ++v21 >= a4 )
      return 0LL;
  }
  v23 = 77LL;
LABEL_30:
  sub_18004BD84(retaddr, v23, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", 2147942414LL);
  return 2147942414LL;
}
