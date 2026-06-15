/*
 * XREFs of ?LogExclusiveModeListenerUpdateSessionState@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@HH@Z @ 0x18010CA6C
 * Callers:
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x18010E160 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180109524 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogExclusiveModeListenerUpdateSessionState(
        CSpatialAudioResourceManagerTraceLogger *this,
        const struct _GUID *a2,
        int a3,
        int a4)
{
  int v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-9h] BYREF
  const struct _GUID *v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  int *v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  int *v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_18019C350 > 5 )
  {
    v4 = a4;
    v11 = &v4;
    v5 = a3;
    v9 = &v5;
    v7 = a2;
    v12 = 4LL;
    v10 = 4LL;
    v8 = 16LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_18019C350,
      (unsigned __int8 *)dword_18016978C,
      0LL,
      0LL,
      5u,
      &v6);
  }
}
