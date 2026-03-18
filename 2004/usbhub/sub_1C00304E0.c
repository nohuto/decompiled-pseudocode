/*
 * XREFs of sub_1C00304E0 @ 0x1C00304E0
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0013F80 @ 0x1C0013F80 (sub_1C0013F80.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C00176F8 @ 0x1C00176F8 (sub_1C00176F8.c)
 *     sub_1C0018364 @ 0x1C0018364 (sub_1C0018364.c)
 *     sub_1C001CDA8 @ 0x1C001CDA8 (sub_1C001CDA8.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002FED0 @ 0x1C002FED0 (sub_1C002FED0.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C00304E0(PDEVICE_OBJECT DeviceObject, ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  _DWORD *v6; // rsi
  __int64 v7; // r15
  int v8; // edi
  int v9; // edx
  __int64 v10; // rcx
  bool v11; // zf
  KIRQL v12; // dl
  int v13; // eax
  bool v14; // cc
  __int64 v16; // [rsp+98h] [rbp+20h]

  sub_1C000FD80((__int64)DeviceObject, 4, 1919251233, (__int64)BugCheckParameter4, BugCheckParameter3);
  v6 = sub_1C0011220(BugCheckParameter3);
  v7 = (__int64)(v6 + 236);
  sub_1C0013F80((__int64)v6, (__int64)BugCheckParameter4, &stru_1C0062AC0, 0);
  sub_1C00176F8((__int64)DeviceObject, (__int64)(v6 + 236), 134, 1936028228);
  if ( sub_1C0011220(BugCheckParameter3)[282] == 1 )
  {
    sub_1C0018364((__int64)DeviceObject, v7);
    v9 = *((unsigned __int16 *)v6 + 714);
    if ( KeGetCurrentIrql() )
    {
      v8 = -1073741811;
      sub_1C004A608((_DWORD)DeviceObject, v9, 68, 0, 0, -1073741811, -1, (__int64)aDioctlC, 769, 0);
    }
    else
    {
      v8 = -1073741810;
      v16 = sub_1C0016B5C((__int64)DeviceObject, v9, (__int64)BugCheckParameter4, 0x64545352u);
      sub_1C000FD80((__int64)DeviceObject, 8, 1920169068, *((unsigned __int16 *)v6 + 714), v16);
      if ( v16 )
      {
        if ( BugCheckParameter3 == v16 )
        {
          sub_1C001CDA8(v10, v7, 13);
          v11 = sub_1C0011220(BugCheckParameter3)[281] == 3;
          v6[270] = 0;
          stru_1C006B480.Dpc.DeferredRoutine = 0LL;
          v6[258] = 1734964085;
          v12 = *((_BYTE *)v6 + 1076);
          if ( v11 )
          {
            KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v12);
            sub_1C002FED0((__int64)DeviceObject, 0, 0xC000000E, *((unsigned __int16 *)v6 + 714));
            v13 = sub_1C00162A8(DeviceObject, v7, BugCheckParameter3);
            ++v6[597];
            v8 = v13;
            v14 = v6[597] <= 0xAu;
            v6[596] = 1;
            if ( !v14 )
            {
              sub_1C004A608(
                (_DWORD)DeviceObject,
                *((unsigned __int16 *)v6 + 714),
                76,
                0,
                0,
                v13,
                -1,
                (__int64)aDioctlC,
                803,
                0);
              v6[597] = 0;
            }
            if ( v8 >= 0 )
              sub_1C002FED0((__int64)DeviceObject, 1u, v8, *((unsigned __int16 *)v6 + 714));
          }
          else
          {
            KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v12);
          }
        }
        sub_1C00171A0((__int64)DeviceObject, v16, (__int64)BugCheckParameter4, 0x64545352u);
      }
      if ( (v8 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v8) )
        sub_1C004A608(
          (_DWORD)DeviceObject,
          *((unsigned __int16 *)v6 + 714),
          77,
          0,
          0,
          v8,
          -1,
          (__int64)aDioctlC,
          828,
          0);
    }
  }
  else
  {
    v8 = -1073741101;
    sub_1C004A608(
      (_DWORD)DeviceObject,
      *((unsigned __int16 *)v6 + 714),
      69,
      0,
      0,
      -1073741101,
      -1,
      (__int64)aDioctlC,
      749,
      0);
    sub_1C0018364((__int64)DeviceObject, v7);
  }
  sub_1C0013F80((__int64)v6, (__int64)BugCheckParameter4, &stru_1C0062A40, v8);
  if ( *((_BYTE *)v6 + 2740) && v8 < 0 )
  {
    sub_1C000FD80((__int64)DeviceObject, 8, 1920169062, (__int64)v6, v8);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
      sub_1C002E0B4((__int64)::DeviceObject->DeviceExtension, 0, 3u, 0xBu, (__int64)&unk_1C0062C38);
    sub_1C004A608((_DWORD)DeviceObject, 0, 62, 0, 0, -1073741823, -1073704960, (__int64)aDioctlC, 841, 1);
    *((_QWORD *)v6 + 348) = BugCheckParameter4;
    v8 = 259;
    BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  else
  {
    BugCheckParameter4->IoStatus.Status = v8;
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  sub_1C0014E84(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  return (unsigned int)v8;
}
