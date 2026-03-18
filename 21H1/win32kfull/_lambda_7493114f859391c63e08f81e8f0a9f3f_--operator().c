/*
 * XREFs of _lambda_7493114f859391c63e08f81e8f0a9f3f_::operator() @ 0xAC81E
 * Callers:
 *     _xxxLoadHmodIndex@4 @ 0x16802 (_xxxLoadHmodIndex@4.c)
 * Callees:
 *     _UserGetLastError@0 @ 0xAC854 (_UserGetLastError@0.c)
 *     _UserGetLastStatus@0 @ 0xAC892 (_UserGetLastStatus@0.c)
 */

bool lambda_7493114f859391c63e08f81e8f0a9f3f_::operator()()
{
  return UserGetLastStatus() == -1073740284
      || UserGetLastStatus() == -1073740760
      || UserGetLastError() == 1655
      || UserGetLastError() == 577;
}
