/*
 * XREFs of MiRelockProtoPoolPage @ 0x140282754
 * Callers:
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiWaitForCollidedFaultComplete @ 0x140341A74 (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x140550324 (MiIdealClusterPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiAddLockedPageCharge @ 0x1402826F0 (MiAddLockedPageCharge.c)
 *     MiLockOwnedProtoPage @ 0x140282FE0 (MiLockOwnedProtoPage.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 */

__int64 __fastcall MiRelockProtoPoolPage(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char v6; // si
  __int64 v7; // rdx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v6 = MiLockPageInline(a1, a2, a3);
    *a2 = v6;
  }
  else
  {
    v9 = 0;
    v6 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v9, (__int64)a2, a3, a4);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  MiAddLockedPageCharge(a1, 1);
  LOBYTE(v7) = v6;
  MiLockOwnedProtoPage(a1, v7);
  return a1;
}
