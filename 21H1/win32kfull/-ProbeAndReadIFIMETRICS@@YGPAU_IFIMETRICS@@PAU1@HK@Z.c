/*
 * XREFs of ?ProbeAndReadIFIMETRICS@@YGPAU_IFIMETRICS@@PAU1@HK@Z @ 0x20A7B1
 * Callers:
 *     ?UMPDDrvQueryFont@@YGPAU_IFIMETRICS@@PAUDHPDEV__@@KKPAK@Z @ 0x20DBEF (-UMPDDrvQueryFont@@YGPAU_IFIMETRICS@@PAUDHPDEV__@@KKPAK@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?IsValidIFIMETRICS@@YG_NPBU_IFIMETRICS@@K@Z @ 0x20A333 (-IsValidIFIMETRICS@@YG_NPBU_IFIMETRICS@@K@Z.c)
 */

PATHOBJ *__userpurge ProbeAndReadIFIMETRICS@<eax>(
        int a1@<edx>,
        size_t *a2@<ecx>,
        struct _IFIMETRICS *a3,
        int a4,
        unsigned int a5)
{
  size_t v5; // esi
  PATHOBJ *v6; // eax
  PATHOBJ *v7; // edi

  if ( (unsigned int)a3 < 0xB8 )
    return 0;
  v5 = *a2;
  if ( a1 && v5 && ((unsigned int)a2 + v5 > _MmUserProbeAddress || (size_t *)((char *)a2 + v5) < a2) )
    *(_BYTE *)_MmUserProbeAddress = 0;
  if ( v5 < 0xB8 )
    return 0;
  if ( v5 > (unsigned int)a3 )
    return 0;
  if ( v5 > 0x2710000 )
    return 0;
  v6 = (PATHOBJ *)PALLOCMEM2(v5, 1886221639, 1);
  v7 = v6;
  if ( !v6 )
    return 0;
  memcpy(v6, a2, v5);
  if ( !IsValidIFIMETRICS((int)v7, v5) )
  {
    Win32FreePool(v7);
    return 0;
  }
  return v7;
}
