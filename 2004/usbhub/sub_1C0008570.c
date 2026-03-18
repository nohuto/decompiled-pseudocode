/*
 * XREFs of sub_1C0008570 @ 0x1C0008570
 * Callers:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 * Callees:
 *     sub_1C0002580 @ 0x1C0002580 (sub_1C0002580.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001CA78 @ 0x1C001CA78 (sub_1C001CA78.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 *     sub_1C0034DE4 @ 0x1C0034DE4 (sub_1C0034DE4.c)
 *     sub_1C0034EEC @ 0x1C0034EEC (sub_1C0034EEC.c)
 */

void __fastcall sub_1C0008570(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  KIRQL v9; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  KIRQL v12; // r14
  unsigned __int16 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int16 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // r8d
  __int64 v41; // rax
  int v42; // esi
  KSPIN_LOCK *v43; // r15
  KIRQL v44; // r12
  int v45; // eax
  __int64 v46; // rdx
  int v47; // r8d
  int v48; // r8d
  int v49; // r8d
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // [rsp+20h] [rbp-48h]

  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    sub_1C002DC78(a1, 0LL);
  if ( *(_DWORD *)v6 != 541218120 )
    sub_1C002DC78(a1, v6);
  v7 = *(unsigned __int16 *)(a2 + 4);
  if ( (dword_1C006B268 & 0x200) != 0 )
  {
    v8 = *(_QWORD *)(v6 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
    *(_DWORD *)v8 = 812660319;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = a2;
    *(_QWORD *)(v8 + 24) = v7;
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E55C(DeviceObject->DeviceExtension, v6, v7, 36, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4), a3);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v11 = *(unsigned __int16 *)(a2 + 4);
  v12 = v9;
  *(_DWORD *)(a2 + 448) = 1;
  v13 = v11;
  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      v14 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v14 = 724267376;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = 6LL;
      *(_QWORD *)(v14 + 24) = v11;
      v13 = *(_WORD *)(a2 + 4);
    }
  }
  v15 = *(int *)(a2 + 12);
  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      v16 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v16 = 724267376;
      *(_QWORD *)(v16 + 24) = v13;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 16) = v15;
    }
  }
  v17 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v17;
  v18 = a2 + 32 * (v17 + 43);
  *(_DWORD *)v18 = 6;
  *(_DWORD *)(v18 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v18 + 8) = -1;
  *(_QWORD *)(v18 + 12) = 0LL;
  *(_QWORD *)(v18 + 20) = 0LL;
  *(_DWORD *)(v18 + 28) = 0;
  v19 = *(int *)(a2 + 12);
  v20 = *(unsigned __int16 *)(a2 + 4);
  if ( (dword_1C006B268 & 0x200) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      v21 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v21 = 829437535;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 16) = v19;
      *(_QWORD *)(v21 + 24) = v20;
    }
  }
  if ( (_DWORD)v19 == 12 )
  {
    v22 = *(unsigned __int16 *)(a2 + 4);
    v23 = *(_WORD *)(a2 + 4);
    if ( (dword_1C006B268 & 0x200) != 0 )
    {
      v24 = *(_QWORD *)(a1 + 64);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
        *(_DWORD *)v25 = 862991967;
        *(_QWORD *)(v25 + 8) = 0LL;
        *(_QWORD *)(v25 + 16) = 0LL;
        *(_QWORD *)(v25 + 24) = v22;
        v23 = *(_WORD *)(a2 + 4);
      }
    }
    v26 = *(int *)(a2 + 12);
    if ( (dword_1C006B268 & 0x10) != 0 )
    {
      v27 = *(_QWORD *)(a1 + 64);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
        *(_DWORD *)v28 = 1986359664;
        *(_QWORD *)(v28 + 24) = v23;
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_QWORD *)(v28 + 16) = v26;
      }
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 30;
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    v29 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_QWORD *)(a2 + 384) = 0LL;
    *(_DWORD *)(a2 + 12) = 6;
    *(_DWORD *)(v29 + a2 + 1384) = 6;
LABEL_26:
    v30 = *(int *)(a2 + 12);
    v31 = *(unsigned __int16 *)(a2 + 4);
    v32 = *(_DWORD *)(a2 + 12);
    if ( (dword_1C006B268 & 0x10) != 0 )
    {
      v33 = *(_QWORD *)(a1 + 64);
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
        *(_DWORD *)v34 = 757952880;
        *(_QWORD *)(v34 + 8) = 0LL;
        *(_QWORD *)(v34 + 16) = v30;
        *(_QWORD *)(v34 + 24) = v31;
        v32 = *(_DWORD *)(a2 + 12);
      }
    }
    v35 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v35 + a2 + 1384) = v32;
LABEL_30:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v12);
    return;
  }
  if ( (_DWORD)v19 == 3 )
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E55C(DeviceObject->DeviceExtension, v10, 3, 38, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4), a2);
    v36 = *(unsigned __int16 *)(a2 + 4);
    if ( (dword_1C006B268 & 0x200) != 0 )
    {
      v37 = *(_QWORD *)(a1 + 64);
      if ( v37 )
      {
        v38 = *(_QWORD *)(v37 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
        *(_DWORD *)v38 = 879769183;
        *(_QWORD *)(v38 + 8) = 0LL;
        *(_QWORD *)(v38 + 16) = 0LL;
        *(_QWORD *)(v38 + 24) = v36;
      }
    }
    v39 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 2;
    *(_DWORD *)(v39 + a2 + 1384) = 2;
    *(_QWORD *)(a2 + 384) = 0LL;
    goto LABEL_26;
  }
  v40 = v19 - 8;
  if ( !v40 )
  {
    sub_1C000FD80(a1, 512, 1597403190, a2, *(unsigned __int16 *)(a2 + 4));
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 40, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4));
    sub_1C000FD80(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 30;
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    v41 = 32LL * *(unsigned int *)(a2 + 2400);
    v42 = 0;
    *(_QWORD *)(a2 + 384) = 0LL;
    *(_DWORD *)(a2 + 12) = 7;
    *(_DWORD *)(v41 + a2 + 1384) = 7;
    v43 = (KSPIN_LOCK *)(sub_1C000F050(a1) + 4944);
    v44 = KeAcquireSpinLockRaiseToDpc(v43);
    sub_1C000FD80(a1, 16, 1936282453, 0, *(unsigned __int16 *)(a2 + 4));
    if ( *(_DWORD *)(a2 + 696) == 2 )
    {
      *(_DWORD *)(a2 + 696) = 0;
      KeSetEvent((PRKEVENT)(a2 + 744), 0, 0);
      v42 = 1;
    }
    KeReleaseSpinLock(v43, v44);
    if ( v42 )
    {
      sub_1C000FD80(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 16) = 30;
    }
    sub_1C000FD80(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    v45 = *(_DWORD *)(a2 + 12);
    v46 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v46 + a2 + 1384) = v45;
    goto LABEL_30;
  }
  v47 = v40 - 2;
  if ( v47 )
  {
    v48 = v47 - 3;
    if ( !v48 )
    {
      sub_1C000FD80(a1, 512, 1597403186, a2, *(unsigned __int16 *)(a2 + 4));
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 37, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4));
      sub_1C0034DE4(a1, a2, 2LL);
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      v56 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 6;
      *(_DWORD *)(v56 + a2 + 1384) = 6;
      goto LABEL_68;
    }
    v49 = v48 - 1;
    if ( v49 )
    {
      v59 = *(unsigned __int16 *)(a2 + 4);
      if ( v49 != 3 )
      {
        sub_1C000FD80(a1, 512, 1597403224, a2, v59);
        v50 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v50 + a2 + 1384) = 19;
LABEL_69:
        sub_1C0034EEC(a1, a2, v12, 0LL);
        return;
      }
      sub_1C000FD80(a1, 512, 1597403186, a2, v59);
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 42, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4));
      sub_1C0034DE4(a1, a2, 2LL);
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      v53 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 15;
      *(_DWORD *)(v53 + a2 + 1384) = 15;
LABEL_68:
      sub_1C0002580(a1, a2, v51, v52);
      *(_QWORD *)(a2 + 384) = 0LL;
      goto LABEL_69;
    }
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E55C(DeviceObject->DeviceExtension, v10, 0, 39, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4), a2);
    sub_1C000FD80(a1, 512, 1597403189, 0, *(unsigned __int16 *)(a2 + 4));
    v55 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 4;
    *(_DWORD *)(v55 + a2 + 1384) = 4;
  }
  else
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E55C(DeviceObject->DeviceExtension, v10, 0, 41, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4), a2);
    sub_1C000FD80(a1, 512, 1597403191, 0, *(unsigned __int16 *)(a2 + 4));
    v57 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 9;
    *(_DWORD *)(v57 + a2 + 1384) = 9;
  }
  *(_QWORD *)(a2 + 384) = 0LL;
  sub_1C0034EEC(a1, a2, v12, v54);
  sub_1C001CA78(v58, a2);
}
