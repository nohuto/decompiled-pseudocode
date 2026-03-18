/*
 * XREFs of ?_PostEdgyInertia@Edgy@@YGXPAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x16EE40
 * Callers:
 *     ?ProcessInertia@Edgy@@YGXPBUINERTIA_INFO_INTERNAL@@@Z @ 0x16E090 (-ProcessInertia@Edgy@@YGXPBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YGXAAUtagEDGY_DATA@@QAX@Z @ 0x16EFD9 (-_StoreLastUpDataAndPost@Edgy@@YGXAAUtagEDGY_DATA@@QAX@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 */

unsigned int __fastcall Edgy::_PostEdgyInertia(unsigned int a1, unsigned __int16 a2, unsigned __int16 a3)
{
  unsigned int result; // eax
  int v5; // ecx

  result = HMValidateHandleNoSecure(a1, 1);
  if ( result )
  {
    v5 = *(_DWORD *)(result + 20);
    if ( *(char *)(v5 + 12) >= 0 && *(char *)(v5 + 11) >= 0 )
      return _PostMessage(result, 573, 0, a3 | (a2 << 16));
  }
  return result;
}
