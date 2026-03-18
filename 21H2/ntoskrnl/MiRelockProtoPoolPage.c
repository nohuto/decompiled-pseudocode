/*
 * XREFs of MiRelockProtoPoolPage @ 0x14027FE9C
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14027FEF8 (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 * Callees:
 *     MiLockOwnedProtoPage @ 0x140273EE0 (MiLockOwnedProtoPage.c)
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiRelockProtoPoolPage(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 v5; // si
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v5 = MiLockPageInline(a1);
    *a2 = v5;
  }
  else
  {
    v7 = 0;
    v5 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v7);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  MiAddLockedPageCharge(a1, 1LL, a3);
  MiLockOwnedProtoPage(a1, v5);
  return a1;
}
