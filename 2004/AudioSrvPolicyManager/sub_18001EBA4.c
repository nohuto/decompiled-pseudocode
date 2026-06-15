/*
 * XREFs of sub_18001EBA4 @ 0x18001EBA4
 * Callers:
 *     sub_18001EC8C @ 0x18001EC8C (sub_18001EC8C.c)
 * Callees:
 *     sub_180010A4C @ 0x180010A4C (sub_180010A4C.c)
 *     sub_180012658 @ 0x180012658 (sub_180012658.c)
 *     sub_1800126D0 @ 0x1800126D0 (sub_1800126D0.c)
 *     sub_180012748 @ 0x180012748 (sub_180012748.c)
 *     sub_1800127C0 @ 0x1800127C0 (sub_1800127C0.c)
 *     sub_180012868 @ 0x180012868 (sub_180012868.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001EBA4(__int64 a1, __int64 a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  unsigned int v6; // ebx

  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( *(_DWORD *)(a2 + 584) )
  {
    v6 = *(_DWORD *)(a2 + 588);
  }
  else if ( dword_180043378[(int)sub_180010A4C(a2)] && (unsigned int)sub_180012748(a2)
         || (v6 = 1, a3)
         && ((unsigned int)sub_180012658(a2)
          && !(unsigned int)sub_180012748(a2)
          && (unsigned int)sub_180012868(a2, 1)
          && !(unsigned int)sub_1800127C0(a2)
          || (unsigned int)sub_1800126D0(a2)) )
  {
    v6 = 2;
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return v6;
}
