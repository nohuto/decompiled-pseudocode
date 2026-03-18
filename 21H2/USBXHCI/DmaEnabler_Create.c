/*
 * XREFs of DmaEnabler_Create @ 0x1C006E4E0
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E9D0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 */

__int64 __fastcall DmaEnabler_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rcx
  int v7; // ebx
  int v8; // eax
  int v9; // edx
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  unsigned int v12; // r15d
  int v13; // edx
  __int64 v14; // rbx
  __int128 v16; // [rsp+30h] [rbp-59h] BYREF
  __int128 v17; // [rsp+40h] [rbp-49h]
  __int128 v18; // [rsp+50h] [rbp-39h]
  void *v19; // [rsp+60h] [rbp-29h]
  _QWORD v20[10]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v21; // [rsp+F8h] [rbp+6Fh] BYREF

  v21 = 0LL;
  v17 = 0LL;
  v5 = *(_QWORD *)(a2 + 88);
  v16 = 0LL;
  LODWORD(v16) = 56;
  v18 = 0LL;
  *((_QWORD *)&v17 + 1) = 0x100000001LL;
  v19 = off_1C0061018;
  v7 = XilRegister_ReadUlong(v5, (unsigned int *)(*(_QWORD *)(v5 + 24) + 16LL)) & 1;
  memset(v20, 0, sizeof(v20));
  LODWORD(v20[0]) = 80;
  HIDWORD(v20[0]) = v7 + 5;
  LODWORD(v20[9]) = 1;
  HIDWORD(v20[8]) = 3;
  v20[1] = 16776704LL;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int128 *, __int64 *))(WdfFunctions_01023
                                                                                                + 752))(
         WdfDriverGlobals,
         a1,
         v20,
         &v16,
         &v21);
  v10 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), v9, 18, 10, (__int64)&WPP_04b707390cf73fa06bfe0db05fea1528_Traceguids, v8);
    }
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 3072))(
            WdfDriverGlobals,
            v21,
            0LL);
    v12 = v11;
    if ( v11 > 0xFFFE00 )
      v12 = 16776704;
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v21,
            off_1C0061018);
    *(_QWORD *)v14 = v21;
    *(_QWORD *)(v14 + 8) = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_i(
        *(_QWORD *)(a2 + 72),
        v13,
        18,
        11,
        (__int64)&WPP_04b707390cf73fa06bfe0db05fea1528_Traceguids,
        v21);
    }
    *(_QWORD *)(v14 + 24) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 3080))(
                              WdfDriverGlobals,
                              v21,
                              0LL);
    *(_DWORD *)(v14 + 16) = v12;
    *(_DWORD *)(v14 + 20) = (v12 >> 12) + ((v12 & 0xFFF) != 0) + 1;
    *a3 = v14;
  }
  return v10;
}
