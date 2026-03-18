/*
 * XREFs of ?SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C03A83F8
 * Callers:
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C039D314 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?DdiSetTargetContentType@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETCONTENTTYPE@@@Z @ 0x1C02CCB64 (-DdiSetTargetContentType@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETCONTENTTYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetContentType(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  DXGADAPTER **v5; // rbx
  __int64 v6; // r8
  D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  _DXGKARG_SETTARGETCONTENTTYPE v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3 )
  {
    WdLogSingleEntry0(1LL);
    v3 = *(_QWORD *)(v2 + 40);
  }
  v4 = *(_QWORD *)(v3 + 88);
  v5 = *(DXGADAPTER ***)(v4 + 8);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    v5 = *(DXGADAPTER ***)(v4 + 8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v5[2]) )
    WdLogSingleEntry0(1LL);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5[2] + 27) + 64LL) + 40LL) + 28LL) < 0x700Au )
    WdLogSingleEntry0(1LL);
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v5, *(_DWORD *)(*((_QWORD *)this + 11) + 24LL)) )
    return 0LL;
  v7 = *((_DWORD *)this + 41);
  v11.TargetId = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  v11.ContentType = v7;
  v8 = ADAPTER_DISPLAY::DdiSetTargetContentType((ADAPTER_DISPLAY *)v5, &v11, v6);
  v9 = v8;
  if ( v8 == -1073741637 )
  {
    WdLogSingleEntry2(3LL, this, -1073741637LL);
    return 3221225659LL;
  }
  if ( v8 >= 0 )
    return 0LL;
  WdLogSingleEntry2(2LL, this, v8);
  return v9;
}
