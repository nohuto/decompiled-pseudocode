/*
 * XREFs of PopEtGetProcessSidAndPackageIdentity @ 0x1405F758C
 * Callers:
 *     PopEtGetProcessAppId @ 0x1405F6D20 (PopEtGetProcessAppId.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     RtlQueryPackageIdentity @ 0x1402F3D20 (RtlQueryPackageIdentity.c)
 *     PsQueryProcessAttributesByToken @ 0x1406F07B0 (PsQueryProcessAttributesByToken.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 *     SeQueryUserSidToken @ 0x14071E204 (SeQueryUserSidToken.c)
 */

void __fastcall PopEtGetProcessSidAndPackageIdentity(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  struct _DMA_ADAPTER *v6; // rsi
  ULONG_PTR PackageSize; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR AppIdSize; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  LOBYTE(PackageSize) = 0;
  v6 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  PsQueryProcessAttributesByToken(v6, &PackageSize, &AppIdSize);
  if ( (_BYTE)PackageSize )
  {
    PackageSize = 256LL;
    AppIdSize = 132LL;
    if ( RtlQueryPackageIdentity(v6, (PWSTR)(a3 + 4), &PackageSize, (PWSTR)(a3 + 260), &AppIdSize, 0LL) >= 0 )
    {
      *(_WORD *)a3 = (PackageSize >> 1) - 1;
      *(_WORD *)(a3 + 2) = (AppIdSize >> 1) - 1;
    }
  }
  if ( (int)SeQueryUserSidToken(v6, a2, 68LL) < 0 )
  {
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], v6);
}
