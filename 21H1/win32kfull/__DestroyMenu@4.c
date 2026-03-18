/*
 * XREFs of __DestroyMenu@4 @ 0x1E38A
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PAU_UNICODE_STRING@@PAH@Z @ 0x1E646 (-SetLPITEMInfoNoRedraw@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PA.c)
 *     _MNFreeItem@12 @ 0x1EA10 (_MNFreeItem@12.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     ?DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0x7CC38 (-DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     _xxxGetSystemMenu@8 @ 0x8EF56 (_xxxGetSystemMenu@8.c)
 *     _xxxSetSystemMenu@8 @ 0xC0654 (_xxxSetSystemMenu@8.c)
 *     _NtUserDestroyMenu@4 @ 0xCB582 (_NtUserDestroyMenu@4.c)
 *     _xxxLoadSysDesktopMenu@8 @ 0xCC3A8 (_xxxLoadSysDesktopMenu@8.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     ??4?$SharedMixedObjectPointerFieldrgItems@UtagITEM@@@tagMENU@@QAEPAUtagITEM@@PAU2@@Z @ 0x1DF42 (--4-$SharedMixedObjectPointerFieldrgItems@UtagITEM@@@tagMENU@@QAEPAUtagITEM@@PAU2@@Z.c)
 *     _MNFreeItem@12 @ 0x1EA10 (_MNFreeItem@12.c)
 */

int __stdcall _DestroyMenu(int a1)
{
  int v1; // esi
  _DWORD *v3; // ebx
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  bool v7; // zf
  int v8; // [esp-Ch] [ebp-14h]

  v1 = a1;
  if ( !a1 )
    return 0;
  if ( HMMarkObjectDestroy(a1) )
  {
    v3 = (_DWORD *)(v1 + 56);
    v4 = *(_DWORD *)(v1 + 56);
    if ( *(_DWORD *)(*(_DWORD *)(v1 + 20) + 24) )
    {
      v5 = *(_DWORD *)(*(_DWORD *)(v1 + 20) + 24);
      do
      {
        MNFreeItem(1);
        v4 += 80;
        --v5;
      }
      while ( v5 );
      v3 = (_DWORD *)(v1 + 56);
      v4 = *(_DWORD *)(v1 + 56);
    }
    if ( v4 )
    {
      RtlFreeHeap(*(PVOID *)(*(_DWORD *)(v1 + 12) + 64), 0, *(PVOID *)(v1 + 60));
      Win32FreePool(*v3);
      tagMENU::SharedMixedObjectPointerFieldrgItems<tagITEM>::operator=(v3, 0);
      *(_DWORD *)(*(_DWORD *)(v1 + 20) + 24) = 0;
    }
    v8 = *(_DWORD *)(v1 + 12);
    a1 = 0;
    LockObjectAssignment(&a1, v8);
    HMAssignmentUnlock(v1 + 52);
    v6 = *(_DWORD *)(v1 + 104);
    v7 = *(_DWORD *)(v6 + 4) == 0;
    *(_DWORD *)v6 = 0;
    *(_BYTE *)(v6 + 8) = 1;
    if ( v7 )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v6);
    HMFreeObject(v1);
    UnlockObjectAssignment(&a1);
  }
  return 1;
}
