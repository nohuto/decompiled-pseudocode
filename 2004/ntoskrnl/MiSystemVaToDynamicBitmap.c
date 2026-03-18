/*
 * XREFs of MiSystemVaToDynamicBitmap @ 0x14033E878
 * Callers:
 *     MiObtainSystemVa @ 0x14033DD94 (MiObtainSystemVa.c)
 *     MiMakeSystemRangeAvailable @ 0x14033E630 (MiMakeSystemRangeAvailable.c)
 *     MiIsSystemVaAllocated @ 0x140538444 (MiIsSystemVaAllocated.c)
 *     MiMarkSystemVaAllocated @ 0x1405387A0 (MiMarkSystemVaAllocated.c)
 *     MiInitializeKernelStacks @ 0x140A45BD0 (MiInitializeKernelStacks.c)
 *     MiInitializeSystemPtes @ 0x140A46988 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A46B60 (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A46DD8 (MiBuildPagedPool.c)
 *     MiInitializeDynamicRegion @ 0x140A46E98 (MiInitializeDynamicRegion.c)
 *     MiInitializeDriverImages @ 0x140A46EB8 (MiInitializeDriverImages.c)
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
    return &qword_140C4DF70;
  v2 = v1 - 2;
  if ( !v2 )
    return &qword_140C4DFB8;
  v3 = v2 - 1;
  if ( !v3 )
    return &qword_140C4DE98;
  v5 = v3 - 2;
  if ( !v5 )
    return (__int64 *)&unk_140C4DF28;
  v6 = v5 - 1;
  if ( !v6 )
    return &qword_140C4DEE0;
  v7 = v6 - 1;
  if ( !v7 )
    return &qword_140C4DE98;
  v8 = v7 - 1;
  if ( !v8 )
    return &qword_140C4DE50;
  if ( v8 == 1 )
    return (__int64 *)&unk_140C4E000;
  return 0LL;
}
