/*
 * XREFs of _PnpDispatchDevice @ 0x1406E9750
 * Callers:
 *     <none>
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x140332CA0 (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmOpenDeviceRegKey @ 0x14066D59C (_CmOpenDeviceRegKey.c)
 *     _CmValidateDeviceName @ 0x14066DD50 (_CmValidateDeviceName.c)
 *     _CmGetDeviceMappedProperty @ 0x1406E98EC (_CmGetDeviceMappedProperty.c)
 *     _CmDeleteDevice @ 0x140727FAC (_CmDeleteDevice.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x14072A0DC (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmSetDeviceMappedProperty @ 0x14073E068 (_CmSetDeviceMappedProperty.c)
 *     _CmCreateDevice @ 0x140742D0C (_CmCreateDevice.c)
 *     _CmGetMatchingDeviceList @ 0x14076FA10 (_CmGetMatchingDeviceList.c)
 *     _CmGetDeviceMappedPropertyLocales @ 0x14097CF50 (_CmGetDeviceMappedPropertyLocales.c)
 */

__int64 __fastcall PnpDispatchDevice(__int64 a1, __int64 (__fastcall *a2)(), __int64 a3, int a4, __int64 a5)
{
  const wchar_t *v5; // r10
  __int128 *v6; // r8
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  unsigned int DeviceMappedProperty; // eax
  __int128 v17; // [rsp+50h] [rbp-18h] BYREF

  v5 = (const wchar_t *)a2;
  LODWORD(a2) = 0;
  LODWORD(v6) = 0;
  v17 = 0LL;
  v7 = a4 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 == 1 )
                    DeviceMappedProperty = CmSetDeviceMappedProperty(
                                             a1,
                                             (_DWORD)v5,
                                             *(_QWORD *)(a5 + 16),
                                             *(_DWORD *)(a5 + 24),
                                             *(PLARGE_INTEGER *)(a5 + 32),
                                             *(_DWORD *)(a5 + 40));
                  else
                    DeviceMappedProperty = -1073741811;
                }
                else
                {
                  DeviceMappedProperty = CmGetDeviceMappedProperty(
                                           a1,
                                           (_DWORD)v5,
                                           *(_QWORD *)a5,
                                           *(_QWORD *)(a5 + 8),
                                           *(_QWORD *)(a5 + 16),
                                           *(_QWORD *)(a5 + 24),
                                           *(_QWORD *)(a5 + 32),
                                           *(_DWORD *)(a5 + 40),
                                           *(_QWORD *)(a5 + 48),
                                           *(_DWORD *)(a5 + 56) & 0xFFFF0000);
                }
              }
              else
              {
                DeviceMappedProperty = CmGetDeviceMappedPropertyLocales(
                                         a1,
                                         0,
                                         0,
                                         *(_QWORD *)(a5 + 8),
                                         *(_QWORD *)(a5 + 16),
                                         *(_DWORD *)(a5 + 24),
                                         *(_QWORD *)(a5 + 32));
              }
            }
            else
            {
              DeviceMappedProperty = CmGetDeviceMappedPropertyKeys(
                                       a1,
                                       (_DWORD)v5,
                                       *(_QWORD *)a5,
                                       0,
                                       *(_QWORD *)(a5 + 24),
                                       *(_DWORD *)(a5 + 32),
                                       *(_QWORD *)(a5 + 40));
            }
          }
          else
          {
            if ( *(_QWORD *)a5 )
            {
              *(_QWORD *)&v17 = *(_QWORD *)a5;
              a2 = PnpCmMatchCallbackRoutine;
              v6 = &v17;
              *((_QWORD *)&v17 + 1) = *(_QWORD *)(a5 + 8);
            }
            DeviceMappedProperty = CmGetMatchingDeviceList(
                                     a1,
                                     (_DWORD)a2,
                                     (_DWORD)v6,
                                     *(_QWORD *)(a5 + 16),
                                     *(_DWORD *)(a5 + 24),
                                     *(_QWORD *)(a5 + 32),
                                     *(_DWORD *)(a5 + 40) & 0xFFFF0000);
          }
        }
        else
        {
          DeviceMappedProperty = CmDeleteDevice(a1, v5, *(_DWORD *)a5 & 0xFFFF0000);
        }
      }
      else
      {
        DeviceMappedProperty = CmCreateDevice(
                                 a1,
                                 (_DWORD)v5,
                                 *(_DWORD *)a5,
                                 (int)a5 + 8,
                                 a5 + 16,
                                 *(_DWORD *)(a5 + 20) & 0xFFFF0000);
      }
    }
    else
    {
      DeviceMappedProperty = CmOpenDeviceRegKey(
                               a1,
                               (__int64)v5,
                               16,
                               0,
                               *(_DWORD *)a5,
                               *(_BYTE *)(a5 + 4),
                               *(_QWORD *)(a5 + 8),
                               (_DWORD *)(a5 + 16));
    }
  }
  else
  {
    DeviceMappedProperty = CmValidateDeviceName(a1, v5);
  }
  return PnpMapCmStatusToDispatchStatus(DeviceMappedProperty);
}
