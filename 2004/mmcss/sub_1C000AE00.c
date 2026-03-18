/*
 * XREFs of sub_1C000AE00 @ 0x1C000AE00
 * Callers:
 *     sub_1C000A210 @ 0x1C000A210 (sub_1C000A210.c)
 *     sub_1C000A690 @ 0x1C000A690 (sub_1C000A690.c)
 * Callees:
 *     sub_1C0001AE0 @ 0x1C0001AE0 (sub_1C0001AE0.c)
 *     sub_1C00043B8 @ 0x1C00043B8 (sub_1C00043B8.c)
 *     sub_1C0004604 @ 0x1C0004604 (sub_1C0004604.c)
 *     sub_1C0004AFC @ 0x1C0004AFC (sub_1C0004AFC.c)
 *     sub_1C000AF90 @ 0x1C000AF90 (sub_1C000AF90.c)
 */

__int64 __fastcall sub_1C000AE00(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  char *v5; // rbx
  _QWORD *v6; // rax
  HANDLE CurrentThreadId; // rax
  int v8; // edi
  PKDEFERRED_ROUTINE **v9; // rax
  struct _DEVICE_OBJECT **DeferredContext; // rcx
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = sub_1C0001AE0(0xC0uLL);
  v5 = (char *)v4;
  if ( v4 )
  {
    *(_DWORD *)v4 = 2;
    v4[6] = 1LL;
    v4[17] = a1;
    v4[1] = 0LL;
    v6 = v4 + 4;
    v6[1] = v6;
    *v6 = v6;
    *((_QWORD *)v5 + 19) = PsGetCurrentProcessId();
    CurrentThreadId = PsGetCurrentThreadId();
    *((_QWORD *)v5 + 10) = 0LL;
    *((_QWORD *)v5 + 20) = CurrentThreadId;
    *((_DWORD *)v5 + 22) = 1;
    v8 = 0;
    v5[92] = 0;
    *((_QWORD *)v5 + 15) = 0LL;
    *((_DWORD *)v5 + 32) = 1;
    v5[132] = 0;
    *((_DWORD *)v5 + 46) = 0;
    ExAcquirePushLockExclusiveEx(&DeviceObject.Dpc.DpcListEntry, 0LL);
    DeviceObject.Dpc.ProcessorHistory = (KAFFINITY)KeGetCurrentThread();
    if ( (unsigned int)dword_1C00071CC >= 0x80 )
    {
      v8 = -1073741527;
    }
    else
    {
      v12 = 0LL;
      do
        ++dword_1C00071C8;
      while ( (int)sub_1C000AF90((unsigned int)dword_1C00071C8, 0LL, &v12) >= 0 );
      ++dword_1C00071CC;
      *((_DWORD *)v5 + 36) = dword_1C00071C8;
      v9 = (PKDEFERRED_ROUTINE **)(v5 + 168);
      DeferredContext = (struct _DEVICE_OBJECT **)DeviceObject.Dpc.DeferredContext;
      *a2 = v5;
      if ( *DeferredContext != (struct _DEVICE_OBJECT *)&DeviceObject.Dpc.DeferredRoutine )
        __fastfail(3u);
      *v9 = &DeviceObject.Dpc.DeferredRoutine;
      *((_QWORD *)v5 + 22) = DeferredContext;
      *DeferredContext = (struct _DEVICE_OBJECT *)v9;
      DeviceObject.Dpc.DeferredContext = v5 + 168;
    }
    DeviceObject.Dpc.ProcessorHistory = 0LL;
    ExReleasePushLockExclusiveEx(&DeviceObject.Dpc.DpcListEntry, 0LL);
    if ( v8 < 0 )
    {
      if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
        sub_1C00043B8((__int64)off_1C0007000->AttachedDevice, 0xBu, (__int64)&unk_1C0005408);
      sub_1C0004AFC(v5);
    }
    return (unsigned int)v8;
  }
  else
  {
    if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
      sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0xAu, (__int64)&unk_1C0005408, -1073741801);
    return 3221225495LL;
  }
}
