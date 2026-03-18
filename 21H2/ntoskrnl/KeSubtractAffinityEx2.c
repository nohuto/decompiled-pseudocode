/*
 * XREFs of KeSubtractAffinityEx2 @ 0x14056C2A0
 * Callers:
 *     <none>
 * Callees:
 *     KiSubtractAffinityEx @ 0x1402FEDA0 (KiSubtractAffinityEx.c)
 */

__int64 __fastcall KeSubtractAffinityEx2(_WORD *a1, char *a2, __int64 a3)
{
  unsigned __int16 v3; // ax

  v3 = 0;
  if ( a3 )
    v3 = *(_WORD *)(a3 + 2);
  return KiSubtractAffinityEx(a1, a2, (_BYTE *)a3, v3);
}
