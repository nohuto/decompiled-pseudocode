/*
 * XREFs of MmCreateSection @ 0x14066BF30
 * Callers:
 *     AlpcpCreateSection @ 0x14066BC7C (AlpcpCreateSection.c)
 *     EtwpCoverageEnsureContext @ 0x14085A124 (EtwpCoverageEnsureContext.c)
 *     NtCreateIoRing @ 0x140938B40 (NtCreateIoRing.c)
 *     PspApiSetCopyToSystemSpace @ 0x1409AB9D8 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x1409AC998 (PspSiloInitializeUserSharedData.c)
 *     MiInitializeApiSets @ 0x140B087BC (MiInitializeApiSets.c)
 *     MiInitializeCfg @ 0x140B08F6C (MiInitializeCfg.c)
 * Callees:
 *     MmCreateSectionEx @ 0x14066BFB8 (MmCreateSectionEx.c)
 */

__int64 __fastcall MmCreateSection(int a1, __int64 a2, int a3, _QWORD *a4, int a5, int a6, __int64 a7, __int64 a8)
{
  unsigned int v8; // edx
  int v9; // r10d
  __int128 *Address; // r11
  int v12; // [rsp+40h] [rbp-38h]
  __int128 v13; // [rsp+60h] [rbp-18h] BYREF

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
  return MmCreateSectionEx(a1, a3, *a4, a5, v8, a7, a8, 0, v12, Address, v9);
}
