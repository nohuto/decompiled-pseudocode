/*
 * XREFs of _NtGdiDdDDISharedPrimaryLockNotification@4 @ 0x1D4649
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YGJU_LUID@@IPBU_RECTL@@@Z @ 0x1D2FCB (-DxLddmSharedPrimaryLockNotification@@YGJU_LUID@@IPBU_RECTL@@@Z.c)
 */

int __stdcall NtGdiDdDDISharedPrimaryLockNotification(ULONG a1)
{
  const void *v1; // esi
  unsigned int v3; // [esp+0h] [ebp-48h]
  const struct _RECTL *v4; // [esp+4h] [ebp-44h]
  struct _LUID v5[4]; // [esp+10h] [ebp-38h] BYREF
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v1 = (const void *)a1;
  if ( _gbDisableLddmSpriteTearDown )
    return 0;
  ms_exc.registration.TryLevel = 0;
  if ( a1 >= _MmUserProbeAddress )
    v1 = (const void *)_MmUserProbeAddress;
  qmemcpy(v5, v1, 0x1Cu);
  ms_exc.registration.TryLevel = -2;
  return DxLddmSharedPrimaryLockNotification(&v5[1].HighPart, v5[1].LowPart, v5[0], v3, v4);
}
