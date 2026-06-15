/*
 * XREFs of sub_180021988 @ 0x180021988
 * Callers:
 *     sub_180021710 @ 0x180021710 (sub_180021710.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     sub_1800216CC @ 0x1800216CC (sub_1800216CC.c)
 */

_BOOL8 __fastcall sub_180021988(__int64 a1)
{
  _QWORD *i; // rax
  BOOL v3; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)&unk_18004FEF0;
  sub_18001A330((__int64)&lpCriticalSection);
  for ( i = (_QWORD *)qword_18004F588; i && i[2] != a1; i = (_QWORD *)*i )
    ;
  v3 = i != 0LL;
  if ( !i
    && off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 2u )
  {
    sub_1800216CC(*((_QWORD *)off_18004F000 + 2), 0xBu, &stru_1800447D0, a1);
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
