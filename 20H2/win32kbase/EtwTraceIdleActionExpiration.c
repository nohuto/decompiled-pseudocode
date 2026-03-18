/*
 * XREFs of EtwTraceIdleActionExpiration @ 0x1C00BE1C0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0070400 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0070D90 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     McTemplateK0qqqqh_EtwWriteTransfer @ 0x1C0129554 (McTemplateK0qqqqh_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceIdleActionExpiration(char a1, char a2)
{
  char v4; // bl
  char LastInputTime; // al
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d

  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_1C0243738 - 1) > 2u
    && (qword_1C0243720 & 0x2000000000008000LL) != 0
    && (qword_1C0243728 & 0x2000000000008000LL) == qword_1C0243728 )
  {
    v4 = gProtocolType == 0;
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      LastInputTime = CInputGlobals::GetLastInputTime(gpInputGlobals);
      McTemplateK0qqqqh_EtwWriteTransfer(v7, v6, v8, v9, a1, a2, LastInputTime, v4);
    }
  }
}
