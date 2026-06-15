/*
 * XREFs of sub_18002CAC0 @ 0x18002CAC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     sub_180010A4C @ 0x180010A4C (sub_180010A4C.c)
 *     sub_180011A98 @ 0x180011A98 (sub_180011A98.c)
 *     sub_180012138 @ 0x180012138 (sub_180012138.c)
 *     sub_18001E6B8 @ 0x18001E6B8 (sub_18001E6B8.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18002CAC0(__int64 a1)
{
  __int64 v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // rdi

  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_18000A610(
      *((_QWORD *)off_18004F000 + 2),
      0x1Cu,
      &stru_180045198,
      *(const wchar_t **)(*(_QWORD *)(a1 + 8) + 24LL));
  }
  v2 = *(_QWORD *)(a1 + 8);
  v3 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  if ( *(_DWORD *)(v2 + 564) == 2 )
  {
    *(_DWORD *)(v2 + 564) = 0;
    *(_DWORD *)(v2 + 568) = 0;
    *(_DWORD *)(v2 + 572) = 0;
    *(_DWORD *)(v2 + 576) = 0;
    *(_DWORD *)(v2 + 580) = 0;
    *(_DWORD *)(v2 + 584) = 0;
    *(_DWORD *)(v2 + 588) = 1;
  }
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 5u )
  {
    sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x17u, &stru_180043390, *(const wchar_t **)(v2 + 24));
  }
  if ( (unsigned int)sub_180010A4C(v2) != 1 )
  {
    if ( !*(_DWORD *)(v2 + 208) )
      sub_180012138((_DWORD *)v2);
    *(_DWORD *)(v2 + 432) = 0;
    sub_18001E6B8(qword_18004FE78, v2, 0xD1u, 0);
    sub_180011A98(v2);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
}
