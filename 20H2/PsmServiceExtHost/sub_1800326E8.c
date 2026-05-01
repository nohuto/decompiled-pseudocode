/*
 * XREFs of sub_1800326E8 @ 0x1800326E8
 * Callers:
 *     sub_180032330 @ 0x180032330 (sub_180032330.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

DWORD __fastcall sub_1800326E8(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 v2; // rax
  __int64 v4; // rbp
  __int64 v5; // rsi
  bool v6; // bl
  DWORD result; // eax
  int v8; // edx
  int v9; // ebx
  bool v10; // zf
  bool v11; // al

  v1 = *(_DWORD *)(a1 + 128);
  v2 = *(_QWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 80) = 0;
  v4 = v2 - 88;
  if ( v2 == a1 + 88 )
    v4 = 0LL;
  v10 = !_BitScanForward((unsigned int *)&v5, v1);
  v6 = !v10;
  RtlReleaseSRWLockExclusive(a1 + 72);
  if ( v6 )
  {
    do
    {
      v8 = 1 << v5;
      v9 = ~(1 << v5);
      v1 &= v9;
      if ( BYTE1(off_180093EB0[5 * v5 + 4]) )
      {
        v10 = (v8 & *(_DWORD *)(a1 + 132)) == 0;
      }
      else
      {
        if ( !v4 )
        {
          v11 = 0;
          goto LABEL_11;
        }
        v10 = (v8 & *(_DWORD *)(v4 + 164)) == 0;
      }
      v11 = !v10;
LABEL_11:
      if ( !v11 )
      {
        ((void (__fastcall *)(__int64, _QWORD))off_180093EB0[5 * v5 + 3])(a1, 0LL);
        *(_DWORD *)(a1 + 128) &= v9;
      }
      v10 = !_BitScanForward((unsigned int *)&v5, v1);
    }
    while ( !v10 );
  }
  RtlAcquireSRWLockExclusive(a1 + 72);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 80) = result;
  return result;
}
