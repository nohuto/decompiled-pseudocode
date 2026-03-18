/*
 * XREFs of ?UnlockWndMenuWorker@@YGPAXPAUtagWND@@_N@Z @ 0xAAF60
 * Callers:
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxGetSystemMenu@8 @ 0x8EF56 (_xxxGetSystemMenu@8.c)
 *     _VerifyChildMenu@8 @ 0xF4F5A (_VerifyChildMenu@8.c)
 * Callees:
 *     <none>
 */

void *__fastcall UnlockWndMenuWorker(int a1, unsigned __int8 a2)
{
  int v4; // ecx
  _DWORD *v5; // ecx
  int v6; // ecx

  v4 = *(_DWORD *)(a1 + 4 * (a2 ^ 1) + 88);
  if ( !v4 )
    return 0;
  v5 = (_DWORD *)(v4 + 52);
  if ( a1 == *v5 )
    HMAssignmentUnlock(v5);
  if ( a2 )
  {
    v6 = a1 + 88;
    *(_DWORD *)(*(_DWORD *)(a1 + 20) + 104) = 0;
  }
  else
  {
    v6 = a1 + 92;
    *(_DWORD *)(*(_DWORD *)(a1 + 20) + 100) = 0;
  }
  return (void *)HMAssignmentUnlock(v6);
}
