/*
 * XREFs of wil::ResultFromException__lambda_cdb60d23c2a90c24b7bbcc9711020c83___ @ 0x1803D3330
 * Callers:
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_3d44a3ab248d62e96ede4d249d2fb10f___ @ 0x1803D2EAC (ShellPositionerManager--DoWorkForEachMonitor__lambda_3d44a3ab248d62e96ede4d249d2fb10f___.c)
 * Callees:
 *     _lambda_cdb60d23c2a90c24b7bbcc9711020c83_::operator() @ 0x1803D3CBC (_lambda_cdb60d23c2a90c24b7bbcc9711020c83_--operator().c)
 */

__int64 wil::ResultFromException__lambda_cdb60d23c2a90c24b7bbcc9711020c83___()
{
  wil *v0; // rcx
  __int64 result; // rax

  try
  {
    lambda_cdb60d23c2a90c24b7bbcc9711020c83_::operator()();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v0);
  }
  return result;
}
