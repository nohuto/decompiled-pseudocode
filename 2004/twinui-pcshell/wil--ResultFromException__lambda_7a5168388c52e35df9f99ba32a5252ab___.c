/*
 * XREFs of wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___ @ 0x180032B18
 * Callers:
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x1800347A4 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x1803D1E3C (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 * Callees:
 *     _lambda_7a5168388c52e35df9f99ba32a5252ab_::operator() @ 0x180032B38 (_lambda_7a5168388c52e35df9f99ba32a5252ab_--operator().c)
 */

__int64 wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___()
{
  wil *v0; // rcx
  __int64 result; // rax

  try
  {
    lambda_7a5168388c52e35df9f99ba32a5252ab_::operator()();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v0);
  }
  return result;
}
