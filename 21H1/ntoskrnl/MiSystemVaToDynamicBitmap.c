/*
 * XREFs of MiSystemVaToDynamicBitmap @ 0x140301D30
 * Callers:
 *     MiObtainSystemVa @ 0x14030124C (MiObtainSystemVa.c)
 *     MiMakeSystemRangeAvailable @ 0x140301AE8 (MiMakeSystemRangeAvailable.c)
 *     MiIsSystemVaAllocated @ 0x140537DF4 (MiIsSystemVaAllocated.c)
 *     MiMarkSystemVaAllocated @ 0x140538150 (MiMarkSystemVaAllocated.c)
 *     MiInitializeKernelStacks @ 0x140A40374 (MiInitializeKernelStacks.c)
 *     MiInitializeSystemPtes @ 0x140A4112C (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A41304 (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4157C (MiBuildPagedPool.c)
 *     MiInitializeDynamicRegion @ 0x140A4163C (MiInitializeDynamicRegion.c)
 *     MiInitializeDriverImages @ 0x140A4165C (MiInitializeDriverImages.c)
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
    return &qword_140C4E0B0;
  v2 = v1 - 2;
  if ( !v2 )
    return &qword_140C4E0F8;
  v3 = v2 - 1;
  if ( !v3 )
    return &qword_140C4DFD8;
  v5 = v3 - 2;
  if ( !v5 )
    return (__int64 *)&unk_140C4E068;
  v6 = v5 - 1;
  if ( !v6 )
    return &qword_140C4E020;
  v7 = v6 - 1;
  if ( !v7 )
    return &qword_140C4DFD8;
  v8 = v7 - 1;
  if ( !v8 )
    return &qword_140C4DF90;
  if ( v8 == 1 )
    return (__int64 *)&unk_140C4E140;
  return 0LL;
}
