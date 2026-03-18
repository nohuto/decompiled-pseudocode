/*
 * XREFs of PopEtGetProcessSidAndPackageIdentity @ 0x140630098
 * Callers:
 *     PopEtGetProcessAppId @ 0x14062F82C (PopEtGetProcessAppId.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     RtlQueryPackageIdentity @ 0x1402E3F50 (RtlQueryPackageIdentity.c)
 *     PsQueryProcessAttributesByToken @ 0x140634B40 (PsQueryProcessAttributesByToken.c)
 *     SeQueryUserSidToken @ 0x140656B0C (SeQueryUserSidToken.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 */

void __fastcall PopEtGetProcessSidAndPackageIdentity(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  struct _DMA_ADAPTER *v6; // rsi
  unsigned __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  LOBYTE(v7) = 0;
  v6 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  PsQueryProcessAttributesByToken(v6, &v7, &v8);
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
  if ( (int)SeQueryUserSidToken(v6, a2, 68LL) < 0 )
  {
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], v6);
}
