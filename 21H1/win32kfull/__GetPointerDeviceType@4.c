/*
 * XREFs of __GetPointerDeviceType@4 @ 0x159BF4
 * Callers:
 *     ?ContactVisualizationWorker@@YGHKPAXKHK@Z @ 0x14834D (-ContactVisualizationWorker@@YGHKPAXKHK@Z.c)
 *     ?ProcessInertia@Edgy@@YGXPBUINERTIA_INFO_INTERNAL@@@Z @ 0x16E090 (-ProcessInertia@Edgy@@YGXPBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_GetArcData@Edgy@@YG?AUtagARC_DATA@1@AAUtagEDGY_DATA@@QAX@Z @ 0x16E34D (-_GetArcData@Edgy@@YG-AUtagARC_DATA@1@AAUtagEDGY_DATA@@QAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YGXAAUtagEDGY_DATA@@QAX@Z @ 0x16EFD9 (-_StoreLastUpDataAndPost@Edgy@@YGXAAUtagEDGY_DATA@@QAX@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _PHIDTtoPT@4 @ 0x159214 (_PHIDTtoPT@4.c)
 */

int __thiscall _GetPointerDeviceType(void *this)
{
  int v1; // eax
  int v2; // ecx

  v1 = HMValidateHandleNoSecure((unsigned int)this, 19);
  v2 = -1;
  if ( v1 && *(char *)(v1 + 120) < 0 )
    return PHIDTtoPT(*(_DWORD **)(v1 + 284));
  return v2;
}
