/*
 * XREFs of MiPageAvailable @ 0x140556B14
 * Callers:
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 * Callees:
 *     MiPageAvailableEx @ 0x1402B7074 (MiPageAvailableEx.c)
 */

_BOOL8 __fastcall MiPageAvailable(__int64 a1, __int16 a2)
{
  unsigned __int64 v3; // rdx

  v3 = *(_QWORD *)(a1 + 7104);
  if ( v3 )
    --v3;
  return MiPageAvailableEx(a1, v3, a2);
}
