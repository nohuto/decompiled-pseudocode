/*
 * XREFs of ?SetLastUserInputModality@InputModalityManager@@QEAA_NW4InputDeviceTypeEx@@HHK@Z @ 0x180104094
 * Callers:
 *     ?SetLastUserInputModality@NonBamoInputDeliveryServer@@UEAAXW4InputType@@HH@Z @ 0x180103550 (-SetLastUserInputModality@NonBamoInputDeliveryServer@@UEAAXW4InputType@@HH@Z.c)
 *     ?OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180181910 (-OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z.c)
 *     ?s_InteractionOutputCallback@TapProcessor@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180181BE0 (-s_InteractionOutputCallback@TapProcessor@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall InputModalityManager::SetLastUserInputModality(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  char result; // al

  if ( *a1 == a2 && a1[1] == a3 && a1[2] == a4 )
  {
    result = 0;
  }
  else
  {
    *a1 = a2;
    result = 1;
    a1[1] = a3;
    a1[2] = a4;
  }
  if ( a1[3] != a5 )
    a1[3] = a5;
  return result;
}
