/*
 * XREFs of sub_1800BE530 @ 0x1800BE530
 * Callers:
 *     <none>
 * Callees:
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     sub_1800BE318 @ 0x1800BE318 (sub_1800BE318.c)
 */

void __fastcall sub_1800BE530(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 32) && *(_BYTE *)(a1 + 104) )
    sub_1800BE318(a1);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  sub_180071C14((_QWORD *)(a1 + 48));
  if ( a1 != -56 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
}
