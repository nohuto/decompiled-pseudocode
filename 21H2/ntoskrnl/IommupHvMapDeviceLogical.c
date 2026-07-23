/*
 * XREFs of IommupHvMapDeviceLogical @ 0x1404DA470
 * Callers:
 *     HalpIommuDomainMapLogical @ 0x1404C94B0 (HalpIommuDomainMapLogical.c)
 *     IommuMapLogicalRange @ 0x1404DABD0 (IommuMapLogicalRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvMapDeviceLogical(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( *(_BYTE *)(a1 + 40) )
    return 3221225485LL;
  v6 = 0;
  LODWORD(v7) = *(_DWORD *)(a1 + 32);
  BYTE4(v7) = 0;
  return ((__int64 (__fastcall *)(__int64 *, __int64, __int64, __int64, __int64, char))qword_140C4A350)(
           &v7,
           a2,
           a5,
           a3,
           a4,
           v6);
}
