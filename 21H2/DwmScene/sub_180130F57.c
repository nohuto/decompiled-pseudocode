/*
 * XREFs of sub_180130F57 @ 0x180130F57
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __noreturn sub_180130F57()
{
  sub_18011BCAC(&qword_180214E70, 3, "Failed to deserialise the JSON configuration. Check the configuration format.");
  throw;
}
