/*
 * XREFs of TR_EnableForwardProgress_Internal @ 0x1C003F804
 * Callers:
 *     Endpoint_UcxEvtEndpointEnableForwardProgress @ 0x1C003A9E0 (Endpoint_UcxEvtEndpointEnableForwardProgress.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_EnableForwardProgress_Internal(_QWORD *a1, ULONG a2)
{
  int v4; // edi
  struct _MDL *Mdl; // rsi
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  struct _MDL *v9; // rcx
  _DWORD v11[4]; // [rsp+40h] [rbp-38h] BYREF
  __int64 (__fastcall *v12)(); // [rsp+50h] [rbp-28h]
  __int128 v13; // [rsp+58h] [rbp-20h]

  v4 = (*(__int64 (**)(void))(a1[4] + 48LL))();
  if ( v4 >= 0 )
  {
    Mdl = IoAllocateMdl(0LL, a2, 0, 0, 0LL);
    if ( Mdl )
    {
      v11[3] = 0;
      v8 = a1[9];
      v12 = TR_WdfEvtIoExamineIrpForForwardProgress;
      v13 = 0LL;
      v11[0] = 40;
      v11[1] = 1;
      v11[2] = 2;
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01023 + 3120))(
             WdfDriverGlobals,
             v8,
             v11);
      if ( v4 >= 0 )
      {
        v9 = (struct _MDL *)a1[15];
        if ( v9 )
          IoFreeMdl(v9);
        a1[15] = Mdl;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ddd(
            *(_QWORD *)(a1[5] + 72LL),
            4u,
            0xEu,
            0x15u,
            (__int64)&WPP_202329088b1a3bd773cf1c67d995fd13_Traceguids,
            *(unsigned __int8 *)(a1[6] + 135LL),
            *(_DWORD *)(a1[7] + 144LL),
            a2);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ddd(
            *(_QWORD *)(a1[5] + 72LL),
            2u,
            0xEu,
            0x14u,
            (__int64)&WPP_202329088b1a3bd773cf1c67d995fd13_Traceguids,
            *(unsigned __int8 *)(a1[6] + 135LL),
            *(_DWORD *)(a1[7] + 144LL),
            v4);
        IoFreeMdl(Mdl);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = a1[7];
        v7 = *(_DWORD *)(v6 + 144);
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(a1[5] + 72LL),
          v6,
          14,
          19,
          (__int64)&WPP_202329088b1a3bd773cf1c67d995fd13_Traceguids,
          *(_BYTE *)(a1[6] + 135LL),
          v7);
      }
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
