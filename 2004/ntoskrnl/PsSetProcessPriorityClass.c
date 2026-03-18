/*
 * XREFs of PsSetProcessPriorityClass @ 0x14057C0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetProcessPriorityClass(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 1463) = a2;
}
