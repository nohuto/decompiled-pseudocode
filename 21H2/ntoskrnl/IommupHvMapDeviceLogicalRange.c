/*
 * XREFs of IommupHvMapDeviceLogicalRange @ 0x1404DA4C4
 * Callers:
 *     HalpIommuDomainMapLogicalRange @ 0x1404C9514 (HalpIommuDomainMapLogicalRange.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404C9574 (HalpIommuDomainUnmapLogicalRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvMapDeviceLogicalRange(int a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  char v6; // [rsp+28h] [rbp-30h]
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+74h] [rbp+1Ch]
  unsigned __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v9 = 0;
  v8 = a1;
  v10 = (unsigned __int64)(a4 + 4095) >> 12;
  v7[0] = a3 >> 12;
  v6 = 1;
  return ((__int64 (__fastcall *)(int *, __int64, __int64, _QWORD *, unsigned __int64 *, char))qword_140C4A350)(
           &v8,
           a2,
           a5,
           v7,
           &v10,
           v6);
}
