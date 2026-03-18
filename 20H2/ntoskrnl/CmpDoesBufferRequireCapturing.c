/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x14066E6DC
 * Callers:
 *     NtDeleteValueKey @ 0x140668FB0 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14066BFC0 (CmpCaptureKeyValueArray.c)
 *     NtSetValueKey @ 0x14066DEB0 (NtSetValueKey.c)
 *     NtRenameKey @ 0x14086B010 (NtRenameKey.c)
 * Callees:
 *     CmpIsBufferGloballyVisible @ 0x1406BA92C (CmpIsBufferGloballyVisible.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, __int64 a2)
{
  return a1 || *((_QWORD *)&CmpRegistryProcess + 1) && !(unsigned __int8)CmpIsBufferGloballyVisible(a2);
}
