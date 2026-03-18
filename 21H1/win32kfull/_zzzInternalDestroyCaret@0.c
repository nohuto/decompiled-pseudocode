/*
 * XREFs of _zzzInternalDestroyCaret@0 @ 0x7DAB2
 * Callers:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _zzzDestroyCaret@0 @ 0x7DA96 (_zzzDestroyCaret@0.c)
 *     _xxxCreateCaret@16 @ 0xAA702 (_xxxCreateCaret@16.c)
 * Callees:
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _zzzInternalHideCaret@0 @ 0x7DB46 (_zzzInternalHideCaret@0.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 */

int __stdcall zzzInternalDestroyCaret()
{
  int result; // eax
  _DWORD *v1; // esi
  _DWORD *v2; // ebx
  struct tagEVENTHOOK *v3; // esi
  _DWORD v4[3]; // [esp+Ch] [ebp-Ch] BYREF

  v4[2] = 0;
  result = zzzInternalHideCaret();
  v1 = *(_DWORD **)(_gptiCurrent + 236);
  if ( v1[63] )
  {
    result = FindTimer(2, 1, 0);
    v1[63] = 0;
  }
  v1[62] = 0;
  v1[56] = 0;
  v2 = v1 + 54;
  v3 = (struct tagEVENTHOOK *)v1[54];
  if ( v3 )
  {
    v4[0] = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = v4;
    v4[1] = v3;
    HMLockObject(v3);
    HMAssignmentUnlock(v2);
    xxxWindowEvent(0x8001u, v3, 0xFFFFFFF8, 0, _gdwDeferWinEvent != 0 ? 2 : 0);
    return ThreadUnlock1();
  }
  return result;
}
