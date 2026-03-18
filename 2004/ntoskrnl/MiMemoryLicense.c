/*
 * XREFs of MiMemoryLicense @ 0x140A62E5C
 * Callers:
 *     MiInitNucleus @ 0x140A3D174 (MiInitNucleus.c)
 * Callees:
 *     NtQueryLicenseValue @ 0x140658390 (NtQueryLicenseValue.c)
 *     MiLimitLoaderBlockTotalMemory @ 0x140A62F40 (MiLimitLoaderBlockTotalMemory.c)
 *     MiLimitLoaderBlockHighMemory @ 0x140A63020 (MiLimitLoaderBlockHighMemory.c)
 */

__int64 __fastcall MiMemoryLicense(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  _QWORD v5[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v6; // [rsp+68h] [rbp+28h] BYREF
  int v7; // [rsp+70h] [rbp+30h] BYREF
  int v8; // [rsp+78h] [rbp+38h] BYREF

  v8 = 0;
  v6 = 0;
  v5[1] = L"Kernel-WindowsMaxMemAllowedx64";
  v5[0] = 4063292LL;
  v7 = 4;
  if ( (int)NtQueryLicenseValue((unsigned __int64)v5, &v8, &v6, 4u, &v7) >= 0 && v6 )
    v2 = (unsigned __int64)v6 << 8;
  else
    v2 = 0x80000LL;
  v3 = ((unsigned __int64)qword_140C4DD40 >> 12) - 1;
  qword_140C4DCF0 = v2;
  if ( v3 >= 0xFFFFFFFFALL )
    v3 = 0xFFFFFFFFALL;
  MiLimitLoaderBlockHighMemory(a1, v3);
  result = MiLimitLoaderBlockTotalMemory(a1, v2);
  qword_140C4E7A0 = -1LL;
  LOBYTE(Mm64BitPhysicalAddress) = 1;
  if ( v3 > 0xFFFFFF7FALL )
    result = MiLimitLoaderBlockHighMemory(a1, 0xFFFFFF7FALL);
  qword_140C4E7A0 = 0xFFFFFF7FALL;
  return result;
}
