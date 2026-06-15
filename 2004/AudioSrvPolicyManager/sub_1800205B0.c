/*
 * XREFs of sub_1800205B0 @ 0x1800205B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     sub_180012B64 @ 0x180012B64 (sub_180012B64.c)
 *     sub_18001E6B8 @ 0x18001E6B8 (sub_18001E6B8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800205B0(__int64 a1, __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rbx

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v5 = *a2;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x3Au, &stru_1800445C8, *(const wchar_t **)(v5 + 24));
  }
  sub_180012B64(v5);
  sub_18001E6B8(a1, v5, 0xD1u, 0);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
