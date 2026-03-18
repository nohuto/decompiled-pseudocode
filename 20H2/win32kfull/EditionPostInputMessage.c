/*
 * XREFs of EditionPostInputMessage @ 0x1C00BD830
 * Callers:
 *     <none>
 * Callees:
 *     AdjustPwndPtiPqForDelegation @ 0x1C00BEC60 (AdjustPwndPtiPqForDelegation.c)
 *     PostInputMessage @ 0x1C00D6C28 (PostInputMessage.c)
 */

__int64 __fastcall EditionPostInputMessage(
        __int64 a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        struct tagINPUT_MESSAGE_SOURCE *a10,
        _QWORD *a11)
{
  __int64 v11; // r10
  void *v12; // rbx
  _QWORD *v13; // r14
  __int64 v15; // rdx
  __int64 v16; // rax
  struct tagINPUT_MESSAGE_SOURCE *v17; // rsi
  __int64 v18; // rax
  __int128 *v19; // r11
  __int64 v20; // rax
  __int128 *v21; // r10
  __int64 v22; // rax
  __int128 *v23; // r9
  char *v24; // r8
  __int64 v25; // xmm1_8
  __int128 v26; // xmm0
  __int64 v27; // xmm1_8
  __int128 v28; // xmm0
  __int64 v29; // xmm1_8
  __int128 v30; // xmm0
  __int64 v31; // xmm1_8
  __int128 v32; // xmm0
  __int64 v33; // xmm1_8
  __int128 v34; // xmm0
  __int64 v35; // xmm1_8
  __int128 v36; // xmm0
  __int64 v37; // xmm1_8
  struct tagUIPI_INFO *v39; // [rsp+58h] [rbp-31h]
  __int64 v40; // [rsp+70h] [rbp-19h] BYREF
  __int128 v41; // [rsp+78h] [rbp-11h]
  __int64 v42; // [rsp+88h] [rbp-1h]
  struct tagQ *v43; // [rsp+C0h] [rbp+37h] BYREF
  struct tagWND *v44; // [rsp+C8h] [rbp+3Fh] BYREF

  v44 = a2;
  v11 = *(_QWORD *)(a1 + 80);
  v12 = 0LL;
  v13 = a11;
  v15 = *a11;
  if ( *(char *)(*(_QWORD *)(v11 + 40) + 19LL) < 0 )
    return 0LL;
  if ( a3 - 512 <= 0xE )
  {
    if ( !v15 || *(_DWORD *)v15 != 2 )
      goto LABEL_5;
LABEL_20:
    v12 = *(void **)(v15 + 8);
    goto LABEL_5;
  }
  if ( a3 - 581 <= 0x12 )
  {
    v44 = *(struct tagWND **)(a1 + 80);
    if ( v15 )
      goto LABEL_20;
  }
LABEL_5:
  v16 = *(_QWORD *)(v11 + 16);
  v17 = a10;
  LODWORD(a11) = 0;
  v40 = v16;
  v43 = *(struct tagQ **)(v16 + 432);
  if ( !(unsigned int)AdjustPwndPtiPqForDelegation(
                        (unsigned int)&v43,
                        (unsigned int)&v44,
                        (unsigned int)&v40,
                        a3,
                        (__int64)a10,
                        (__int64)&a11) )
    return 0LL;
  v18 = *((_QWORD *)v43 + 15);
  if ( v18 )
    v18 = *(_QWORD *)(v18 + 16);
  v19 = (__int128 *)gObjDummyLock;
  if ( v18 )
    v19 = (__int128 *)(v18 + 392);
  v20 = *((_QWORD *)v43 + 11);
  v21 = (__int128 *)gObjDummyLock;
  if ( v20 )
    v21 = (__int128 *)(v20 + 392);
  v22 = *((_QWORD *)v43 + 12);
  v23 = (__int128 *)gObjDummyLock;
  if ( v22 )
    v23 = (__int128 *)(v22 + 392);
  v24 = (char *)gObjDummyLock;
  if ( v44 )
    v24 = (char *)v44 + 56;
  v25 = *((_QWORD *)&gpsiLock + 2);
  v41 = gpsiLock;
  v26 = *(_OWORD *)v24;
  v42 = v25;
  v27 = *((_QWORD *)v24 + 2);
  v41 = v26;
  v28 = *(_OWORD *)(v40 + 392);
  v42 = v27;
  v29 = *(_QWORD *)(v40 + 408);
  v39 = (struct tagUIPI_INFO *)v13[1];
  v41 = v28;
  v30 = *(_OWORD *)v43;
  v42 = v29;
  v31 = *((_QWORD *)v43 + 2);
  v41 = v30;
  v32 = *v23;
  v42 = v31;
  v33 = *((_QWORD *)v23 + 2);
  v41 = v32;
  v34 = *v21;
  v42 = v33;
  v35 = *((_QWORD *)v21 + 2);
  v41 = v34;
  v36 = *v19;
  v42 = v35;
  v37 = *((_QWORD *)v19 + 2);
  v41 = v36;
  v42 = v37;
  return PostInputMessage(v43, v44, a3, a5, a6, a7, a8, a9, v17, v12, v39, (int)a11, v40);
}
