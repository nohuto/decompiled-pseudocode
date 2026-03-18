/*
 * XREFs of PopEtGetProcessSidAndPackageIdentity @ 0x1406C7324
 * Callers:
 *     PopEtGetProcessAppId @ 0x1406C6AB8 (PopEtGetProcessAppId.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     RtlQueryPackageIdentity @ 0x1402E64F0 (RtlQueryPackageIdentity.c)
 *     PsQueryProcessAttributesByToken @ 0x1405E0520 (PsQueryProcessAttributesByToken.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     SeQueryUserSidToken @ 0x14066B11C (SeQueryUserSidToken.c)
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
  PsQueryProcessAttributesByToken((__int64)v6, &v7, &v8);
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
