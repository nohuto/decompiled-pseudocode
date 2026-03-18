/*
 * XREFs of ?xxxSetWindowBand@@YGHPAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x9BDF2
 * Callers:
 *     _NtUserSetWindowBand@12 @ 0x9BCD0 (_NtUserSetWindowBand@12.c)
 *     ?AddComponent@CoreWindowProp@@SGJPAUtagWND@@0@Z @ 0xC42E8 (-AddComponent@CoreWindowProp@@SGJPAUtagWND@@0@Z.c)
 * Callees:
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_9eec84fa5d6124b437e3ad3c3e50d459___ @ 0x9BED0 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_9eec84fa5d6124b437e3ad3c3e50d459__.c)
 *     _lambda_0c0b2ffdec7bf834e0e54733fd19cc10_::operator() @ 0x9BEF4 (_lambda_0c0b2ffdec7bf834e0e54733fd19cc10_--operator().c)
 *     __BeginDeferWindowPos@4 @ 0x9BF2E (__BeginDeferWindowPos@4.c)
 */

int __fastcall xxxSetWindowBand(int a1, int a2, char a3, char a4)
{
  int v6; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v9; // esi
  int v11; // [esp+Ch] [ebp-24h] BYREF
  int v12; // [esp+10h] [ebp-20h] BYREF
  _DWORD v13[3]; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v14[4]; // [esp+20h] [ebp-10h] BYREF

  v12 = 19;
  v11 = 0;
  v13[2] = 0;
  if ( (a4 & 4) != 0 )
    v12 = 394263;
  v14[0] = &v11;
  v14[1] = &v12;
  v14[2] = &a3;
  v14[3] = &a4;
  v11 = _BeginDeferWindowPos(0);
  if ( !v11 )
    return 0;
  lambda_0c0b2ffdec7bf834e0e54733fd19cc10_::operator()(a1, a2);
  if ( !v11 )
    return 0;
  CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_9eec84fa5d6124b437e3ad3c3e50d459___(v14, &a3);
  v6 = v11;
  if ( !v11 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v13[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v13;
  v13[1] = v6;
  HMLockObject(v6);
  v9 = xxxEndDeferWindowPosEx(v11, 1);
  ThreadUnlock1();
  return v9;
}
