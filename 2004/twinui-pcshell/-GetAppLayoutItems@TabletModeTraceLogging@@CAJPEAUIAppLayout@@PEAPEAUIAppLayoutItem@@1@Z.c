/*
 * XREFs of ?GetAppLayoutItems@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAPEAUIAppLayoutItem@@1@Z @ 0x1803F781C
 * Callers:
 *     ?GetAppLayoutData@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAUAppLayoutData@1@@Z @ 0x1803F74E0 (-GetAppLayoutData@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAUAppLayoutData@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModeTraceLogging::GetAppLayoutItems(
        struct IAppLayout *a1,
        struct IAppLayoutItem **a2,
        struct IAppLayoutItem **a3)
{
  int v6; // esi
  int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (*(__int64 (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a1 + 80LL))(a1, 5LL);
  if ( (unsigned int)(v6 - 1) > 1 )
  {
    v7 = -2147024809;
    v8 = 481LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = (*(__int64 (__fastcall **)(struct IAppLayout *, _QWORD, __int64, GUID *, struct IAppLayoutItem **))(*(_QWORD *)a1 + 104LL))(
         a1,
         0LL,
         5LL,
         &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
         a2);
  if ( v7 < 0 )
  {
    v8 = 482LL;
    goto LABEL_3;
  }
  if ( v6 == 2 )
  {
    v7 = (*(__int64 (__fastcall **)(struct IAppLayout *, __int64, __int64, GUID *, struct IAppLayoutItem **))(*(_QWORD *)a1 + 104LL))(
           a1,
           1LL,
           5LL,
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           a3);
    if ( v7 < 0 )
    {
      v8 = 485LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
