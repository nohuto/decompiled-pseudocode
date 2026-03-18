/*
 * XREFs of sub_1C00099C0 @ 0x1C00099C0
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C00140B0 @ 0x1C00140B0 (sub_1C00140B0.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0015264 @ 0x1C0015264 (sub_1C0015264.c)
 *     sub_1C0018364 @ 0x1C0018364 (sub_1C0018364.c)
 *     sub_1C001CC84 @ 0x1C001CC84 (sub_1C001CC84.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C00417F0 @ 0x1C00417F0 (sub_1C00417F0.c)
 *     sub_1C005A12C @ 0x1C005A12C (sub_1C005A12C.c)
 *     sub_1C005A1A8 @ 0x1C005A1A8 (sub_1C005A1A8.c)
 */

__int64 __fastcall sub_1C00099C0(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int *SecurityContext; // r14
  _DWORD *v11; // rbx
  _DWORD *v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rax
  KIRQL v17; // dl
  _DWORD *v18; // rax
  bool v19; // zf
  KIRQL v20; // dl
  __int64 v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rbp
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  _DWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // ebp
  __int64 v32; // rbp
  __int64 v33; // rcx
  __int64 v34; // rdx
  char v35; // al
  unsigned int v36; // edx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rdi
  _QWORD *v40; // rbx
  KIRQL v41; // r15
  _QWORD *v42; // rcx
  _QWORD *v43; // rdx
  _QWORD *v44; // rax
  __int64 v46; // rcx
  int v47; // eax
  _DWORD *v48; // [rsp+30h] [rbp-48h]
  int v49; // [rsp+90h] [rbp+18h] BYREF
  char v50; // [rsp+98h] [rbp+20h] BYREF

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v49 = 0;
  if ( !a2 )
    goto LABEL_117;
  v7 = *(_DWORD **)(a2 + 64);
  v48 = v7;
  if ( !v7 )
    goto LABEL_116;
  if ( *v7 != 1329877064 )
    sub_1C002DC78(a2, v7);
  if ( (dword_1C006B268 & 8) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1045647431;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a3;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
  }
  if ( KeGetCurrentIrql() )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    sub_1C0014E84(a2, (ULONG_PTR)a3);
    return 3221225485LL;
  }
  SecurityContext = (unsigned int *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    sub_1C0014E84(a2, (ULONG_PTR)a3);
    sub_1C000FD80(a1, 8, 1196446497, (_DWORD)a3, 0LL);
    return 3221225485LL;
  }
  *SecurityContext = 0;
  v11 = *(_DWORD **)(a2 + 64);
  if ( !v11 )
    goto LABEL_116;
  if ( *v11 != 1329877064 )
    sub_1C002DC78(a2, *(_QWORD *)(a2 + 64));
  v12 = v11 + 236;
  if ( !a1 )
    goto LABEL_117;
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 )
    goto LABEL_115;
  if ( *(_DWORD *)v13 != 541218120 )
    sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
  *(_BYTE *)(v13 + 5064) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 5056));
  v12[10] = *(_DWORD *)(v13 + 4172);
  v12[11] = 11;
  v12[8] = 844055622;
  v12[9] = 1953516355;
  *((_QWORD *)v12 + 3) = KeGetCurrentThread();
  *(_QWORD *)(v13 + 1344) = v12;
  v14 = *((_QWORD *)v12 + 1);
  if ( !v14 )
    goto LABEL_117;
  v15 = *(_DWORD **)(v14 + 64);
  if ( !v15 )
    sub_1C002DC78(v14, 0LL);
  if ( *v15 != 541218120 )
    sub_1C002DC78(v14, *(_QWORD *)(v14 + 64));
  if ( (unsigned int)(v15[1043] - 212) <= 1 )
  {
    sub_1C0018364(a1, v12);
    sub_1C000FD80(a1, 8, 1196450936, (_DWORD)a3, 0LL);
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    sub_1C0014E84(a2, (ULONG_PTR)a3);
    return 3221225486LL;
  }
  v16 = *(_QWORD *)(a1 + 64);
  if ( !v16 )
LABEL_115:
    sub_1C002DC78(a1, 0LL);
  if ( *(_DWORD *)v16 != 541218120 )
    sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
  v12[8] = 1734964085;
  v17 = *(_BYTE *)(v16 + 5064);
  *(_QWORD *)(v16 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 5056), v17);
  *((_BYTE *)v12 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
  v12[34] = 1;
  v12[22] = 2018460752;
  v12[23] = 16;
  stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)v12;
  *((_QWORD *)v12 + 3) = KeGetCurrentThread();
  v18 = *(_DWORD **)(a2 + 64);
  if ( !v18 )
LABEL_116:
    sub_1C002DC78(a2, 0LL);
  if ( *v18 != 1329877064 )
    sub_1C002DC78(a2, *(_QWORD *)(a2 + 64));
  v19 = v18[281] == 3;
  v12[34] = 0;
  stru_1C006B480.Dpc.DeferredRoutine = 0LL;
  v12[22] = 1734964085;
  v20 = *((_BYTE *)v12 + 132);
  if ( !v19 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v20);
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    sub_1C0014E84(a2, (ULONG_PTR)a3);
    sub_1C000FD80(a1, 8, 1196446584, (_DWORD)a3, 0LL);
    return 3221225486LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v20);
  v21 = *((_QWORD *)v12 + 1);
  v22 = v21;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 10, (__int64)&unk_1C0062110, 5);
    v22 = *((_QWORD *)v12 + 1);
  }
  if ( !v22 )
LABEL_117:
    sub_1C002DC78(0LL, 0LL);
  v23 = *(_QWORD *)(v22 + 64);
  if ( !v23 )
    sub_1C002DC78(v22, 0LL);
  if ( *(_DWORD *)v23 != 541218120 )
    sub_1C002DC78(v22, *(_QWORD *)(v22 + 64));
  KeWaitForSingleObject((PVOID)(v23 + 3128), Executive, 0, 0, 0LL);
  *(_QWORD *)(v23 + 3192) = v12;
  v12[30] = 2018005843;
  v12[31] = 5;
  *((_QWORD *)v12 + 3) = KeGetCurrentThread();
  v24 = *(_DWORD *)(v23 + 3456);
  v25 = 32LL * (v24 & 7);
  if ( *(_DWORD *)(v25 + v23 + 3460) != 5
    || (v26 = *(unsigned int *)(v23 + 3124), *(_DWORD *)(v25 + v23 + 3464) != (_DWORD)v26) )
  {
    v46 = ((_BYTE)v24 + 1) & 7;
    *(_DWORD *)(v23 + 3456) = v46;
    v46 *= 32LL;
    *(_DWORD *)(v46 + v23 + 3460) = 5;
    *(_DWORD *)(v46 + v23 + 3464) = *(_DWORD *)(v23 + 3124);
    v26 = *(unsigned int *)(v23 + 3124);
  }
  switch ( (_DWORD)v26 )
  {
    case 1:
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 11, (__int64)&unk_1C0062110);
      if ( v21 )
      {
        v27 = *(_DWORD **)(v21 + 64);
        if ( !v27 )
          sub_1C002DC78(v21, 0LL);
        if ( *v27 != 541218120 )
          sub_1C002DC78(v21, v27);
        v28 = *((_QWORD *)v12 + 1);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 64);
          if ( !v29 )
            sub_1C002DC78(*((_QWORD *)v12 + 1), 0LL);
          if ( *(_DWORD *)v29 != 541218120 )
            sub_1C002DC78(*((_QWORD *)v12 + 1), *(_QWORD *)(v28 + 64));
          v30 = *(unsigned int *)(v29 + 3456);
          *(_DWORD *)(v29 + 3124) = 1;
          *(_DWORD *)(32 * v30 + v29 + 3468) = 1;
          v12[30] = 1734964085;
          *(_QWORD *)(v29 + 3192) = 0LL;
          KeReleaseSemaphore((PRKSEMAPHORE)(v29 + 3128), 16, 1, 0);
          v31 = 0;
          break;
        }
      }
      goto LABEL_117;
    case 2:
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 12, (__int64)&unk_1C0062110);
      sub_1C000F050(v21);
      sub_1C001CC84(v12, 2LL);
      v31 = -1073741823;
      break;
    case 3:
      v31 = sub_1C005A1A8(v21, 5LL, v12);
      break;
    case 4:
      v31 = sub_1C0015264(v21, 5LL, v12);
      break;
    case 5:
      v31 = sub_1C00140B0(v21, 5LL, v12);
      break;
    case 6:
      v31 = sub_1C005A12C(v21, v26, v12);
      break;
    default:
      v31 = -1073741823;
      sub_1C001CC84(v12, v26);
      break;
  }
  if ( (v31 & 0xC0000000) == 0xC0000000 )
  {
    *SecurityContext |= 3u;
    LODWORD(v32) = 0;
    v36 = *SecurityContext;
  }
  else
  {
    v32 = (int)sub_1C000A080(a1, *((unsigned __int16 *)v48 + 714), &v49, &v50);
    if ( (dword_1C006B268 & 8) != 0 && (v33 = *(_QWORD *)(a1 + 64)) != 0 )
    {
      v34 = *(_QWORD *)(v33 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
      *(_DWORD *)v34 = 861098055;
      v35 = v49;
      *(_QWORD *)(v34 + 16) = (unsigned __int16)v49;
      *(_QWORD *)(v34 + 8) = 0LL;
      *(_QWORD *)(v34 + 24) = v32;
    }
    else
    {
      v35 = v49;
    }
    v36 = *SecurityContext;
    if ( (int)v32 < 0 )
      goto LABEL_106;
    if ( (v35 & 1) != 0 )
    {
      v36 |= 2u;
      *SecurityContext = v36;
    }
    else
    {
      LODWORD(v32) = -1073741810;
    }
    if ( (v35 & 2) != 0 )
    {
      v36 |= 1u;
      *SecurityContext = v36;
    }
    if ( v48[596] == 2 )
    {
      v36 &= ~1u;
      *SecurityContext = v36;
    }
    if ( (v49 & 0x10000) != 0 )
LABEL_106:
      LODWORD(v32) = -1073741810;
  }
  if ( (dword_1C006B268 & 8) != 0 )
  {
    v37 = *(_QWORD *)(a1 + 64);
    if ( v37 )
    {
      v38 = *(_QWORD *)(v37 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
      *(_DWORD *)v38 = 877875271;
      *(_QWORD *)(v38 + 16) = v36;
      *(_QWORD *)(v38 + 24) = (int)v32;
      *(_QWORD *)(v38 + 8) = 0LL;
    }
  }
  a3->IoStatus.Status = v32;
  IofCompleteRequest(a3, 0);
  v39 = *(_QWORD *)(a2 + 64);
  if ( !v39 )
    goto LABEL_116;
  if ( *(_DWORD *)v39 != 1329877064 )
    sub_1C002DC78(a2, *(_QWORD *)(a2 + 64));
  v40 = (_QWORD *)(v39 + 1224);
  v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v39 + 1216));
  v42 = *(_QWORD **)(v39 + 1224);
  if ( v42 == (_QWORD *)(v39 + 1224) || !v42 )
  {
LABEL_109:
    v47 = *(_DWORD *)(v39 + 1264);
    if ( !v47 )
    {
      sub_1C00417F0(a2);
      KeBugCheckEx(0xFEu, 8uLL, 4uLL, a2, (ULONG_PTR)a3);
    }
    *(_DWORD *)(v39 + 1264) = v47 - 1;
  }
  else
  {
    while ( 1 )
    {
      v43 = (_QWORD *)*v42;
      if ( (IRP *)v42[2] == a3 )
        break;
      v42 = (_QWORD *)*v42;
      if ( v43 == v40 )
        goto LABEL_109;
    }
    if ( (_QWORD *)v43[1] != v42 || (v44 = (_QWORD *)v42[1], (_QWORD *)*v44 != v42) )
      __fastfail(3u);
    *v44 = v43;
    v43[1] = v44;
    ExFreePoolWithTag(v42 - 1, 0);
  }
  if ( (_QWORD *)*v40 != v40 || *(_DWORD *)(v39 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v39 + 1216), v41);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v39 + 1216), v41);
    KeSetEvent((PRKEVENT)(v39 + 1240), 0, 0);
  }
  return (unsigned int)v32;
}
