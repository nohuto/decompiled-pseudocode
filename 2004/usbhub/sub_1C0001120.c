/*
 * XREFs of sub_1C0001120 @ 0x1C0001120
 * Callers:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 * Callees:
 *     sub_1C0001648 @ 0x1C0001648 (sub_1C0001648.c)
 *     sub_1C0002580 @ 0x1C0002580 (sub_1C0002580.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C0034DE4 @ 0x1C0034DE4 (sub_1C0034DE4.c)
 *     sub_1C0034EEC @ 0x1C0034EEC (sub_1C0034EEC.c)
 */

void __fastcall sub_1C0001120(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  KIRQL v5; // al
  __int64 v6; // r8
  unsigned __int16 v7; // r9
  KIRQL v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r14d
  KSPIN_LOCK *v25; // rbp
  KIRQL v26; // al
  __int64 v27; // r9
  KIRQL v28; // r15
  int v29; // edx
  __int64 v30; // r10
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // ecx
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rax
  int v44; // r10d
  int v45; // r8d
  __int64 v46; // rax
  int v47; // r10d
  __int64 v48; // rax

  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v4 = *(_DWORD **)(a1 + 64);
  if ( !v4 )
    goto LABEL_44;
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
      *(_QWORD *)(v10 + 16) = 9LL;
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
  *(_DWORD *)v15 = 9;
  *(_DWORD *)(v15 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v15 + 8) = -1;
  *(_QWORD *)(v15 + 12) = 0LL;
  *(_QWORD *)(v15 + 20) = 0LL;
  *(_DWORD *)(v15 + 28) = 0;
  v16 = *(int *)(a2 + 12);
  v17 = *(unsigned __int16 *)(a2 + 4);
  if ( (dword_1C006B268 & 0x200) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
      *(_DWORD *)v19 = 812661040;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = v16;
      *(_QWORD *)(v19 + 24) = v17;
    }
  }
  if ( (_DWORD)v16 == 6 )
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
        *(_DWORD *)v22 = 862992688;
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = 6LL;
        *(_QWORD *)(v22 + 24) = v20;
      }
    }
    v23 = *(_QWORD *)(a1 + 64);
    v24 = 0;
    if ( v23 )
    {
      if ( *(_DWORD *)v23 != 541218120 )
        sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
      v25 = (KSPIN_LOCK *)(v23 + 4944);
      v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 4944));
      v27 = *(int *)(a2 + 696);
      v28 = v26;
      v29 = *(_DWORD *)(a2 + 696);
      v30 = *(unsigned __int16 *)(a2 + 4);
      if ( (dword_1C006B268 & 0x10) != 0 )
      {
        v31 = *(_QWORD *)(a1 + 64);
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
          *(_DWORD *)v32 = 1397909875;
          *(_QWORD *)(v32 + 8) = 0LL;
          *(_QWORD *)(v32 + 16) = v27;
          *(_QWORD *)(v32 + 24) = v30;
          v29 = *(_DWORD *)(a2 + 696);
        }
      }
      if ( v29 == 3 )
      {
        sub_1C000FD80(a1, 16, 1936282232, 3, *(unsigned __int16 *)(a2 + 4));
        *(_DWORD *)(a2 + 696) = 0;
        KeSetEvent((PRKEVENT)(a2 + 712), 0, 0);
        v24 = 1;
      }
      KeReleaseSpinLock(v25, v28);
      if ( v24 )
        sub_1C0034DE4(a1, a2, 1LL);
      v33 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(v33 + a2 + 1384) = 1;
      v34 = *(int *)(a2 + 12);
      v35 = *(_DWORD *)(a2 + 12);
      v36 = *(unsigned __int16 *)(a2 + 4);
      if ( (dword_1C006B268 & 0x10) != 0 )
      {
        v37 = *(_QWORD *)(a1 + 64);
        if ( v37 )
        {
          v38 = *(_QWORD *)(v37 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
          *(_DWORD *)v38 = 757952880;
          *(_QWORD *)(v38 + 8) = 0LL;
          *(_QWORD *)(v38 + 16) = v34;
          *(_QWORD *)(v38 + 24) = v36;
          v35 = *(_DWORD *)(a2 + 12);
        }
      }
      v39 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v39 + a2 + 1384) = v35;
LABEL_30:
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v8);
      return;
    }
LABEL_44:
    sub_1C002DC78(a1, 0LL);
  }
  switch ( (int)v16 )
  {
    case 1:
      sub_1C000FD80(a1, 512, 809070642, v16, *(unsigned __int16 *)(a2 + 4));
      v43 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v44;
      *(_DWORD *)(v43 + a2 + 1384) = v44;
      sub_1C0002580(a1, a2);
      break;
    case 2:
    case 3:
    case 4:
    case 14:
      v45 = 809070644;
      goto LABEL_40;
    case 7:
    case 11:
      sub_1C000FD80(a1, 512, 809070641, v16, *(unsigned __int16 *)(a2 + 4));
      if ( (unsigned int)sub_1C0001648(a1, a2) )
        sub_1C0034DE4(a1, a2, 1LL);
      v40 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(v40 + a2 + 1384) = 1;
      sub_1C000FD80(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      v41 = *(_DWORD *)(a2 + 12);
      v42 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v42 + a2 + 1384) = v41;
      goto LABEL_30;
    case 15:
    case 16:
    case 17:
      v45 = 809070645;
LABEL_40:
      sub_1C000FD80(a1, 512, v45, v16, *(unsigned __int16 *)(a2 + 4));
      v46 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v47;
      *(_DWORD *)(v46 + a2 + 1384) = v47;
      break;
    default:
      sub_1C000FD80(a1, 512, 809070680, v16, *(unsigned __int16 *)(a2 + 4));
      v48 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v48 + a2 + 1384) = 19;
      break;
  }
  sub_1C0034EEC(a1, a2, v8, 0LL);
}
