/*
 * XREFs of ?NNDeleteAdjustIndex@@YAXPEAII@Z @ 0x1C024A8A0
 * Callers:
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C024A740 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NNDeleteAdjustIndex(unsigned int *a1, int a2)
{
  int v2; // eax

  v2 = *a1;
  if ( *a1 == a2 )
  {
    *a1 = -1;
  }
  else if ( v2 > a2 )
  {
    *a1 = v2 - 1;
  }
}
