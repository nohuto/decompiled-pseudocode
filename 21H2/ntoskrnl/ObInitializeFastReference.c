/*
 * XREFs of ObInitializeFastReference @ 0x14070F2D8
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14070F0D8 (PspInitializeProcessSecurity.c)
 *     PspLocateSystemDll @ 0x14084565C (PspLocateSystemDll.c)
 *     SeAssignPrimaryToken @ 0x1408471EC (SeAssignPrimaryToken.c)
 *     SepInitializationPhase0 @ 0x140B1E170 (SepInitializationPhase0.c)
 * Callees:
 *     ObpIncrPointerCountEx @ 0x1402F3424 (ObpIncrPointerCountEx.c)
 */

__int64 __fastcall ObInitializeFastReference(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    ObpIncrPointerCountEx((volatile signed __int64 *)(a2 - 48), 15);
  result = (a2 + 15) & -(__int64)(a2 != 0);
  *a1 = result;
  return result;
}
