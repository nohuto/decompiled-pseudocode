/*
 * XREFs of ?NNDeleteAdjustIndex@@YGXPAII@Z @ 0x1A728B
 * Callers:
 *     ?MNDeleteAdjustIndexes@@YGXPAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1A7228 (-MNDeleteAdjustIndexes@@YGXPAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NNDeleteAdjustIndex(_DWORD *a1, int a2)
{
  if ( *a1 == a2 )
  {
    *a1 = -1;
  }
  else if ( *a1 > a2 )
  {
    --*a1;
  }
}
