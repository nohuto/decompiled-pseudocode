/*
 * XREFs of sub_18001FEA0 @ 0x18001FEA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_18001E454 @ 0x18001E454 (sub_18001E454.c)
 *     sub_18001E7B8 @ 0x18001E7B8 (sub_18001E7B8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001FEA0(__int64 a1, int *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( !*(_DWORD *)(a1 + 24) )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x34u, &stru_1800445C8, *a2);
    }
    sub_18001E454(a1, *a2, 3u);
    sub_18001E7B8(a1, *a2, 0);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
