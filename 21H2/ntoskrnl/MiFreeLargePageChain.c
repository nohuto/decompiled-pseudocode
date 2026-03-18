/*
 * XREFs of MiFreeLargePageChain @ 0x140263068
 * Callers:
 *     MiGetLargePageChain @ 0x140266158 (MiGetLargePageChain.c)
 *     MiReturnExcessPoolCommit @ 0x140352D04 (MiReturnExcessPoolCommit.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403D452C (MiTimeSingleLargePageZeroWorker.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x1402BEEA0 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall MiFreeLargePageChain(__int64 *a1)
{
  __int64 *v1; // rdi
  __int64 *v2; // rbx
  char v3; // al
  unsigned int v4; // ecx
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = (__int64 *)*v1;
      v3 = MiLockPageInline(v1);
      v4 = *((_BYTE *)v1 + 34) & 7;
      v6 = 0LL;
      v5[1] = v4;
      LOBYTE(v6) = v3;
      v5[0] = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v1 + 0x44000000000LL) >> 4);
      MiInsertLargePageInNodeList(v5);
      v1 = v2;
    }
    while ( v2 );
  }
}
