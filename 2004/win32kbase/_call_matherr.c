/*
 * XREFs of _call_matherr @ 0x1C00D30A0
 * Callers:
 *     _handle_error @ 0x1C00D31D4 (_handle_error.c)
 * Callees:
 *     ?GetType@ServerPortInfo@CoreMessagingK@@SA?AW4ObjectType@2@XZ @ 0x1C00C3D70 (-GetType@ServerPortInfo@CoreMessagingK@@SA-AW4ObjectType@2@XZ.c)
 *     _set_errno_from_matherr @ 0x1C00D3690 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x1C00D36E0 (_ctrlfp.c)
 */

double __fastcall call_matherr(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)CoreMessagingK::ServerPortInfo::GetType() )
    set_errno_from_matherr(a1);
  return a6;
}
