/*
 * XREFs of _SetDialogPointer@8 @ 0xA756E
 * Callers:
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _unsafe_cast_fnid_zero_to_PDIALOG@4 @ 0xA768E (_unsafe_cast_fnid_zero_to_PDIALOG@4.c)
 *     ??8?$RedirectedFieldfnid@G@tagWND@@QBEE$$QAG@Z @ 0xA76D4 (--8-$RedirectedFieldfnid@G@tagWND@@QBEE$$QAG@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QBEEABI@Z @ 0x1433FD (--9-$RedirectedFieldcbWndServerExtra@I@tagWND@@QBEEABI@Z.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall SetDialogPointer(_DWORD *a1, int a2)
{
  _DWORD *v2; // esi
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v7; // [esp+14h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  v2 = a1;
  v3 = a1[5];
  if ( *(int *)(v3 + 128) >= 30
    && (*(_BYTE *)(v3 + 10) & 4) == 0
    && PsGetCurrentProcessWin32Process() == *(_DWORD *)(v2[2] + 232) )
  {
    v7 = 0;
    if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(&v7) )
    {
      v7 = 0;
      if ( (unsigned __int8)tagWND::RedirectedFieldfnid<unsigned short>::operator==(&v7) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
        Win32FreePool(v2[41]);
        v2[41] = 0;
        *(_DWORD *)(v2[5] + 160) = 0;
      }
    }
    v4 = unsafe_cast_fnid_zero_to_PDIALOG(v2);
    if ( v4 )
    {
      *(_DWORD *)(v4 + 4) = a2;
      ms_exc.registration.TryLevel = -2;
      if ( a2 )
      {
        a1 = 0;
        if ( (unsigned __int8)tagWND::RedirectedFieldfnid<unsigned short>::operator==(&a1) )
          *(_WORD *)(v2[5] + 30) = 676;
        v5 = 1;
      }
      else
      {
        *(_WORD *)(v2[5] + 30) |= 0x4000u;
        v5 = 0;
      }
      SetOrClrWF(v5, (int)v2, 0x201u, 1);
    }
  }
  return 1;
}
