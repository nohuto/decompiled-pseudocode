/*
 * XREFs of sub_1800C7B00 @ 0x1800C7B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180045410 @ 0x180045410 (sub_180045410.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180061BA0 @ 0x180061BA0 (sub_180061BA0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

__int64 __fastcall sub_1800C7B00(__int64 a1, void **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  unsigned __int64 v5; // rbp
  _WORD *v6; // rax
  int v7; // ebx

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0xAu, (__int64)&unk_18015DEF0, *(const wchar_t **)(a1 + 320));
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 352);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 352));
  v5 = 2LL * (*(_DWORD *)(*(_QWORD *)(a1 + 320) - 16LL) + 1);
  v6 = (_WORD *)sub_180045410(v5);
  *a2 = v6;
  if ( v6 )
  {
    v7 = sub_180061BA0(v6, v5, *(_QWORD *)(a1 + 320));
    if ( v7 >= 0 )
      goto LABEL_10;
    sub_180033A70(*a2);
    *a2 = 0LL;
  }
  else
  {
    v7 = -2147024882;
  }
  sub_18005E8F8((__int64)"CAudioSession::GetDisplayName", 164, v7);
LABEL_10:
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v7;
}
