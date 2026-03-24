/*
 * XREFs of MiRelockProtoPoolPage @ 0x14031A078
 * Callers:
 *     MiFinishHardFault @ 0x140239890 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14028C1F0 (MiWaitForCollidedFaultComplete.c)
 *     MiCopyDataPageToImagePage @ 0x1403043E8 (MiCopyDataPageToImagePage.c)
 *     MiIdealClusterPage @ 0x140555E14 (MiIdealClusterPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiLockOwnedProtoPage @ 0x14031A320 (MiLockOwnedProtoPage.c)
 *     MiAddLockedPageCharge @ 0x14031A408 (MiAddLockedPageCharge.c)
 */

__int64 __fastcall MiRelockProtoPoolPage(__int64 a1, char *a2, __int64 a3, _DWORD *a4)
{
  char v6; // si
  __int64 v7; // rdx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v6 = MiLockPageInline(a1, (__int64)a2, a3, a4);
    *a2 = v6;
  }
  else
  {
    v9 = 0;
    v6 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v9, (__int64)a2, a3, (__int64)a4);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  MiAddLockedPageCharge(a1, 1LL);
  LOBYTE(v7) = v6;
  MiLockOwnedProtoPage(a1, v7);
  return a1;
}
