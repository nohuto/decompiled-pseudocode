/*
 * XREFs of sub_1C000F4B0 @ 0x1C000F4B0
 * Callers:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 * Callees:
 *     sub_1C0002580 @ 0x1C0002580 (sub_1C0002580.c)
 *     sub_1C00038F0 @ 0x1C00038F0 (sub_1C00038F0.c)
 *     sub_1C000B870 @ 0x1C000B870 (sub_1C000B870.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016A98 @ 0x1C0016A98 (sub_1C0016A98.c)
 *     sub_1C0018570 @ 0x1C0018570 (sub_1C0018570.c)
 *     sub_1C001AE80 @ 0x1C001AE80 (sub_1C001AE80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E354 @ 0x1C002E354 (sub_1C002E354.c)
 *     sub_1C0033A0C @ 0x1C0033A0C (sub_1C0033A0C.c)
 *     sub_1C0034580 @ 0x1C0034580 (sub_1C0034580.c)
 *     sub_1C0034DE4 @ 0x1C0034DE4 (sub_1C0034DE4.c)
 *     sub_1C0034E5C @ 0x1C0034E5C (sub_1C0034E5C.c)
 *     sub_1C0034EEC @ 0x1C0034EEC (sub_1C0034EEC.c)
 *     sub_1C0036088 @ 0x1C0036088 (sub_1C0036088.c)
 */

__int64 __fastcall sub_1C000F4B0(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // ebp
  _DWORD *v9; // r14
  int v10; // r15d
  KSPIN_LOCK *v11; // r12
  KIRQL v12; // al
  unsigned __int16 v13; // dx
  __int64 v14; // rax
  int v15; // eax
  KIRQL v16; // dl
  __int64 v17; // rcx
  KIRQL v18; // r12
  __int64 v19; // rcx
  PVOID v20; // r9
  __int64 result; // rax
  unsigned int v22; // r9d
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int16 v28; // dx
  __int64 v29; // rcx
  unsigned __int16 v30; // dx
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // edx
  KIRQL v41; // [rsp+40h] [rbp-48h]
  _QWORD v42[2]; // [rsp+50h] [rbp-38h] BYREF
  KIRQL v43; // [rsp+98h] [rbp+10h] BYREF

  v43 = 0;
  v42[0] = 0LL;
  v4 = 0;
  v9 = sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 16, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4));
  sub_1C00038F0(a1, (void *)(a2 + 824), 660000, 825258049, 2u, a2);
  v10 = sub_1C001AE80(a1, a2, 10, (unsigned int)&v43, 0);
  if ( *(_BYTE *)(a2 + 2839) || *(_BYTE *)(a2 + 2840) )
  {
    *a4 = -1073741667;
    sub_1C0036088(a1, a2);
    return sub_1C0034EEC(a1, a2, v43, 0LL);
  }
  else
  {
    *(_QWORD *)(a2 + 736) = KeGetCurrentThread();
    sub_1C000FD80(a1, 512, 825258032, v10, *(unsigned __int16 *)(a2 + 4));
    _InterlockedIncrement((volatile signed __int32 *)(a3 + 144));
    v11 = (KSPIN_LOCK *)(sub_1C000F050(a1) + 1236);
    v12 = KeAcquireSpinLockRaiseToDpc(v11);
    v41 = v12;
    if ( *(_DWORD *)(a2 + 696) == 2 )
    {
      KeReleaseSpinLock(v11, v12);
    }
    else
    {
      *(_DWORD *)(a2 + 696) = 2;
      KeResetEvent((PRKEVENT)(a2 + 744));
      KeReleaseSpinLock(v11, v41);
      sub_1C000FD80(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 16) = 10;
    }
    if ( v10 == 2 )
    {
      sub_1C000FD80(a1, 512, 825258037, 2, *(unsigned __int16 *)(a2 + 4));
      v13 = *(_WORD *)(a2 + 4);
      LODWORD(v42[0]) = 0x40000;
      *(_QWORD *)(a2 + 736) = 0LL;
      v4 = sub_1C000B870(a1, v13, (unsigned int *)v42, 0, 0LL);
      if ( v4 < 0 )
      {
        sub_1C000FD80(a1, 8, 1902727218, a2, *(unsigned __int16 *)(a2 + 4));
        sub_1C0036088(a1, a2);
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
          sub_1C002E354(DeviceObject->DeviceExtension, v40, 1, 18, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4), v4);
LABEL_41:
        sub_1C0034EEC(a1, a2, v43, 0LL);
      }
      else
      {
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
          sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 17, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4));
        sub_1C000FD80(a1, 8, 1902727217, a2, *(unsigned __int16 *)(a2 + 4));
        v14 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 9;
        *(_DWORD *)(v14 + a2 + 1384) = 9;
        sub_1C000FD80(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
        v15 = *(_DWORD *)(a2 + 12);
        v16 = v43;
        v17 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v17 + a2 + 1384) = v15;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v16);
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
        if ( *(_DWORD *)(a2 + 2412) != 1 )
        {
          v19 = *(_QWORD *)(a2 + 16);
          *(_DWORD *)(a2 + 2412) = 1;
          sub_1C000FD80(v19, 512, 1364214615, a2, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 2440));
          IoQueueWorkItem(*(PIO_WORKITEM *)(a2 + 2456), (PIO_WORKITEM_ROUTINE)WorkerRoutine, DelayedWorkQueue, v20);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 2448), v18);
      }
    }
    else
    {
      switch ( v10 )
      {
        case 1:
          sub_1C0036088(a1, a2);
          sub_1C000FD80(a1, 512, 825258038, v10, *(unsigned __int16 *)(a2 + 4));
          *(_QWORD *)(a2 + 736) = 0LL;
          goto LABEL_41;
        case 3:
        case 14:
          sub_1C000FD80(a1, 512, 825258035, v10, *(unsigned __int16 *)(a2 + 4));
          v28 = *(_WORD *)(a2 + 4);
          LODWORD(v42[0]) = 0x40000;
          *(_QWORD *)(a2 + 736) = 0LL;
          v4 = sub_1C000B870(a1, v28, (unsigned int *)v42, 0, 0LL);
          if ( v4 < 0 )
            goto LABEL_25;
          v29 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 10;
          *(_DWORD *)(v29 + a2 + 1384) = 10;
          goto LABEL_41;
        case 4:
          sub_1C000FD80(a1, 512, 825258036, v10, *(unsigned __int16 *)(a2 + 4));
          v30 = *(_WORD *)(a2 + 4);
          LODWORD(v42[0]) = 0x40000;
          v4 = sub_1C000B870(a1, v30, (unsigned int *)v42, 0, 0LL);
          if ( v4 < 0 )
            goto LABEL_25;
          v31 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 9;
          *(_DWORD *)(v31 + a2 + 1384) = 9;
          goto LABEL_41;
        case 5:
        case 12:
        case 13:
        case 16:
        case 17:
          sub_1C000FD80(a1, 512, 825258041, v10, *(unsigned __int16 *)(a2 + 4));
          v34 = v43;
          v35 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_QWORD *)(a2 + 736) = 0LL;
          *(_DWORD *)(a2 + 12) = v10;
          *(_DWORD *)(v35 + a2 + 1384) = v10;
          sub_1C0034EEC(a1, a2, v34, 0LL);
          sub_1C00038F0(a1, (void *)(a2 + 472), 660000, 825258041, 4u, a2);
          result = sub_1C0016A98(a1, a3, *(unsigned __int16 *)(a2 + 4));
          _InterlockedDecrement((volatile signed __int32 *)(a3 + 144));
          return result;
        case 6:
          sub_1C000FD80(a1, 512, 825258034, v10, *(unsigned __int16 *)(a2 + 4));
          *(_QWORD *)(a2 + 736) = 0LL;
          sub_1C0002580(a1, a2, v23, v24);
          v25 = v43;
          v26 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 11;
          *(_DWORD *)(v26 + a2 + 1384) = 11;
          sub_1C0034EEC(a1, a2, v25, 0LL);
          *(_DWORD *)(a2 + 400) = sub_1C0033A0C(a1, v27, a2);
          sub_1C0034E5C(a1, a2);
          break;
        case 7:
        case 11:
          sub_1C000FD80(a1, 512, 825258033, v10, *(unsigned __int16 *)(a2 + 4));
          *(_QWORD *)(a2 + 736) = 0LL;
LABEL_25:
          sub_1C0036088(a1, a2);
          goto LABEL_41;
        case 8:
        case 9:
        case 10:
          sub_1C000FD80(a1, 512, 825258040, v10, *(unsigned __int16 *)(a2 + 4));
          v33 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_QWORD *)(a2 + 736) = 0LL;
          *(_DWORD *)(a2 + 12) = v10;
          *(_DWORD *)(v33 + a2 + 1384) = v10;
          goto LABEL_37;
        case 15:
          sub_1C000FD80(a1, 512, 825258081, v10, *(unsigned __int16 *)(a2 + 4));
          *(_QWORD *)(a2 + 736) = 0LL;
          sub_1C0002580(a1, a2, v36, v37);
          v38 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 15;
          *(_DWORD *)(v38 + a2 + 1384) = 15;
          goto LABEL_35;
        case 18:
          sub_1C000FD80(a1, 512, 825258039, v10, *(unsigned __int16 *)(a2 + 4));
          sub_1C0034DE4(a1, a2, 1LL);
          sub_1C0034EEC(a1, a2, v43, 0LL);
          sub_1C00038F0(a1, (void *)(a2 + 712), 660000, 825258039, 3u, a2);
          v32 = *(unsigned __int16 *)(a2 + 4);
          *(_QWORD *)(a2 + 736) = 0LL;
          sub_1C0034580(a1, a2 + 24, v32);
          break;
        case 20:
LABEL_35:
          sub_1C0034EEC(a1, a2, v43, 0LL);
          sub_1C0034E5C(a1, a2);
          break;
        default:
          sub_1C000FD80(a1, 512, 825258072, v10, *(unsigned __int16 *)(a2 + 4));
          v39 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_QWORD *)(a2 + 736) = 0LL;
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(v39 + a2 + 1384) = 19;
LABEL_37:
          sub_1C0034EEC(a1, a2, v43, 0LL);
          break;
      }
    }
    sub_1C00038F0(a1, (void *)(a2 + 744), 660000, 825258104, 5u, a2);
    result = (unsigned int)v9[640];
    if ( (result & 1) != 0 && *((_BYTE *)v9 + 5235) == 32 )
    {
      sub_1C000FD80(a1, 8, 2002872692, 10, 0LL);
      result = sub_1C0018570(v22);
    }
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 144));
    *a4 = v4;
  }
  return result;
}
