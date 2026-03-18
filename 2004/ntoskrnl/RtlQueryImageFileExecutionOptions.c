/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x140792240
 * Callers:
 *     PsBootPhaseComplete @ 0x140791F6C (PsBootPhaseComplete.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1406F6808 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlQueryImageFileKeyOption @ 0x1406FD590 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall RtlQueryImageFileExecutionOptions(__int64 a1, const WCHAR *a2, __int64 a3, ULONG *a4)
{
  int ImageFileKeyOption; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  ImageFileKeyOption = RtlpOpenBaseImageFileOptionsKey(&Handle);
  if ( ImageFileKeyOption >= 0 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, a2, 4, a4, 4u, 0LL);
    if ( RtlpDisableIFEOCaching )
      ZwClose(Handle);
  }
  return (unsigned int)ImageFileKeyOption;
}
