/*
 * XREFs of ?ServiceStart@CAudioSrv@@UEAAXXZ @ 0x1800698E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800BBF40 (WPP_SF_.c)
 */

void __fastcall CAudioSrv::ServiceStart(CAudioSrv *this)
{
  HANDLE v1; // rax

  v1 = g_hCanAcceptMMCClientEvent;
  if ( g_hCanAcceptMMCClientEvent )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_d589406c240c3254166a1ed404a43ff9_Traceguids);
      v1 = g_hCanAcceptMMCClientEvent;
    }
    SetEvent(v1);
  }
}
