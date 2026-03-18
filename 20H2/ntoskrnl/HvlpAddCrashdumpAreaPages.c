/*
 * XREFs of HvlpAddCrashdumpAreaPages @ 0x1404F748C
 * Callers:
 *     HvlAddSecurePagesCallbackRoutine @ 0x1404F6D30 (HvlAddSecurePagesCallbackRoutine.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlpAddCrashdumpAreaPages(__int64 a1, char a2)
{
  char v2; // r8
  __int64 v3; // rax

  v2 = 0;
  if ( (!a2 || (HvlpFlags & 2) != 0) && KiHypervisorInitiatedCrashDump )
  {
    v2 = 1;
    if ( a2 )
    {
      *(_QWORD *)(a1 + 16) = (unsigned __int64)qword_140C47400 >> 12;
      v3 = (unsigned int)dword_140C473FC;
      *(_DWORD *)(a1 + 8) |= 0x80000022;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = (unsigned __int64)qword_140C473F0 >> 12;
      v3 = (unsigned int)dword_140C473F8;
      *(_DWORD *)(a1 + 8) |= 0x80000002;
    }
    *(_QWORD *)(a1 + 24) = v3;
  }
  return v2;
}
