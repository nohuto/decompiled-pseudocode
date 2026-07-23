/*
 * XREFs of LdrApplyDynamicRelocations @ 0x1403B6C58
 * Callers:
 *     MiApplyDynamicRelocations @ 0x140A505D8 (MiApplyDynamicRelocations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrApplyDynamicRelocations(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int *v8; // r8
  unsigned __int64 v9; // rcx
  bool v10; // zf
  unsigned int *v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  unsigned int *v14; // rax
  __int64 v15; // rcx
  unsigned int *v16; // r8
  __int64 v17; // r10
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  unsigned __int16 *v20; // rbx
  unsigned int i; // r10d
  __int64 v22; // rax
  unsigned __int64 v23; // rcx

  if ( *a2 != 1 )
    return 3221225659LL;
  v8 = a2 + 2;
  v9 = (unsigned __int64)a2 + (unsigned int)a2[1] + 8;
  v10 = v9 == (_QWORD)(a2 + 2);
  if ( v9 >= (unsigned __int64)(a2 + 2) )
  {
    v11 = a2 + 2;
    if ( v10 )
      return 0LL;
    while ( 1 )
    {
      v12 = v11[2];
      v13 = (unsigned __int64)v11 + v12 + 12;
      if ( v11 < v8 || v13 > v9 || v13 < (unsigned __int64)v11 )
        break;
      if ( *(_QWORD *)v11 == a6 )
      {
        v14 = v11 + 3;
        if ( v11 + 3 == (unsigned int *)v13 )
          return 0LL;
        while ( 1 )
        {
          v15 = v14[1];
          if ( (unsigned int)v15 < 0xA )
            break;
          if ( (v15 & 1) != 0 )
            break;
          v16 = (unsigned int *)((char *)v14 + v15);
          v17 = (unsigned int)v15;
          if ( v14 <= v11 || (unsigned __int64)v16 > v13 || v16 < v14 )
            break;
          v18 = a1 + *v14;
          v19 = (unsigned __int64)(v17 - 8) >> 1;
          v20 = (unsigned __int16 *)(v14 + 2);
          for ( i = 0; i < (unsigned int)v19; v18 = v23 & 0xFFFFFFFFFFFFF000uLL )
          {
            v22 = *v20;
            if ( !(_WORD)v22 && i )
              break;
            if ( (unsigned __int16)v22 >= 0x1000u )
              return 3221225595LL;
            v23 = v22 | v18;
            ++i;
            ++v20;
            *(_QWORD *)v23 += a7 - a6;
          }
          v14 = v16;
          if ( v16 == (unsigned int *)v13 )
            return 0LL;
        }
        return 3221225595LL;
      }
      v11 = (unsigned int *)((char *)v11 + v12 + 12);
      if ( v13 == v9 )
        return 0LL;
    }
  }
  return 3221225595LL;
}
