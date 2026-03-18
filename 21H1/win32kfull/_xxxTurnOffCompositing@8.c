/*
 * XREFs of _xxxTurnOffCompositing@8 @ 0x153D74
 * Callers:
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxInternalEnumWindow@16 @ 0x141598 (_xxxInternalEnumWindow@16.c)
 */

int __fastcall xxxTurnOffCompositing(int a1, int a2)
{
  int result; // eax
  int v4; // esi
  int v5; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v8; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  result = 0;
  v8 = 0;
  v4 = a1;
  v9 = 0;
  v10 = 0;
  v5 = 1;
  if ( a2 )
  {
    v4 = *(_DWORD *)(a1 + 60);
    if ( !v4 )
      return result;
    v5 = 3;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v8 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v8;
    v9 = v4;
    HMLockObject(v4);
  }
  result = xxxInternalEnumWindow(v4, (int (__stdcall *)(int, int))xxxEnumTurnOffCompositing, 0, v5);
  if ( a2 )
    return ThreadUnlock1();
  return result;
}
