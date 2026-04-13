/*
 * XREFs of ??$ContentIdsReceived@AEAI@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXAEAI@Z @ 0x1800A6DD4
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A54F8 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800011F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ @ 0x18002A788 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 */

int __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::ContentIdsReceived<unsigned int &>(
        __int64 a1,
        int *a2)
{
  const struct _tlgProvider_t *v4; // rax
  int v5; // edx
  __int64 v6; // r8
  int v8; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-40h] BYREF
  int *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  v4 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v5 = *a2;
    v6 = *(_QWORD *)(a1 + 48);
    v12 = 0;
    v10 = &v8;
    v8 = v5;
    v11 = 4;
    LODWORD(v4) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v4,
                    (unsigned __int8 *)dword_180178785,
                    (const GUID *)(v6 + 8),
                    0LL,
                    3u,
                    &v9);
  }
  return (int)v4;
}
