/*
 * XREFs of sub_18000CB60 @ 0x18000CB60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 *     sub_18000EC88 @ 0x18000EC88 (sub_18000EC88.c)
 *     sub_18000ED0C @ 0x18000ED0C (sub_18000ED0C.c)
 */

__int64 __fastcall sub_18000CB60(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rdi
  unsigned int v5; // r15d
  int v6; // r13d
  int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rax
  int v13; // ecx
  RTL_SRWLOCK *v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rax
  RTL_SRWLOCK *v17; // rcx
  __int64 v18; // r14
  unsigned __int8 v20; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    v3 = _o_malloc(16LL * a2);
    if ( !v3 )
      return (unsigned int)-2147024882;
    v5 = a2;
  }
  v10 = 0LL;
  if ( v5 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      v9 = sub_18000ED0C(v3 + 16LL * (unsigned int)v10, *a3);
      if ( v9 < 0 )
        break;
      v12 = v11 + v3;
      v10 = (unsigned int)(v10 + 1);
      v11 += 16LL;
      v13 = v6 + 1;
      ++a3;
      if ( !*(_BYTE *)(v12 + 8) )
        v13 = v6;
      v6 = v13;
      if ( (unsigned int)v10 >= v5 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v14 = (RTL_SRWLOCK *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 104) == 1 )
    {
      if ( !LODWORD(v14->Ptr) )
        LODWORD(v14->Ptr) = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive(v14);
    }
    sub_18000DA2C(&v20, *(unsigned __int8 *)(a1 + 125), a1 + 128);
    v15 = *(_DWORD *)(a1 + 72);
    v9 = 0;
    ++*(_DWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 72) = v10;
    v10 = v15;
    v16 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v3;
    v3 = v16;
    *(_DWORD *)(a1 + 76) = v5;
    *(_DWORD *)(a1 + 80) = v6;
    if ( a1 != -104 )
    {
      v17 = (RTL_SRWLOCK *)(a1 + 112);
      if ( *(_DWORD *)(a1 + 104) == 1 )
        LODWORD(v17->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v17);
    }
  }
  if ( v3 )
  {
    if ( (_DWORD)v10 )
    {
      v18 = v3;
      do
      {
        sub_18000EC88(v18);
        v18 += 16LL;
        --v10;
      }
      while ( v10 );
    }
    _o_free(v3);
  }
  if ( v9 >= 0 )
    return (unsigned int)sub_18000D958(v20, *(unsigned __int8 *)(a1 + 124), a1, 0LL, 0);
  return (unsigned int)v9;
}
