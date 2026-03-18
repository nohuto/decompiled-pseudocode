/*
 * XREFs of PiPnpRtlInterfaceFilterCallback @ 0x140781DE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x140781748 (_CmIsDeviceInterfaceEnabled.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall PiPnpRtlInterfaceFilterCallback(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r12d
  void *v8; // rdi
  char v9; // si
  _WORD *v10; // rax
  __int64 (__fastcall *v11)(__int64, const WCHAR *, _QWORD, _QWORD); // rax
  __int64 v13; // rax
  __int64 Pool2; // rax
  _BYTE v15[4]; // [rsp+60h] [rbp-19h] BYREF
  int v16; // [rsp+64h] [rbp-15h] BYREF
  unsigned int v17; // [rsp+68h] [rbp-11h] BYREF
  __int128 v18; // [rsp+70h] [rbp-9h] BYREF

  v5 = a3;
  v8 = 0LL;
  v15[0] = 0;
  v9 = 0;
  v16 = 0;
  v18 = 0LL;
  v17 = 0;
  if ( !*(_QWORD *)a4 )
    goto LABEL_2;
  if ( (int)PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)a2,
              3LL,
              0LL,
              0LL,
              (__int64)&DEVPKEY_DeviceInterface_ClassGuid,
              (__int64)&v16,
              (__int64)&v18,
              16,
              (__int64)&v17,
              0) >= 0
    && v16 == 13
    && v17 >= 0x10 )
  {
    v13 = **(_QWORD **)a4 - v18;
    if ( !v13 )
      v13 = *(_QWORD *)(*(_QWORD *)a4 + 8LL) - *((_QWORD *)&v18 + 1);
    if ( !v13 )
    {
LABEL_2:
      v10 = *(_WORD **)(a4 + 8);
      if ( v10 && *v10 )
      {
        Pool2 = ExAllocatePool2(256LL, 400LL, 1198550608LL);
        v8 = (void *)Pool2;
        if ( !Pool2 )
          return v9;
        if ( (int)PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)a2,
                    3LL,
                    0LL,
                    0LL,
                    (__int64)&DEVPKEY_Device_InstanceId,
                    (__int64)&v16,
                    Pool2,
                    400,
                    (__int64)&v17,
                    0) < 0
          || v16 != 18
          || wcsicmp(*(const wchar_t **)(a4 + 8), (const wchar_t *)v8) )
        {
LABEL_23:
          ExFreePoolWithTag(v8, 0x47706E50u);
          return v9;
        }
      }
      if ( !*(_BYTE *)(a4 + 16) || CmIsDeviceInterfaceEnabled(a1, a2, a3, (__int64)v15) >= 0 && v15[0] )
      {
        v9 = 1;
        v11 = *(__int64 (__fastcall **)(__int64, const WCHAR *, _QWORD, _QWORD))(a4 + 24);
        if ( v11 )
          v9 = v11(a1, a2, v5, *(_QWORD *)(a4 + 32));
      }
      if ( v8 )
        goto LABEL_23;
    }
  }
  return v9;
}
