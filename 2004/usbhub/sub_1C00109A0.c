/*
 * XREFs of sub_1C00109A0 @ 0x1C00109A0
 * Callers:
 *     sub_1C001AFE0 @ 0x1C001AFE0 (sub_1C001AFE0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0010D74 @ 0x1C0010D74 (sub_1C0010D74.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0012EFC @ 0x1C0012EFC (sub_1C0012EFC.c)
 *     sub_1C0013058 @ 0x1C0013058 (sub_1C0013058.c)
 *     sub_1C0013CDC @ 0x1C0013CDC (sub_1C0013CDC.c)
 *     sub_1C0013DA0 @ 0x1C0013DA0 (sub_1C0013DA0.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0014F6C @ 0x1C0014F6C (sub_1C0014F6C.c)
 *     sub_1C0017660 @ 0x1C0017660 (sub_1C0017660.c)
 *     sub_1C00176F8 @ 0x1C00176F8 (sub_1C00176F8.c)
 *     sub_1C0017B0C @ 0x1C0017B0C (sub_1C0017B0C.c)
 *     sub_1C0018364 @ 0x1C0018364 (sub_1C0018364.c)
 *     sub_1C0018BE0 @ 0x1C0018BE0 (sub_1C0018BE0.c)
 *     sub_1C0019404 @ 0x1C0019404 (sub_1C0019404.c)
 *     sub_1C001CE84 @ 0x1C001CE84 (sub_1C001CE84.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002E354 @ 0x1C002E354 (sub_1C002E354.c)
 *     sub_1C0033E18 @ 0x1C0033E18 (sub_1C0033E18.c)
 */

__int64 __fastcall sub_1C00109A0(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v9; // rbx
  DWORD LowPart; // edi
  int v11; // eax
  __int64 v12; // r13
  KIRQL v13; // al
  bool v14; // zf
  KIRQL v15; // dl
  KSPIN_LOCK *v16; // rdi
  KIRQL v17; // al
  int v18; // ecx
  int v19; // edi
  unsigned int v20; // edi
  __int64 v21; // rax
  void *v22; // r8
  int v24; // r8d
  int v25; // edi
  int v26; // ecx
  int v27; // r8d
  int v28; // r8d
  _DWORD *v29; // rdi
  KIRQL v30; // dl
  int v31; // r8d
  __int64 v32; // rax
  int v33; // eax
  int v34; // ecx
  BOOLEAN v35; // r9
  DWORD v36; // [rsp+80h] [rbp+18h]

  v6 = sub_1C0011220(a2);
  sub_1C000F050(a1);
  v7 = sub_1C0011220(a2);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v9 = v7 + 944;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v36 = LowPart;
  sub_1C000FD80(a1, 16, 1885622372, a2, (__int64)a3);
  v11 = sub_1C0014F6C(a2, a3, 1884311383LL, 0LL);
  v12 = v11;
  if ( (v11 & 0xC0000000) != 0xC0000000 )
  {
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
    *(_DWORD *)(v9 + 136) = 1;
    *(_BYTE *)(v9 + 132) = v13;
    *(_DWORD *)(v9 + 88) = 2018460752;
    *(_DWORD *)(v9 + 92) = 12;
    stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)v9;
    *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
    v14 = *(_DWORD *)(sub_1C0011220(a2) + 1124) == 3;
    *(_DWORD *)(v9 + 136) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v9 + 88) = 1734964085;
    v15 = *(_BYTE *)(v9 + 132);
    if ( v14 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v15);
      v16 = (KSPIN_LOCK *)sub_1C000F050(a1);
      v17 = KeAcquireSpinLockRaiseToDpc(v16 + 632);
      v18 = *((_DWORD *)v16 + 1043);
      *((_BYTE *)v16 + 5064) = v17;
      *(_DWORD *)(v9 + 40) = v18;
      *(_DWORD *)(v9 + 44) = 126;
      *(_DWORD *)(v9 + 32) = 844055622;
      *(_DWORD *)(v9 + 36) = 1986356304;
      *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
      v16[168] = v9;
      v19 = *(_DWORD *)(sub_1C0011220(a2) + 1128);
      if ( v36 == 1 )
      {
        sub_1C0013DA0(v6, a3, &unk_1C0062058, CurrentStackLocation->Parameters.Read.ByteOffset.LowPart, 0);
        *(_QWORD *)(v6 + 2552) = MEMORY[0xFFFFF78000000014];
        v25 = v19 - 1;
        if ( v25 )
        {
          if ( v25 != 6 )
          {
            sub_1C000F050(*(_QWORD *)(v9 + 8));
            v26 = sub_1C000F050(*(_QWORD *)(v9 + 8))[1043];
            if ( v26 != 210 )
            {
              switch ( v26 )
              {
                case 201:
                case 206:
                case 209:
                case 211:
                  break;
                case 212:
                case 213:
                  goto LABEL_40;
                default:
                  sub_1C0017660(v9, a2, v27, 6, 3);
                  goto LABEL_45;
              }
            }
            if ( (int)sub_1C0019404(a1, v9, a2, a3) >= 0 )
            {
              KeResetEvent((PRKEVENT)(v6 + 2360));
              sub_1C0017660(v9, a2, v28, 2, 6);
              v29 = sub_1C000F050(a1);
              sub_1C000F050(*(_QWORD *)(v9 + 8));
              *(_DWORD *)(v9 + 32) = 1734964085;
              v30 = *((_BYTE *)v29 + 5064);
              *((_QWORD *)v29 + 168) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)v29 + 632, v30);
              return 259LL;
            }
LABEL_40:
            sub_1C0017660(v9, a2, v27, 6, 3);
            v33 = sub_1C001CE84(v9);
            v34 = 0;
            if ( v33 == 213 )
              v34 = -1073741810;
            v20 = v34;
            sub_1C0018364(a1, v9);
            goto LABEL_9;
          }
          sub_1C0017660(v9, a2, v24, 7, 13);
          sub_1C0018364(a1, v9);
          sub_1C000FD80(a1, 16, 2003059760, 0LL, *(unsigned __int16 *)(v6 + 1428));
          KeWaitForSingleObject((PVOID)(v6 + 2360), Executive, 0, v35, 0LL);
        }
        else
        {
          sub_1C0017660(v9, a2, v24, 1, 2);
LABEL_45:
          sub_1C0018364(a1, v9);
        }
        v20 = 0;
      }
      else if ( v36 - 2 > 2 )
      {
        v20 = -1073741811;
        sub_1C0018364(a1, v9);
      }
      else
      {
        sub_1C0013DA0(v6, a3, &unk_1C0062038, CurrentStackLocation->Parameters.Read.ByteOffset.LowPart, 0);
        if ( *(_DWORD *)(sub_1C0011220(a2) + 788) == v36 )
        {
          v20 = 0;
          sub_1C0018364(a1, v9);
        }
        else if ( *(_DWORD *)(v6 + 1152) == 2 )
        {
          if ( !CurrentStackLocation->Parameters.Create.EaLength )
          {
            if ( !*(_BYTE *)(v6 + 2733) )
            {
              *(_BYTE *)(v6 + 2733) = 1;
              sub_1C0017B0C(a1, 1, (unsigned int)&sub_1C0046AF0, a2, 0, 2001228627, 0LL);
            }
            if ( v36 == 4
              && (*(_DWORD *)(sub_1C0011220(a2) + 1180) & 0x10) != 0
              && (*(_DWORD *)(v6 + 1420) & 0xC00000) == 0xC00000 )
            {
              KeSetEvent((PRKEVENT)(v6 + 2920), 0, 0);
              *(_DWORD *)(v6 + 1420) = *(_DWORD *)(v6 + 1420) & 0xFAFFFFFF | 0x4000000;
            }
          }
          v20 = sub_1C0018BE0(v9, a2, a3);
        }
        else
        {
          v20 = -1073741130;
          sub_1C0018364(a1, v9);
        }
      }
    }
    else
    {
      v20 = -1073741810;
      KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v15);
    }
LABEL_9:
    if ( (unsigned __int8)sub_1C001CEB4(v20) )
      sub_1C0033E18(a1, v9, *(unsigned __int16 *)(v6 + 1428));
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E354(DeviceObject->DeviceExtension, v36, 1, 22, (__int64)&unk_1C0062DF8, *(_WORD *)(v6 + 1428), v36);
    sub_1C0010D74(a2, CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
    *(_QWORD *)(v6 + 2560) = MEMORY[0xFFFFF78000000014];
    v21 = sub_1C0011220(a2);
    sub_1C0013CDC(*(_QWORD *)(v21 + 1184), a2, a3, 2101LL);
    if ( v36 == 1 )
      v22 = &unk_1C0061E88;
    else
      v22 = &unk_1C0062048;
    sub_1C0013DA0(v6, a3, v22, CurrentStackLocation->Parameters.Read.ByteOffset.LowPart, 0);
    a3->IoStatus.Status = v20;
    IofCompleteRequest(a3, 0);
    sub_1C0014E84(a2, (ULONG_PTR)a3);
    return v20;
  }
  if ( *(_BYTE *)(v6 + 2740) )
  {
    sub_1C00176F8(a1, v9, 126LL, 1986356304LL);
    if ( LowPart == 1 )
    {
      sub_1C0017660(v9, a2, v31, 1, 2);
      sub_1C0018364(a1, v9);
      sub_1C0013058(a1, a2, a3);
    }
    else
    {
      sub_1C0017660(v9, a2, v31, 4, 4);
      sub_1C0018364(a1, v9);
      sub_1C0012EFC(a1, a2, a3);
    }
    sub_1C0010D74(a2, LowPart);
  }
  sub_1C000FD80(a1, 16, 1886545441, v12, (__int64)a3);
  *(_QWORD *)(v6 + 2560) = MEMORY[0xFFFFF78000000014];
  v32 = sub_1C0011220(a2);
  sub_1C0013CDC(*(_QWORD *)(v32 + 1184), a2, a3, 1910LL);
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 0);
  return 0LL;
}
