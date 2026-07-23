/*
 * XREFs of _LdrVerifyImageMatchesChecksum@16 @ 0x4B32F040
 * Callers:
 *     <none>
 * Callees:
 *     _LdrVerifyImageMatchesChecksumEx@8 @ 0x4B32F0B0 (_LdrVerifyImageMatchesChecksumEx@8.c)
 */

NTSTATUS __cdecl LdrVerifyImageMatchesChecksum(
        HANDLE ImageFileHandle,
        PLDR_IMPORT_MODULE_CALLBACK ImportCallbackRoutine,
        PVOID ImportCallbackParameter,
        PUSHORT ImageCharacteristics)
{
  int v4; // ecx
  NTSTATUS result; // eax
  _LDR_VERIFY_IMAGE_INFO VerifyInfo; // [esp+8h] [ebp-28h] BYREF

  v4 = 0;
  VerifyInfo.Size = 40;
  VerifyInfo.Flags = 0;
  if ( ImportCallbackRoutine )
  {
    v4 = 1;
    VerifyInfo.CallbackInfo.ImportCallbackRoutine = ImportCallbackRoutine;
    VerifyInfo.Flags = 1;
    VerifyInfo.CallbackInfo.ImportCallbackParameter = ImportCallbackParameter;
  }
  if ( ImageCharacteristics )
    VerifyInfo.Flags = v4 | 4;
  result = LdrVerifyImageMatchesChecksumEx(ImageFileHandle, &VerifyInfo);
  if ( result >= 0 )
  {
    if ( ImageCharacteristics )
      *ImageCharacteristics = VerifyInfo.ImageCharacteristics;
  }
  return result;
}
