/*
 * XREFs of MiRelockProtoPoolPage @ 0x140324DC8
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140209390 (MiWaitForCollidedFaultComplete.c)
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiLockOwnedProtoPage @ 0x140325070 (MiLockOwnedProtoPage.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
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
