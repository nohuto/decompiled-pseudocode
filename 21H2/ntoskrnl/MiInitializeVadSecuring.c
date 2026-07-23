/*
 * XREFs of MiInitializeVadSecuring @ 0x140A93310
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MiGenerateSecureCookie @ 0x1407D33D8 (MiGenerateSecureCookie.c)
 */

__int64 MiInitializeVadSecuring()
{
  __int64 result; // rax

  result = MiGenerateSecureCookie();
  qword_140C4DE90 = result;
  return result;
}
