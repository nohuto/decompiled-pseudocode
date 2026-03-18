/*
 * XREFs of ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01BFAB8
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0036760 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00515D0 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C0051910 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?_ivPacketDispatch@CBaseInput@@CAJPEAU_IVSRContext@@@Z @ 0x1C01BA200 (-_ivPacketDispatch@CBaseInput@@CAJPEAU_IVSRContext@@@Z.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01BBF00 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     ?ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BCAF4 (-ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall CBaseInput::ivChildLoop(CBaseInput *this, __int64 a2, struct RawInputManagerObject *a3)
{
  int v4; // ebp
  CBaseInput *v5; // rsi
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // eax
  int v9; // r9d
  __int64 v11; // [rsp+28h] [rbp-70h]
  __int128 v12; // [rsp+30h] [rbp-68h]
  __int128 v13; // [rsp+50h] [rbp-48h] BYREF
  __int64 v14; // [rsp+60h] [rbp-38h]

  v4 = a2;
  v5 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (CBaseInput *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        12,
        10,
        (__int64)&WPP_887bca56a4463e19a9d2c8c54736f7bc_Traceguids);
    }
  }
  v6 = 0;
  if ( !isChildPartition((__int64)this, a2) )
    goto LABEL_14;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v7,
      12,
      11,
      (__int64)&WPP_887bca56a4463e19a9d2c8c54736f7bc_Traceguids);
  }
  *(_QWORD *)&v12 = v5;
  *((_QWORD *)&v12 + 1) = a3;
  v8 = ObReferenceObjectByPointer(a3, 3u, ExRawInputManagerObjectType, 0);
  v6 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v6;
    v9 = 12;
    goto LABEL_13;
  }
  v13 = v12;
  v14 = 10LL;
  v8 = ivrIVRecv(0x10u, gpIVThread, (__int64)KeGetCurrentThread(), &v13, v4, (__int64)CBaseInput::_ivHeaderCallback);
  v6 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v6;
    v9 = 13;
LABEL_13:
    LODWORD(v11) = v8;
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v7,
      12,
      v9,
      (__int64)&WPP_887bca56a4463e19a9d2c8c54736f7bc_Traceguids,
      v11);
  }
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      12,
      14,
      (__int64)&WPP_887bca56a4463e19a9d2c8c54736f7bc_Traceguids);
  }
  return v6;
}
