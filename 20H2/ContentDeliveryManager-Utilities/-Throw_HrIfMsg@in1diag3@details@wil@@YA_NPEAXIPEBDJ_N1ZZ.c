/*
 * XREFs of ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18004A000
 * Callers:
 *     ?GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x18004C0A4 (-GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV-$basic_.c)
 *     ??R_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@QEBAXXZ @ 0x18004C3CC (--R_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@QEBAXXZ.c)
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x180092ECC (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 *     ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x18009C4C0 (-InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 *     ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x18009CC00 (-GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$unordered_set@V-$basic_s.c)
 *     ?EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x18009CF3C (-EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?_Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBD0J1PEAD@Z @ 0x180042564 (-_Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBD0J1PEAD@Z.c)
 */

bool wil::details::in1diag3::Throw_HrIfMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        char a5,
        __int64 a6,
        const char *a7,
        ...)
{
  void *v8; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  if ( a5 )
  {
    LODWORD(v8) = (_DWORD)a4;
    wil::details::in1diag3::_Throw_HrMsg(this, a2, a3, retaddr, v8, a6, (char *)&a7);
    JUMPOUT(0x18004A03CLL);
  }
  return 0;
}
