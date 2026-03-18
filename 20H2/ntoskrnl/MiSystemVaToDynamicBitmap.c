/*
 * XREFs of MiSystemVaToDynamicBitmap @ 0x140250EA8
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x14024F8D4 (MiMakeSystemRangeAvailable.c)
 *     MiObtainSystemVa @ 0x1402518F4 (MiObtainSystemVa.c)
 *     MiIsSystemVaAllocated @ 0x14053BE14 (MiIsSystemVaAllocated.c)
 *     MiMarkSystemVaAllocated @ 0x14053C170 (MiMarkSystemVaAllocated.c)
 *     MiInitializeKernelStacks @ 0x140A4BE70 (MiInitializeKernelStacks.c)
 *     MiInitializeSystemPtes @ 0x140A4CC24 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4CDFC (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4D074 (MiBuildPagedPool.c)
 *     MiInitializeDynamicRegion @ 0x140A4D134 (MiInitializeDynamicRegion.c)
 *     MiInitializeDriverImages @ 0x140A4D154 (MiInitializeDriverImages.c)
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
    return &qword_140C4DFF0;
  v2 = v1 - 2;
  if ( !v2 )
    return &qword_140C4E038;
  v3 = v2 - 1;
  if ( !v3 )
    return &qword_140C4DF18;
  v5 = v3 - 2;
  if ( !v5 )
    return (__int64 *)&unk_140C4DFA8;
  v6 = v5 - 1;
  if ( !v6 )
    return &qword_140C4DF60;
  v7 = v6 - 1;
  if ( !v7 )
    return &qword_140C4DF18;
  v8 = v7 - 1;
  if ( !v8 )
    return &qword_140C4DED0;
  if ( v8 == 1 )
    return (__int64 *)&unk_140C4E080;
  return 0LL;
}
