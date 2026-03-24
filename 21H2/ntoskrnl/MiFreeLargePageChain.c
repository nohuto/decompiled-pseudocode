/*
 * XREFs of MiFreeLargePageChain @ 0x140556A50
 * Callers:
 *     MiGetLargePageChain @ 0x1402BED44 (MiGetLargePageChain.c)
 *     MiReturnExcessPoolCommit @ 0x14030B894 (MiReturnExcessPoolCommit.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0728 (MiTimeSingleLargePageZeroWorker.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x1402FEA50 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

void __fastcall MiFreeLargePageChain(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned __int8 v6; // al
  _QWORD v7[3]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v4 = a1;
    do
    {
      v5 = *(_QWORD *)v4;
      v6 = MiLockPageInline(v4, a2, a3, a4);
      v7[1] = *(_BYTE *)(v4 + 34) & 7;
      v7[2] = v6;
      v7[0] = (v4 + 0x58000000000LL) / 48;
      MiInsertLargePageInNodeList((__int64)v7);
      v4 = v5;
    }
    while ( v5 );
  }
}
