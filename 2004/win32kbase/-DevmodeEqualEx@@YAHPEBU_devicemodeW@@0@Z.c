/*
 * XREFs of ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C00BA8B4
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B8358 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     memcmp @ 0x1C00D28C0 (memcmp.c)
 */

__int64 __fastcall DevmodeEqualEx(const struct _devicemodeW *a1, const struct _devicemodeW *a2)
{
  __int64 dmDriverExtra; // rax
  unsigned int v5; // ebx

  dmDriverExtra = a1->dmDriverExtra;
  if ( (_WORD)dmDriverExtra == a2->dmDriverExtra )
    return memcmp(a1, a2, dmDriverExtra + 220) == 0;
  v5 = 0;
  if ( !(_WORD)dmDriverExtra )
  {
    if ( !memcmp(a1, a2, 0x46uLL) )
      return memcmp(&a1->dmFields, &a2->dmFields, 0x94uLL) == 0;
    return v5;
  }
  return 0LL;
}
