/*
 * XREFs of sub_1800C7588 @ 0x1800C7588
 * Callers:
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 *     sub_18002C2A0 @ 0x18002C2A0 (sub_18002C2A0.c)
 *     sub_1800CDBA8 @ 0x1800CDBA8 (sub_1800CDBA8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800C7588(__int64 a1)
{
  __int64 v2; // rdx

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x49u, (__int64)&unk_18015DEF0, a1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 616));
  *(_DWORD *)(a1 + 408) = 2;
  if ( a1 != -616 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 616));
  v2 = *(_QWORD *)(a1 + 608);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)qword_18019E640 + 40LL))(qword_18019E640, v2, 0LL);
}
