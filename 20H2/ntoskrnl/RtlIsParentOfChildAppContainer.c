/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1406FCB64
 * Callers:
 *     SeTokenCanImpersonate @ 0x140606E90 (SeTokenCanImpersonate.c)
 *     SepSetTokenPackage @ 0x140655738 (SepSetTokenPackage.c)
 *     SepSetTokenCapabilities @ 0x1406A97C8 (SepSetTokenCapabilities.c)
 *     SepCheckCreateLowBox @ 0x1406DF534 (SepCheckCreateLowBox.c)
 *     SepIsParentOfChildAppContainer @ 0x140927EAC (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140340E50 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x1406FB810 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(PSID Sid, PSID a2)
{
  ULONG v4; // edi
  PULONG v5; // rbx
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  if ( (int)RtlGetAppContainerSidType((char *)Sid, &v7) >= 0
    && v7 == 2
    && (int)RtlGetAppContainerSidType((char *)a2, &v7) >= 0
    && v7 == 1 )
  {
    v4 = 1;
    while ( 1 )
    {
      v5 = RtlSubAuthoritySid(Sid, v4);
      if ( *v5 != *RtlSubAuthoritySid(a2, v4) )
        break;
      if ( ++v4 >= 8 )
        return 1;
    }
  }
  return 0;
}
