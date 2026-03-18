/*
 * XREFs of MiInitializeVadSecuring @ 0x140A954B0
 * Callers:
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 * Callees:
 *     MiGenerateSecureCookie @ 0x1407CEE78 (MiGenerateSecureCookie.c)
 */

__int64 MiInitializeVadSecuring()
{
  __int64 result; // rax

  result = MiGenerateSecureCookie();
  qword_140C4DCD0 = result;
  return result;
}
