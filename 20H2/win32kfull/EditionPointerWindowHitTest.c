/*
 * XREFs of EditionPointerWindowHitTest @ 0x1C0216CE0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0128DE0 (INPUTDEST_FROM_PWND.c)
 *     xxxPointerWindowHitTest @ 0x1C02178C4 (xxxPointerWindowHitTest.c)
 */

_OWORD *__fastcall EditionPointerWindowHitTest(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        struct tagPOINT a8,
        int *a9,
        int a10,
        __int64 a11,
        __int64 a12,
        struct tagPOINT *a13)
{
  struct tagWND *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rax
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  _OWORD *result; // rax
  __int128 v30; // [rsp+60h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-88h]
  _DWORD v32[30]; // [rsp+78h] [rbp-80h] BYREF

  v31 = 0LL;
  v30 = 0LL;
  if ( a4 )
  {
    v16 = *(struct tagWND **)(a3 + 80);
  }
  else
  {
    v16 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiRit + 456LL) + 8LL) + 24LL);
    *(_QWORD *)&v30 = *(_QWORD *)(a2 + 416);
    *(_QWORD *)(a2 + 416) = &v30;
    *((_QWORD *)&v30 + 1) = v16;
    if ( v16 )
      HMLockObject(v16);
  }
  v19 = xxxPointerWindowHitTest((struct tagTHREADINFO *)a2, v16, a7, a8, a9, a10, a11, a12, a13);
  if ( !a4 )
    ThreadUnlock1(v18, v17, v20);
  v21 = HMValidateHandleNoSecure(v19, 1);
  v22 = INPUTDEST_FROM_PWND(v32, v21);
  v23 = v22[1];
  *a1 = *v22;
  v24 = v22[2];
  a1[1] = v23;
  v25 = v22[3];
  a1[2] = v24;
  v26 = v22[4];
  a1[3] = v25;
  v27 = v22[5];
  a1[4] = v26;
  v28 = v22[6];
  result = a1;
  a1[5] = v27;
  a1[6] = v28;
  return result;
}
