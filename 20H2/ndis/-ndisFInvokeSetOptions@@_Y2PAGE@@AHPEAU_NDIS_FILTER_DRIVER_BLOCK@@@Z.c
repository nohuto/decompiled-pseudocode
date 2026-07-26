/*
 * XREFs of ?ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x1C010B7A0
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C002F320 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisFInvokeSetOptions(struct _NDIS_FILTER_DRIVER_BLOCK *a1)
{
  int (__fastcall *SetOptionsHandler)(void *, void *); // rax
  unsigned int v2; // edi
  int v4; // eax

  SetOptionsHandler = a1->DefaultFilterCharacteristics.SetOptionsHandler;
  v2 = 0;
  if ( SetOptionsHandler )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x5Au,
        (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
        a1);
      SetOptionsHandler = a1->DefaultFilterCharacteristics.SetOptionsHandler;
    }
    v4 = SetOptionsHandler(a1, a1->FilterDriverContext);
    v2 = v4;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x5Bu,
        (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
        (char)a1,
        v4);
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x5Cu,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      a1);
  }
  return v2;
}
