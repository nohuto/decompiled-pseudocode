/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x14065940C
 * Callers:
 *     NtSetValueKey @ 0x140658BE0 (NtSetValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14065BF20 (CmpCaptureKeyValueArray.c)
 *     NtDeleteValueKey @ 0x14065DF20 (NtDeleteValueKey.c)
 *     NtRenameKey @ 0x140868D90 (NtRenameKey.c)
 * Callees:
 *     CmpIsBufferGloballyVisible @ 0x1405F38B0 (CmpIsBufferGloballyVisible.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, unsigned __int64 a2)
{
  return a1 || *((_QWORD *)&CmpRegistryProcess + 1) && !CmpIsBufferGloballyVisible(a2);
}
