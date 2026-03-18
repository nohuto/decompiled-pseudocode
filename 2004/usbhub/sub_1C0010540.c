/*
 * XREFs of sub_1C0010540 @ 0x1C0010540
 * Callers:
 *     sub_1C0018F50 @ 0x1C0018F50 (sub_1C0018F50.c)
 * Callees:
 *     sub_1C000174C @ 0x1C000174C (sub_1C000174C.c)
 *     sub_1C00018E8 @ 0x1C00018E8 (sub_1C00018E8.c)
 *     sub_1C0001BF8 @ 0x1C0001BF8 (sub_1C0001BF8.c)
 *     sub_1C00029EC @ 0x1C00029EC (sub_1C00029EC.c)
 *     sub_1C0003770 @ 0x1C0003770 (sub_1C0003770.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C00126A8 @ 0x1C00126A8 (sub_1C00126A8.c)
 *     sub_1C0013AE0 @ 0x1C0013AE0 (sub_1C0013AE0.c)
 *     sub_1C0015EB4 @ 0x1C0015EB4 (sub_1C0015EB4.c)
 *     sub_1C0017E8C @ 0x1C0017E8C (sub_1C0017E8C.c)
 *     sub_1C001853C @ 0x1C001853C (sub_1C001853C.c)
 *     sub_1C0018990 @ 0x1C0018990 (sub_1C0018990.c)
 *     sub_1C001C46C @ 0x1C001C46C (sub_1C001C46C.c)
 *     sub_1C001C9E8 @ 0x1C001C9E8 (sub_1C001C9E8.c)
 *     sub_1C001CDA8 @ 0x1C001CDA8 (sub_1C001CDA8.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0033EEC @ 0x1C0033EEC (sub_1C0033EEC.c)
 *     sub_1C0037200 @ 0x1C0037200 (sub_1C0037200.c)
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 *     sub_1C003AA2C @ 0x1C003AA2C (sub_1C003AA2C.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C004BEC0 @ 0x1C004BEC0 (sub_1C004BEC0.c)
 *     sub_1C004C6A0 @ 0x1C004C6A0 (sub_1C004C6A0.c)
 *     sub_1C004E668 @ 0x1C004E668 (sub_1C004E668.c)
 *     sub_1C004F72C @ 0x1C004F72C (sub_1C004F72C.c)
 *     sub_1C0050D40 @ 0x1C0050D40 (sub_1C0050D40.c)
 */

__int64 __fastcall sub_1C0010540(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r12d
  _DWORD *v7; // r13
  KSPIN_LOCK *v8; // rbx
  KIRQL v9; // al
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned __int16 v13; // r8
  __int64 v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rax
  KIRQL v18; // dl
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rbx
  char v23; // cl
  KIRQL v24; // bl
  __int64 v26; // rax
  KIRQL v27; // dl
  int v28; // eax
  int v29; // ebx
  KIRQL v30; // al
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r9
  int v34; // r9d
  __int64 v35; // r9
  __int64 v36; // rbx
  unsigned int v37; // eax
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r9
  int v41; // r9d
  int v42; // [rsp+20h] [rbp-49h]
  int v43; // [rsp+28h] [rbp-41h]
  int v44; // [rsp+30h] [rbp-39h]
  int v45; // [rsp+38h] [rbp-31h]
  char v46; // [rsp+50h] [rbp-19h]
  KIRQL v47; // [rsp+51h] [rbp-18h]
  PVOID P; // [rsp+58h] [rbp-11h] BYREF
  int v49; // [rsp+60h] [rbp-9h]
  int v50; // [rsp+64h] [rbp-5h]
  int v51; // [rsp+68h] [rbp-1h] BYREF
  int v52; // [rsp+6Ch] [rbp+3h] BYREF
  unsigned int v53; // [rsp+70h] [rbp+7h]
  _DWORD v54[2]; // [rsp+78h] [rbp+Fh] BYREF
  __int16 v55; // [rsp+80h] [rbp+17h]
  __int16 v56; // [rsp+82h] [rbp+19h]

  v51 = 0;
  v52 = 0;
  v56 = 0;
  v6 = 1;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 32, (__int64)&unk_1C0062100, *(_WORD *)(a2 + 4));
  sub_1C000FD80(a1, 1024, 1884435043, a2, 0LL);
  P = sub_1C000F050(a1);
  v7 = P;
  v8 = (KSPIN_LOCK *)(sub_1C000F050(a1) + 766);
  v9 = KeAcquireSpinLockRaiseToDpc(v8);
  KeReleaseSpinLock(v8, v9);
  sub_1C0013AE0(a1, a2, 0LL);
  sub_1C0012400(a1, 0LL, 0LL, &unk_1C0062008, *(unsigned __int16 *)(a2 + 4), 0);
  v10 = sub_1C0001BF8(a1);
  v11 = *(unsigned int *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = v10;
  v54[0] = v10 - *(_DWORD *)(a2 + 848);
  LOWORD(v10) = *(_WORD *)(a2 + 4);
  v54[1] = v11;
  v55 = v10;
  sub_1C000FD80(a1, 1024, 1701720625, a2, v11);
  sub_1C001853C(a1, *(_DWORD *)(a2 + 544) != 0 ? 100 : 15);
  v50 = 30;
  v12 = (int)sub_1C001C46C(a1, a3, a2);
  sub_1C0012400(a1, 0LL, 0LL, &unk_1C0062018, *(unsigned __int16 *)(a2 + 4), 0);
  sub_1C000FD80(a1, 1024, 1701720626, *(unsigned __int16 *)(a2 + 4), v12);
  if ( (int)v12 < 0 )
  {
LABEL_13:
    if ( (v12 & 0xC0000000) == 0xC0000000 )
    {
      v35 = *(unsigned __int16 *)(a2 + 4);
      P = 0LL;
      sub_1C000FD80(a1, 1024, 1936025137, v35, (int)v12);
      v36 = (int)sub_1C000174C(a1, a2, &P);
      v37 = *(_DWORD *)(a2 + 544);
      if ( v37 < 3 && (int)v36 >= 0 )
      {
        sub_1C000FD80(a1, 1024, 1936025138, v37, v36);
        sub_1C0037200(a1, a2);
        v38 = *(unsigned __int16 *)(a2 + 4);
        v39 = *(_QWORD *)(a2 + 376);
        ++*(_DWORD *)(a2 + 544);
        sub_1C00126A8(a1, v39, v38);
        LOBYTE(v40) = 1;
        sub_1C0018990(a1, a3, 2017740897LL, v40);
        sub_1C004C6A0(a1, a3, a2, v41, 0LL);
        sub_1C0012400(a1, 0LL, 0LL, &unk_1C0062A90, *(unsigned __int16 *)(a2 + 4), v36);
        sub_1C00018E8(a1, a2, (__int64)P);
        return v6;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      sub_1C0012400(a1, 0LL, 0LL, &unk_1C0062028, *(unsigned __int16 *)(a2 + 4), v36);
      sub_1C004E668(a1, a2, a3, v50, (__int64)v54, v36, v44, v45, 2065);
    }
    else
    {
      v21 = sub_1C0011220(a3);
      v22 = v21;
      v23 = *(_BYTE *)(v21 + 2732);
      if ( !v23 )
      {
        if ( (*(_DWORD *)(v21 + 1420) & 0x200) != 0 && (*(_DWORD *)(v21 + 1180) & 0x10) == 0 )
        {
          sub_1C004F72C(a1, a3);
          v23 = *(_BYTE *)(v22 + 2732);
        }
        if ( !v23 )
          goto LABEL_17;
      }
      if ( (v7[640] & 1) != 0 )
      {
        sub_1C004BEC0(a1, *(unsigned __int16 *)(v22 + 1428), v22 + 2716);
        v23 = *(_BYTE *)(v22 + 2732);
      }
      if ( !v23 )
      {
LABEL_17:
        if ( (v7[640] & 1) != 0 )
        {
          if ( (int)sub_1C001C9E8(a1, *(unsigned __int16 *)(v22 + 1428), v22 + 2716) >= 0 )
            *(_BYTE *)(v22 + 2732) = 1;
          LODWORD(v12) = 0;
        }
      }
      sub_1C000FD80(a1, 1024, 1970032689, a3, a2);
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
      stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
      *(_DWORD *)(a2 + 416) = 0;
      sub_1C000FD80(a1, 1024, 1970032690, a3, a2);
      sub_1C0003770(a1, a3, 0LL, 0x7050444Fu);
      stru_1C006B480.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v24);
      sub_1C0012400(a1, 0LL, 0LL, &unk_1C0062028, *(unsigned __int16 *)(a2 + 4), v12);
      *(_DWORD *)(sub_1C0011220(a3) + 2820) = 0;
      sub_1C0017E8C(a1, a2);
    }
    return 0;
  }
  v13 = *(_WORD *)(a2 + 4);
  v14 = *(_QWORD *)(a2 + 376);
  v15 = 0;
  v46 = 0;
  v50 = 32;
  sub_1C00029EC(a1, v14, v13);
  sub_1C001CDA8(v16, *(_QWORD *)(a2 + 376), 12LL);
  if ( a3 && *(_DWORD *)(sub_1C0011220(a3) + 1124) == 3 )
  {
    sub_1C000FD80(a1, 1024, 1936999531, a2, *(unsigned __int16 *)(a2 + 4));
    v17 = *(_QWORD *)(a2 + 376);
    LODWORD(v12) = 0;
    v46 = 1;
    *(_DWORD *)(v17 + 136) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    v18 = *(_BYTE *)(v17 + 132);
    *(_DWORD *)(v17 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v18);
  }
  else
  {
    v26 = *(_QWORD *)(a2 + 376);
    *(_DWORD *)(v26 + 136) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    v27 = *(_BYTE *)(v26 + 132);
    *(_DWORD *)(v26 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v27);
    v28 = sub_1C0039198(a1, a3, &v51);
    v12 = v28;
    sub_1C0012400(a1, 0LL, 0LL, &unk_1C00627A8, *(unsigned __int16 *)(a2 + 4), v28);
    sub_1C000FD80(a1, 1024, 1701720627, *(unsigned __int16 *)(a2 + 4), v12);
  }
  while ( 1 )
  {
    if ( (int)v12 >= 0 )
    {
      v12 = (int)sub_1C0015EB4(a1, &v52);
      sub_1C000FD80(a1, 1024, 1701720628, *(unsigned __int16 *)(a2 + 4), v12);
    }
    sub_1C000FD80(a1, 1024, 1936999534, a2, *(unsigned __int16 *)(a2 + 4));
    if ( (v12 & 0xC0000000) == 0xC0000000 )
      break;
    v19 = sub_1C0011220(a3);
    v20 = v19;
    if ( (*(_DWORD *)(v19 + 1420) & 0x200) == 0 || v46 == 1 )
      goto LABEL_12;
    v53 = v15 + 1;
    v29 = 4;
    v49 = 4;
    v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 2808));
    v47 = v30;
    if ( !*(_DWORD *)(v20 + 2816) )
    {
      v31 = sub_1C0011220(a3);
      if ( (*(_DWORD *)(v31 + 1420) & 0x200) == 0 )
      {
        v29 = 1;
        v49 = 1;
        goto LABEL_30;
      }
      v44 = v31 + 2128;
      LOWORD(v43) = *(_WORD *)(v31 + 1410);
      LOWORD(v42) = *(_WORD *)(v31 + 1408);
      v49 = USBD_AddDeviceToGlobalList(a3, a1, *(unsigned __int16 *)(v31 + 1428), 0LL, v42, v43);
      v29 = v49;
      if ( v49 == 1 )
LABEL_30:
        *(_DWORD *)(v20 + 2816) = 1;
      v30 = v47;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 2808), v30);
    if ( v29 == 3 )
    {
      sub_1C0012400(a1, 0LL, 0LL, &unk_1C00627C8, *(unsigned __int16 *)(a2 + 4), -1073741823);
      sub_1C004A608(
        a1,
        *(unsigned __int16 *)(a2 + 4),
        40,
        *(_QWORD *)(v20 + 2136),
        *(_DWORD *)(v20 + 2132),
        v12,
        0,
        (__int64)aBusfuncC,
        1932,
        0);
      sub_1C0050D40(v20 + 2128);
      *(_DWORD *)(v20 + 1420) &= ~0x200u;
      goto LABEL_12;
    }
    if ( v29 != 2 )
    {
      if ( v49 == 4 )
        LODWORD(v12) = -1073741823;
      goto LABEL_12;
    }
    if ( (unsigned int)sub_1C0033EEC(a1, a2, *(_QWORD *)(a2 + 376)) )
    {
      LODWORD(v12) = -1073741823;
      *(_DWORD *)(a2 + 544) = 3;
      goto LABEL_12;
    }
    sub_1C001853C(a1, LODWORD(stru_1C006B480.Queue.Wcb.BufferChainingDpc));
    v15 = v53;
    if ( v53 > HIDWORD(stru_1C006B480.Queue.Wcb.BufferChainingDpc) )
    {
      LODWORD(v12) = -1073741823;
      sub_1C0012400(a1, 0LL, 0LL, &unk_1C0062818, *(unsigned __int16 *)(a2 + 4), -1073741823);
      sub_1C004A608(a1, *(unsigned __int16 *)(a2 + 4), 70, 0, 0, -1073741823, 0, (__int64)aBusfuncC, 1987, 0);
      *(_DWORD *)(sub_1C0011220(a3) + 2820) = 1073807363;
LABEL_12:
      v7 = P;
      goto LABEL_13;
    }
  }
  if ( !(unsigned __int8)sub_1C001CEB4((unsigned int)v12) )
  {
    sub_1C000FD80(a1, 1024, 1701725522, v33, v32);
    sub_1C0037200(a1, a2);
    goto LABEL_12;
  }
  sub_1C000FD80(a1, 1024, 1701720644, v33, v32);
  sub_1C004C6A0(a1, a3, a2, v34, 0LL);
  sub_1C0012400(a1, 0LL, 0LL, &unk_1C00629A8, *(unsigned __int16 *)(a2 + 4), v12);
  sub_1C003AA2C(a1, a3, 3LL, *(_QWORD *)(a2 + 376));
  return 3LL;
}
