/*
 * XREFs of GetMonitorPhysicalDimensions @ 0x1C01520F0
 * Callers:
 *     RIMGetMonitorPhysicalSize @ 0x1C016D120 (RIMGetMonitorPhysicalSize.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C0096760 (UpdateMonitorDevices.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 __fastcall GetMonitorPhysicalDimensions(__int64 a1, unsigned int *a2, unsigned int *a3, _DWORD *a4, _QWORD *a5)
{
  unsigned int v6; // ebx
  __int64 v7; // r15
  wchar_t *v8; // rdi
  int v9; // r14d
  unsigned int v10; // ebp
  int v11; // r8d
  __int64 v13; // [rsp+30h] [rbp-418h]
  _QWORD v17[118]; // [rsp+50h] [rbp-3F8h] BYREF

  UpdateMonitorDevices(a1, (__int64)a2, a3);
  v6 = 0;
  if ( !a1 )
    return (unsigned int)-1073741823;
  v7 = *(_QWORD *)(a1 + 2576);
  if ( !*(_DWORD *)(v7 + 216) )
    return (unsigned int)-1073741810;
  v8 = gpGraphicsDeviceList;
  v9 = 0;
  if ( !gpGraphicsDeviceList )
    return (unsigned int)-1073741810;
  while ( v8 != (wchar_t *)v7 )
  {
LABEL_13:
    v8 = (wchar_t *)*((_QWORD *)v8 + 16);
    if ( !v8 )
      return (unsigned int)-1073741810;
  }
  v10 = 0;
  if ( !*((_DWORD *)v8 + 54) )
  {
LABEL_12:
    if ( v9 )
      return (unsigned int)-1073741823;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v13 = *((_QWORD *)v8 + 28);
    if ( (*(_BYTE *)(v13 + 20LL * v10) & 3) == 3 )
    {
      memset(&v17[1], 0, 0x3A4uLL);
      v17[0] = 0x3ACFFFFFFF9LL;
      v17[1] = *(_QWORD *)(v13 + 20LL * v10 + 8);
      LODWORD(v17[2]) = *(_DWORD *)(v13 + 20LL * v10 + 4);
      if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD *, _QWORD, _QWORD))qword_1C0252948)(
                  v17[1],
                  LODWORD(v17[2]),
                  v17,
                  0LL,
                  0LL) >= 0 )
      {
        v9 = 1;
        if ( HIDWORD(v17[115]) )
        {
          v11 = v17[116];
          if ( LODWORD(v17[116]) )
            break;
        }
      }
    }
    if ( ++v10 >= *((_DWORD *)v8 + 54) )
      goto LABEL_12;
  }
  *a2 = (HIDWORD(v17[115]) + 9) / 0xAu;
  *a3 = (v11 + 9) / 0xAu;
  if ( a4 )
    *a4 = *(_DWORD *)(*((_QWORD *)v8 + 28) + 20LL * v10 + 4);
  if ( a5 )
    *a5 = *(_QWORD *)(*((_QWORD *)v8 + 28) + 20LL * v10 + 8);
  return v6;
}
