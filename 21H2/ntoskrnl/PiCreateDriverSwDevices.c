/*
 * XREFs of PiCreateDriverSwDevices @ 0x14076ABAC
 * Callers:
 *     PipProcessStartPhase3 @ 0x14076BE08 (PipProcessStartPhase3.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14076E894 (PnpDeviceObjectToDeviceInstance.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x14083EAEC (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall PiCreateDriverSwDevices(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int128 v7; // [rsp+30h] [rbp-10h] BYREF
  HANDLE v8; // [rsp+50h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+18h] BYREF

  Handle = 0LL;
  v8 = 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  v7 = 0LL;
  v3 = PnpDeviceObjectToDeviceInstance(v2, &Handle, 131097LL);
  if ( v3 >= 0 )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v4 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
    else
      LODWORD(v4) = 0;
    v5 = SysCtxRegOpenKey(v4, (_DWORD)Handle, (unsigned int)L"Devices", 0, 131097, (__int64)&v8);
    v3 = v5;
    if ( v5 >= 0 )
    {
      DWORD2(v7) = 0;
      *(_QWORD *)&v7 = a1;
      v3 = PnpCtxRegEnumKeyWithCallback(*(_QWORD *)&PiPnpRtlCtx, v8, PiCreateDriverSwDeviceCallback, &v7);
      if ( v3 >= 0 && SDWORD2(v7) < 0 )
        v3 = DWORD2(v7);
    }
    else if ( v5 == -1073741772 )
    {
      v3 = 0;
    }
  }
  if ( v8 )
    ZwClose(v8);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v3;
}
