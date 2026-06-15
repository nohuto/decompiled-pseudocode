/*
 * XREFs of sub_1800C0CB0 @ 0x1800C0CB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     sub_1800C0948 @ 0x1800C0948 (sub_1800C0948.c)
 */

void __fastcall sub_1800C0CB0(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 64) )
  {
    if ( *(_BYTE *)(a1 + 300) )
      sub_1800C0948(a1);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
    sub_180071C14((_QWORD *)(a1 + 248));
    if ( a1 != -256 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
  }
}
