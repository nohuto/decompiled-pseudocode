/*
 * XREFs of ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C01129EC
 * Callers:
 *     xxxGetSystemMenu @ 0x1C0078FF4 (xxxGetSystemMenu.c)
 *     xxxSetDialogSystemMenu @ 0x1C007C530 (xxxSetDialogSystemMenu.c)
 *     xxxSetWindowData @ 0x1C00B2618 (xxxSetWindowData.c)
 *     xxxSetSystemMenu @ 0x1C014AD28 (xxxSetSystemMenu.c)
 *     xxxSetMenu @ 0x1C014BF24 (xxxSetMenu.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 */

__int64 __fastcall LockWndMenuWorker(__int64 a1, unsigned __int8 a2, _QWORD **a3)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v7; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v14; // rcx
  _QWORD v15[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = a1 + 168;
  v5 = a1 + 160;
  v7 = 0LL;
  v9 = *(_QWORD *)(a1 + 8 * (a2 ^ 1LL) + 160);
  if ( v9 )
  {
    v14 = (_QWORD *)(v9 + 80);
    if ( *v14 == a1 )
      HMAssignmentUnlock(v14);
  }
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)a3) && !*(_QWORD *)(**a3 + 80LL) )
  {
    v10 = *a3;
    v15[1] = a1;
    v15[0] = *v10 + 80LL;
    HMAssignmentLock(v15);
  }
  v11 = a3[2];
  if ( a2 )
  {
    if ( !v11 )
      v11 = (_QWORD *)**a3;
    if ( v11 )
      v7 = v11[6];
    *(_QWORD *)(*(_QWORD *)(v5 - 120) + 160LL) = v7;
    v12 = v16;
    v16[0] = v5;
    v16[1] = v11;
  }
  else
  {
    if ( !v11 )
      v11 = (_QWORD *)**a3;
    if ( v11 )
      v7 = v11[6];
    *(_QWORD *)(*(_QWORD *)(v4 - 128) + 152LL) = v7;
    v12 = v17;
    v17[0] = v4;
    v17[1] = v11;
  }
  return HMAssignmentLock(v12);
}
