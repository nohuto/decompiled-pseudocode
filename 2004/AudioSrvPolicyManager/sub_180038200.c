/*
 * XREFs of sub_180038200 @ 0x180038200
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A4C0 @ 0x18000A4C0 (sub_18000A4C0.c)
 */

__int64 __fastcall sub_180038200(__int64 a1, _QWORD *a2, unsigned int *a3, unsigned __int64 **a4)
{
  unsigned __int64 *v4; // rbx
  int PersistedRegistryLocationW; // eax
  unsigned int v6; // ecx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a4;
  PersistedRegistryLocationW = GetPersistedRegistryLocationW(
                                 **(_QWORD **)(a1 + 16),
                                 **(_QWORD **)(a1 + 8),
                                 *a2,
                                 *a3,
                                 &v9);
  v6 = 0;
  if ( PersistedRegistryLocationW == 234 )
    PersistedRegistryLocationW = 0;
  if ( PersistedRegistryLocationW )
    return (unsigned int)sub_18000A4C0(
                           (int)retaddr,
                           31,
                           (int)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\persistentlocationhelper.h",
                           PersistedRegistryLocationW);
  else
    *v4 = (unsigned __int64)v9 >> 1;
  return v6;
}
