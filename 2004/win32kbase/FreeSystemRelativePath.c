/*
 * XREFs of FreeSystemRelativePath @ 0x1C00BC600
 * Callers:
 *     ldevLoadDriver @ 0x1C00BBEE0 (ldevLoadDriver.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C00BC240 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __fastcall FreeSystemRelativePath(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    Win32FreePool(v2);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = 0;
}
