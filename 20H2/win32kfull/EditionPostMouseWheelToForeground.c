/*
 * XREFs of EditionPostMouseWheelToForeground @ 0x1C01E12A0
 * Callers:
 *     <none>
 * Callees:
 *     AdjustPwndPtiPqForDelegation @ 0x1C00BEC60 (AdjustPwndPtiPqForDelegation.c)
 *     PostInputMessage @ 0x1C00D6C28 (PostInputMessage.c)
 */

__int64 __fastcall EditionPostMouseWheelToForeground(
        unsigned int a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        struct tagINPUT_MESSAGE_SOURCE *a8,
        struct tagUIPI_INFO *a9)
{
  __int64 result; // rax
  __int64 v14; // rax
  __int128 *v15; // r10
  __int128 *v16; // r11
  __int64 v17; // rax
  __int64 v18; // rax
  __int128 *v19; // r9
  __int64 v20; // r8
  __int128 *v21; // rdx
  __int64 v22; // xmm1_8
  __int128 v23; // xmm0
  __int64 v24; // xmm1_8
  __int128 v25; // xmm0
  __int64 v26; // xmm1_8
  __int128 v27; // xmm0
  __int64 v28; // xmm1_8
  __int128 v29; // xmm0
  __int64 v30; // xmm1_8
  __int128 v31; // xmm0
  __int64 v32; // xmm1_8
  __int128 v33; // xmm0
  __int64 v34; // xmm1_8
  int v35; // [rsp+78h] [rbp-21h] BYREF
  struct tagQ *v36; // [rsp+80h] [rbp-19h] BYREF
  __int64 v37; // [rsp+88h] [rbp-11h] BYREF
  __int64 v38; // [rsp+90h] [rbp-9h] BYREF
  __int128 v39; // [rsp+98h] [rbp-1h]
  __int64 v40; // [rsp+A8h] [rbp+Fh]

  v38 = 0LL;
  v37 = 0LL;
  v35 = 0;
  v36 = (struct tagQ *)gpqForeground;
  result = AdjustPwndPtiPqForDelegation((__int64 *)&v36, &v38, (struct tagTHREADINFO **)&v37, a1, a8, &v35);
  if ( (_DWORD)result )
  {
    v14 = *((_QWORD *)v36 + 15);
    if ( v14 )
      v14 = *(_QWORD *)(v14 + 16);
    v15 = (__int128 *)gObjDummyLock;
    if ( v14 )
      v15 = (__int128 *)(v14 + 392);
    v16 = (__int128 *)gObjDummyLock;
    v17 = *(_QWORD *)(gpqForeground + 88LL);
    if ( v17 )
      v16 = (__int128 *)(v17 + 392);
    v18 = *(_QWORD *)(gpqForeground + 96LL);
    v19 = (__int128 *)gObjDummyLock;
    if ( v18 )
      v19 = (__int128 *)(v18 + 392);
    v20 = gObjDummyLock;
    if ( v37 )
      v20 = v37 + 392;
    v21 = (__int128 *)gObjDummyLock;
    if ( v38 )
      v21 = (__int128 *)(v38 + 56);
    v22 = *((_QWORD *)&gpsiLock + 2);
    v39 = gpsiLock;
    v23 = *v21;
    v40 = v22;
    v24 = *((_QWORD *)v21 + 2);
    v39 = v23;
    v25 = *(_OWORD *)v20;
    v40 = v24;
    v26 = *(_QWORD *)(v20 + 16);
    v39 = v25;
    v27 = *(_OWORD *)v36;
    v40 = v26;
    v28 = *((_QWORD *)v36 + 2);
    v39 = v27;
    v29 = *v19;
    v40 = v28;
    v30 = *((_QWORD *)v19 + 2);
    v39 = v29;
    v31 = *v16;
    v40 = v30;
    v32 = *((_QWORD *)v16 + 2);
    v39 = v31;
    v33 = *v15;
    v40 = v32;
    v34 = *((_QWORD *)v15 + 2);
    v39 = v33;
    v40 = v34;
    return PostInputMessage(v36, 0LL, a1, a2, a3, a4, a5, a6, a7, a8, 0LL, a9, v35, v37);
  }
  return result;
}
