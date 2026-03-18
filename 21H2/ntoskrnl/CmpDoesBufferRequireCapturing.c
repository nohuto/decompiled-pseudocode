/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x140720224
 * Callers:
 *     NtDeleteValueKey @ 0x140714980 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14071F740 (CmpCaptureKeyValueArray.c)
 *     NtSetValueKey @ 0x14071FAA0 (NtSetValueKey.c)
 *     NtRenameKey @ 0x14090EF60 (NtRenameKey.c)
 * Callees:
 *     CmpIsBufferGloballyVisible @ 0x1407D557C (CmpIsBufferGloballyVisible.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, __int64 a2)
{
  return a1 || *((_QWORD *)&CmpRegistryProcess + 1) && !(unsigned __int8)CmpIsBufferGloballyVisible(a2);
}
