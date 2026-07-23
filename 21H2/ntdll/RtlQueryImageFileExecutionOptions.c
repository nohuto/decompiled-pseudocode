/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x18007B430
 * Callers:
 *     LdrQueryImageFileExecutionOptions @ 0x18007B3F0 (LdrQueryImageFileExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D1E80 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007630C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x180076468 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlQueryImageFileKeyOption @ 0x18007B4D0 (RtlQueryImageFileKeyOption.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 */

__int64 __fastcall RtlQueryImageFileExecutionOptions(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v7; // eax
  unsigned int ImageFileKeyOption; // ebx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
    v7 = RtlpOpenImageFileOptionsKeyEx(a1, 9LL, 0, &Handle);
  else
    v7 = RtlpOpenBaseImageFileOptionsKey(&Handle);
  ImageFileKeyOption = v7;
  if ( v7 >= 0 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, a5, a6);
    if ( a1 )
      NtClose(Handle);
  }
  return ImageFileKeyOption;
}
