/*
 * XREFs of ?LockWndMenuWorker@@YGPAXPAUtagWND@@_NABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x9B2F2
 * Callers:
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 *     _xxxGetSystemMenu@8 @ 0x8EF56 (_xxxGetSystemMenu@8.c)
 *     _xxxSetSystemMenu@8 @ 0xC0654 (_xxxSetSystemMenu@8.c)
 *     _xxxSetMenu@12 @ 0xC0AC0 (_xxxSetMenu@12.c)
 *     _xxxSetDialogSystemMenu@4 @ 0xC5750 (_xxxSetDialogSystemMenu@4.c)
 *     _LockWndMenu@8 @ 0x1975AA (_LockWndMenu@8.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 */

int __fastcall LockWndMenuWorker(int a1, unsigned __int8 a2, _DWORD **a3)
{
  _DWORD *v4; // ecx
  bool v5; // al
  int v6; // ecx
  _DWORD (__fastcall *v7)(int, _DWORD); // edx
  int v8; // ebx
  _DWORD *v9; // eax
  int v10; // ecx

  v4 = *(_DWORD **)(a1 + 4 * (a2 ^ 1) + 88);
  if ( v4 )
  {
    v4 += 13;
    if ( *v4 == a1 )
      HMAssignmentUnlock(v4);
  }
  v5 = SmartObjStackRef<tagMENU>::operator==(a3, (int)v4);
  v7 = HMAssignmentLock;
  v8 = 0;
  if ( !v5 && !*(_DWORD *)(**a3 + 52) )
  {
    HMAssignmentLock(v6, HMAssignmentLock);
    v7 = HMAssignmentLock;
  }
  v9 = a3[2];
  if ( a2 )
  {
    if ( !v9 )
      v9 = (_DWORD *)**a3;
    v10 = *(_DWORD *)(a1 + 20);
    if ( v9 )
      v8 = v9[6];
    *(_DWORD *)(v10 + 104) = v8;
  }
  else
  {
    if ( !v9 )
      v9 = (_DWORD *)**a3;
    v10 = *(_DWORD *)(a1 + 20);
    if ( v9 )
      v8 = v9[6];
    *(_DWORD *)(v10 + 100) = v8;
  }
  return v7(v10, v7);
}
