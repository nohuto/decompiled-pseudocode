/*
 * XREFs of sub_180066600 @ 0x180066600
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800663CC @ 0x1800663CC (sub_1800663CC.c)
 */

void __fastcall sub_180066600(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  if ( (a1 & 0x80000000) != 0 )
  {
    if ( !byte_1800B4010 )
      return;
    v1 = a1 & 0xFFFFFFFF7FFFFFFFuLL;
    v2 = (struct _RTL_CRITICAL_SECTION *)&unk_1800B40C0;
  }
  else
  {
    if ( !byte_1800B4010 )
      return;
    v1 = a1;
    v2 = &CriticalSection;
  }
  sub_1800663CC(v2, &stru_1800B4030, v1);
}
