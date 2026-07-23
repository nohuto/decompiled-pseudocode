/*
 * XREFs of MiUpdatePfnProtection @ 0x140319020
 * Callers:
 *     MiMakeVaRangeNoAccess @ 0x1402470B4 (MiMakeVaRangeNoAccess.c)
 *     MiSetReadOnlyOnSectionView @ 0x1402E53E0 (MiSetReadOnlyOnSectionView.c)
 *     MiProtectPrivateMemory @ 0x140318750 (MiProtectPrivateMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiSanitizePfnProtection @ 0x14033EFE0 (MiSanitizePfnProtection.c)
 */

__int64 __fastcall MiUpdatePfnProtection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v7; // r9
  unsigned int v8; // r10d
  __int64 v9; // rcx
  int v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0;
  v4 = a3;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v11, a2, a3, a4);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  v8 = MiSanitizePfnProtection(a1, (*(_QWORD *)(a2 + 16) >> 5) & 0x1FLL, v4);
  v9 = 32LL * (v8 & 0x1F);
  if ( v7 )
    *(_QWORD *)(a2 + 16) = v9 | v7 & 0xFFFFFFFFFFFFFC1FuLL;
  else
    *(_QWORD *)(a2 + 16) = MiSwizzleInvalidPte(v9);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v8;
}
