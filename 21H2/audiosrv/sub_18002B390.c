/*
 * XREFs of sub_18002B390 @ 0x18002B390
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B930 @ 0x18002B930 (sub_18002B930.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB5A0 @ 0x1800CB5A0 (sub_1800CB5A0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002B390(_QWORD *a1)
{
  __int64 v2; // rbx
  unsigned int v3; // eax

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CB5A0(*((_QWORD *)off_18019C348 + 2), 58LL, &unk_18015DFC8, a1, *a1);
  }
  sub_18002B930(*a1);
  if ( qword_18019E610 )
  {
    v2 = *(_QWORD *)qword_18019E610;
    v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1[1] + 40LL))(a1[1]);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v2 + 40))(qword_18019E610, v3, 0LL);
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[1] + 16LL))(a1[1]);
  return sub_18006A148(a1, 16LL);
}
