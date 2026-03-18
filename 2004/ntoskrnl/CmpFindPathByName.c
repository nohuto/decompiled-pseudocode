/*
 * XREFs of CmpFindPathByName @ 0x14063F8E0
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x14063F498 (CmpVirtualBranchIsReplicated.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14063F6B8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteOpenLogic @ 0x1406931B0 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x14086D908 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpVirtualPathPresent @ 0x14086DB28 (CmpVirtualPathPresent.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x14063F268 (CmpFindSubKeyByNameWithStatus.c)
 */

char __fastcall CmpFindPathByName(__int64 a1, __m128i *a2, UNICODE_STRING *a3, unsigned int *a4, __int64 *a5)
{
  unsigned __int16 v5; // r15
  __int64 *v8; // rcx
  __m128i v10; // xmm0
  unsigned __int16 v11; // di
  wchar_t *v12; // rsi
  __int16 v13; // r14
  __int64 v14; // r13
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v20; // ebx
  __int64 v21; // rcx
  UNICODE_STRING v22; // [rsp+20h] [rbp-20h]
  _QWORD v23[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+48h] BYREF
  int v25; // [rsp+90h] [rbp+50h] BYREF
  int v26; // [rsp+94h] [rbp+54h]
  unsigned int *v27; // [rsp+98h] [rbp+58h]

  v27 = a4;
  v5 = 0;
  v23[0] = 0LL;
  v25 = -1;
  *a4 = -1;
  v8 = a5;
  v26 = 0;
  *a5 = 0LL;
  if ( a3 )
  {
    RtlInitUnicodeString(a3, 0LL);
    a4 = v27;
    v8 = a5;
  }
  v10 = *a2;
  v11 = _mm_cvtsi128_si32(*a2);
  v22 = (UNICODE_STRING)v10;
  v22.Length = v11;
  if ( v11 )
  {
    v12 = (wchar_t *)v10.m128i_i64[1];
    v13 = v10.m128i_i16[1];
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 32);
      *v8 = v14;
      v15 = *(_DWORD *)(a1 + 40);
      *a4 = v15;
    }
    else
    {
      v14 = CmpMasterHive;
      v15 = *(_DWORD *)(*(_QWORD *)(CmpMasterHive + 64) + 36LL);
      do
      {
        if ( *v12 != 92 )
          break;
        v11 -= 2;
        ++v12;
        v13 -= 2;
        v22.Length = v11;
      }
      while ( v11 );
      v22.Buffer = v12;
      v22.MaximumLength = v13;
      if ( !v11 )
        goto LABEL_21;
      do
      {
        if ( *v12 == 92 )
          break;
        v11 -= 2;
        ++v12;
        v13 -= 2;
        v22.Length = v11;
      }
      while ( v11 );
      v22.Buffer = v12;
      v22.MaximumLength = v13;
    }
    do
    {
      if ( v11 )
      {
        do
        {
          if ( *v12 != 92 )
            break;
          v11 -= 2;
          ++v12;
          v13 -= 2;
          v22.Length = v11;
        }
        while ( v11 );
        v22.Buffer = v12;
        v22.MaximumLength = v13;
      }
LABEL_21:
      if ( a3 )
        *a3 = v22;
      if ( !v11 )
        break;
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, unsigned int *))(v14 + 8))(v14, v15, &v25, a4);
      v18 = v17;
      if ( !v17 )
        return 0;
      v23[1] = v12;
      LOWORD(v23[0]) = 0;
      do
      {
        if ( v12[(unsigned __int64)v5 >> 1] == 92 )
          break;
        v5 += 2;
      }
      while ( v5 < v11 );
      LOWORD(v23[0]) = v5;
      if ( (*(_BYTE *)(v17 + 2) & 2) != 0 )
      {
        v20 = *(_DWORD *)(v17 + 28);
        v21 = v14;
        v14 = *(_QWORD *)(v17 + 36);
        (*(void (__fastcall **)(__int64, int *, __int64))(v21 + 16))(v21, &v25, 2LL);
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v14 + 8))(v14, v20, &v25);
        if ( !v18 )
          return 0;
      }
      v24 = 0;
      CmpFindSubKeyByNameWithStatus(v14, v18, (unsigned __int16 *)v23, &v24);
      (*(void (__fastcall **)(__int64, int *))(v14 + 16))(v14, &v25);
      v15 = v24;
      if ( v24 == -1 )
        return 0;
      v13 -= v5;
      v11 -= v5;
      v22.MaximumLength = v13;
      v22.Length = v11;
      *v27 = v24;
      *a5 = v14;
      v16 = v5;
      v5 = 0;
      v12 += v16 >> 1;
      v22.Buffer = v12;
    }
    while ( v11 );
  }
  else
  {
    if ( !a1 )
      return 0;
    *v8 = *(_QWORD *)(a1 + 32);
    *a4 = *(_DWORD *)(a1 + 40);
  }
  return 1;
}
