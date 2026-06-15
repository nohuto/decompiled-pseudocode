/*
 * XREFs of ?LogOnHmdRemoved@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@0@Z @ 0x18010CBA0
 * Callers:
 *     ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x18010D230 (-OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@G.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180109524 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogOnHmdRemoved(
        CSpatialAudioResourceManagerTraceLogger *this,
        const struct _GUID *a2,
        const struct _GUID *a3)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-58h] BYREF
  const struct _GUID *v4; // [rsp+50h] [rbp-38h]
  int v5; // [rsp+58h] [rbp-30h]
  int v6; // [rsp+5Ch] [rbp-2Ch]
  const struct _GUID *v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+6Ch] [rbp-1Ch]

  if ( (unsigned int)dword_18019C350 > 4 )
  {
    v7 = a3;
    v9 = 0;
    v8 = 16;
    v4 = a2;
    v6 = 0;
    v5 = 16;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_18019C350,
      (unsigned __int8 *)dword_18016973E,
      0LL,
      0LL,
      4u,
      &v3);
  }
}
