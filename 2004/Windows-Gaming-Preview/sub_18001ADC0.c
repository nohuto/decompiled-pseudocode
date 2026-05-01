/*
 * XREFs of sub_18001ADC0 @ 0x18001ADC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800266E0 @ 0x1800266E0 (sub_1800266E0.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001ADC0(__int64 a1, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)a1 = off_18004B218;
  *(_QWORD *)(a1 + 8) = off_18004B1D0;
  *(_QWORD *)(a1 + 40) = off_18004B160;
  *(_QWORD *)(a1 + 56) = off_18004B120;
  if ( *(_QWORD *)(a1 + 96) )
    CoDecrementMTAUsage();
  if ( *(_QWORD *)(a1 + 104) )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
    sub_1800266E0();
  }
  *(_DWORD *)(a1 + 68) = -1073741823;
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 112LL);
  return a1;
}
