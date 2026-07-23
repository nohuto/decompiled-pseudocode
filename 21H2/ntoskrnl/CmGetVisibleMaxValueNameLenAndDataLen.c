/*
 * XREFs of CmGetVisibleMaxValueNameLenAndDataLen @ 0x14065F7F8
 * Callers:
 *     CmpQueryKeyDataFromCache @ 0x14065F57C (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x14065F940 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmGetVisibleMaxValueNameLenAndDataLen(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int *a5)
{
  unsigned int *v5; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rax
  unsigned __int16 v13; // dx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  int v16; // [rsp+48h] [rbp+10h] BYREF
  int v17; // [rsp+4Ch] [rbp+14h]
  int v18; // [rsp+58h] [rbp+20h] BYREF
  int v19; // [rsp+5Ch] [rbp+24h]

  v5 = a5;
  *a4 = 0;
  v17 = 0;
  v16 = -1;
  *v5 = 0;
  v18 = -1;
  v19 = 0;
  if ( a2 )
  {
    *a4 = *(_DWORD *)(a2 + 60);
    *v5 = *(_DWORD *)(a2 + 64);
  }
  if ( !a1 )
    return 0LL;
  *a4 = *(unsigned __int16 *)(a1 + 178);
  *v5 = *(_DWORD *)(a1 + 180);
  if ( !a3 )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 288);
  if ( !v9 )
    return 0LL;
  if ( v9 != a3 )
    return 0LL;
  *a4 = 0;
  *v5 = 0;
  if ( !*(_DWORD *)(a1 + 280) )
    return 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
          *(_QWORD *)(a1 + 32),
          *(unsigned int *)(a1 + 284),
          &v16);
  if ( v10 )
  {
    v11 = 0LL;
    if ( *(_DWORD *)(a1 + 280) )
    {
      while ( 1 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
                *(_QWORD *)(a1 + 32),
                *(unsigned int *)(v10 + 4 * v11),
                &v18);
        if ( !v12 )
          break;
        v13 = 2 * *(_WORD *)(v12 + 2);
        if ( (*(_BYTE *)(v12 + 16) & 1) == 0 )
          v13 = *(_WORD *)(v12 + 2);
        if ( *a4 < (unsigned int)v13 )
          *a4 = v13;
        v14 = *(_DWORD *)(v12 + 4);
        v15 = v14 + 0x80000000;
        if ( v14 < 0x80000000 )
          v15 = v14;
        if ( *v5 < v15 )
          *v5 = v15;
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v18);
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 280) )
          goto LABEL_21;
      }
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v16);
      return 3221225626LL;
    }
LABEL_21:
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v16);
    return 0LL;
  }
  return 3221225626LL;
}
