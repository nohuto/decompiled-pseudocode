/*
 * XREFs of sub_1800C8A28 @ 0x1800C8A28
 * Callers:
 *     sub_1800CEBD8 @ 0x1800CEBD8 (sub_1800CEBD8.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C8A28(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // esi
  unsigned __int64 i; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v3 = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x65u, (__int64)&unk_18015DEF0, 0LL);
  }
  for ( i = 0LL; i < *(_QWORD *)(a1 + 104); ++i )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * i) + 52LL) )
      v3 = 1;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v3;
}
