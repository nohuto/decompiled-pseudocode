/*
 * XREFs of sub_1800142C0 @ 0x1800142C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 */

__int64 __fastcall sub_1800142C0(__int64 a1, unsigned int a2, HSTRING *a3)
{
  __int64 v3; // rsi
  unsigned int v5; // r15d
  HRESULT v8; // ebx
  __int64 v9; // rdi
  RTL_SRWLOCK *v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rax
  RTL_SRWLOCK *v13; // rcx
  HSTRING *v14; // r14
  char v16; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = 0;
  if ( a2 )
  {
    v3 = _o_malloc(8LL * a2);
    if ( !v3 )
      return (unsigned int)-2147024882;
    v5 = a2;
  }
  v9 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      v8 = WindowsDuplicateString(*a3, (HSTRING *)(v3 + 8 * v9));
      if ( v8 < 0 )
        break;
      v9 = (unsigned int)(v9 + 1);
      ++a3;
      if ( (unsigned int)v9 >= v5 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v10 = (RTL_SRWLOCK *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 104) == 1 )
    {
      if ( !LODWORD(v10->Ptr) )
        LODWORD(v10->Ptr) = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive(v10);
    }
    sub_18000DA2C((__int64)&v16);
    v11 = *(_DWORD *)(a1 + 72);
    v8 = 0;
    *(_DWORD *)(a1 + 80) = 0;
    ++*(_DWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 72) = v9;
    v9 = v11;
    v12 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v3;
    v3 = v12;
    *(_DWORD *)(a1 + 76) = v5;
    if ( a1 != -104 )
    {
      v13 = (RTL_SRWLOCK *)(a1 + 112);
      if ( *(_DWORD *)(a1 + 104) == 1 )
        LODWORD(v13->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v13);
    }
  }
  if ( v3 )
  {
    if ( (_DWORD)v9 )
    {
      v14 = (HSTRING *)v3;
      do
      {
        WindowsDeleteString(*v14);
        *v14++ = 0LL;
        --v9;
      }
      while ( v9 );
    }
    _o_free(v3);
  }
  if ( v8 >= 0 )
    return (unsigned int)sub_18000D958();
  return (unsigned int)v8;
}
