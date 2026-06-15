/*
 * XREFs of ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180033E3C
 * Callers:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x1800335C8 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x180033E30 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Log_HrMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        const char *a6,
        ...)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v6 = (unsigned int)a4;
  wil::details::ReportFailure_HrMsg(
    (__int64)this,
    (unsigned int)a2,
    a3,
    (__int64)a4,
    v8,
    retaddr,
    v9,
    (unsigned int)a4,
    a5,
    (va_list)&a6);
  return v6;
}
