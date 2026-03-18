/*
 * XREFs of DrvCreatePhysicalMonitorObjects @ 0x1C00C6C80
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00C6BF0 (NtGdiCreateOPMProtectedOutputs.c)
 * Callees:
 *     ?DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z @ 0x1C002AEBC (-DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C002AF04 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     UpdateMonitorDevices @ 0x1C0096760 (UpdateMonitorDevices.c)
 *     ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00C6F28 (-OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C014A0D8 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 */

__int64 __fastcall DrvCreatePhysicalMonitorObjects(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a4,
        unsigned int a5,
        unsigned int *a6,
        _QWORD *Address)
{
  __int64 v7; // rsi
  __int64 v8; // r13
  enum _MODE v9; // ebx
  _QWORD *v11; // rax
  unsigned int v12; // r15d
  unsigned int v13; // r14d
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  PVOID v17; // r8
  __int64 i; // rdx
  size_t v19; // rcx
  signed int DeviceFromNameAndValidateDevice; // ebx
  __int64 v21; // r8
  struct tagGRAPHICS_DEVICE *v22; // r12
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r15
  __int64 v26; // r12
  unsigned __int64 v27; // rax
  _QWORD *v28; // r15
  unsigned int *v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 j; // rdi
  int v34; // eax
  __int64 v35; // rax
  unsigned int v36; // [rsp+30h] [rbp-68h]
  int v37; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v38; // [rsp+38h] [rbp-60h]
  int v39; // [rsp+3Ch] [rbp-5Ch]
  int v40; // [rsp+40h] [rbp-58h]
  struct tagGRAPHICS_DEVICE *v41; // [rsp+48h] [rbp-50h] BYREF
  __int64 v42; // [rsp+50h] [rbp-48h]
  _QWORD *v43; // [rsp+58h] [rbp-40h]
  unsigned int v44; // [rsp+A0h] [rbp+8h] BYREF
  int v45; // [rsp+B0h] [rbp+18h]
  _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v46; // [rsp+B8h] [rbp+20h]

  v46 = a4;
  v45 = a3;
  v7 = a4;
  v8 = (int)a3;
  v9 = (int)a2;
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3);
  v11[3] = a1;
  v11[4] = v8;
  v11[5] = v7;
  v12 = a5;
  v42 = a5;
  v11[6] = a5;
  WdLogEvent5_WdEvent(v11);
  v13 = 0;
  v38 = 0;
  v14 = 0LL;
  UpdateMonitorDevices(v16, v15, v17);
  v41 = 0LL;
  DeviceFromNameAndValidateDevice = DrvGetDeviceFromNameAndValidateDevice(a1, v9, &v41);
  if ( DeviceFromNameAndValidateDevice < 0 )
    goto LABEL_26;
  v44 = 0;
  v22 = v41;
  DeviceFromNameAndValidateDevice = DrvGetNumberOfPhysicalMonitors(v41, &v44);
  if ( DeviceFromNameAndValidateDevice < 0 )
    goto LABEL_26;
  if ( v12 < v44 )
  {
    DeviceFromNameAndValidateDevice = -1071774234;
  }
  else
  {
    v23 = 8LL * v44;
    v19 = 0xFFFFFFFFLL;
    if ( v23 <= 0xFFFFFFFF )
      v19 = (unsigned int)v23;
    DeviceFromNameAndValidateDevice = v23 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v23 > 0xFFFFFFFF )
    {
LABEL_26:
      if ( DeviceFromNameAndValidateDevice >= 0 )
      {
        Win32FreePool((__int64)v14, i, v21);
        v31 = WdLogNewEntry5_WdTrace(v30);
        WdLogEvent5_WdTrace(v31);
        return 0LL;
      }
    }
    else
    {
      v14 = PALLOCMEM2(v19, 0x76646747u, 1);
      v43 = v14;
      if ( v14 )
      {
        i = 0LL;
        v36 = 0;
        v24 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v24 >= *((_DWORD *)v22 + 54) )
          {
            v27 = 8 * v42;
            i = 0xFFFFFFFFLL;
            v19 = 0xFFFFFFFFLL;
            if ( (unsigned __int64)(8 * v42) <= 0xFFFFFFFF )
              v19 = (unsigned int)v27;
            DeviceFromNameAndValidateDevice = v27 > 0xFFFFFFFF ? 0xC0000095 : 0;
            if ( v27 <= 0xFFFFFFFF )
            {
              v28 = Address;
              ProbeForWrite(Address, (unsigned int)v19, 8u);
              v29 = a6;
              ProbeForWrite(a6, 4uLL, 4u);
              if ( v13 > a5 )
              {
                DeviceFromNameAndValidateDevice = -1071774234;
                v40 = -1071774234;
              }
              else
              {
                for ( i = 0LL; ; i = (unsigned int)(i + 1) )
                {
                  v39 = i;
                  if ( (unsigned int)i >= v13 )
                    break;
                  v28[i] = v14[i];
                }
                *v29 = v13;
              }
            }
            goto LABEL_26;
          }
          v25 = 5 * v24;
          v26 = *((_QWORD *)v22 + 28);
          if ( (*(_DWORD *)(v26 + 20 * v24) & 1) != 0 )
          {
            if ( v13 == v44 )
              goto LABEL_41;
            if ( (_DWORD)v8 )
            {
              if ( (_DWORD)v8 != 1 )
              {
LABEL_41:
                DeviceFromNameAndValidateDevice = -1071774233;
                goto LABEL_42;
              }
              if ( qword_1C02572D0 )
              {
                DeviceFromNameAndValidateDevice = qword_1C02572D0();
                i = v36;
              }
              else
              {
                DeviceFromNameAndValidateDevice = -1073741637;
              }
              if ( DeviceFromNameAndValidateDevice < 0 )
                goto LABEL_42;
              DeviceFromNameAndValidateDevice = qword_1C02572D8
                                              ? qword_1C02572D8(
                                                  v26 + 4 * (v25 + 2),
                                                  *(unsigned int *)(v26 + 20 * v24 + 4),
                                                  &v14[(unsigned int)i])
                                              : -1073741637;
              if ( DeviceFromNameAndValidateDevice < 0 )
                goto LABEL_42;
LABEL_15:
              i = ++v36;
              v38 = ++v13;
              goto LABEL_16;
            }
            v37 = 0;
            DeviceFromNameAndValidateDevice = OPMCreateProtectedOutput(
                                                v46,
                                                (struct _LUID *)(v26 + 4 * (v25 + 2)),
                                                *(_DWORD *)(v26 + 20 * v24 + 4),
                                                (void **)&v14[(unsigned int)i],
                                                &v37);
            if ( DeviceFromNameAndValidateDevice < 0 )
              goto LABEL_26;
            if ( !v37 )
              goto LABEL_15;
            i = v36;
          }
LABEL_16:
          v24 = (unsigned int)(v24 + 1);
          v22 = v41;
        }
      }
      DeviceFromNameAndValidateDevice = -1073741801;
    }
  }
LABEL_42:
  if ( v14 )
  {
    if ( v13 )
    {
      for ( j = 0LL; (unsigned int)j < v13; j = (unsigned int)(j + 1) )
      {
        OPMDestroyProtectedOutput((void *)v14[j]);
        if ( (_DWORD)v8 )
        {
          if ( (_DWORD)v8 == 1 )
          {
            if ( qword_1C02572E0 )
              v34 = qword_1C02572E0();
            else
              v34 = -1073741637;
            if ( v34 >= 0 )
            {
              if ( qword_1C02572E8 )
                qword_1C02572E8(v14[j]);
            }
          }
        }
        else
        {
          OPMDestroyProtectedOutput((void *)v14[j]);
        }
      }
    }
    Win32FreePool((__int64)v14, i, v21);
  }
  v35 = WdLogNewEntry5_WdTrace(v19);
  *(_QWORD *)(v35 + 24) = DeviceFromNameAndValidateDevice;
  WdLogEvent5_WdTrace(v35);
  return (unsigned int)DeviceFromNameAndValidateDevice;
}
