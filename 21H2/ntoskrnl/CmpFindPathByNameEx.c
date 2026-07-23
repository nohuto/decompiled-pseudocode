/*
 * XREFs of CmpFindPathByNameEx @ 0x1405CC874
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x140649DB0 (CmpVEExecuteOpenLogic.c)
 *     CmpFindPathByName @ 0x140666308 (CmpFindPathByName.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140870D88 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407ACAF8 (CmpFindSubKeyByNameWithStatus.c)
 */

char __fastcall CmpFindPathByNameEx(__int64 a1, __m128i *a2, UNICODE_STRING *a3, int a4, unsigned int *a5, _QWORD *a6)
{
  unsigned int *v6; // r13
  unsigned __int16 v7; // r14
  _QWORD *v11; // rcx
  __m128i v12; // xmm0
  unsigned __int16 v13; // bx
  __int16 v15; // si
  __int64 (__fastcall **v16)(PVOID, _QWORD, int *); // r15
  unsigned int v17; // ecx
  wchar_t *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 (__fastcall **v21)(PVOID, _QWORD, int *); // rcx
  _QWORD *v22; // rax
  unsigned __int64 v23; // rax
  UNICODE_STRING v24; // [rsp+20h] [rbp-20h]
  _QWORD v25[2]; // [rsp+30h] [rbp-10h] BYREF
  int v26; // [rsp+88h] [rbp+48h] BYREF
  int v27; // [rsp+8Ch] [rbp+4Ch]
  int v28; // [rsp+98h] [rbp+58h]

  v28 = a4;
  v6 = a5;
  v7 = 0;
  v25[0] = 0LL;
  v26 = -1;
  *a5 = -1;
  v11 = a6;
  v27 = 0;
  *a6 = 0LL;
  if ( a3 )
  {
    RtlInitUnicodeString(a3, 0LL);
    v11 = a6;
  }
  v12 = *a2;
  v13 = _mm_cvtsi128_si32(*a2);
  v24 = (UNICODE_STRING)v12;
  v24.Length = v13;
  if ( v13 )
  {
    v15 = v12.m128i_i16[1];
    if ( a1 )
    {
      v16 = *(__int64 (__fastcall ***)(PVOID, _QWORD, int *))(a1 + 32);
      *v11 = v16;
      v17 = *(_DWORD *)(a1 + 40);
      v18 = (wchar_t *)v12.m128i_i64[1];
      *v6 = v17;
    }
    else
    {
      v16 = (__int64 (__fastcall **)(PVOID, _QWORD, int *))CmpMasterHive;
      v18 = (wchar_t *)v12.m128i_i64[1];
      v17 = *(_DWORD *)(*((_QWORD *)CmpMasterHive + 8) + 36LL);
      do
      {
        if ( *v18 != 92 )
          break;
        v13 -= 2;
        ++v18;
        v15 -= 2;
        v24.Length = v13;
      }
      while ( v13 );
      v24.Buffer = v18;
      v24.MaximumLength = v15;
      if ( !v13 )
        goto LABEL_20;
      do
      {
        if ( *v18 == 92 )
          break;
        v13 -= 2;
        ++v18;
        v15 -= 2;
        v24.Length = v13;
      }
      while ( v13 );
      v24.Buffer = v18;
      v24.MaximumLength = v15;
    }
    while ( 1 )
    {
      if ( v13 )
      {
        do
        {
          if ( *v18 != 92 )
            break;
          v13 -= 2;
          ++v18;
          v15 -= 2;
          v24.Length = v13;
        }
        while ( v13 );
        v24.Buffer = v18;
        v24.MaximumLength = v15;
      }
LABEL_20:
      if ( a3 )
        *a3 = v24;
      if ( !v13 )
        break;
      v19 = v16[1](v16, v17, &v26);
      v20 = v19;
      if ( !v19 )
        return 0;
      v25[1] = v18;
      LOWORD(v25[0]) = 0;
      do
      {
        if ( v18[(unsigned __int64)v7 >> 1] == 92 )
          break;
        v7 += 2;
      }
      while ( v7 < v13 );
      LOWORD(v25[0]) = v7;
      if ( (*(_BYTE *)(v19 + 2) & 2) != 0 )
      {
        v21 = v16;
        v16 = *(__int64 (__fastcall ***)(PVOID, _QWORD, int *))(v19 + 36);
        LODWORD(a5) = *(_DWORD *)(v19 + 28);
        ((__int64 (__fastcall **)(PVOID, int *, int *))v21)[2](v21, &v26, (int *)2);
        if ( v16 != CmpMasterHive && v28 && (v28 & (_DWORD)v16[519]) == 0 )
          return 0;
        v20 = v16[1](v16, (unsigned int)a5, &v26);
        if ( !v20 )
          return 0;
      }
      LODWORD(a5) = 0;
      CmpFindSubKeyByNameWithStatus(v16, v20, v25, &a5);
      ((void (__fastcall *)(__int64 (__fastcall **)(PVOID, _QWORD, int *), int *))v16[2])(v16, &v26);
      v17 = (unsigned int)a5;
      if ( (_DWORD)a5 == -1 )
        return 0;
      v22 = a6;
      v15 -= v7;
      v13 -= v7;
      *v6 = (unsigned int)a5;
      v24.MaximumLength = v15;
      v24.Length = v13;
      *v22 = v16;
      v23 = v7;
      v7 = 0;
      v18 += v23 >> 1;
      v24.Buffer = v18;
      if ( !v13 )
        return 1;
    }
    return 1;
  }
  if ( a1 )
  {
    *v11 = *(_QWORD *)(a1 + 32);
    *v6 = *(_DWORD *)(a1 + 40);
    return 1;
  }
  return 0;
}
