/*
 * XREFs of ?NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C00CFEFC
 * Callers:
 *     NtGdiGetDeviceCapsAll @ 0x1C0145E20 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C002B29C (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 */

__int64 __fastcall NtGdiGetDeviceCapsAllInternal(struct PDEVOBJ *a1, struct _DEVCAPS *a2)
{
  struct _DEVCAPS *v2; // r9

  v2 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v2 = (struct _DEVCAPS *)MmUserProbeAddress;
  *(_BYTE *)v2 = *(_BYTE *)v2;
  *((_BYTE *)v2 + 143) = *((_BYTE *)v2 + 143);
  vGetDeviceCaps(a1, a2);
  return 1LL;
}
