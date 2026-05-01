/*
 * XREFs of sub_18000C720 @ 0x18000C720
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 *     sub_18000E230 @ 0x18000E230 (sub_18000E230.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000C720(__int64 a1)
{
  _DWORD *v2; // rbx
  RTL_SRWLOCK *v3; // rsi
  unsigned int v4; // edi
  unsigned int v5; // r14d
  __int64 v6; // r15
  unsigned __int8 v8; // [rsp+60h] [rbp+8h] BYREF

  v2 = (_DWORD *)(a1 + 104);
  v3 = (RTL_SRWLOCK *)(a1 + 112);
  v4 = 0;
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v3->Ptr) )
      LODWORD(v3->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  sub_18000DA2C(&v8, *(unsigned __int8 *)(a1 + 125), a1 + 128);
  v5 = *(_DWORD *)(a1 + 72);
  v6 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  ++*(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( v2 )
  {
    if ( *v2 == 1 )
      LODWORD(v3->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v3);
  }
  sub_18000E230(v6, v5);
  if ( v5 )
    return (unsigned int)sub_18000D958(v8, *(unsigned __int8 *)(a1 + 124), a1, 0LL, 0);
  return v4;
}
