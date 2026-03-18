/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x1405E3E7C
 * Callers:
 *     NtDeleteValueKey @ 0x1405DD640 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x1405E0B70 (CmpCaptureKeyValueArray.c)
 *     NtSetValueKey @ 0x1405E3650 (NtSetValueKey.c)
 *     NtRenameKey @ 0x1408655F0 (NtRenameKey.c)
 * Callees:
 *     CmpIsBufferGloballyVisible @ 0x1406495A4 (CmpIsBufferGloballyVisible.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, __int64 a2)
{
  return a1 || *((_QWORD *)&CmpRegistryProcess + 1) && !(unsigned __int8)CmpIsBufferGloballyVisible(a2);
}
