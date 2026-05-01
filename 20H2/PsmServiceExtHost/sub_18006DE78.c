/*
 * XREFs of sub_18006DE78 @ 0x18006DE78
 * Callers:
 *     sub_180032330 @ 0x180032330 (sub_180032330.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18006DE78(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // ebp
  __int64 (__fastcall **v4)(); // rdi
  int v5; // r14d
  int v6; // eax

  v1 = *(_QWORD *)(a1 + 88);
  if ( !*(_DWORD *)(v1 + 16) )
  {
    *(_DWORD *)(a1 + 80) = 0;
    RtlReleaseSRWLockExclusive(a1 + 72);
    v3 = 0;
    v4 = off_180093EB0;
    do
    {
      if ( *((_BYTE *)v4 + 33) )
      {
        v5 = 1 << v3;
        if ( !*v4 || (v5 & *(_DWORD *)(a1 + 128)) != 0 )
        {
          v6 = ((__int64 (__fastcall *)(__int64, __int64))v4[1])(a1, v1 - 88);
          if ( v6 >= 0 && v6 != 255 )
            *(_DWORD *)(a1 + 132) |= v5;
        }
      }
      ++v3;
      v4 += 5;
    }
    while ( v3 < 5 );
    RtlAcquireSRWLockExclusive(a1 + 72);
    *(_DWORD *)(a1 + 80) = GetCurrentThreadId();
  }
}
