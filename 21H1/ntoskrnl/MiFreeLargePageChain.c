/*
 * XREFs of MiFreeLargePageChain @ 0x140550F60
 * Callers:
 *     MiReturnExcessPoolCommit @ 0x1402B1AB4 (MiReturnExcessPoolCommit.c)
 *     MiGetLargePageChain @ 0x14030EF04 (MiGetLargePageChain.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AE258 (MiTimeSingleLargePageZeroWorker.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x140345EC0 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall MiFreeLargePageChain(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8[3]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v4 = a1;
    do
    {
      v5 = *(_QWORD *)v4;
      LOBYTE(v6) = MiLockPageInline(v4, a2, a3, a4);
      v8[1] = *(_BYTE *)(v4 + 34) & 7;
      v8[2] = (unsigned __int8)v6;
      v8[0] = (v4 + 0x58000000000LL) / 48;
      MiInsertLargePageInNodeList((__int64)v8, v8[0], v6, v7);
      v4 = v5;
    }
    while ( v5 );
  }
}
