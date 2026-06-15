/*
 * XREFs of ?PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x1800EF4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x1800EF37C (-ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z.c)
 */

void __fastcall CPdcActivationClient::PdcTimerActivatorCallback(
        __int64 a1,
        int a2,
        CPdcActivationClient *a3,
        struct CVADServer *a4)
{
  if ( a2 == 100 )
    CPdcActivationClient::ActivatorCallback(a3, a4);
}
