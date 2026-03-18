/*
 * XREFs of _DestroyMenu @ 0x1C0035170
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0028410 (xxxUpdatePerUserSystemParameters.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00364FC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNFreeItem @ 0x1C0036994 (MNFreeItem.c)
 *     xxxGetSystemMenu @ 0x1C0078FF4 (xxxGetSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C007BB68 (xxxLoadSysDesktopMenu.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007D268 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     NtUserDestroyMenu @ 0x1C01149B0 (NtUserDestroyMenu.c)
 *     xxxSetSystemMenu @ 0x1C014AD28 (xxxSetSystemMenu.c)
 * Callees:
 *     ??4?$SharedMixedObjectPointerFieldrgItems@UtagITEM@@@tagMENU@@QEAAPEAUtagITEM@@PEAU2@@Z @ 0x1C0034190 (--4-$SharedMixedObjectPointerFieldrgItems@UtagITEM@@@tagMENU@@QEAAPEAUtagITEM@@PEAU2@@Z.c)
 *     MNFreeItem @ 0x1C0036994 (MNFreeItem.c)
 */

__int64 __fastcall DestroyMenu(__int64 a1)
{
  _QWORD *v3; // r14
  __int64 v4; // rdi
  int v5; // esi
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  if ( (unsigned int)HMMarkObjectDestroy() )
  {
    v3 = (_QWORD *)(a1 + 88);
    v4 = *(_QWORD *)(a1 + 88);
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
    if ( v5 )
    {
      do
      {
        MNFreeItem(a1, v4, 1LL);
        v4 += 96LL;
        --v5;
      }
      while ( v5 );
      v4 = *v3;
    }
    if ( v4 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, *(PVOID *)(a1 + 96));
      Win32FreePool(*v3);
      tagMENU::SharedMixedObjectPointerFieldrgItems<tagITEM>::operator=((_QWORD *)(a1 + 88), 0LL);
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) &= v6;
    }
    v7 = *(_QWORD *)(a1 + 24);
    v10 = 0LL;
    LockObjectAssignment(&v10, v7);
    HMAssignmentUnlock(a1 + 80);
    v8 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)v8 = 0LL;
    v9 = *(_DWORD *)(v8 + 8) == 0;
    *(_BYTE *)(v8 + 12) = 1;
    if ( v9 )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v8);
    HMFreeObject(a1);
    UnlockObjectAssignment(&v10);
  }
  return 1LL;
}
