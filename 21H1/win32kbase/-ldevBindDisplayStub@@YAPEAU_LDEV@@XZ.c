/*
 * XREFs of ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C00AB7D8
 * Callers:
 *     ldevLoadDriver @ 0x1C00AD2C0 (ldevLoadDriver.c)
 * Callees:
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C004439C (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 */

struct _LDEV *ldevBindDisplayStub(void)
{
  struct _LDEV *i; // rbx
  struct _LDEV *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _LDEV *v4; // rax
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  void *v7; // [rsp+28h] [rbp-10h]

  for ( i = gpldevDrivers; i; i = *(struct _LDEV **)i )
  {
    if ( (*((_DWORD *)i + 8) & 8) != 0 )
    {
      ++*((_DWORD *)i + 7);
      return i;
    }
  }
  v1 = (struct _LDEV *)PALLOCMEM2(0x388uLL, 0x76646C47u, 1);
  i = v1;
  if ( v1 )
  {
    *((_DWORD *)v1 + 8) |= 0xAu;
    *((_DWORD *)v1 + 15) = 0;
    *((_QWORD *)v1 + 112) = (char *)v1 + 64;
    *((_DWORD *)v1 + 6) = 1;
    *((_DWORD *)v1 + 7) = 1;
    v7 = &unk_1C024C840;
    v6[0] = 196864;
    v6[1] = 16;
    if ( (unsigned int)ldevFillTable((__int64)v1, v6) )
    {
      if ( gpldevDrivers )
        *((_QWORD *)gpldevDrivers + 1) = i;
      v4 = gpldevDrivers;
      *((_QWORD *)i + 1) = 0LL;
      *(_QWORD *)i = v4;
      gpldevDrivers = i;
    }
    else
    {
      Win32FreePool((__int64)i, v2, v3);
      return 0LL;
    }
  }
  return i;
}
