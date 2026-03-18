/*
 * XREFs of ?_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z @ 0x1C02F1060
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016CC0C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _wcsnicmp_0 @ 0x1C00243C2 (_wcsnicmp_0.c)
 *     ??$invoke@P6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@Z @ 0x1C002616C (--$invoke@P6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_KEY_BASIC_INFORMAT.c)
 *     DXGKCALLONEXIT__lambda_30a6a07a63a58fd3d0bab754eb0ae139___ @ 0x1C005C1AC (DXGKCALLONEXIT__lambda_30a6a07a63a58fd3d0bab754eb0ae139___.c)
 */

__int64 __fastcall DXGMONITOR::_ReadDisplayHdrSupportFromPnpRegistry(
        DXGMONITOR *this,
        bool *a2,
        NTSTATUS (__stdcall *a3)(HANDLE Handle),
        bool *a4)
{
  int v6; // eax
  __int64 v7; // rbx
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  const wchar_t *v22; // r13
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // r15d
  __int64 v26; // r14
  NTSTATUS (__stdcall *v27)(HANDLE); // rbx
  int v28; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-59h] BYREF
  const wchar_t *v31; // [rsp+38h] [rbp-51h] BYREF
  void *DeviceRegKey; // [rsp+40h] [rbp-49h] BYREF
  NTSTATUS (__stdcall *v33)(HANDLE); // [rsp+48h] [rbp-41h] BYREF
  bool *v34; // [rsp+50h] [rbp-39h] BYREF
  __int64 v35; // [rsp+58h] [rbp-31h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  void **v37; // [rsp+70h] [rbp-19h] BYREF
  char v38; // [rsp+78h] [rbp-11h]
  __int128 KeyValueInformation; // [rsp+80h] [rbp-9h] BYREF

  *((_DWORD *)this + 191) = 0;
  DeviceRegKey = 0LL;
  *a2 = 0;
  *(_BYTE *)a3 = 0;
  *a4 = 0;
  v6 = *((_DWORD *)this + 10);
  v34 = a4;
  v33 = a3;
  if ( (v6 & 0x10) == 0 )
  {
    LODWORD(v7) = -1073741661;
    goto LABEL_48;
  }
  v8 = IoOpenDeviceRegistryKey(*((PDEVICE_OBJECT *)this + 7), 2u, 0x20019u, &DeviceRegKey);
  v7 = v8;
  if ( v8 < 0 )
  {
    v13 = WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(v13 + 32) = v7;
    goto LABEL_48;
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"DisplayHdrLevel");
  ResultLength = 0;
  v31 = 0LL;
  KeyValueInformation = 0LL;
  DXGKCALLONEXIT__lambda_30a6a07a63a58fd3d0bab754eb0ae139_((__int64)&v37, (__int64)&v31);
  LODWORD(v7) = ZwQueryValueKey(
                  DeviceRegKey,
                  &DestinationString,
                  KeyValuePartialInformation,
                  &KeyValueInformation,
                  0x10u,
                  &ResultLength);
  v35 = (unsigned int)v7;
  if ( (_DWORD)v7 == -1073741772 )
  {
    LODWORD(v7) = -1073741772;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = this;
    goto LABEL_45;
  }
  if ( (_DWORD)v7 == -1073741789 || (_DWORD)v7 == -2147483643 )
  {
    v31 = (const wchar_t *)operator new[](ResultLength, 0x4D677844u, PagedPool);
    if ( !v31 )
    {
      v20 = WdLogNewEntry5_WdError(v19, v18);
      WdLogEvent5_WdError(v20);
      LODWORD(v7) = -1073741801;
      goto LABEL_45;
    }
    LODWORD(v7) = ZwQueryValueKey(
                    DeviceRegKey,
                    &DestinationString,
                    KeyValuePartialInformation,
                    &KeyValueInformation,
                    0x10u,
                    &ResultLength);
    v35 = (unsigned int)v7;
  }
  if ( (int)v7 < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v21 + 32) = (int)v7;
    goto LABEL_44;
  }
  v22 = v31;
  if ( *((_DWORD *)v31 + 1) != 7 )
  {
    v23 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v23 + 24) = this;
    *(_QWORD *)(v23 + 32) = *((unsigned int *)v31 + 1);
    WdLogEvent5_WdError(v23);
    LODWORD(v7) = -1073741788;
    goto LABEL_45;
  }
  v24 = *((_DWORD *)v31 + 2) >> 1;
  v25 = v24 - 37;
  if ( (unsigned int)(v24 - 37) <= 0x4B )
  {
    v24 = (unsigned int)(v24 - 1);
    LODWORD(v14) = (3134165325u * (unsigned __int64)(unsigned int)v24) >> 32;
    if ( (_DWORD)v24 == 37 * ((unsigned int)v24 / 0x25) )
    {
      v26 = 0LL;
      if ( !v25 )
        goto LABEL_45;
      v27 = v33;
      while ( 1 )
      {
        if ( wcsnicmp_0(&v22[v26 + 6], L"20C5A9AF-CD1A-42B1-AA71-4C96A273DEF1", 0x25uLL) )
        {
          if ( wcsnicmp_0(&v22[v26 + 6], L"8B48F401-A136-402F-B24C-A4ABCD2685CA", 0x25uLL) )
          {
            if ( wcsnicmp_0(&v22[v26 + 6], L"D4C5928E-9488-46AF-8DA8-4F996EE4177F", 0x25uLL) )
            {
              if ( wcsnicmp_0(&v22[v26 + 6], L"78137DFC-3400-412E-B0AF-08120754623A", 0x25uLL) )
              {
                if ( wcsnicmp_0(&v22[v26 + 6], L"1A6CBAFB-15FF-4CF0-AD75-12360E9B9F4A", 0x25uLL) )
                {
                  if ( wcsnicmp_0(&v22[v26 + 6], L"86413F8C-0CDB-4D49-81F7-06BB64A8FED1", 0x25uLL) )
                  {
                    if ( wcsnicmp_0(&v22[v26 + 6], L"F838B10E-FD7B-41E0-B6DC-3DE029FA0F87", 0x25uLL) )
                    {
                      if ( wcsnicmp_0(&v22[v26 + 6], L"0C3F29D1-6BD6-456E-AEA2-19D5AC357632", 0x25uLL) )
                      {
                        if ( !wcsnicmp_0(&v22[v26 + 6], L"476D0CA8-A5F2-41E9-977D-E6FE84F985B1", 0x25uLL) )
                          *v34 = 1;
                      }
                      else
                      {
                        *(_BYTE *)v27 = 1;
                      }
                    }
                    else
                    {
                      *a2 = 1;
                    }
                    goto LABEL_41;
                  }
                  v28 = 6;
                }
                else
                {
                  v28 = 5;
                }
              }
              else
              {
                v28 = 4;
              }
            }
            else
            {
              v28 = 3;
            }
          }
          else
          {
            v28 = 2;
          }
        }
        else
        {
          v28 = 1;
        }
        if ( *((_DWORD *)this + 191) > v28 )
          v28 = *((_DWORD *)this + 191);
        *((_DWORD *)this + 191) = v28;
LABEL_41:
        v26 = (unsigned int)(v26 + 74);
        if ( (unsigned int)v26 >= v25 )
        {
          LODWORD(v7) = v35;
          goto LABEL_45;
        }
      }
    }
  }
  v21 = WdLogNewEntry5_WdError(v24, v14);
  LODWORD(v7) = -1073741823;
  *(_QWORD *)(v21 + 32) = -1073741823LL;
LABEL_44:
  *(_QWORD *)(v21 + 24) = this;
  WdLogEvent5_WdError(v21);
LABEL_45:
  if ( v38 && *v37 )
    operator delete[](*v37);
LABEL_48:
  if ( DeviceRegKey )
  {
    v34 = (bool *)DeviceRegKey;
    v33 = ZwClose;
    wistd::invoke<void (*)(_KEY_BASIC_INFORMATION *),_KEY_BASIC_INFORMATION * &>(
      (__int64 (__fastcall **)(_QWORD))&v33,
      &v34);
  }
  return (unsigned int)v7;
}
