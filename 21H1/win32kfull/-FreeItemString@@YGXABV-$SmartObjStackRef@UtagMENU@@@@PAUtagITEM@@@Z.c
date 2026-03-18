/*
 * XREFs of ?FreeItemString@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1EAA0
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PAU_UNICODE_STRING@@PAH@Z @ 0x1E646 (-SetLPITEMInfoNoRedraw@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PA.c)
 *     _MNFreeItem@12 @ 0x1EA10 (_MNFreeItem@12.c)
 * Callees:
 *     <none>
 */

int __fastcall FreeItemString(int a1, _DWORD *a2)
{
  void *v3; // edx
  int result; // eax

  v3 = (void *)a2[3];
  if ( v3 )
    RtlFreeHeap(*(PVOID *)(*(_DWORD *)(**(_DWORD **)a1 + 12) + 64), 0, v3);
  result = *a2;
  *(_DWORD *)(*a2 + 24) = 0;
  a2[3] = 0;
  return result;
}
