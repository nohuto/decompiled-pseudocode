/*
 * XREFs of KsepRegistryQueryDriverShims @ 0x140743BE0
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x140744138 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     KsepRegistryOpenKey @ 0x140743E50 (KsepRegistryOpenKey.c)
 *     KsepRegistryQuerySZ @ 0x1407A9710 (KsepRegistryQuerySZ.c)
 */

__int64 __fastcall KsepRegistryQueryDriverShims(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int SZ; // ebx
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  Handle = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  SZ = KsepRegistryOpenKey(
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Driver",
         a1,
         &Handle);
  if ( SZ >= 0 )
    SZ = KsepRegistryQuerySZ(Handle, L"Shims", 2048LL, a4);
  if ( SZ == -1073741772 )
    SZ = -1073741275;
  if ( Handle )
  {
    ZwClose(Handle);
    _InterlockedIncrement(dword_140C2A9DC);
  }
  return (unsigned int)SZ;
}
