/*
 * XREFs of DrvPVPGetFirstActiveMonitor @ 0x1C01517D8
 * Callers:
 *     GetCertificateLengthAndMonitorPDO @ 0x1C014A03C (GetCertificateLengthAndMonitorPDO.c)
 * Callees:
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C002AF04 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     UpdateMonitorDevices @ 0x1C0096760 (UpdateMonitorDevices.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvPVPGetFirstActiveMonitor(struct _UNICODE_STRING *a1, __int64 a2, PVOID *a3)
{
  __int64 result; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r10
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  UpdateMonitorDevices((__int64)a1, a2, a3);
  result = DrvGetDeviceFromNameAndValidateDevice(a1, UserMode, (struct tagGRAPHICS_DEVICE **)&Object);
  if ( (int)result >= 0 )
  {
    v6 = Object;
    v7 = 0LL;
    if ( *((_DWORD *)Object + 54) )
    {
      while ( 1 )
      {
        v8 = v6[28];
        if ( (*(_DWORD *)(v8 + 20 * v7) & 1) != 0 )
        {
          Object = 0LL;
          if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, PVOID *))qword_1C0252A08)(
                      v8 + 8 + 20 * v7,
                      *(unsigned int *)(v8 + 20 * v7 + 4),
                      &Object,
                      a3) >= 0 )
            break;
        }
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *((_DWORD *)v6 + 54) )
          return 3223193061LL;
      }
      ObfReferenceObject(*a3);
      ObfDereferenceObject(Object);
      return 0LL;
    }
    else
    {
      return 3223193061LL;
    }
  }
  return result;
}
