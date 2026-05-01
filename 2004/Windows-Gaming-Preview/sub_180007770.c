/*
 * XREFs of sub_180007770 @ 0x180007770
 * Callers:
 *     <none>
 * Callees:
 *     sub_180006510 @ 0x180006510 (sub_180006510.c)
 */

void __fastcall sub_180007770(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  if ( (a1 & 0x80000000) != 0 )
  {
    if ( !byte_18005A038 )
      return;
    v1 = a1 & 0xFFFFFFFF7FFFFFFFuLL;
    v2 = &stru_18005A0E8;
  }
  else
  {
    if ( !byte_18005A038 )
      return;
    v1 = a1;
    v2 = &CriticalSection;
  }
  sub_180006510(v2, &SRWLock, v1);
}
