/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x14061949C
 * Callers:
 *     NtSetValueKey @ 0x140618C70 (NtSetValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x140657D1C (CmpCaptureKeyValueArray.c)
 *     NtDeleteValueKey @ 0x140693CE0 (NtDeleteValueKey.c)
 *     NtRenameKey @ 0x1408642D0 (NtRenameKey.c)
 * Callees:
 *     CmpIsBufferGloballyVisible @ 0x14070AA44 (CmpIsBufferGloballyVisible.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, __int64 a2)
{
  return a1 || *((_QWORD *)&CmpRegistryProcess + 1) && !(unsigned __int8)CmpIsBufferGloballyVisible(a2);
}
