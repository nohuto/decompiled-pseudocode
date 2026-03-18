/*
 * XREFs of _xxxChangeMonitorFlags@8 @ 0xE3CE8
 * Callers:
 *     _xxxEventWndProc@16 @ 0x15E80 (_xxxEventWndProc@16.c)
 *     _xxxCsDdeInitialize@20 @ 0xE3B3C (_xxxCsDdeInitialize@20.c)
 *     _NtUserUpdateInstance@12 @ 0x16AE32 (_NtUserUpdateInstance@12.c)
 * Callees:
 *     _xxxCsEvent@8 @ 0x1A4AB1 (_xxxCsEvent@8.c)
 */

int __fastcall xxxChangeMonitorFlags(int a1, int a2)
{
  unsigned int v2; // ebx
  int v4; // esi
  int *v5; // ecx
  int v6; // edx
  int result; // eax
  int v8; // eax
  int v9; // eax
  int v10; // [esp+Ch] [ebp-Ch] BYREF
  __int16 v11; // [esp+10h] [ebp-8h]
  __int16 v12; // [esp+12h] [ebp-6h]
  unsigned int v13; // [esp+14h] [ebp-4h]

  v2 = MonitorFlags;
  v4 = a2 ^ *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = a2;
  MonitorFlags = 0;
  v5 = (int *)&aMonitorCount;
  do
  {
    v6 = v5[1];
    if ( (v6 & v4) != 0 )
    {
      v8 = *v5;
      if ( (v6 & a2) != 0 )
        v9 = v8 + 1;
      else
        v9 = v8 - 1;
      *v5 = v9;
    }
    if ( *v5 )
      MonitorFlags |= v6;
    v5 += 2;
  }
  while ( (int)v5 < (int)&gcSynchronizeTimer );
  result = MonitorFlags;
  if ( v2 != MonitorFlags )
  {
    v10 = 0;
    v11 = 0;
    v12 = 4;
    v13 = MonitorFlags;
    return xxxCsEvent(&v10);
  }
  return result;
}
