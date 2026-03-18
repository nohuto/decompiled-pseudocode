/*
 * XREFs of ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0235CF0
 * Callers:
 *     xxxMNButtonDown @ 0x1C0236DBC (xxxMNButtonDown.c)
 *     xxxMNDoubleClick @ 0x1C0237EB8 (xxxMNDoubleClick.c)
 *     xxxMNSelectItem @ 0x1C023A6BC (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 *     _SetTimer @ 0x1C01EABE8 (_SetTimer.c)
 *     xxxMNSetTop @ 0x1C023B0B8 (xxxMNSetTop.c)
 */

__int64 __fastcall xxxMNDoScroll(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  int v6; // ecx
  int v7; // eax
  __int64 v8; // r8

  v4 = a2;
  v6 = *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 116LL);
  if ( a2 == -3 )
  {
    v7 = -1;
  }
  else
  {
    if ( a2 != -4 )
      return 0LL;
    v7 = 1;
  }
  if ( (unsigned int)xxxMNSetTop(a1, (unsigned int)(v6 + v7)) )
  {
    v8 = *(unsigned int *)(gpsi + 4976LL);
    if ( !a3 )
      v8 = (unsigned int)v8 >> 2;
    SetTimer(*(_QWORD *)(**(_QWORD **)a1 + 16LL), v4, v8, 0LL, 0);
  }
  else if ( !a3 )
  {
    FindTimer(*(_QWORD *)(**(_QWORD **)a1 + 16LL), v4, 0, 1, 0LL);
  }
  return 1LL;
}
