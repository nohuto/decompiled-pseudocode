/*
 * XREFs of ?LogSetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_J@Z @ 0x140067EE4
 * Callers:
 *     ?SetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJI_J@Z @ 0x14006B170 (-SetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJI_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x140051F78 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogSetGrantedCount(
        CSpatialCrossProcessEndpointTraceLogger *this,
        int a2,
        __int64 a3)
{
  int v3; // [rsp+30h] [rbp-19h] BYREF
  __int64 v4; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-9h] BYREF
  char *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  __int64 *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_14008F108 > 5 )
  {
    v4 = a3;
    v10 = &v4;
    v3 = a2;
    v8 = &v3;
    v11 = 8LL;
    v6 = (char *)this + 8;
    v9 = 4LL;
    v7 = 16LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_14008F108,
      (unsigned __int8 *)dword_14007CE8C,
      0LL,
      0LL,
      5u,
      &v5);
  }
}
