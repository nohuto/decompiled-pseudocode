/*
 * XREFs of wil::ResultFromException__lambda_c6623334da8ed11a0378a692878c9731___ @ 0x1803C8470
 * Callers:
 *     ?PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicationViewOperation@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@PEAUIUnknown@@@Z @ 0x1803CBEB8 (-PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicatio.c)
 * Callees:
 *     _lambda_c6623334da8ed11a0378a692878c9731_::operator() @ 0x1803C9780 (_lambda_c6623334da8ed11a0378a692878c9731_--operator().c)
 */

__int64 wil::ResultFromException__lambda_c6623334da8ed11a0378a692878c9731___()
{
  wil *v0; // rcx
  __int64 result; // rax

  try
  {
    lambda_c6623334da8ed11a0378a692878c9731_::operator()();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v0);
  }
  return result;
}
