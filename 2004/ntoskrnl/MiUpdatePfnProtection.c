/*
 * XREFs of MiUpdatePfnProtection @ 0x140255620
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140246200 (MiSetReadOnlyOnSectionView.c)
 *     MiProtectPrivateMemory @ 0x140254D50 (MiProtectPrivateMemory.c)
 *     MiMakeVaRangeNoAccess @ 0x140356C84 (MiMakeVaRangeNoAccess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiSanitizePfnProtection @ 0x1402AF410 (MiSanitizePfnProtection.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdatePfnProtection(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r10d
  __int64 v10; // rcx
  int v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v12, a2);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  v9 = MiSanitizePfnProtection(a1, (*(_QWORD *)(a2 + 16) >> 5) & 0x1FLL, a3);
  v10 = 32LL * (v9 & 0x1F);
  if ( v8 )
    *(_QWORD *)(a2 + 16) = v10 | v8 & 0xFFFFFFFFFFFFFC1FuLL;
  else
    *(_QWORD *)(a2 + 16) = MiSwizzleInvalidPte(v10, v6, v7, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v9;
}
