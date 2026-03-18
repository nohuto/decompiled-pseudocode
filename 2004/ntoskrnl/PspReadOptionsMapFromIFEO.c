/*
 * XREFs of PspReadOptionsMapFromIFEO @ 0x14061396C
 * Callers:
 *     PspReadIFEOMitigationOptions @ 0x140613888 (PspReadIFEOMitigationOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x140613910 (PspReadIFEOMitigationAuditOptions.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     RtlQueryImageFileKeyOption @ 0x1406FD590 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall PspReadOptionsMapFromIFEO(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rcx
  int ImageFileKeyOption; // ebx
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v7) = 0;
  if ( !a1 )
    return 3221225485LL;
  v4 = *(void **)(a1 + 192);
  if ( !v4 )
    return 3221225485LL;
  ImageFileKeyOption = RtlQueryImageFileKeyOption(v4, 24, (__int64)&v7);
  if ( ImageFileKeyOption == -2147483643 )
    ImageFileKeyOption = -1073741820;
  if ( ImageFileKeyOption >= 0 )
    memset((void *)(a3 + (unsigned int)v7), 0, (unsigned int)(24 - v7));
  return (unsigned int)ImageFileKeyOption;
}
