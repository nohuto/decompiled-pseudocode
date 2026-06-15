/*
 * XREFs of sub_180015574 @ 0x180015574
 * Callers:
 *     sub_18001B65C @ 0x18001B65C (sub_18001B65C.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180015574(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v6 = 0;
  sub_18001A330(&lpCriticalSection);
  if ( *(_DWORD *)(a1 + 448) != 2
    || *(_QWORD *)(a1 + 88)
    || (v2 = *(_DWORD *)(a1 + 480), v3 = 1, (v2 & 1) != 0)
    || (v2 & 0x1000) != 0
    || *(_DWORD *)(a1 + 484)
    || *(_DWORD *)(a1 + 488)
    || (unsigned int)sub_180029840(*(_DWORD *)(a1 + 196))
    || *(_DWORD *)(a1 + 520)
    || *(_DWORD *)(a1 + 540)
    || *(_DWORD *)(a1 + 544)
    || *(_DWORD *)(a1 + 548)
    || *(_DWORD *)(a1 + 528) )
  {
    v3 = 0;
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
