/*
 * XREFs of sub_18002E120 @ 0x18002E120
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 */

__int64 __fastcall sub_18002E120(__int64 a1)
{
  _DWORD *v1; // rbx
  unsigned int v2; // edi
  RTL_SRWLOCK *v3; // rsi
  int v5; // r15d
  __int64 v6; // r14
  char v8; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_DWORD *)(a1 + 104);
  v2 = 0;
  v3 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v3->Ptr) )
      LODWORD(v3->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  sub_18000DA2C((__int64)&v8);
  ++*(_DWORD *)(a1 + 120);
  v5 = *(_DWORD *)(a1 + 72);
  v6 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( v1 )
  {
    if ( *v1 == 1 )
      LODWORD(v3->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v3);
  }
  if ( v6 )
    _o_free(v6);
  if ( v5 )
    return (unsigned int)sub_18000D958();
  return v2;
}
