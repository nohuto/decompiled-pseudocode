/*
 * XREFs of CmSiGetSectionLength @ 0x14027148C
 * Callers:
 *     HvpViewMapStart @ 0x140638ACC (HvpViewMapStart.c)
 * Callees:
 *     ZwQuerySection @ 0x1403F3FE0 (ZwQuerySection.c)
 */

NTSTATUS __fastcall CmSiGetSectionLength(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  __int128 SectionInformation; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  SectionInformation = 0LL;
  result = ZwQuerySection(a1, SectionBasicInformation, &SectionInformation, 0x18uLL, 0LL);
  if ( result >= 0 )
  {
    *a2 = v5;
    return 0;
  }
  return result;
}
