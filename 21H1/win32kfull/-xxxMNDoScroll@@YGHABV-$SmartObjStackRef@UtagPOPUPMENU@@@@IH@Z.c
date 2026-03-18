/*
 * XREFs of ?xxxMNDoScroll@@YGHABV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x196E88
 * Callers:
 *     _xxxMNButtonDown@16 @ 0x1979D7 (_xxxMNButtonDown@16.c)
 *     _xxxMNDoubleClick@12 @ 0x19860D (_xxxMNDoubleClick@12.c)
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     __SetTimer@20 @ 0x156316 (__SetTimer@20.c)
 *     _xxxMNSetTop@8 @ 0x19A800 (_xxxMNSetTop@8.c)
 */

int __fastcall xxxMNDoScroll(int a1, char *a2, int a3)
{
  int v5; // ecx
  int v6; // eax
  int result; // eax
  unsigned int v8; // edx

  v5 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)a1 + 20) + 72);
  if ( a2 == (char *)-3 )
  {
    v6 = -1;
  }
  else
  {
    result = 0;
    if ( a2 != (char *)-4 )
      return result;
    v6 = 1;
  }
  if ( xxxMNSetTop(a1, v5 + v6) )
  {
    v8 = *(_DWORD *)(_gpsi + 4444);
    if ( !a3 )
      v8 >>= 2;
    _SetTimer(*(_DWORD *)(**(_DWORD **)a1 + 8), a2, v8, 0, 0);
  }
  else if ( !a3 )
  {
    FindTimer(*(_DWORD *)(**(_DWORD **)a1 + 8), (int)a2, 0, 1, 0);
  }
  return 1;
}
