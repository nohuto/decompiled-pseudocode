/*
 * XREFs of PopEtGetProcessSidAndPackageIdentity @ 0x140698894
 * Callers:
 *     PopEtGetProcessAppId @ 0x140698028 (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x14024F4D0 (RtlQueryPackageIdentity.c)
 *     ObFastDereferenceObject @ 0x14027C610 (ObFastDereferenceObject.c)
 *     PsQueryProcessAttributesByToken @ 0x140601050 (PsQueryProcessAttributesByToken.c)
 *     PsReferencePrimaryToken @ 0x140706D00 (PsReferencePrimaryToken.c)
 *     SeQueryUserSidToken @ 0x140706E24 (SeQueryUserSidToken.c)
 */

void __fastcall PopEtGetProcessSidAndPackageIdentity(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  struct _DMA_ADAPTER *v6; // rsi
  size_t v7; // [rsp+50h] [rbp+8h] BYREF
  size_t v8; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  LOBYTE(v7) = 0;
  v6 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  PsQueryProcessAttributesByToken((__int64)v6, &v7, &v8);
  if ( (_BYTE)v7 )
  {
    v7 = 256LL;
    v8 = 132LL;
    if ( RtlQueryPackageIdentity((int)v6, (wchar_t *)(a3 + 4), &v7, (wchar_t *)(a3 + 260), &v8, 0LL) >= 0 )
    {
      *(_WORD *)a3 = (v7 >> 1) - 1;
      *(_WORD *)(a3 + 2) = (v8 >> 1) - 1;
    }
  }
  if ( (int)SeQueryUserSidToken(v6, a2, 68LL) < 0 )
  {
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], v6);
}
