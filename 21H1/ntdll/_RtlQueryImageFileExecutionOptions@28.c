/*
 * XREFs of _RtlQueryImageFileExecutionOptions@28 @ 0x4B2E9700
 * Callers:
 *     _LdrQueryImageFileExecutionOptions@24 @ 0x4B2E96C0 (_LdrQueryImageFileExecutionOptions@24.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 *     @RtlpOpenBaseImageFileOptionsKey@4 @ 0x4B2E5F35 (@RtlpOpenBaseImageFileOptionsKey@4.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

int __stdcall RtlQueryImageFileExecutionOptions(
        unsigned __int16 *a1,
        int a2,
        int a3,
        _DWORD *a4,
        unsigned int a5,
        int *a6,
        int a7)
{
  int v7; // eax
  int ImageFileKeyOption; // esi
  HANDLE Handle; // [esp+8h] [ebp-4h] BYREF

  if ( a1 )
    v7 = RtlpOpenImageFileOptionsKeyEx(a1, 9, 0, &Handle);
  else
    v7 = RtlpOpenBaseImageFileOptionsKey((int *)&Handle);
  ImageFileKeyOption = v7;
  if ( v7 >= 0 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption((int)Handle, a2, a3, a4, a5, a6);
    if ( a1 )
      NtClose(Handle);
  }
  return ImageFileKeyOption;
}
