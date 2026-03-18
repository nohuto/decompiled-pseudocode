/*
 * XREFs of sub_1C0004C90 @ 0x1C0004C90
 * Callers:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 * Callees:
 *     sub_1C0002580 @ 0x1C0002580 (sub_1C0002580.c)
 *     sub_1C00038F0 @ 0x1C00038F0 (sub_1C00038F0.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 *     sub_1C0034CDC @ 0x1C0034CDC (sub_1C0034CDC.c)
 *     sub_1C0034DE4 @ 0x1C0034DE4 (sub_1C0034DE4.c)
 *     sub_1C0034EEC @ 0x1C0034EEC (sub_1C0034EEC.c)
 *     sub_1C0036088 @ 0x1C0036088 (sub_1C0036088.c)
 */

__int64 __fastcall sub_1C0004C90(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  KIRQL v5; // al
  __int64 v6; // r8
  unsigned __int16 v7; // r9
  KIRQL v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // ecx
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 result; // rax
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // r9
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax

  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v4 = *(_DWORD **)(a1 + 64);
  if ( !v4 )
    sub_1C002DC78(a1, 0LL);
  if ( *v4 != 541218120 )
    sub_1C002DC78(a1, v4);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v6 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v7 = v6;
  v8 = v5;
  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 64);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
      *(_DWORD *)v10 = 724267376;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = 2LL;
      *(_QWORD *)(v10 + 24) = v6;
      v7 = *(_WORD *)(a2 + 4);
    }
  }
  v11 = *(int *)(a2 + 12);
  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 724267376;
      *(_QWORD *)(v13 + 24) = v7;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = v11;
    }
  }
  v14 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v14;
  v15 = a2 + 32 * (v14 + 43);
  *(_DWORD *)v15 = 2;
  *(_DWORD *)(v15 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v15 + 8) = -1;
  *(_QWORD *)(v15 + 12) = 0LL;
  *(_QWORD *)(v15 + 20) = 0LL;
  *(_DWORD *)(v15 + 28) = 0;
  v16 = *(int *)(a2 + 12);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E55C(
      DeviceObject->DeviceExtension,
      (unsigned int)&unk_1C0062098,
      v11,
      11,
      (__int64)&unk_1C0062098,
      *(_WORD *)(a2 + 4),
      a2);
  v17 = *(unsigned __int16 *)(a2 + 4);
  if ( (dword_1C006B268 & 0x200) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
      *(_DWORD *)v19 = 812659295;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = v16;
      *(_QWORD *)(v19 + 24) = v17;
    }
  }
  if ( (_DWORD)v16 == 4 )
  {
    v20 = *(unsigned __int16 *)(a2 + 4);
    if ( (dword_1C006B268 & 0x200) != 0 )
    {
      v21 = *(_QWORD *)(a1 + 64);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v21 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
        *(_DWORD *)v22 = 862990943;
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = 4LL;
        *(_QWORD *)(v22 + 24) = v20;
      }
    }
    v23 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 5;
    *(_DWORD *)(v23 + a2 + 1384) = 5;
    v24 = *(unsigned __int16 *)(a2 + 4);
    v25 = *(int *)(a2 + 12);
    if ( (dword_1C006B268 & 0x10) != 0 )
    {
      v26 = *(_QWORD *)(a1 + 64);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
        *(_DWORD *)v27 = 1986359664;
        *(_QWORD *)(v27 + 8) = 0LL;
        *(_QWORD *)(v27 + 16) = v25;
        *(_QWORD *)(v27 + 24) = v24;
      }
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 20;
    v28 = *(int *)(a2 + 12);
    v29 = *(_DWORD *)(a2 + 12);
    v30 = *(unsigned __int16 *)(a2 + 4);
    if ( (dword_1C006B268 & 0x10) != 0 )
    {
      v31 = *(_QWORD *)(a1 + 64);
      if ( v31 )
      {
        v32 = *(_QWORD *)(v31 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
        *(_DWORD *)v32 = 757952880;
        *(_QWORD *)(v32 + 8) = 0LL;
        *(_QWORD *)(v32 + 16) = v28;
        *(_QWORD *)(v32 + 24) = v30;
        v29 = *(_DWORD *)(a2 + 12);
      }
    }
    v33 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v33 + a2 + 1384) = v29;
LABEL_27:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v8);
  }
  else
  {
    switch ( (int)v16 )
    {
      case 1:
      case 2:
      case 18:
        sub_1C000FD80(a1, 512, 1597141042, v16, *(unsigned __int16 *)(a2 + 4));
        v46 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 6;
        *(_DWORD *)(v46 + a2 + 1384) = 6;
        sub_1C0034DE4(a1, a2, 2LL);
        sub_1C0002580(a1, a2, v47, v48);
        goto LABEL_45;
      case 3:
      case 12:
        sub_1C000FD80(a1, 512, 1597141044, v16, *(unsigned __int16 *)(a2 + 4));
        sub_1C0034DE4(a1, a2, 2LL);
        v52 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v52 + a2 + 1384) = 12;
        break;
      case 5:
      case 16:
      case 17:
        sub_1C000FD80(a1, 512, 1597141048, v16, *(unsigned __int16 *)(a2 + 4));
        sub_1C0034DE4(a1, a2, 2LL);
        v56 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v16;
        *(_DWORD *)(v56 + a2 + 1384) = v16;
        break;
      case 6:
      case 11:
      case 15:
        sub_1C000FD80(a1, 512, 1597141045, v16, *(unsigned __int16 *)(a2 + 4));
        sub_1C0002580(a1, a2, v49, v50);
        sub_1C0034DE4(a1, a2, 2LL);
LABEL_45:
        KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
        break;
      case 7:
        sub_1C000FD80(a1, 512, 1597141041, v16, *(unsigned __int16 *)(a2 + 4));
        sub_1C000FD80(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
        v41 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
        *(_DWORD *)(v41 + a2 + 24) = 30;
        v42 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 11;
        *(_DWORD *)(v42 + a2 + 1384) = 11;
        sub_1C0002580(a1, a2, v41, v43);
        KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
        sub_1C000FD80(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
        v44 = *(_DWORD *)(a2 + 12);
        v45 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v45 + a2 + 1384) = v44;
        goto LABEL_27;
      case 8:
        sub_1C0034CDC(a1, a2);
        sub_1C0036088(a1, a2);
        sub_1C000FD80(a1, 512, 1597141047, v16, *(unsigned __int16 *)(a2 + 4));
        sub_1C0034DE4(a1, a2, 2LL);
        v54 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v54 + a2 + 1384) = 12;
        break;
      case 9:
        sub_1C0034CDC(a1, a2);
        sub_1C000FD80(a1, 512, 1597141046, v16, *(unsigned __int16 *)(a2 + 4));
        sub_1C0034DE4(a1, a2, 2LL);
        v53 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 5;
        *(_DWORD *)(v53 + a2 + 1384) = 5;
        break;
      case 10:
        sub_1C0034CDC(a1, a2);
        sub_1C0036088(a1, a2);
        sub_1C000FD80(a1, 512, 1597141047, v16, *(unsigned __int16 *)(a2 + 4));
        sub_1C0034DE4(a1, a2, 2LL);
        v55 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 13;
        *(_DWORD *)(v55 + a2 + 1384) = 13;
        break;
      case 13:
      case 14:
        sub_1C000FD80(a1, 512, 1597141049, v16, *(unsigned __int16 *)(a2 + 4));
        sub_1C0034DE4(a1, a2, 2LL);
        v57 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 13;
        *(_DWORD *)(v57 + a2 + 1384) = 13;
        break;
      default:
        v51 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v51 + a2 + 1384) = 19;
        sub_1C0034DE4(a1, a2, 2LL);
        break;
    }
    sub_1C0034EEC(a1, a2, v8, 0LL);
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 12, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4));
  v34 = *(unsigned __int16 *)(a2 + 4);
  if ( (dword_1C006B268 & 0x200) != 0 )
  {
    v35 = *(_QWORD *)(a1 + 64);
    if ( v35 )
    {
      v36 = *(_QWORD *)(v35 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
      *(_DWORD *)v36 = 1129346859;
      *(_QWORD *)(v36 + 8) = 0LL;
      *(_QWORD *)(v36 + 16) = 0LL;
      *(_QWORD *)(v36 + 24) = v34;
    }
  }
  result = sub_1C00038F0(a1, (void *)(a2 + 472), 660000, 729239619, 6u, a2);
  v38 = *(unsigned __int16 *)(a2 + 4);
  if ( (dword_1C006B268 & 0x200) != 0 )
  {
    v39 = *(_QWORD *)(a1 + 64);
    if ( v39 )
    {
      result = 1129346861LL;
      v40 = *(_QWORD *)(v39 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
      *(_DWORD *)v40 = 1129346861;
      *(_QWORD *)(v40 + 8) = 0LL;
      *(_QWORD *)(v40 + 16) = 0LL;
      *(_QWORD *)(v40 + 24) = v38;
    }
  }
  return result;
}
