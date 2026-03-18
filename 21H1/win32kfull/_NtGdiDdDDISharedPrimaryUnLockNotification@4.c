/*
 * XREFs of _NtGdiDdDDISharedPrimaryUnLockNotification@4 @ 0x1D46C4
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YGJU_LUID@@I@Z @ 0x1D32E2 (-DxLddmSharedPrimaryUnLockNotification@@YGJU_LUID@@I@Z.c)
 */

int __stdcall NtGdiDdDDISharedPrimaryUnLockNotification(ULONG a1)
{
  DWORD *v2; // esi
  LONG *v3; // esi
  unsigned int v4; // [esp+0h] [ebp-38h]
  struct _LUID v5; // [esp+10h] [ebp-28h]

  if ( _gbDisableLddmSpriteTearDown )
    return 0;
  v2 = (DWORD *)a1;
  if ( a1 >= _MmUserProbeAddress )
    v2 = (DWORD *)_MmUserProbeAddress;
  v5.LowPart = *v2;
  v3 = (LONG *)(v2 + 1);
  v5.HighPart = *v3;
  return DxLddmSharedPrimaryUnLockNotification(v3[1], v5, v4);
}
