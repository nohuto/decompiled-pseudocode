/*
 * XREFs of RtlSidHashInitialize @ 0x1402933C0
 * Callers:
 *     SepCreateTokenEx @ 0x14026E3A0 (SepCreateTokenEx.c)
 *     SepTokenFromAccessInformation @ 0x14027DE04 (SepTokenFromAccessInformation.c)
 *     SepCreateClaimAttributes @ 0x14062F7C8 (SepCreateClaimAttributes.c)
 *     SepSetTokenCapabilities @ 0x140630388 (SepSetTokenCapabilities.c)
 *     SepFilterToken @ 0x140632E90 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x1406795C0 (SepDuplicateToken.c)
 *     SepCopyTokenAccessInformation @ 0x1406D7740 (SepCopyTokenAccessInformation.c)
 *     CmpBuildAdminInformation @ 0x1406DD170 (CmpBuildAdminInformation.c)
 *     SepDuplicateClaimAttributes @ 0x140921848 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall RtlSidHashInitialize(__int64 *a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rcx

  if ( !a3 )
    return 3221225485LL;
  memset(a3, 0, 0x110uLL);
  if ( a1 && a2 )
  {
    a3[1] = a1;
    *(_DWORD *)a3 = a2;
    if ( a2 > 0x40 )
      a2 = 64;
    v6 = 1LL;
    v7 = a2;
    do
    {
      v8 = *a1;
      a1 += 2;
      v9 = *(unsigned __int8 *)(v8 + 4LL * *(unsigned __int8 *)(v8 + 1) + 4);
      v10 = *(_BYTE *)(v8 + 4LL * *(unsigned __int8 *)(v8 + 1) + 4) & 0xF;
      a3[v10 + 2] |= v6;
      a3[((unsigned __int64)v9 >> 4) + 18] |= v6;
      v6 = __ROL8__(v6, 1);
      --v7;
    }
    while ( v7 );
  }
  return 0LL;
}
