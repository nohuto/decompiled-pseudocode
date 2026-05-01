/*
 * XREFs of sub_18002E3F0 @ 0x18002E3F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 */

__int64 __fastcall sub_18002E3F0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned int v5; // esi
  unsigned int v9; // r15d
  _OWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  RTL_SRWLOCK *v13; // rcx
  __int64 v14; // rsi
  RTL_SRWLOCK *v15; // rcx
  char v16; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = 0;
  if ( a2 )
  {
    v3 = _o_malloc(16LL * a2);
    if ( !v3 )
      return 2147942414LL;
    v5 = a2;
  }
  v9 = 0;
  if ( v5 )
  {
    v10 = (_OWORD *)v3;
    v11 = v5;
    v12 = a3 - v3;
    v9 = v5;
    do
    {
      *v10 = *(_OWORD *)((char *)v10 + v12);
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  v13 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v13->Ptr) )
      LODWORD(v13->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive(v13);
  }
  sub_18000DA2C((__int64)&v16);
  *(_DWORD *)(a1 + 80) = 0;
  ++*(_DWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 76) = v5;
  v14 = *(_QWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 72) = v9;
  *(_QWORD *)(a1 + 88) = v3;
  if ( a1 != -104 )
  {
    v15 = (RTL_SRWLOCK *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 104) == 1 )
      LODWORD(v15->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v15);
  }
  if ( v14 )
    _o_free(v14);
  return sub_18000D958();
}
