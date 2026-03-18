/*
 * XREFs of ?MNAllocMenuItems@@YGHABV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1DDEC
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YGHABV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1DF66 (-xxxRemoveDeleteMenuHelper@@YGHABV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     _xxxInsertMenuItem@20 @ 0x42D14 (_xxxInsertMenuItem@20.c)
 * Callees:
 *     ??4?$SharedMixedObjectPointerFieldrgItems@UtagITEM@@@tagMENU@@QAEPAUtagITEM@@PAU2@@Z @ 0x1DF42 (--4-$SharedMixedObjectPointerFieldrgItems@UtagITEM@@@tagMENU@@QAEPAUtagITEM@@PAU2@@Z.c)
 *     _DesktopAlloc@12 @ 0x1EAD0 (_DesktopAlloc@12.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall MNAllocMenuItems(int a1, unsigned __int8 a2)
{
  int v3; // esi
  void *v4; // ebx
  int v5; // ecx
  unsigned int v6; // ebx
  int *v7; // edx
  unsigned int v8; // ebx
  int v9; // ecx
  int result; // eax
  void *v11; // [esp+Ch] [ebp-8h]
  char *v12; // [esp+10h] [ebp-4h]

  v3 = 16 * (a2 ^ 1) - 8;
  v4 = (void *)Win32AllocPoolZInit(80 * (v3 + *(_DWORD *)(**(_DWORD **)a1 + 32)), 1953066325);
  v11 = v4;
  if ( !v4 )
    return 0;
  v5 = DesktopAlloc(*(_DWORD *)(**(_DWORD **)a1 + 12), 76 * (v3 + *(_DWORD *)(**(_DWORD **)a1 + 32)), 7);
  v12 = (char *)v5;
  if ( !v5 )
  {
    Win32FreePool(v4);
    return 0;
  }
  if ( *(_DWORD *)(**(_DWORD **)a1 + 56) )
  {
    v6 = *(_DWORD *)(**(_DWORD **)a1 + 32);
    if ( v3 + v6 < v6 )
      v6 += v3;
    memcpy(v11, *(const void **)(**(_DWORD **)a1 + 56), 80 * v6);
    memcpy(v12, *(const void **)(**(_DWORD **)a1 + 60), 76 * v6);
    RtlFreeHeap(*(PVOID *)(*(_DWORD *)(**(_DWORD **)a1 + 12) + 64), 0, *(PVOID *)(**(_DWORD **)a1 + 60));
    Win32FreePool(*(_DWORD *)(**(_DWORD **)a1 + 56));
    v4 = v11;
    v5 = (int)v12;
  }
  if ( v3 + *(_DWORD *)(**(_DWORD **)a1 + 32) )
  {
    v7 = (int *)v4;
    v8 = 0;
    do
    {
      *v7 = v5;
      v9 = *v7;
      v7 += 20;
      ++v8;
      *(v7 - 19) = v9 - *(_DWORD *)(*(_DWORD *)(**(_DWORD **)a1 + 12) + 8);
      v5 = (int)(v12 + 76);
      v12 += 76;
    }
    while ( v8 < v3 + *(_DWORD *)(**(_DWORD **)a1 + 32) );
    v4 = v11;
  }
  *(_DWORD *)(**(_DWORD **)a1 + 32) += v3;
  tagMENU::SharedMixedObjectPointerFieldrgItems<tagITEM>::operator=(v4);
  result = 1;
  *(_DWORD *)(**(_DWORD **)a1 + 60) = **(_DWORD **)(**(_DWORD **)a1 + 56);
  return result;
}
