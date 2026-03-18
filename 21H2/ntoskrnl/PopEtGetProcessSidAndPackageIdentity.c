/*
 * XREFs of PopEtGetProcessSidAndPackageIdentity @ 0x1406745EC
 * Callers:
 *     PopEtGetProcessAppId @ 0x140673C3C (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x140204280 (RtlQueryPackageIdentity.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     SeQueryUserSidToken @ 0x14066A374 (SeQueryUserSidToken.c)
 *     PsQueryProcessAttributesByToken @ 0x14070BA70 (PsQueryProcessAttributesByToken.c)
 */

__int64 __fastcall PopEtGetProcessSidAndPackageIdentity(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  *(_QWORD *)a2 = 0LL;
  a2[2] = 0;
  LOBYTE(v8) = 0;
  v6 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  PsQueryProcessAttributesByToken(v6, &v8, &v9);
  if ( (_BYTE)v8 )
  {
    v8 = 256LL;
    v9 = 132LL;
    if ( (int)RtlQueryPackageIdentity(v6, (int)a3 + 4, (int)&v8, (int)a3 + 260, (__int64)&v9, 0LL) >= 0 )
    {
      *(_WORD *)a3 = (v8 >> 1) - 1;
      *(_WORD *)(a3 + 2) = (v9 >> 1) - 1;
    }
  }
  if ( (int)SeQueryUserSidToken(v6, a2, 0x44u, (ULONG *)&v8) < 0 )
  {
    *(_QWORD *)a2 = 0LL;
    a2[2] = 0;
  }
  return ObFastDereferenceObject((signed __int64 *)(a1 + 1208), v6, 0x746C6644u);
}
