/*
 * XREFs of ??4?$SharedMixedObjectPointerFieldrgItems@UtagITEM@@@tagMENU@@QAEPAUtagITEM@@PAU2@@Z @ 0x1DF42
 * Callers:
 *     ?MNAllocMenuItems@@YGHABV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1DDEC (-MNAllocMenuItems@@YGHABV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YGHABV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1DF66 (-xxxRemoveDeleteMenuHelper@@YGHABV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     __DestroyMenu@4 @ 0x1E38A (__DestroyMenu@4.c)
 * Callees:
 *     <none>
 */

int __thiscall tagMENU::SharedMixedObjectPointerFieldrgItems<tagITEM>::operator=(_DWORD *this, int a2)
{
  int v2; // esi
  int result; // eax

  if ( a2 )
    v2 = *(_DWORD *)(a2 + 4);
  else
    v2 = 0;
  *(_DWORD *)(*(this - 9) + 16) = v2;
  result = a2;
  *this = a2;
  return result;
}
