/*
 * XREFs of ?SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z @ 0x1C028B8A4
 * Callers:
 *     ?VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z @ 0x1C02B72AC (-VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004370 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00070D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007124 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019FF4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001C958 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01093F4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C011DC54 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C011E138 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::SendCreateBundleObject(
        DXG_GUEST_REMOTEOBJECTCHANNEL *this,
        __int64 a2,
        char *a3,
        struct _EX_RUNDOWN_REF *a4)
{
  struct _EX_RUNDOWN_REF *v4; // r12
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *Current; // r13
  __int64 v11; // rax
  PERESOURCE *Global; // rax
  char v13; // si
  signed __int64 v14; // r15
  _QWORD *v15; // r12
  __int64 v16; // rax
  _DWORD *v17; // rdi
  __int64 v18; // rdx
  int v19; // r9d
  int EntryType; // eax
  bool v21; // zf
  __int64 v22; // rdx
  _QWORD *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rsi
  char *v26; // r15
  signed __int64 v27; // rax
  signed __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rcx
  int v34; // eax
  _QWORD *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r9
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rax
  struct _EX_RUNDOWN_REF *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v59; // [rsp+30h] [rbp-D0h]
  _QWORD *v60; // [rsp+30h] [rbp-D0h]
  unsigned int v61; // [rsp+38h] [rbp-C8h] BYREF
  struct _EX_RUNDOWN_REF *v62; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v63[24]; // [rsp+48h] [rbp-B8h] BYREF
  signed __int64 v64; // [rsp+60h] [rbp-A0h]
  signed __int64 v65; // [rsp+68h] [rbp-98h]
  DXG_GUEST_REMOTEOBJECTCHANNEL *v66; // [rsp+70h] [rbp-90h]
  _BYTE v67[24]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v68[16]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v69[16]; // [rsp+D0h] [rbp-30h] BYREF
  int v70; // [rsp+150h] [rbp+50h] BYREF
  int v71; // [rsp+154h] [rbp+54h]
  int v72; // [rsp+158h] [rbp+58h]
  int v73; // [rsp+15Ch] [rbp+5Ch]
  _DWORD v74[3]; // [rsp+160h] [rbp+60h] BYREF
  int v75; // [rsp+16Ch] [rbp+6Ch]
  int v76; // [rsp+170h] [rbp+70h]
  _BYTE v77[68]; // [rsp+174h] [rbp+74h] BYREF

  v4 = a4;
  v62 = a4;
  v6 = (unsigned int)a2;
  v66 = this;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7);
    LODWORD(a3) = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return (unsigned int)a3;
  }
  if ( !v4 || !a3 || (unsigned int)(v6 - 1) > 0xF )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
    v57[4] = a3;
    LODWORD(a3) = -1073741811;
    v57[6] = -1073741811LL;
    v57[3] = v4;
    v57[5] = v6;
    WdLogEvent5_WdWarning(v57);
    return (unsigned int)a3;
  }
  LODWORD(v4->Count) = 0;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8, v7);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v67, Global, 0);
  v13 = 0;
  memset(v68, 0, sizeof(v68));
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v63, (struct _KTHREAD **)Current);
  if ( (_DWORD)v6 )
  {
    v14 = a3 - (char *)v68;
    v15 = (_QWORD *)((char *)Current + 240);
    v16 = v6;
    v17 = v68;
    v59 = v6;
    while ( 1 )
    {
      v18 = (*(_DWORD *)((char *)v17 + v14) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v18 < *((_DWORD *)Current + 64) )
      {
        v19 = *(_DWORD *)(*v15 + 16LL * (unsigned int)v18 + 8);
        if ( ((*(_DWORD *)((char *)v17 + v14) >> 25) & 0x60) == (*(_BYTE *)(*v15 + 16LL * (unsigned int)v18 + 8) & 0x60)
          && (v19 & 0x2000) == 0
          && (v19 & 0x1F) != 0 )
        {
          EntryType = HMGRTABLE::GetEntryType((__int64)Current + 240, v18);
          v21 = EntryType == 11;
          *v17 = EntryType;
          v16 = v59;
          if ( v21 )
            v13 = 1;
          goto LABEL_17;
        }
        v16 = v59;
      }
      *v17 = 0;
LABEL_17:
      ++v17;
      v59 = --v16;
      if ( !v16 )
      {
        v4 = v62;
        break;
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v63);
  v75 = 0;
  v76 = 0;
  v74[2] = 1;
  v74[0] = 1869901170;
  v74[1] = -1073741823;
  memset(v77, 0, sizeof(v77));
  v73 = 0;
  v70 = 1869901170;
  v71 = -1073741823;
  v72 = 2;
  v61 = 16;
  if ( v13 )
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v67, v22);
  `vector constructor iterator'(
    (char *)v69,
    8LL,
    16LL,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v63, (struct _KTHREAD **)Current);
  v25 = 0LL;
  if ( !(_DWORD)v6 )
  {
LABEL_58:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v63);
    v76 = v6;
    v75 = *((_DWORD *)Current + 106);
    v50 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, int *, unsigned int *))(**((_QWORD **)v66 + 1) + 32LL))(
            *((_QWORD *)v66 + 1),
            v74,
            88LL,
            &v70,
            &v61);
    a3 = (char *)v50;
    if ( v50 < 0 )
    {
      v54 = WdLogNewEntry5_WdWarning(v52, v51, v53);
      *(_QWORD *)(v54 + 24) = a3;
      WdLogEvent5_WdWarning(v54);
      goto LABEL_67;
    }
    if ( v61 == 16 )
    {
      if ( v72 == 2 )
      {
        LODWORD(a3) = v71;
        if ( v71 >= 0 )
          LODWORD(v4->Count) = v73;
        goto LABEL_67;
      }
      v55 = WdLogNewEntry5_WdWarning(v52, v51, v53);
      v56 = v72;
    }
    else
    {
      v55 = WdLogNewEntry5_WdWarning(v52, v51, v53);
      v56 = v61;
    }
    *(_QWORD *)(v55 + 24) = v56;
    *(_QWORD *)(v55 + 32) = -1073741823LL;
    WdLogEvent5_WdWarning(v55);
    LODWORD(a3) = -1073741823;
    goto LABEL_67;
  }
  v26 = a3;
  v60 = v69;
  v27 = (char *)v68 - a3;
  v28 = &v77[4] - a3;
  v65 = (char *)v68 - a3;
  v64 = &v77[4] - a3;
  while ( 1 )
  {
    v29 = *(_DWORD *)&v26[v27];
    if ( v29 == 4 )
      break;
    if ( v29 != 11 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v23, v24);
      v49 = *(unsigned int *)&a3[4 * v25];
      LODWORD(a3) = -1073741811;
      v45[3] = v49;
      v45[4] = (int)v68[v25];
      v45[5] = -1073741811LL;
      goto LABEL_57;
    }
    v30 = *(unsigned int *)v26;
    v31 = (*(_DWORD *)v26 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v31 >= *((_DWORD *)Current + 64) )
      goto LABEL_50;
    v24 = *((_QWORD *)Current + 30);
    v30 = ((unsigned int)v30 >> 25) & 0x60;
    v28 = *(unsigned int *)(v24 + 16 * v31 + 8);
    if ( (_BYTE)v30 != (*(_BYTE *)(v24 + 16 * v31 + 8) & 0x60) || (v28 & 0x2000) != 0 || (v28 & 0x1F) == 0 )
      goto LABEL_50;
    v28 &= 0x1Fu;
    if ( (_BYTE)v28 != 11 )
    {
      v47 = WdLogNewEntry5_WdError(v28, v30);
      *(_QWORD *)(v47 + 24) = 316LL;
      WdLogEvent5_WdError(v47);
LABEL_50:
      v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v30, v24);
      v48 = *(unsigned int *)&a3[4 * v25];
LABEL_53:
      v45[3] = v48;
      goto LABEL_56;
    }
    v32 = *(_QWORD *)(v24 + 16LL * (unsigned int)v31);
    if ( !v32 )
      goto LABEL_50;
    v33 = *(unsigned int *)(*(_QWORD *)(v32 + 32) + 196LL);
    if ( (v33 & 2) == 0 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v30, v24);
      v46 = *(_QWORD *)(v32 + 32);
      goto LABEL_55;
    }
    v34 = *(_DWORD *)(v32 + 44);
    v35 = v60;
LABEL_45:
    v28 = v64;
    v23 = v35 + 1;
    v25 = (unsigned int)(v25 + 1);
    v60 = v23;
    *(_DWORD *)&v26[v64] = v34;
    v26 += 4;
    if ( (unsigned int)v25 >= (unsigned int)v6 )
      goto LABEL_58;
    v27 = v65;
  }
  v36 = (*(_DWORD *)v26 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v36 < *((_DWORD *)Current + 64) )
  {
    v37 = *((_QWORD *)Current + 30);
    v38 = *(_DWORD *)(v37 + 16 * v36 + 8);
    if ( ((*(_DWORD *)v26 >> 25) & 0x60) == (*(_BYTE *)(v37 + 16 * v36 + 8) & 0x60)
      && (v38 & 0x2000) == 0
      && (v38 & 0x1F) != 0 )
    {
      v39 = v38 & 0x1F;
      if ( (_BYTE)v39 == 4 )
      {
        v41 = *(struct _EX_RUNDOWN_REF **)(v37 + 16LL * (unsigned int)v36);
        goto LABEL_40;
      }
      v40 = WdLogNewEntry5_WdError(v39, (*(_DWORD *)v26 >> 25) & 0x60);
      *(_QWORD *)(v40 + 24) = 316LL;
      WdLogEvent5_WdError(v40);
    }
  }
  v41 = 0LL;
LABEL_40:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v62, v41);
  DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v69[v25], &v62);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v62, v42);
  v35 = v60;
  v43 = *v60;
  if ( *v60 )
  {
    if ( (*(_DWORD *)(v43 + 4) & 1) != 0 )
    {
      v44 = *(_QWORD *)(v43 + 56);
      if ( v44 )
      {
        if ( (*(_DWORD *)(v44 + 12) & 8) == 0 )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v60, v24);
          v48 = *(_QWORD *)(v69[v25] + 56LL);
          goto LABEL_53;
        }
        v34 = *(_DWORD *)(v43 + 20);
        goto LABEL_45;
      }
    }
  }
  v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v60, v24);
  v46 = *(unsigned int *)&a3[4 * v25];
LABEL_55:
  v45[3] = v46;
LABEL_56:
  LODWORD(a3) = -1073741811;
  v45[4] = -1073741811LL;
LABEL_57:
  WdLogEvent5_WdWarning(v45);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v63);
LABEL_67:
  `vector destructor iterator'(
    (char *)v69,
    8LL,
    16LL,
    (void (__fastcall *)(char *))DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE);
  if ( v67[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v67);
  return (unsigned int)a3;
}
