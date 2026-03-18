/*
 * XREFs of PiIommuBlockDevice @ 0x140864878
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x1407669D4 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PiIommuBlockDevice(__int64 a1)
{
  __int64 result; // rax
  char v3; // cl

  result = 3221225473LL;
  v3 = *(_BYTE *)(a1 + 16);
  if ( (v3 & 2) == 0 )
    return 0LL;
  if ( PipHalIommuSecurityEnabled )
  {
    result = ((__int64 (__fastcall *)(_QWORD))off_140C02010[0])(*(_QWORD *)(a1 + 8));
    if ( (int)result >= 0 )
    {
      if ( !*(_QWORD *)(a1 + 32) || (result = off_140C02010[0](), (int)result >= 0) )
        *(_BYTE *)(a1 + 16) &= ~2u;
    }
  }
  else if ( PipDmaGuardTestMode )
  {
    *(_BYTE *)(a1 + 16) = v3 & 0xFD;
    result = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
