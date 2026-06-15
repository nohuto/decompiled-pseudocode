/*
 * XREFs of sub_180122F24 @ 0x180122F24
 * Callers:
 *     sub_18004D600 @ 0x18004D600 (sub_18004D600.c)
 * Callees:
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 */

void __fastcall sub_180122F24(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int i; // edi

  if ( *(_BYTE *)(a1 + 52) )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
    {
      if ( (a2 & *(_DWORD *)(*(_QWORD *)sub_180023320(a1 + 32, i) + 16LL)) != 0 )
        *(_BYTE *)(*(_QWORD *)sub_180023320(a1 + 32, i) + 20LL) = 1;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
  }
}
