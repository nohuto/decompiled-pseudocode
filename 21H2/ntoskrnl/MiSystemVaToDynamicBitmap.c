/*
 * XREFs of MiSystemVaToDynamicBitmap @ 0x14023222C
 * Callers:
 *     MiObtainSystemVa @ 0x140231990 (MiObtainSystemVa.c)
 *     MiMakeSystemRangeAvailable @ 0x140308264 (MiMakeSystemRangeAvailable.c)
 *     MiIsSystemVaAllocated @ 0x14053DB54 (MiIsSystemVaAllocated.c)
 *     MiMarkSystemVaAllocated @ 0x14053DEB0 (MiMarkSystemVaAllocated.c)
 *     MiInitializeKernelStacks @ 0x140A4E410 (MiInitializeKernelStacks.c)
 *     MiInitializeSystemPtes @ 0x140A4F1C4 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4F39C (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4F614 (MiBuildPagedPool.c)
 *     MiInitializeDynamicRegion @ 0x140A4F6D4 (MiInitializeDynamicRegion.c)
 *     MiInitializeDriverImages @ 0x140A4F6F4 (MiInitializeDriverImages.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiSystemVaToDynamicBitmap(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v1 = a1 - 6;
  if ( !v1 )
    return &qword_140C4E1B0;
  v2 = v1 - 2;
  if ( !v2 )
    return &qword_140C4E1F8;
  v3 = v2 - 1;
  if ( !v3 )
    return &qword_140C4E0D8;
  v5 = v3 - 2;
  if ( !v5 )
    return (__int64 *)&unk_140C4E168;
  v6 = v5 - 1;
  if ( !v6 )
    return &qword_140C4E120;
  v7 = v6 - 1;
  if ( !v7 )
    return &qword_140C4E0D8;
  v8 = v7 - 1;
  if ( !v8 )
    return &qword_140C4E090;
  if ( v8 == 1 )
    return (__int64 *)&unk_140C4E240;
  return 0LL;
}
