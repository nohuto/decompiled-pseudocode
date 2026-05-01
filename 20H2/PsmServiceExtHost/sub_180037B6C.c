/*
 * XREFs of sub_180037B6C @ 0x180037B6C
 * Callers:
 *     sub_180037B50 @ 0x180037B50 (sub_180037B50.c)
 *     sub_180081C60 @ 0x180081C60 (sub_180081C60.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180081A7C @ 0x180081A7C (sub_180081A7C.c)
 */

__int16 __fastcall sub_180037B6C(__int64 a1)
{
  __int16 result; // ax
  __int64 v3; // rcx

  result = *(_WORD *)(a1 + 608);
  *(_WORD *)(a1 + 608) = 1;
  if ( !result )
  {
    if ( (unsigned int)dword_1800B3218 > 4 )
    {
      if ( sub_180010470((__int64)&dword_1800B3218, 8LL) )
        sub_180081A7C(v3, &unk_1800A1F78);
    }
    return sub_1800274E0((_QWORD *)a1);
  }
  return result;
}
