/*
 * XREFs of PiDevCfgConfigureDeviceDriver @ 0x140767650
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140742FE0 (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408AAA4C (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x1407676E0 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceDriver(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *v5; // rbp
  __int64 v8; // r8
  int v11; // ecx
  __int64 **v12; // rdi
  __int64 **i; // rbx
  _DWORD v15[4]; // [rsp+40h] [rbp-28h] BYREF
  int v16; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  v16 = 0;
  v8 = *(_QWORD *)(a3 + 32);
  v15[0] = 0;
  v11 = PiDevCfgConfigureDeviceDriverConfiguration(a1, a2, v8, 0xFFFFFFFFLL, 0LL, 0LL, a4, a5);
  if ( v11 >= 0 )
  {
    v12 = (__int64 **)(a3 + 368);
    for ( i = (__int64 **)*v12; i != v12; i = (__int64 **)*i )
    {
      v11 = PiDevCfgConfigureDeviceDriverConfiguration(
              a1,
              a2,
              i[4],
              *((unsigned int *)i + 26),
              PiDevCfgConfigurePropertyMatchCallback,
              i,
              &v16,
              v15);
      if ( v11 < 0 )
        break;
      if ( a4 )
        *a4 |= v16;
      if ( v5 )
        *v5 |= v15[0];
    }
  }
  return (unsigned int)v11;
}
