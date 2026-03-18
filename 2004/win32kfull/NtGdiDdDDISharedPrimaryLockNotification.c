/*
 * XREFs of NtGdiDdDDISharedPrimaryLockNotification @ 0x1C0278C40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0276BBC (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 */

__int64 __fastcall NtGdiDdDDISharedPrimaryLockNotification(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG64 v4; // rdx
  struct _LUID v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+38h] [rbp-20h]

  v4 = a1;
  if ( gbDisableLddmSpriteTearDown )
    return 0LL;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)&v6[0].LowPart = *(_OWORD *)v4;
  v7 = *(_QWORD *)(v4 + 16);
  v8 = *(_DWORD *)(v4 + 24);
  return DxLddmSharedPrimaryLockNotification(v6[0], v6[1].LowPart, (const struct _RECTL *)&v6[1].HighPart, a4);
}
