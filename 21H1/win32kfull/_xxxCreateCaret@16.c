/*
 * XREFs of _xxxCreateCaret@16 @ 0xAA702
 * Callers:
 *     _NtUserCreateCaret@16 @ 0xAA68C (_NtUserCreateCaret@16.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _zzzInternalDestroyCaret@0 @ 0x7DAB2 (_zzzInternalDestroyCaret@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall xxxCreateCaret(struct tagEVENTHOOK *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // esi
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // eax
  HANDLE ThreadId; // eax
  int v10; // ecx
  int v11; // eax
  struct HLFONT__ *v13; // [esp+4h] [ebp-24h]
  int v14; // [esp+8h] [ebp-20h] BYREF
  int v15; // [esp+Ch] [ebp-1Ch]
  _DWORD v16[6]; // [esp+10h] [ebp-18h] BYREF

  v15 = a2;
  memset(v16, 0, sizeof(v16));
  v5 = *(_DWORD **)(_gptiCurrent + 236);
  if ( *(_DWORD **)(*((_DWORD *)a1 + 2) + 236) != v5 || IsWindowBeingDestroyed(a1) )
    return 0;
  ++_gdwDeferWinEvent;
  if ( v5[54] )
  {
    zzzInternalDestroyCaret();
    v5 = *(_DWORD **)(_gptiCurrent + 236);
  }
  HMAssignmentLock(v7, v6);
  v8 = v5[55] & 0xFFFFFFFE;
  v5[56] = 1;
  v5[55] = v8 | 2;
  ThreadId = PsGetThreadId((PETHREAD)*_gptiCurrent);
  v10 = a4;
  v5[64] = ThreadId;
  if ( !a4 )
    v10 = 1;
  v11 = a3;
  if ( !a3 )
    v11 = 1;
  v5[62] = v13;
  if ( (unsigned int)v13 > 1 )
  {
    GreExtGetObjectW(v13, 24, &v14);
    v10 = v16[0];
    v11 = v15;
  }
  v5[60] = v10;
  v5[61] = v11;
  v5[63] = 0;
  zzzEndDeferWinEventNotify();
  xxxWindowEvent(0x8000u, a1, 0xFFFFFFF8, 0, 0);
  return 1;
}
