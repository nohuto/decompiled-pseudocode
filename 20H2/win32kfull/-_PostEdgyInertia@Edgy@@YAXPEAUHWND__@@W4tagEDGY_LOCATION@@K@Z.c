/*
 * XREFs of ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C02084CC
 * Callers:
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C0207448 (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C0208654 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall Edgy::_PostEdgyInertia(unsigned __int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  result = HMValidateHandleNoSecure(a1, 1);
  if ( result )
  {
    v6 = *(_QWORD *)(result + 40);
    if ( *(char *)(v6 + 20) >= 0 && *(char *)(v6 + 19) >= 0 )
      return PostMessage(result, 573, 0, a3 | (a2 << 16));
  }
  return result;
}
