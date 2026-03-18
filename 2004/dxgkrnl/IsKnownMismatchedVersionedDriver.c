/*
 * XREFs of IsKnownMismatchedVersionedDriver @ 0x1C02C8110
 * Callers:
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1C0182204 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsKnownMismatchedVersionedDriver(int a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  if ( (*((_DWORD *)a2 + 1) & 0xFFFF0000) < 0x150000 && (*((_DWORD *)a3 + 1) & 0xFFFF0000) < 0x150000 )
    return 1;
  if ( a1 == 32902 )
  {
    if ( *a2 != 0x16001400101215LL )
      return 0;
    return *a3 == 0x15001400101215LL;
  }
  else
  {
    if ( a1 == 4098 )
    {
      v4 = *a3;
      v5 = 0x15001300800000LL;
    }
    else
    {
      if ( a1 != 1297040209 )
        return 0;
      v4 = *a2;
      if ( *a2 == 0x160012042C0000LL && *a3 == 0x160012042B003CLL )
        return 1;
      v5 = 0x848003800000000LL;
    }
    return (v4 & 0xFFFFFFFFFFFF0000uLL) == v5;
  }
}
