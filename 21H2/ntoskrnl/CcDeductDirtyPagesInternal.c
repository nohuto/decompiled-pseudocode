/*
 * XREFs of CcDeductDirtyPagesInternal @ 0x14028AD4C
 * Callers:
 *     CcDeductDirtyPages @ 0x14028AD10 (CcDeductDirtyPages.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall CcDeductDirtyPagesInternal(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r10
  _QWORD *v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rdx

  *(_QWORD *)(a3 + 992) -= a2;
  if ( a4 )
    *(_QWORD *)(a4 + 992) -= a2;
  if ( a1 )
  {
    if ( a2 == -1 )
      KeBugCheckEx(0x34u, 0x3165uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(a1 + 112) -= a2;
    v4 = -(__int64)a2;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 504) + 32LL), v4);
    v5 = *(_QWORD **)(a1 + 504);
    v5[30] += v5[4];
    v6 = *(_QWORD *)(a1 + 504);
    v7 = v5[31];
    if ( v7 <= *(_QWORD *)(v6 + 32) )
      v7 = *(_QWORD *)(v6 + 32);
    ++v5[32];
    v5[31] = v7;
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 240) + 24LL), v4);
  }
}
