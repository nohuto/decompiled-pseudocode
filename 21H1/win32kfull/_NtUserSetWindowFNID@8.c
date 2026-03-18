/*
 * XREFs of _NtUserSetWindowFNID@8 @ 0x1F1C6
 * Callers:
 *     <none>
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QBEEABI@Z @ 0x1433FD (--9-$RedirectedFieldcbWndServerExtra@I@tagWND@@QBEEABI@Z.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall NtUserSetWindowFNID(int a1, __int16 a2)
{
  int v2; // esi
  int v3; // edi
  __int16 v4; // bx

  v2 = 0;
  EnterCrit(0, 1);
  v3 = ValidateHwnd(a1);
  if ( v3 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(v3 + 8) + 232) != PsGetCurrentProcessWin32Process() )
    {
      UserSetLastError(5);
      goto LABEL_15;
    }
    v4 = a2;
    if ( a2 == 0x4000 )
      goto LABEL_14;
    if ( !IsWindowBeingDestroyed(v3) )
    {
      if ( PsGetWin32KFilterSet() == 5 )
      {
        if ( v4 != 681 )
          goto LABEL_11;
      }
      else if ( (unsigned __int16)(v4 - 673) > 9u )
      {
        goto LABEL_11;
      }
      if ( (*(_WORD *)(*(_DWORD *)(v3 + 20) + 30) & 0x3FFF) == 0 )
      {
        a1 = 0;
        if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(&a1) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
          goto LABEL_11;
        }
LABEL_14:
        *(_WORD *)(*(_DWORD *)(v3 + 20) + 30) |= v4;
        v2 = 1;
        goto LABEL_15;
      }
    }
LABEL_11:
    UserSetLastError(87);
  }
LABEL_15:
  UserSessionSwitchLeaveCrit();
  return v2;
}
