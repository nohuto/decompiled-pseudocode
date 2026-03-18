/*
 * XREFs of ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01AC61C
 * Callers:
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C0025820 (BroadcastSettingsUpdateToAllContainers.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B61A0 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C004E2E0 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01B0914 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B097C (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ivrIVBroadcast@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01B6D44 (-ivrIVBroadcast@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 *     ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01B6DFC (-ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 */

void __fastcall IVRootDeliver::Settings::SendSettingsUpdateToContainer(
        IVRootDeliver::Settings *this,
        const struct CONTAINER_ID *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  _DWORD *v7; // rcx
  struct _ETHREAD *CurrentThread; // r8
  int v9; // eax
  int v10; // edx
  struct CONTAINER_ID *v11; // [rsp+28h] [rbp-60h]
  int (*v12)(struct _IVSRContext *); // [rsp+30h] [rbp-58h]
  void *v13; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-40h]
  __int64 v15; // [rsp+50h] [rbp-38h]

  CIVSerializer::CIVSerializer((CIVSerializer *)&v13, 0x28uLL);
  v6 = v15;
  if ( v15 )
  {
    v7 = v13;
    *(_DWORD *)v13 = v14 - 16;
    v7[1] = 1;
    *((_QWORD *)v7 + 1) = 8LL;
    *(_QWORD *)(v6 + 20) = gTouchPadParameters;
    *(_DWORD *)(v6 + 28) = DWORD2(gTouchPadParameters);
    *(_DWORD *)(v6 + 32) = qword_1C024AFC0;
    *(_DWORD *)(v6 + 36) = WORD6(gTouchPadParameters) & 0x7FF | ((*(_BYTE *)(&qword_1C024AFC0 + 1) & 0x7F) << 11);
    *(_DWORD *)v6 = *((_DWORD *)gpsi + 497);
    *(_DWORD *)(v6 + 4) = CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity(
                            (CDeviceAcceleration *)((char *)qword_1C0241098 + 104),
                            v3,
                            v4,
                            v5);
    *(_DWORD *)(v6 + 8) = *((_DWORD *)gpsi + 1247);
    *(_DWORD *)(v6 + 12) = dword_1C02472E0;
    *(_DWORD *)(v6 + 16) = dword_1C02472B0;
    CurrentThread = KeGetCurrentThread();
    if ( *(_WORD *)this || *((_WORD *)this + 1) )
      v9 = ivrIVSend(v13, v14, CurrentThread, CurrentThread, 2u, this, v12);
    else
      v9 = ivrIVBroadcast(v13, v14, CurrentThread, CurrentThread, 2u, this, v12);
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = v9;
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v10,
        12,
        17,
        (__int64)&WPP_e18a3e3623fd345076d33ab3e1bf5af6_Traceguids,
        v11);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v3,
      12,
      16,
      (__int64)&WPP_e18a3e3623fd345076d33ab3e1bf5af6_Traceguids);
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v13);
}
