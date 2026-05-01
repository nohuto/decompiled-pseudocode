/*
 * XREFs of sub_18003BDC0 @ 0x18003BDC0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003BDC0(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)a1 = off_18004D9F8;
  *(_QWORD *)(a1 + 8) = off_18004D9B0;
  *(_QWORD *)(a1 + 40) = off_18004D978;
  if ( *(_QWORD *)(a1 + 96) )
    CoDecrementMTAUsage();
  v4 = *(_QWORD *)(a1 + 144);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 144) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 104));
  *(_DWORD *)(a1 + 68) = -1073741823;
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 152LL);
  return a1;
}
