/*
 * XREFs of ?ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C00AF9D0
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0069E40 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C000B3B0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001A7EC (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisReferenceRefNoCheck@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C003FD44 (-ndisReferenceRefNoCheck@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 */

void __fastcall ndisFDirectOidRequestCompleteInternal(_QWORD *Parameter)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  int v3; // ebx
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  int v7; // [rsp+38h] [rbp-40h]
  __int64 v8; // [rsp+40h] [rbp-38h] BYREF
  __int64 v9; // [rsp+48h] [rbp-30h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+58h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+68h] [rbp-10h]
  int v14; // [rsp+6Ch] [rbp-Ch]

  v1 = Parameter[3];
  v2 = Parameter[1];
  v3 = *(_DWORD *)(v1 + 80);
  v9 = 0LL;
  v11 = 0LL;
  v14 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v7 = v3;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x17u,
      (struct _GUID *)&WPP_0e2ec831e88c31193e413b6f3daa2a3f_Traceguids,
      v2,
      v1,
      v7);
  }
  v8 = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  v14 = 0;
  v13 = v3;
  v10 = v2;
  v12 = v1;
  ndisReferenceRefNoCheck((PKSPIN_LOCK)(v2 + 312), 0x14u);
  ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v8, v4, v5, v6);
  ndisDereferenceRef((PKSPIN_LOCK)(v2 + 312), 0x14u);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x18u,
      (struct _GUID *)&WPP_0e2ec831e88c31193e413b6f3daa2a3f_Traceguids,
      v2,
      v1);
}
