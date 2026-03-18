/*
 * XREFs of _FeedbackGetWindowSetting@16 @ 0x148DC2
 * Callers:
 *     ?ContactVisualizationWorker@@YGHKPAXKHK@Z @ 0x14834D (-ContactVisualizationWorker@@YGHKPAXKHK@Z.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YGHABUtagPOINTER_INFO@@H@Z @ 0x1487B8 (-GetWindowBarrelVisualizationSetting@Feedback@@YGHABUtagPOINTER_INFO@@H@Z.c)
 *     ?GetWindowVisualizationSetting@Feedback@@YGHABUtagPOINTER_INFO@@HHHPAH@Z @ 0x14883A (-GetWindowVisualizationSetting@Feedback@@YGHABUtagPOINTER_INFO@@HHHPAH@Z.c)
 *     _NtUserGetWindowFeedbackSetting@20 @ 0x164D2B (_NtUserGetWindowFeedbackSetting@20.c)
 * Callees:
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 */

int __fastcall FeedbackGetWindowSetting(_DWORD *a1, char a2, char a3, BOOL *a4)
{
  _DWORD *v4; // esi
  int v6; // edi
  int Prop; // eax
  int result; // eax
  BOOL v9; // edx

  v4 = a1;
  if ( !a1 )
    return 0;
  v6 = 0x10000 << a2;
  while ( 1 )
  {
    Prop = _GetProp((int)v4, (unsigned __int16)gatomFeedbackSettings, 1);
    if ( (v6 & Prop) != 0 )
      break;
    if ( (a3 & 1) == 0 || _IsTopLevelWindow(v4) )
      v4 = 0;
    else
      v4 = (_DWORD *)v4[14];
    if ( !v4 )
      return 0;
  }
  v9 = (Prop & (1 << a2)) != 0;
  result = 1;
  *a4 = v9;
  return result;
}
