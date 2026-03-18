/*
 * XREFs of ?PopState@@YGXPAUtagDDECONV@@@Z @ 0x17EB1A
 * Callers:
 *     ?xxxAdviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17EE02 (-xxxAdviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F0D7 (-xxxAdviseDataAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F516 (-xxxDupConvTerminate@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F68D (-xxxExecuteAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F9C5 (-xxxPokeAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FAD5 (-xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FD40 (-xxxUnadviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     _xxxFreeDdeConv@4 @ 0x180896 (_xxxFreeDdeConv@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _FreeDdeXact@4 @ 0x17FF12 (_FreeDdeXact@4.c)
 */

void __thiscall PopState(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v6; // esi
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // ecx
  int v11; // eax
  _DWORD v12[3]; // [esp+Ch] [ebp-Ch] BYREF

  v12[2] = 0;
  v2 = this + 7;
  v3 = this[7];
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v12[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v12;
  v12[1] = v3;
  HMLockObject(v3);
  v6 = *(_DWORD *)(*v2 + 12);
  v9 = HMAssignmentLock(v8, v7);
  v10 = this + 8;
  if ( v6 )
    v10 = (_DWORD *)(v9 + 12);
  HMAssignmentUnlock(v10);
  v11 = ThreadUnlock1();
  if ( v11 )
    FreeDdeXact(v11);
}
