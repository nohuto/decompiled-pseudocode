/*
 * XREFs of MiInitializeVadSecuring @ 0x140A901C0
 * Callers:
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     MiGenerateSecureCookie @ 0x1407BD478 (MiGenerateSecureCookie.c)
 */

__int64 MiInitializeVadSecuring()
{
  __int64 result; // rax

  result = MiGenerateSecureCookie();
  qword_140C4DD90 = result;
  return result;
}
