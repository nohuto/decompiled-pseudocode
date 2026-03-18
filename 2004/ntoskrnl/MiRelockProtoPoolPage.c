/*
 * XREFs of MiRelockProtoPoolPage @ 0x140229704
 * Callers:
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     MiCopyDataPageToImagePage @ 0x14026085C (MiCopyDataPageToImagePage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14031273C (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x140550974 (MiIdealClusterPage.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiLockOwnedProtoPage @ 0x140229F90 (MiLockOwnedProtoPage.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 */

__int64 __fastcall MiRelockProtoPoolPage(__int64 a1, char *a2, __int64 a3)
{
  char v5; // si
  __int64 v6; // rdx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v5 = MiLockPageInline(a1);
    *a2 = v5;
  }
  else
  {
    v8 = 0;
    v5 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v8, a2);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  MiAddLockedPageCharge(a1, 1LL, a3);
  LOBYTE(v6) = v5;
  MiLockOwnedProtoPage(a1, v6);
  return a1;
}
