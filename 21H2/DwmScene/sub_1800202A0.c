/*
 * XREFs of sub_1800202A0 @ 0x1800202A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001FF78 @ 0x18001FF78 (sub_18001FF78.c)
 */

void __fastcall sub_1800202A0(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  if ( (a1 & 0x80000000) != 0 )
  {
    if ( !byte_18021F950 )
      return;
    v1 = a1 & 0xFFFFFFFF7FFFFFFFuLL;
    v2 = (struct _RTL_CRITICAL_SECTION *)&unk_18021F9F8;
  }
  else
  {
    if ( !byte_18021F950 )
      return;
    v1 = a1;
    v2 = &stru_18021F998;
  }
  sub_18001FF78(v2, &stru_18021F970, v1);
}
