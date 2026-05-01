/*
 * XREFs of sub_180034350 @ 0x180034350
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000CDD4 @ 0x18000CDD4 (sub_18000CDD4.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180034350(__int64 a1, char a2)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a1 + 72);
  v5 = 0;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
    {
      *(_QWORD *)v4 = &off_18004C4C8;
      if ( *(_DWORD *)(v4 + 12) )
      {
        do
        {
          v6 = *(_QWORD *)(v4 + 8LL * v5 + 16);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
          ++v5;
        }
        while ( v5 < *(_DWORD *)(v4 + 12) );
      }
      j_j__o_free(v4, 144LL);
    }
  }
  sub_18000CDD4(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 88LL);
  return a1;
}
