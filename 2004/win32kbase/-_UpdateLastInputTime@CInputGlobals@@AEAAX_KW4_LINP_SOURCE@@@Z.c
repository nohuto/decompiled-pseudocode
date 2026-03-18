/*
 * XREFs of ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0061B1C
 * Callers:
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C00616A0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0061710 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     McTemplateK0qhq_EtwWriteTransfer @ 0x1C012B398 (McTemplateK0qhq_EtwWriteTransfer.c)
 */

char __fastcall CInputGlobals::_UpdateLastInputTime(__int64 a1, __int64 a2, int a3)
{
  int v4; // r9d
  unsigned __int128 v5; // rax

  *(_QWORD *)(a1 + 16) = a2;
  v4 = 1;
  LOBYTE(v5) = a3 == 1 || a3 > 2 && (a3 <= 5 || a3 == 9 || a3 == 11 || a3 > 12 && (a3 <= 14 || a3 > 15 && a3 <= 17));
  if ( (_BYTE)v5 )
    *(_QWORD *)(a1 + 24) = a2;
  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0 )
  {
    LOBYTE(v5) = byte_1C0245748 - 1;
    if ( (unsigned __int8)(byte_1C0245748 - 1) > 2u && (qword_1C0245730 & 0x2000000000008000LL) != 0 )
    {
      LOBYTE(v5) = 0;
      if ( (qword_1C0245738 & 0x2000000000008000LL) == qword_1C0245738 && giPowerOffTimeOutMs > 0 )
      {
        v5 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
        if ( *((_QWORD *)&v5 + 1) - a2 > (unsigned __int64)giPowerOffTimeOutMs
          && (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
        {
          if ( gProtocolType )
            v4 = 0;
          LOBYTE(v5) = McTemplateK0qhq_EtwWriteTransfer(
                         giPowerOffTimeOutMs,
                         (unsigned int)&DisplayTimeoutResetEvent,
                         a3,
                         v4,
                         v4,
                         giPowerOffTimeOutMs);
        }
      }
    }
  }
  return v5;
}
