/*
 * XREFs of MmCreateSection @ 0x140642E30
 * Callers:
 *     AlpcpCreateSection @ 0x140642A04 (AlpcpCreateSection.c)
 *     EtwpCoverageEnsureContext @ 0x1407B43DC (EtwpCoverageEnsureContext.c)
 *     PspApiSetCopyToSystemSpace @ 0x140901B08 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x140902A0C (PspSiloInitializeUserSharedData.c)
 *     MiInitializeApiSets @ 0x140A4CCC8 (MiInitializeApiSets.c)
 *     MiInitializeCfg @ 0x140A4D608 (MiInitializeCfg.c)
 * Callees:
 *     MmCreateSectionEx @ 0x140642EB4 (MmCreateSectionEx.c)
 */

__int64 __fastcall MmCreateSection(int a1, __int64 a2, int a3, _QWORD *a4, int a5, int a6, __int64 a7, __int64 a8)
{
  unsigned int v8; // edx
  int v9; // r10d
  __int128 *Address; // r11
  ULONGLONG ullMultiplicand; // [rsp+48h] [rbp-20h]
  __int128 v13; // [rsp+50h] [rbp-18h] BYREF

  v8 = a6;
  v9 = 0;
  Address = 0LL;
  v13 = 0LL;
  if ( (a6 & 0x7F) != 0 )
  {
    Address = &v13;
    v8 = a6 & 0xFFFFFF80;
    *(_QWORD *)&v13 = 2LL;
    v9 = 1;
    *((_QWORD *)&v13 + 1) = (a6 & 0x7Fu) - 1;
  }
  LODWORD(ullMultiplicand) = v9;
  return MmCreateSectionEx(a1, a3, *a4, a5, v8, a7, a8, 0, Address, ullMultiplicand);
}
