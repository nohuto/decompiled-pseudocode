/*
 * XREFs of PiDevCfgEnumDeviceKeys @ 0x140767C78
 * Callers:
 *     PiDevCfgResetDeviceKeys @ 0x1407308E0 (PiDevCfgResetDeviceKeys.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1407677A4 (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1402486E8 (CmIsStateSeparationEnabled.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14077CAC8 (_PnpCtxOpenContextBaseKey.c)
 *     _PnpCtxOpenContextNodeBaseKey @ 0x1409749A0 (_PnpCtxOpenContextNodeBaseKey.c)
 */

__int64 __fastcall PiDevCfgEnumDeviceKeys(
        __int64 a1,
        __int64 a2,
        void *a3,
        int a4,
        char a5,
        __int64 (__fastcall *a6)(__int64, __int64, int *, HANDLE),
        __int64 a7)
{
  int *v7; // rsi
  void *v8; // rbx
  unsigned int v11; // edi
  unsigned int v12; // r14d
  NTSTATUS v13; // eax
  int v15; // r8d
  int DeviceRegProp; // ebx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // eax
  const WCHAR *v21; // rdx
  __int64 v22; // rdx
  NTSTATUS v23; // eax
  int v24; // [rsp+20h] [rbp-E0h]
  int v25; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE v30; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h]
  __int64 (__fastcall *v34)(__int64, __int64, int *, HANDLE); // [rsp+80h] [rbp-80h]
  void *v35; // [rsp+88h] [rbp-78h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES v37; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v38[76]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v39; // [rsp+13Ch] [rbp+3Ch]

  v7 = &dword_140985CCC;
  v34 = a6;
  v8 = a3;
  v32 = a7;
  v35 = a3;
  v33 = a1;
  v11 = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  Handle = 0LL;
  v12 = 0;
  v30 = 0LL;
  v28 = 0;
  v29 = 0;
  while ( 1 )
  {
    if ( (a4 & *(v7 - 1)) == 0 )
      goto LABEL_4;
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v7 - 3));
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    KeyHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = v8;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v13 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v13 == -1073741772 )
      goto LABEL_4;
    if ( v13 < 0 )
      goto LABEL_26;
    v15 = v7[1];
    if ( v15 )
    {
      DeviceRegProp = CmOpenDeviceRegKey(
                        *(__int64 *)&PiPnpRtlCtx,
                        *(_QWORD *)(a2 + 8),
                        v15,
                        0,
                        983103,
                        a5,
                        (__int64)&Handle,
                        0LL);
      goto LABEL_14;
    }
    if ( !CmIsStateSeparationEnabled() )
      goto LABEL_20;
    if ( v17 == 4 )
    {
      v17 = 4;
LABEL_20:
      v20 = PnpCtxOpenContextBaseKey(v18, v17, v19, 983103, (__int64)&Handle);
      goto LABEL_21;
    }
    if ( v17 == 6 )
      goto LABEL_36;
    v20 = PnpCtxOpenContextNodeBaseKey(v18, v17, v19, v17, v24, v25, (__int64)&Handle);
LABEL_21:
    DeviceRegProp = v20;
    if ( v20 < 0 )
      goto LABEL_14;
    if ( *v7 == 7 )
    {
      v22 = *(_QWORD *)(a2 + 8);
      v28 = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v22,
                        0LL,
                        9,
                        (__int64)&v29,
                        (__int64)v38,
                        (__int64)&v28,
                        0);
      if ( DeviceRegProp < 0 )
        goto LABEL_14;
      if ( v29 != 1 )
      {
LABEL_36:
        ZwClose(KeyHandle);
        KeyHandle = 0LL;
        goto LABEL_4;
      }
      v39 = 0;
      v21 = (const WCHAR *)v38;
    }
    else
    {
      v21 = *(const WCHAR **)(v7 + 3);
    }
    if ( v21 )
    {
      RtlInitUnicodeString(&DestinationString, v21);
      *(_QWORD *)&v37.Length = 48LL;
      v30 = 0LL;
      v37.RootDirectory = Handle;
      *(_QWORD *)&v37.Attributes = 576LL;
      v37.ObjectName = &DestinationString;
      *(_OWORD *)&v37.SecurityDescriptor = 0LL;
      v23 = ZwOpenKey(&v30, 0xF003Fu, &v37);
      DeviceRegProp = v23;
      if ( v23 >= 0 )
      {
        ZwClose(Handle);
        Handle = v30;
      }
    }
LABEL_14:
    if ( DeviceRegProp == -1073741772 )
      goto LABEL_36;
    if ( DeviceRegProp < 0 )
      break;
    v25 = v32;
    v24 = (int)Handle;
    v13 = v34(v33, a2, v7 - 3, KeyHandle);
    if ( v13 == -1073741248 )
      goto LABEL_6;
    if ( v13 < 0 )
    {
LABEL_26:
      v11 = v13;
      goto LABEL_6;
    }
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
    ZwClose(Handle);
    Handle = 0LL;
LABEL_4:
    ++v12;
    v7 += 8;
    if ( v12 >= 7 )
      goto LABEL_6;
    v8 = v35;
  }
  v11 = DeviceRegProp;
LABEL_6:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return v11;
}
