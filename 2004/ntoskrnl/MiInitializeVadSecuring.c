/*
 * XREFs of MiInitializeVadSecuring @ 0x140A8F7B0
 * Callers:
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     MiGenerateSecureCookie @ 0x1407C05E8 (MiGenerateSecureCookie.c)
 */

__int64 MiInitializeVadSecuring()
{
  __int64 result; // rax

  result = MiGenerateSecureCookie();
  qword_140C4DC50 = result;
  return result;
}
