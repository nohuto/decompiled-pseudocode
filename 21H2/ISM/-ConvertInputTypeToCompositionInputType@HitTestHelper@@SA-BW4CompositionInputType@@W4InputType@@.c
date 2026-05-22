/*
 * XREFs of ?ConvertInputTypeToCompositionInputType@HitTestHelper@@SA?BW4CompositionInputType@@W4InputType@@@Z @ 0x18014936C
 * Callers:
 *     ?GetInputForwardInputSite@InputForwardProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputType@@PEAUHitTestResult@@@Z @ 0x180176AC8 (-GetInputForwardInputSite@InputForwardProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4I.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HitTestHelper::ConvertInputTypeToCompositionInputType(char a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( (a1 & 2) != 0 )
    return 1LL;
  if ( (a1 & 8) != 0 )
    return 3LL;
  if ( (a1 & 0x10) != 0 )
    return 4LL;
  return result;
}
