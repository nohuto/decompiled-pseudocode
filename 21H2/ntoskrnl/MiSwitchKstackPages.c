/*
 * XREFs of MiSwitchKstackPages @ 0x14053666C
 * Callers:
 *     MiSwapStackPage @ 0x1402C605C (MiSwapStackPage.c)
 *     MiStackTheftIsr @ 0x140536460 (MiStackTheftIsr.c)
 * Callees:
 *     MiCopyPfnEntryEx @ 0x14026DA30 (MiCopyPfnEntryEx.c)
 */

unsigned __int64 __fastcall MiSwitchKstackPages(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax

  MiCopyPfnEntryEx(a1, a2);
  *(_BYTE *)(v2 + 34) = *(_BYTE *)(v2 + 34) & 0xF8 | 6;
  result = *(_QWORD *)(v2 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
  *(_QWORD *)(v2 + 40) = result;
  return result;
}
