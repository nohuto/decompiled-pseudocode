/*
 * XREFs of ??$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WPEBD@Z @ 0x1800ACED4
 * Callers:
 *     _lambda_4da519507bbb1c7cbbe275d8da092dac_::operator() @ 0x1800AC00C (_lambda_4da519507bbb1c7cbbe275d8da092dac_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800011F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x180022DCC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RegisterBackgroundTaskWithWnfTrigger<wchar_t const *>(
        const WCHAR **a1,
        const unsigned __int16 *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r10
  const WCHAR *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-58h] BYREF
  const WCHAR *v13; // [rsp+50h] [rbp-38h]
  int v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+5Ch] [rbp-2Ch]
  const unsigned __int16 *v16; // [rsp+60h] [rbp-28h]
  int v17; // [rsp+68h] [rbp-20h]
  int v18; // [rsp+6Ch] [rbp-1Ch]

  v4 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v5 = (__int64)v4;
  if ( *(_DWORD *)v4 > 5u )
  {
    LODWORD(v4) = 0;
    if ( (*(_QWORD *)(v5 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v5 + 24) & 0x200000000000LL) == *(_QWORD *)(v5 + 24) )
    {
      v6 = *a1;
      v7 = -1LL;
      if ( a2 )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( *((_BYTE *)a2 + v8) );
        v9 = v8 + 1;
      }
      else
      {
        a2 = &word_1800FF6F0;
        v9 = 1;
      }
      v16 = a2;
      v17 = v9;
      v18 = 0;
      if ( v6 )
      {
        do
          ++v7;
        while ( v6[v7] );
        v10 = 2 * v7 + 2;
      }
      else
      {
        v6 = &Src;
        v10 = 2;
      }
      v14 = v10;
      v13 = v6;
      v15 = 0;
      LODWORD(v4) = tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_1801743F8, 0LL, 0LL, 4u, &v12);
    }
  }
  return (int)v4;
}
