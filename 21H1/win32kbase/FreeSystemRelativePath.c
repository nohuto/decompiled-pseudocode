/*
 * XREFs of FreeSystemRelativePath @ 0x1C00AD9E0
 * Callers:
 *     ldevLoadDriver @ 0x1C00AD2C0 (ldevLoadDriver.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C00AD620 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall FreeSystemRelativePath(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    Win32FreePool(v4, a2, a3);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = 0;
}
