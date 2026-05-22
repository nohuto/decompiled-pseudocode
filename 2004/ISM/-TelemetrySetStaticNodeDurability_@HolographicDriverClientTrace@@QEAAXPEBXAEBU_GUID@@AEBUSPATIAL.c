/*
 * XREFs of ?TelemetrySetStaticNodeDurability_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x180165F5C
 * Callers:
 *     ??$TelemetrySetStaticNodeDurability@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_STATIC_NODE_DURABILITY@@@HolographicDriverClientTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x18014F69C (--$TelemetrySetStaticNodeDurability@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@A.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350C8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167B74 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::TelemetrySetStaticNodeDurability_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v8; // rax
  __int64 v9; // r10
  int v11; // [rsp+38h] [rbp-51h] BYREF
  __int64 v12; // [rsp+40h] [rbp-49h] BYREF
  __int64 v13; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+58h] [rbp-31h] BYREF
  __int64 *v15; // [rsp+78h] [rbp-11h]
  __int64 v16; // [rsp+80h] [rbp-9h]
  __int64 v17; // [rsp+88h] [rbp-1h]
  __int64 v18; // [rsp+90h] [rbp+7h]
  __int64 v19; // [rsp+98h] [rbp+Fh]
  __int64 v20; // [rsp+A0h] [rbp+17h]
  int *v21; // [rsp+A8h] [rbp+1Fh]
  __int64 v22; // [rsp+B0h] [rbp+27h]
  __int64 *v23; // [rsp+B8h] [rbp+2Fh]
  __int64 v24; // [rsp+C0h] [rbp+37h]

  v8 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         a1,
         _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v8 + 8) > 4u )
  {
    LOBYTE(v8) = tlgKeywordOn(*(_QWORD *)(v8 + 8), 0x200000000002LL);
    if ( (_BYTE)v8 )
    {
      v11 = a5;
      v12 = 0x2000000LL;
      v23 = &v12;
      v13 = a2;
      v21 = &v11;
      v24 = 8LL;
      v15 = &v13;
      v22 = 4LL;
      v19 = a4;
      v20 = 16LL;
      v17 = a3;
      v18 = 16LL;
      v16 = 8LL;
      LOBYTE(v8) = tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_1801CF194, 0LL, 0LL, 7u, &v14);
    }
  }
  return v8;
}
