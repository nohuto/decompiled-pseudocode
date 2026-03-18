/*
 * XREFs of ??$?B_N@RedirectedFieldpExtraBytes@tagWND@@QEBA_NXZ @ 0x1C01E9A50
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00BB110 (xxxTooltipWndProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00BB6EC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSwitchWndProc @ 0x1C01F5B40 (xxxSwitchWndProc.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C0246EA0 (xxxSBWndProc.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::RedirectedFieldpExtraBytes::operator<bool> bool(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 - 280) + 296LL) != 0LL;
}
