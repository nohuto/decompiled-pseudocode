/*
 * XREFs of sub_180013C70 @ 0x180013C70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180014EC0 @ 0x180014EC0 (sub_180014EC0.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800447FC (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall sub_180013C70(__int64 a1, int a2, _DWORD *a3, _BYTE *a4)
{
  _DWORD *v4; // rbx
  HSTRING *v5; // r15
  __int64 v6; // rsi
  RTL_SRWLOCK *v7; // r14
  __int64 v9; // r12
  HRESULT v11; // edi
  __int64 v12; // rdx
  int v13; // ecx
  unsigned __int64 v14; // rax
  __int64 i; // r12
  HSTRING *v16; // rbx
  int v18; // [rsp+78h] [rbp+10h]

  v18 = a2;
  *a3 = 0;
  v4 = (_DWORD *)(a1 + 104);
  v5 = 0LL;
  *a4 = 0;
  v6 = 0LL;
  v7 = (RTL_SRWLOCK *)(a1 + 112);
  v9 = (__int64)a3;
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( SLODWORD(v7->Ptr) >= 0 )
      ++LODWORD(v7->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
    a2 = v18;
  }
  v11 = 0;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v14 = 8LL * *(unsigned int *)(a1 + 72);
    if ( !is_mul_ok(*(unsigned int *)(a1 + 72), 8uLL) )
      v14 = -1LL;
    v5 = (HSTRING *)operator new(v14, (const struct std::nothrow_t *)&unk_18005AF88);
    if ( v5 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 72); i = (unsigned int)(i + 1) )
      {
        v11 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 88) + 8 * i), &v5[i]);
        if ( v11 < 0 )
          break;
        v6 = (unsigned int)(v6 + 1);
      }
      v9 = (__int64)a3;
    }
    else
    {
      v11 = -2147024882;
    }
  }
  else
  {
    v11 = sub_180014EC0(a1, *(_QWORD *)(a1 + 88), *(_DWORD *)(a1 + 72), a2, v9, (__int64)a4);
  }
  if ( v4 )
  {
    if ( *v4 == 1 )
      --LODWORD(v7->Ptr);
    else
      ReleaseSRWLockShared(v7);
  }
  if ( v11 >= 0 )
  {
    if ( !(_DWORD)v6 )
      goto LABEL_25;
    v11 = sub_180014EC0(v13, (_DWORD)v5, v6, v18, v9, (__int64)a4);
  }
  if ( (_DWORD)v6 )
  {
    v16 = v5;
    do
    {
      WindowsDeleteString(*v16);
      *v16++ = 0LL;
      --v6;
    }
    while ( v6 );
  }
LABEL_25:
  j_j__o_free(v5, v12);
  return (unsigned int)v11;
}
