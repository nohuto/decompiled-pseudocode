/*
 * XREFs of CmRegUtilWstrValueSetFullBuffer @ 0x1C00BE07C
 * Callers:
 *     PpRegStateUpdateStackCreationSettings @ 0x1C00BD978 (PpRegStateUpdateStackCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C008EE10 (WdmlibRtlInitUnicodeStringEx.c)
 */

NTSTATUS __fastcall CmRegUtilWstrValueSetFullBuffer(
        void *KeyHandle,
        wchar_t *Buffer,
        unsigned int BufferSize,
        void *a4,
        ULONG ValueName)
{
  NTSTATUS result; // eax
  void *Data; // r9
  void *v7; // r10
  _UNICODE_STRING unicodeStringValueName; // [rsp+30h] [rbp-18h] BYREF

  unicodeStringValueName = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&unicodeStringValueName, (wchar_t *)L"Security");
  if ( result >= 0 )
    return ZwSetValueKey(v7, &unicodeStringValueName, 0, 3u, Data, ValueName);
  return result;
}
