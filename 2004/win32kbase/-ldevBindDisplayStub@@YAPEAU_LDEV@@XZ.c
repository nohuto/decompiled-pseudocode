/*
 * XREFs of ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C005127C
 * Callers:
 *     ldevLoadDriver @ 0x1C00BBEE0 (ldevLoadDriver.c)
 * Callees:
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C0051348 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

struct _LDEV *ldevBindDisplayStub(void)
{
  struct _LDEV *i; // rbx
  __int64 v1; // rax
  struct _LDEV *v2; // rax
  _DWORD v4[2]; // [rsp+20h] [rbp-18h] BYREF
  void *v5; // [rsp+28h] [rbp-10h]

  for ( i = gpldevDrivers; i; i = *(struct _LDEV **)i )
  {
    if ( (*((_DWORD *)i + 8) & 8) != 0 )
    {
      ++*((_DWORD *)i + 7);
      return i;
    }
  }
  v1 = PALLOCMEM2(0x388uLL);
  i = (struct _LDEV *)v1;
  if ( v1 )
  {
    *(_DWORD *)(v1 + 32) |= 0xAu;
    *(_DWORD *)(v1 + 60) = 0;
    *(_QWORD *)(v1 + 896) = v1 + 64;
    *(_DWORD *)(v1 + 24) = 1;
    *(_DWORD *)(v1 + 28) = 1;
    v5 = &unk_1C0246950;
    v4[0] = 196864;
    v4[1] = 16;
    if ( (unsigned int)ldevFillTable(v1, v4) )
    {
      if ( gpldevDrivers )
        *((_QWORD *)gpldevDrivers + 1) = i;
      v2 = gpldevDrivers;
      *((_QWORD *)i + 1) = 0LL;
      *(_QWORD *)i = v2;
      gpldevDrivers = i;
    }
    else
    {
      Win32FreePool(i);
      return 0LL;
    }
  }
  return i;
}
