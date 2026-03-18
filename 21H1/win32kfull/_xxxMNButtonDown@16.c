/*
 * XREFs of _xxxMNButtonDown@16 @ 0x1979D7
 * Callers:
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     _xxxMNMouseMove@12 @ 0x199408 (_xxxMNMouseMove@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     ?xxxMNDoScroll@@YGHABV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x196E88 (-xxxMNDoScroll@@YGHABV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNHideNextHierarchy@@YGHABV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x196F0C (-xxxMNHideNextHierarchy@@YGHABV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 */

int __fastcall xxxMNButtonDown(int *a1, int a2, char *a3, int a4)
{
  int v5; // ebx
  _DWORD *v6; // eax
  int v7; // ebx
  int result; // eax
  bool v9; // zf

  v5 = a2;
  if ( *(char **)(*(_DWORD *)*a1 + 40) == a3 )
  {
    if ( a4 )
      **(_DWORD **)*a1 |= 0x80u;
    result = xxxMNHideNextHierarchy(a1);
    if ( !result )
    {
      if ( !a4 )
        return result;
      result = xxxMNOpenHierarchy(a1, v5);
      if ( result )
      {
        result = *(_DWORD *)*a1;
        *(_DWORD *)result &= ~0x80u;
      }
    }
    goto LABEL_18;
  }
  v6 = *(_DWORD **)*a1;
  if ( a4 )
  {
    v7 = 1;
    *v6 &= ~0x80u;
  }
  else
  {
    v7 = (*v6 >> 10) & 1;
  }
  result = xxxMNSelectItem(a3);
  if ( !result || !*(_DWORD *)(result + 8) || (result = *(_DWORD *)result, (*(_BYTE *)(result + 4) & 3) != 0) )
  {
    v5 = a2;
LABEL_18:
    if ( a4 )
    {
      *(_DWORD *)(v5 + 4) |= 8u;
      return xxxMNDoScroll((int)a1, a3, 1);
    }
    return result;
  }
  v9 = v7 == 0;
  v5 = a2;
  if ( v9 )
    goto LABEL_18;
  result = xxxMNOpenHierarchy(a1, a2);
  if ( result != -1 )
    goto LABEL_18;
  return result;
}
