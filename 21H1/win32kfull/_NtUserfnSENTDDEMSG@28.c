/*
 * XREFs of _NtUserfnSENTDDEMSG@28 @ 0x16D4C6
 * Callers:
 *     <none>
 * Callees:
 *     _xxxDDETrackPostHook@20 @ 0x18033E (_xxxDDETrackPostHook@20.c)
 */

int __stdcall NtUserfnSENTDDEMSG(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char v7; // si
  int result; // eax
  int v9; // eax

  v7 = a6;
  if ( a6 == 692 )
    return dword_273CC8(a1, a2 | 0x40000000, a3, a4, a5);
  if ( (*(_BYTE *)(_gptiCurrent + 264) & 2) == 0 )
    return 0;
  v9 = *(_DWORD *)(_gptiCurrent + 332);
  if ( !v9 || !*(_WORD *)(v9 + 20) || a1 == -1 )
    return 0;
  result = xxxDDETrackPostHook(&a2, a1, a3, &a4, 1);
  if ( result < 0 )
    return result;
  if ( result <= 1 )
    return 0;
  if ( result == 2 )
    return ((int (__stdcall *)(int, int, int, int, int))mpFnidPfn[(v7 + 6) & 0x1F])(a1, a2 | 0x40000000, a3, a4, a5);
  return result;
}
