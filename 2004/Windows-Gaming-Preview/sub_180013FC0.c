/*
 * XREFs of sub_180013FC0 @ 0x180013FC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 *     sub_180014F44 @ 0x180014F44 (sub_180014F44.c)
 */

__int64 __fastcall sub_180013FC0(__int64 a1)
{
  _DWORD *v1; // rbx
  unsigned int v2; // edi
  RTL_SRWLOCK *v3; // rsi
  unsigned int v5; // r14d
  __int64 v6; // r15
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
  sub_180014F44(v6, v5);
  if ( v5 )
    return (unsigned int)sub_18000D958();
  return v2;
}
