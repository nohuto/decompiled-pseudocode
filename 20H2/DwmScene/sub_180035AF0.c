/*
 * XREFs of sub_180035AF0 @ 0x180035AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180032738 @ 0x180032738 (sub_180032738.c)
 *     sub_18003279C @ 0x18003279C (sub_18003279C.c)
 *     sub_180032800 @ 0x180032800 (sub_180032800.c)
 *     sub_180032864 @ 0x180032864 (sub_180032864.c)
 *     sub_180032ABC @ 0x180032ABC (sub_180032ABC.c)
 *     sub_1800339E0 @ 0x1800339E0 (sub_1800339E0.c)
 *     sub_1800C9328 @ 0x1800C9328 (sub_1800C9328.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall sub_180035AF0(__int64 a1, __int64 a2)
{
  unsigned int v4; // r15d
  char *v5; // rcx
  __int16 v6; // si
  _QWORD *v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rcx
  __int64 *v11; // rcx
  __int16 v12; // di
  __int64 v13; // rax
  __int16 v14; // di
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rcx
  __int64 *v18; // rcx
  __int16 v19; // si
  __int64 v20; // rax
  __int16 v21; // si
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int16 v26; // r14
  __int64 v27; // rax
  __int16 v28; // r14
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  __int64 v31; // rcx
  __int64 *v32; // rcx
  __int16 v33; // di
  __int64 v34; // rax
  __int16 v35; // di
  volatile signed __int32 *v36; // rbx
  volatile signed __int32 *v37; // rbx
  __int64 v38; // rcx
  __int64 *v39; // rcx
  __int16 v40; // si
  __int64 v41; // rax
  __int16 v42; // si
  volatile signed __int32 *v43; // rbx
  volatile signed __int32 *v44; // rbx
  __int64 *v45; // rax
  volatile signed __int32 *v46; // rbx
  __int64 *v47; // rax
  volatile signed __int32 *v48; // rbx
  __int64 *v49; // rax
  volatile signed __int32 *v50; // rbx
  __int64 *v51; // rax
  volatile signed __int32 *v52; // rbx
  __int64 *v53; // rax
  volatile signed __int32 *v54; // rbx
  volatile signed __int32 *v55; // rbx
  __int64 v56; // rbx
  __int64 v57; // rbx
  __int64 v58; // rbx
  __int64 v59; // rbx
  __int64 v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // rdi
  __int64 v63; // rbx
  __int64 v64; // rdi
  __int64 v65; // rbx
  __int64 v66; // rdi
  __int64 v67; // rbx
  __int64 v68; // rdi
  __int64 v69; // rbx
  __int64 result; // rax
  __int64 v71; // rbx
  __int64 v72; // rbx
  __int64 v73; // rbx
  __int64 v74; // rbx
  __int64 v75; // rbx
  _QWORD *v76; // [rsp+30h] [rbp-D0h]
  volatile signed __int32 *v77; // [rsp+38h] [rbp-C8h]
  __int128 v78; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v79; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v80; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v81; // [rsp+70h] [rbp-90h] BYREF
  __int128 v82; // [rsp+80h] [rbp-80h] BYREF
  __int128 v83; // [rsp+90h] [rbp-70h] BYREF
  __int128 v84; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v85; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v86; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v87; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v88; // [rsp+D8h] [rbp-28h]
  __int64 v89; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v90; // [rsp+E8h] [rbp-18h]
  char v91; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v92; // [rsp+F8h] [rbp-8h]
  char v93; // [rsp+100h] [rbp+0h] BYREF
  volatile signed __int32 *v94; // [rsp+108h] [rbp+8h]
  char v95; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v96; // [rsp+118h] [rbp+18h]
  char v97; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v98; // [rsp+128h] [rbp+28h]
  char v99; // [rsp+130h] [rbp+30h] BYREF
  volatile signed __int32 *v100; // [rsp+138h] [rbp+38h]
  char v101; // [rsp+140h] [rbp+40h] BYREF
  volatile signed __int32 *v102; // [rsp+148h] [rbp+48h]
  __int64 v103; // [rsp+150h] [rbp+50h]
  char v104[8]; // [rsp+158h] [rbp+58h] BYREF
  volatile signed __int32 *v105; // [rsp+160h] [rbp+60h]
  char v106[8]; // [rsp+168h] [rbp+68h] BYREF
  volatile signed __int32 *v107; // [rsp+170h] [rbp+70h]
  char v108[8]; // [rsp+178h] [rbp+78h] BYREF
  volatile signed __int32 *v109; // [rsp+180h] [rbp+80h]
  char v110[8]; // [rsp+188h] [rbp+88h] BYREF
  volatile signed __int32 *v111; // [rsp+190h] [rbp+90h]
  char v112[8]; // [rsp+198h] [rbp+98h] BYREF
  volatile signed __int32 *v113; // [rsp+1A0h] [rbp+A0h]
  __int64 v114; // [rsp+1A8h] [rbp+A8h] BYREF
  volatile signed __int32 *v115; // [rsp+1B0h] [rbp+B0h]
  __int64 v116; // [rsp+1B8h] [rbp+B8h] BYREF
  volatile signed __int32 *v117; // [rsp+1C0h] [rbp+C0h]
  __int64 v118; // [rsp+1C8h] [rbp+C8h] BYREF
  volatile signed __int32 *v119; // [rsp+1D0h] [rbp+D0h]
  __int64 v120; // [rsp+1D8h] [rbp+D8h] BYREF
  volatile signed __int32 *v121; // [rsp+1E0h] [rbp+E0h]
  __int64 v122; // [rsp+1E8h] [rbp+E8h] BYREF
  volatile signed __int32 *v123; // [rsp+1F0h] [rbp+F0h]

  v4 = *(_DWORD *)(a1 + 88);
  if ( *(_QWORD *)a2 )
  {
    sub_1800339E0((__int64 *)(*(_QWORD *)a2 + 480LL), &v87, v4);
    v5 = (char *)&v87;
    v6 = 1;
    v7 = v87;
  }
  else
  {
    v92 = 0LL;
    v5 = &v91;
    v6 = 2;
    v7 = 0LL;
  }
  v76 = v7;
  v77 = (volatile signed __int32 *)*((_QWORD *)v5 + 1);
  *(_QWORD *)v5 = 0LL;
  *((_QWORD *)v5 + 1) = 0LL;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v92 )
    {
      if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
      {
        v8 = v92;
        (**(void (__fastcall ***)(volatile signed __int32 *))v92)(v92);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v92 + 8LL))(v92);
      }
    }
  }
  if ( (v6 & 1) != 0 )
  {
    v6 &= ~1u;
    if ( v88 )
    {
      if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
      {
        v9 = v88;
        (**(void (__fastcall ***)(volatile signed __int32 *))v88)(v88);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v88 + 8LL))(v88);
      }
    }
  }
  v86 = 0LL;
  v85 = 0LL;
  v84 = 0LL;
  v83 = 0LL;
  v82 = 0LL;
  if ( *(_QWORD *)a2 )
  {
    v81 = 0LL;
    v10 = v76[12];
    if ( v10 )
    {
      v11 = (__int64 *)sub_1800C9328(v10, v104, v4);
      v12 = 4;
      v13 = *v11;
    }
    else
    {
      v94 = 0LL;
      v11 = (__int64 *)&v93;
      v12 = 8;
      v13 = 0LL;
    }
    v14 = v6 | v12;
    *(_QWORD *)&v81 = v13;
    *((_QWORD *)&v81 + 1) = v11[1];
    *v11 = 0LL;
    v11[1] = 0LL;
    if ( (v14 & 8) != 0 )
    {
      v14 &= ~8u;
      if ( v94 )
      {
        if ( _InterlockedExchangeAdd(v94 + 2, 0xFFFFFFFF) == 1 )
        {
          v15 = v94;
          (**(void (__fastcall ***)(volatile signed __int32 *))v94)(v94);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v94 + 8LL))(v94);
        }
      }
    }
    if ( (v14 & 4) != 0 )
    {
      v14 &= ~4u;
      v16 = v105;
      if ( v105 )
      {
        if ( _InterlockedExchangeAdd(v105 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        }
      }
    }
    v80 = 0LL;
    v17 = v76[14];
    if ( v17 )
    {
      v18 = (__int64 *)sub_1800C9328(v17, v106, v4);
      v19 = 16;
      v20 = *v18;
    }
    else
    {
      v96 = 0LL;
      v18 = (__int64 *)&v95;
      v19 = 32;
      v20 = 0LL;
    }
    v21 = v14 | v19;
    *(_QWORD *)&v80 = v20;
    *((_QWORD *)&v80 + 1) = v18[1];
    *v18 = 0LL;
    v18[1] = 0LL;
    if ( (v21 & 0x20) != 0 )
    {
      v21 &= ~0x20u;
      if ( v96 )
      {
        if ( _InterlockedExchangeAdd(v96 + 2, 0xFFFFFFFF) == 1 )
        {
          v22 = v96;
          (**(void (__fastcall ***)(volatile signed __int32 *))v96)(v96);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v96 + 8LL))(v96);
        }
      }
    }
    if ( (v21 & 0x10) != 0 )
    {
      v21 &= ~0x10u;
      v23 = v107;
      if ( v107 )
      {
        if ( _InterlockedExchangeAdd(v107 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        }
      }
    }
    v79 = 0LL;
    v24 = v76[16];
    if ( v24 )
    {
      v25 = (__int64 *)sub_1800C9328(v24, v108, v4);
      v26 = 64;
      v27 = *v25;
    }
    else
    {
      v98 = 0LL;
      v25 = (__int64 *)&v97;
      v27 = 0LL;
      v26 = 128;
    }
    v28 = v21 | v26;
    *(_QWORD *)&v79 = v27;
    *((_QWORD *)&v79 + 1) = v25[1];
    *v25 = 0LL;
    v25[1] = 0LL;
    if ( (v28 & 0x80u) != 0 )
    {
      v28 &= ~0x80u;
      if ( v98 )
      {
        if ( _InterlockedExchangeAdd(v98 + 2, 0xFFFFFFFF) == 1 )
        {
          v29 = v98;
          (**(void (__fastcall ***)(volatile signed __int32 *))v98)(v98);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v98 + 8LL))(v98);
        }
      }
    }
    if ( (v28 & 0x40) != 0 )
    {
      v28 &= ~0x40u;
      v30 = v109;
      if ( v109 )
      {
        if ( _InterlockedExchangeAdd(v109 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        }
      }
    }
    v78 = 0LL;
    v31 = v76[18];
    if ( v31 )
    {
      v32 = (__int64 *)sub_1800C9328(v31, v110, v4);
      v33 = 256;
      v34 = *v32;
    }
    else
    {
      v100 = 0LL;
      v32 = (__int64 *)&v99;
      v33 = 512;
      v34 = 0LL;
    }
    v35 = v28 | v33;
    *(_QWORD *)&v78 = v34;
    *((_QWORD *)&v78 + 1) = v32[1];
    *v32 = 0LL;
    v32[1] = 0LL;
    if ( (v35 & 0x200) != 0 )
    {
      v35 &= ~0x200u;
      if ( v100 )
      {
        if ( _InterlockedExchangeAdd(v100 + 2, 0xFFFFFFFF) == 1 )
        {
          v36 = v100;
          (**(void (__fastcall ***)(volatile signed __int32 *))v100)(v100);
          if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v100 + 8LL))(v100);
        }
      }
    }
    if ( (v35 & 0x100) != 0 )
    {
      v35 &= ~0x100u;
      v37 = v111;
      if ( v111 )
      {
        if ( _InterlockedExchangeAdd(v111 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v37)(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        }
      }
    }
    v38 = v76[20];
    if ( v38 )
    {
      v39 = (__int64 *)sub_1800C9328(v38, v112, v4);
      v40 = 1024;
      v41 = *v39;
    }
    else
    {
      v102 = 0LL;
      v39 = (__int64 *)&v101;
      v40 = 2048;
      v41 = 0LL;
    }
    v42 = v35 | v40;
    v89 = v41;
    v90 = (volatile signed __int32 *)v39[1];
    *v39 = 0LL;
    v39[1] = 0LL;
    if ( (v42 & 0x800) != 0 )
    {
      v42 &= ~0x800u;
      if ( v102 )
      {
        if ( _InterlockedExchangeAdd(v102 + 2, 0xFFFFFFFF) == 1 )
        {
          v43 = v102;
          (**(void (__fastcall ***)(volatile signed __int32 *))v102)(v102);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v102 + 8LL))(v102);
        }
      }
    }
    if ( (v42 & 0x400) != 0 )
    {
      v44 = v113;
      if ( v113 )
      {
        if ( _InterlockedExchangeAdd(v113 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v44)(v44);
          if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
        }
      }
    }
    v45 = sub_180032ABC(&v114, &v81);
    std::shared_ptr<__ExceptionPtr>::operator=(&v86, v45);
    v46 = v115;
    if ( v115 )
    {
      if ( _InterlockedExchangeAdd(v115 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v46)(v46);
        if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
      }
    }
    v47 = sub_180032864(&v116, &v80);
    std::shared_ptr<__ExceptionPtr>::operator=(&v82, v47);
    v48 = v117;
    if ( v117 )
    {
      if ( _InterlockedExchangeAdd(v117 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v48)(v48);
        if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
      }
    }
    v49 = sub_180032800(&v118, &v79);
    std::shared_ptr<__ExceptionPtr>::operator=(&v85, v49);
    v50 = v119;
    if ( v119 )
    {
      if ( _InterlockedExchangeAdd(v119 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v50)(v50);
        if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
      }
    }
    v51 = sub_180032738(&v120, &v78);
    std::shared_ptr<__ExceptionPtr>::operator=(&v84, v51);
    v52 = v121;
    if ( v121 )
    {
      if ( _InterlockedExchangeAdd(v121 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v52)(v52);
        if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
      }
    }
    v53 = sub_18003279C(&v122, &v89);
    std::shared_ptr<__ExceptionPtr>::operator=(&v83, v53);
    v54 = v123;
    if ( v123 )
    {
      if ( _InterlockedExchangeAdd(v123 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v54)(v54);
        if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
      }
    }
    if ( v90 )
    {
      if ( _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
      {
        v55 = v90;
        (**(void (__fastcall ***)(volatile signed __int32 *))v90)(v90);
        if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v90 + 8LL))(v90);
      }
    }
    if ( *((_QWORD *)&v78 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v78 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v56 = *((_QWORD *)&v78 + 1);
        (***((void (__fastcall ****)(_QWORD))&v78 + 1))(*((_QWORD *)&v78 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v56 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v78 + 1) + 8LL))(*((_QWORD *)&v78 + 1));
      }
    }
    if ( *((_QWORD *)&v79 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v79 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v57 = *((_QWORD *)&v79 + 1);
        (***((void (__fastcall ****)(_QWORD))&v79 + 1))(*((_QWORD *)&v79 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v79 + 1) + 8LL))(*((_QWORD *)&v79 + 1));
      }
    }
    if ( *((_QWORD *)&v80 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v80 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v58 = *((_QWORD *)&v80 + 1);
        (***((void (__fastcall ****)(_QWORD))&v80 + 1))(*((_QWORD *)&v80 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v58 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v80 + 1) + 8LL))(*((_QWORD *)&v80 + 1));
      }
    }
    if ( *((_QWORD *)&v81 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v81 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v59 = *((_QWORD *)&v81 + 1);
        (***((void (__fastcall ****)(_QWORD))&v81 + 1))(*((_QWORD *)&v81 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v59 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v81 + 1) + 8LL))(*((_QWORD *)&v81 + 1));
      }
    }
  }
  v60 = *(_QWORD *)(a1 + 144);
  if ( (_QWORD)v86 )
  {
    v61 = *(_QWORD *)(v86 + 104);
    if ( v61 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 8LL))(v61);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v60 + 88LL))(v60, v61, 0LL, 0LL);
    if ( v61 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v60 + 88LL))(v60, 0LL, 0LL, 0LL);
  }
  v62 = *(_QWORD *)(a1 + 144);
  if ( (_QWORD)v85 )
  {
    v63 = *(_QWORD *)(v85 + 104);
    if ( v63 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 8LL))(v63);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v62 + 480LL))(v62, v63, 0LL, 0LL);
    if ( v63 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v62 + 480LL))(v62, 0LL, 0LL, 0LL);
  }
  v64 = *(_QWORD *)(a1 + 144);
  if ( (_QWORD)v84 )
  {
    v65 = *(_QWORD *)(v84 + 104);
    if ( v65 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 8LL))(v65);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v64 + 512LL))(v64, v65, 0LL, 0LL);
    if ( v65 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v64 + 512LL))(v64, 0LL, 0LL, 0LL);
  }
  v66 = *(_QWORD *)(a1 + 144);
  if ( (_QWORD)v83 )
  {
    v67 = *(_QWORD *)(v83 + 104);
    if ( v67 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 8LL))(v67);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v66 + 184LL))(v66, v67, 0LL, 0LL);
    if ( v67 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v66 + 184LL))(v66, 0LL, 0LL, 0LL);
  }
  v68 = *(_QWORD *)(a1 + 144);
  if ( (_QWORD)v82 )
  {
    v69 = *(_QWORD *)(v82 + 104);
    v103 = v69;
    if ( v69 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 8LL))(v69);
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v68 + 72LL))(v68, v69, 0LL, 0LL);
    if ( v69 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v68 + 72LL))(v68, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)&v82 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v82 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v71 = *((_QWORD *)&v82 + 1);
      (***((void (__fastcall ****)(_QWORD))&v82 + 1))(*((_QWORD *)&v82 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v71 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v82 + 1) + 8LL))(*((_QWORD *)&v82 + 1));
    }
  }
  if ( *((_QWORD *)&v83 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v83 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v72 = *((_QWORD *)&v83 + 1);
      (***((void (__fastcall ****)(_QWORD))&v83 + 1))(*((_QWORD *)&v83 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v72 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v83 + 1) + 8LL))(*((_QWORD *)&v83 + 1));
    }
  }
  if ( *((_QWORD *)&v84 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v84 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v73 = *((_QWORD *)&v84 + 1);
      (***((void (__fastcall ****)(_QWORD))&v84 + 1))(*((_QWORD *)&v84 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v73 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v84 + 1) + 8LL))(*((_QWORD *)&v84 + 1));
    }
  }
  if ( *((_QWORD *)&v85 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v85 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v74 = *((_QWORD *)&v85 + 1);
      (***((void (__fastcall ****)(_QWORD))&v85 + 1))(*((_QWORD *)&v85 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v74 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v85 + 1) + 8LL))(*((_QWORD *)&v85 + 1));
    }
  }
  if ( *((_QWORD *)&v86 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v86 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v75 = *((_QWORD *)&v86 + 1);
      (***((void (__fastcall ****)(_QWORD))&v86 + 1))(*((_QWORD *)&v86 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v75 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v86 + 1) + 8LL))(*((_QWORD *)&v86 + 1));
    }
  }
  if ( v77 )
  {
    result = (unsigned int)_InterlockedDecrement(v77 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v77)(v77);
      result = (unsigned int)_InterlockedDecrement(v77 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v77 + 8LL))(v77);
    }
  }
  return result;
}
