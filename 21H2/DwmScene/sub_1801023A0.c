/*
 * XREFs of sub_1801023A0 @ 0x1801023A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180083FF0 @ 0x180083FF0 (sub_180083FF0.c)
 *     sub_180084098 @ 0x180084098 (sub_180084098.c)
 *     sub_18008599C @ 0x18008599C (sub_18008599C.c)
 *     sub_1800866A4 @ 0x1800866A4 (sub_1800866A4.c)
 *     sub_180086C14 @ 0x180086C14 (sub_180086C14.c)
 *     sub_180088B74 @ 0x180088B74 (sub_180088B74.c)
 *     sub_180088C78 @ 0x180088C78 (sub_180088C78.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     sub_180102318 @ 0x180102318 (sub_180102318.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     atan2f @ 0x180125030 (atan2f.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1801023A0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // eax
  __int64 v7; // rcx
  float v8; // xmm0_4
  float v9; // xmm6_4
  __int64 v10; // rbx
  _DWORD *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  _DWORD *v15; // rax
  __int64 *v16; // r8
  unsigned __int64 *v17; // rdx
  __int64 v18; // rcx
  _DWORD *v19; // rax
  signed __int64 v20; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  volatile signed __int32 *v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // [rsp+28h] [rbp-E0h]
  __int64 v29; // [rsp+28h] [rbp-E0h]
  __int64 v30; // [rsp+28h] [rbp-E0h]
  int v31; // [rsp+30h] [rbp-D8h]
  int v32; // [rsp+30h] [rbp-D8h]
  int v33; // [rsp+30h] [rbp-D8h]
  __int64 v34; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C8h]
  __int64 v36; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B8h]
  __int64 v38; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A8h]
  __int64 v40; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-98h]
  __int64 v42; // [rsp+78h] [rbp-90h] BYREF
  int v43; // [rsp+80h] [rbp-88h]
  __int64 v44; // [rsp+88h] [rbp-80h] BYREF
  int v45; // [rsp+90h] [rbp-78h]
  __int64 v46; // [rsp+98h] [rbp-70h] BYREF
  int v47; // [rsp+A0h] [rbp-68h]
  __int64 v48; // [rsp+A8h] [rbp-60h] BYREF
  int v49; // [rsp+B0h] [rbp-58h]
  __int64 v50; // [rsp+B8h] [rbp-50h] BYREF
  int v51; // [rsp+C0h] [rbp-48h]
  __int64 v52; // [rsp+C8h] [rbp-40h] BYREF
  int v53; // [rsp+D0h] [rbp-38h]
  __int64 v54; // [rsp+D8h] [rbp-30h] BYREF
  int v55; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v56; // [rsp+E8h] [rbp-20h] BYREF
  int v57; // [rsp+F0h] [rbp-18h]
  _DWORD v58[3]; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v59[3]; // [rsp+104h] [rbp-4h] BYREF
  _DWORD v60[4]; // [rsp+110h] [rbp+8h] BYREF
  unsigned __int64 v61; // [rsp+120h] [rbp+18h] BYREF
  int v62; // [rsp+128h] [rbp+20h]
  __int128 v63; // [rsp+130h] [rbp+28h]
  float X[2]; // [rsp+140h] [rbp+38h] BYREF
  float Y; // [rsp+148h] [rbp+40h]
  unsigned __int64 v66; // [rsp+150h] [rbp+48h] BYREF
  int v67; // [rsp+158h] [rbp+50h]
  __int128 v68; // [rsp+160h] [rbp+58h]
  __int128 v69; // [rsp+170h] [rbp+68h] BYREF
  _DWORD v70[4]; // [rsp+180h] [rbp+78h] BYREF
  __int64 v71; // [rsp+190h] [rbp+88h] BYREF
  int v72; // [rsp+198h] [rbp+90h]
  __int64 v73; // [rsp+1A0h] [rbp+98h] BYREF
  int v74; // [rsp+1A8h] [rbp+A0h]
  unsigned __int64 v75[2]; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v76; // [rsp+1C0h] [rbp+B8h] BYREF
  int v77; // [rsp+1C8h] [rbp+C0h]
  unsigned __int64 v78[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  unsigned __int64 v79[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  unsigned __int64 v80[2]; // [rsp+1F0h] [rbp+E8h] BYREF

  v63 = 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v2 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v5 + 1, v5) )
      {
        v3 = *(_QWORD *)(a1 + 56);
        v63 = *(_OWORD *)(a1 + 56);
        goto LABEL_3;
      }
    }
  }
  v3 = v63;
LABEL_3:
  sub_180089274(v3);
  v68 = 0LL;
  v4 = *(_QWORD *)(v3 + 64);
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v4 + 8);
      if ( !v6 )
        break;
      if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v6 + 1, v6) )
      {
        v68 = *(_OWORD *)(v3 + 56);
        break;
      }
    }
    v3 = v63;
  }
  v69 = 0LL;
  sub_18008599C(v3, &v69);
  v34 = *(_QWORD *)(a1 + 112);
  LODWORD(v35) = *(_DWORD *)(a1 + 120);
  sub_180088B74(v69, v75, (__int64)&v34, 2);
  v36 = *(_QWORD *)(a1 + 124);
  LODWORD(v37) = *(_DWORD *)(a1 + 132);
  sub_180088B74(v69, &v61, (__int64)&v36, 2);
  v7 = *(_QWORD *)(a1 + 96);
  if ( v7 && *(_DWORD *)(a1 + 88) )
  {
    v38 = qword_180214C38;
    LODWORD(v39) = dword_180214C40;
    sub_180088C78(v7, v70, (__int64)&v38, 2);
    X[0] = *(float *)v70;
    X[1] = 0.0;
    Y = *(float *)&v70[2];
    sub_180086C14(X);
    v8 = atan2f(Y, X[0]);
    v9 = (float)(v8 - atan2f(1.0, 0.0)) + *(float *)(a1 + 136);
    if ( *(_DWORD *)(a1 + 88) == 2 )
    {
      v10 = v69;
      sub_180089274(v69);
      v66 = *(_QWORD *)(v10 + 144);
      v67 = *(_DWORD *)(v10 + 152);
      sub_180083FF0(&v71, &v61, &v66);
      sub_180083FF0(&v73, v75, &v66);
      v40 = v71;
      LODWORD(v41) = v72;
      sub_180102318((__int64)v79, (__int64)&v40, v9);
      v42 = v73;
      v43 = v74;
      sub_180102318((__int64)v78, (__int64)&v42, v9);
      v11 = sub_180084098(v58, v78, &v66);
      v28 = *(_QWORD *)v11;
      v31 = v11[2];
      sub_18008933C(v3);
      *(_QWORD *)(v3 + 144) = v28;
      *(_DWORD *)(v3 + 152) = v31;
      v12 = _InterlockedIncrement64(&qword_18020F6C0);
      v13 = v63;
      *(_QWORD *)(v63 + 208) = v12;
      v14 = *(_QWORD *)(v13 + 216);
      if ( v12 >= v14 )
        v14 = v12;
      *(_QWORD *)(v13 + 216) = v14;
      v15 = sub_180084098(v59, v79, &v66);
      *(_DWORD *)(a1 + 140) = *v15;
      *(_DWORD *)(a1 + 144) = v15[1];
      *(_DWORD *)(a1 + 148) = v15[2];
      v44 = qword_180214C48;
      v45 = dword_180214C50;
      v46 = *(_QWORD *)(a1 + 140);
      v47 = *(_DWORD *)(a1 + 148);
      v16 = &v44;
      v17 = (unsigned __int64 *)&v46;
      v18 = v13;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 88) != 1 )
        goto LABEL_28;
      sub_180083FF0(&v76, v75, &v61);
      v48 = v76;
      v49 = v77;
      sub_180102318((__int64)v80, (__int64)&v48, v9);
      *(_QWORD *)(a1 + 140) = v61;
      *(_DWORD *)(a1 + 148) = v62;
      v19 = sub_180084098(v60, v80, &v61);
      v29 = *(_QWORD *)v19;
      v32 = v19[2];
      sub_18008933C(v3);
      *(_QWORD *)(v3 + 144) = v29;
      *(_DWORD *)(v3 + 152) = v32;
      v20 = _InterlockedExchangeAdd64(&qword_18020F6C0, 1uLL);
      v18 = v63;
      *(_QWORD *)(v63 + 208) = v20 + 1;
      v21 = *(_QWORD *)(v18 + 216);
      if ( v20 + 1 >= v21 )
        v21 = v20 + 1;
      *(_QWORD *)(v18 + 216) = v21;
      v50 = qword_180214C48;
      v51 = dword_180214C50;
      v52 = *(_QWORD *)(a1 + 140);
      v53 = *(_DWORD *)(a1 + 148);
      v16 = &v50;
      v17 = (unsigned __int64 *)&v52;
    }
    sub_1800866A4(v18, v17, (__int64)v16);
  }
  else
  {
    v30 = *(_QWORD *)(a1 + 112);
    v33 = *(_DWORD *)(a1 + 120);
    sub_18008933C(v3);
    *(_QWORD *)(v3 + 144) = v30;
    *(_DWORD *)(v3 + 152) = v33;
    v22 = _InterlockedIncrement64(&qword_18020F6C0);
    v23 = v63;
    *(_QWORD *)(v63 + 208) = v22;
    v24 = *(_QWORD *)(v23 + 216);
    if ( v22 >= v24 )
      v24 = v22;
    *(_QWORD *)(v23 + 216) = v24;
    v54 = qword_180214C48;
    v55 = dword_180214C50;
    v56 = v61;
    v57 = v62;
    sub_1800866A4(v23, &v56, (__int64)&v54);
    *(_QWORD *)(a1 + 140) = v61;
    *(_DWORD *)(a1 + 148) = v62;
  }
LABEL_28:
  v25 = (volatile signed __int32 *)*((_QWORD *)&v69 + 1);
  if ( *((_QWORD *)&v69 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v69 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      if ( !_InterlockedDecrement(v25 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  if ( *((_QWORD *)&v68 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v68 + 1) + 8LL)) )
    {
      v26 = *((_QWORD *)&v68 + 1);
      (***((void (__fastcall ****)(_QWORD))&v68 + 1))(*((_QWORD *)&v68 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v26 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v68 + 1) + 8LL))(*((_QWORD *)&v68 + 1));
    }
  }
  if ( *((_QWORD *)&v63 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v63 + 1) + 8LL)) )
  {
    v27 = *((_QWORD *)&v63 + 1);
    (***((void (__fastcall ****)(_QWORD))&v63 + 1))(*((_QWORD *)&v63 + 1));
    if ( !_InterlockedDecrement((volatile signed __int32 *)(v27 + 12)) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v63 + 1) + 8LL))(*((_QWORD *)&v63 + 1));
  }
}
