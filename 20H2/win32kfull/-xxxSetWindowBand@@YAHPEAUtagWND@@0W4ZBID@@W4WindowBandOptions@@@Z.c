/*
 * XREFs of ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C002E46C
 * Callers:
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C00050B0 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     NtUserSetWindowBand @ 0x1C002E2C0 (NtUserSetWindowBand.c)
 * Callees:
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C002E5A8 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x1C002E630 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 *     _BeginDeferWindowPos @ 0x1C002E6A0 (_BeginDeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSetWindowBand(__int64 a1, __int64 a2, int a3, int a4)
{
  int v5; // eax
  __int64 v7; // rcx
  struct tagSMWP *v8; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+20h] [rbp-60h] BYREF
  struct tagSMWP *v16; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v18[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v19[5]; // [rsp+58h] [rbp-28h] BYREF
  int v20; // [rsp+A0h] [rbp+20h] BYREF
  int v21; // [rsp+A8h] [rbp+28h] BYREF

  v21 = a4;
  v20 = a3;
  v16 = 0LL;
  v18[2] = 0LL;
  v5 = 19;
  if ( (a4 & 4) != 0 )
    v5 = 394263;
  v15 = v5;
  v19[0] = &v16;
  v19[1] = &v15;
  v19[2] = &v20;
  v19[3] = &v21;
  v16 = (struct tagSMWP *)BeginDeferWindowPos(0LL);
  if ( !v16 )
    return 0LL;
  lambda_febfd44819ec4f1448c7d434538d8b97_::operator()(v19, a1, a2);
  if ( !v16 )
    return 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1400LL);
  v17[0] = v19;
  if ( !v7 )
    v7 = a1;
  v17[1] = &v20;
  CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___(v7, v17);
  v8 = v16;
  if ( !v16 )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v18[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v18;
  v18[1] = v8;
  HMLockObject(v8);
  v10 = xxxEndDeferWindowPosEx(v16);
  ThreadUnlock1(v12, v11, v13);
  return v10;
}
