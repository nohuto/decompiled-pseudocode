/*
 * XREFs of PopEtGetProcessSidAndPackageIdentity @ 0x1406E7C1C
 * Callers:
 *     PopEtGetProcessAppId @ 0x1406E73B0 (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x14026A0B0 (RtlQueryPackageIdentity.c)
 *     ObFastDereferenceObject @ 0x140299050 (ObFastDereferenceObject.c)
 *     SeQueryUserSidToken @ 0x1406259FC (SeQueryUserSidToken.c)
 *     PsQueryProcessAttributesByToken @ 0x140666820 (PsQueryProcessAttributesByToken.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 */

void __fastcall PopEtGetProcessSidAndPackageIdentity(struct _KPROCESS *a1, _DWORD *a2, __int64 a3)
{
  struct _DMA_ADAPTER *v6; // rsi
  unsigned __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  *(_QWORD *)a2 = 0LL;
  a2[2] = 0;
  LOBYTE(v7) = 0;
  v6 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  PsQueryProcessAttributesByToken((__int64)v6, &v7, (struct _KTHREAD *)&v8);
  if ( (_BYTE)v7 )
  {
    v7 = 256LL;
    v8 = 132LL;
    if ( (int)RtlQueryPackageIdentity((int)v6, (int)a3 + 4, (int)&v7, (int)a3 + 260, (__int64)&v8, 0LL) >= 0 )
    {
      *(_WORD *)a3 = (v7 >> 1) - 1;
      *(_WORD *)(a3 + 2) = (v8 >> 1) - 1;
    }
  }
  if ( (int)SeQueryUserSidToken((__int64)v6, a2, 0x44u, (ULONG *)&v7) < 0 )
  {
    *(_QWORD *)a2 = 0LL;
    a2[2] = 0;
  }
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], v6);
}
