/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x1406645EC
 * Callers:
 *     NtSetValueKey @ 0x140663DC0 (NtSetValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x140667100 (CmpCaptureKeyValueArray.c)
 *     NtDeleteValueKey @ 0x140669100 (NtDeleteValueKey.c)
 *     NtRenameKey @ 0x140868C30 (NtRenameKey.c)
 * Callees:
 *     CmpIsBufferGloballyVisible @ 0x140694360 (CmpIsBufferGloballyVisible.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, __int64 a2)
{
  return a1 || *((_QWORD *)&CmpRegistryProcess + 1) && !(unsigned __int8)CmpIsBufferGloballyVisible(a2);
}
