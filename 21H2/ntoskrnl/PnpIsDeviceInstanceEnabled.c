/*
 * XREFs of PnpIsDeviceInstanceEnabled @ 0x140752DDC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074EF10 (IopInitializeDeviceInstanceKey.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1408AB1E0 (PiProfileUpdateDeviceTreeCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     PnpUnicodeStringToWstrFree @ 0x14062A5A4 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14062C36C (PnpUnicodeStringToWstr.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140752F3C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpDisableDevice @ 0x1408A1EEC (PnpDisableDevice.c)
 */

__int64 __fastcall PnpIsDeviceInstanceEnabled(void *a1, unsigned __int16 *a2, int a3)
{
  _DWORD *v3; // rdi
  unsigned int v6; // ebx
  int v7; // r12d
  __int16 *v8; // rsi
  _QWORD *v9; // rax
  void *v10; // r14
  int v11; // eax
  HANDLE v12; // r8
  __int64 v13; // rdx
  char v14; // al
  char v15; // al
  int v17; // eax
  int v18; // [rsp+40h] [rbp-10h] BYREF
  int v19; // [rsp+44h] [rbp-Ch] BYREF
  __int16 *v20; // [rsp+48h] [rbp-8h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  int v22; // [rsp+A8h] [rbp+58h] BYREF

  Handle = a1;
  v3 = 0LL;
  v22 = 0;
  v18 = 0;
  v19 = 0;
  v6 = 1;
  v20 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)a2, 0x55706E50u);
  v10 = v9;
  if ( v9 )
    v3 = *(_DWORD **)(v9[39] + 40LL);
  if ( v3 )
  {
    if ( (v3[99] & 0x2000) != 0 )
    {
      v17 = v3[101];
      if ( v17 == 22 || v17 == 29 )
        goto LABEL_21;
    }
  }
  v11 = PnpUnicodeStringToWstr(&v20, 0LL, a2);
  v8 = v20;
  if ( v11 < 0 )
    goto LABEL_21;
  v12 = Handle;
  if ( !Handle )
  {
    if ( (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v20, 16, 0, 131097, 0, (__int64)&Handle, 0LL) >= 0 )
    {
      v12 = Handle;
      v7 = 1;
      goto LABEL_7;
    }
LABEL_21:
    v6 = 0;
    goto LABEL_14;
  }
LABEL_7:
  v18 = 4;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)v8,
              (__int64)v12,
              11,
              (__int64)&v19,
              (__int64)&v22,
              (__int64)&v18,
              0) < 0
    || v19 == 4 && v18 == 4 )
  {
    v14 = v22;
  }
  else
  {
    v14 = 0;
    v22 = 0;
  }
  if ( (v14 & 1) != 0 )
  {
    v15 = 1;
    v22 = 1;
  }
  else
  {
    PnpGetDeviceInstanceCsConfigFlags(a2, v13, &v22);
    v15 = v22;
  }
  if ( (v15 & 7) != 0 )
  {
    v6 = 0;
    if ( a3 )
    {
      if ( v3 && v3[75] != 769 )
        PnpDisableDevice(v3, 22LL);
    }
  }
LABEL_14:
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x55706E50u);
  if ( v7 )
    ZwClose(Handle);
  if ( v8 )
    PnpUnicodeStringToWstrFree(v8, (__int64)a2);
  return v6;
}
