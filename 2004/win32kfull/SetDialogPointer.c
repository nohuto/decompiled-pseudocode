/*
 * XREFs of SetDialogPointer @ 0x1C00EC160
 * Callers:
 *     <none>
 * Callees:
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z @ 0x1C00319BC (--9-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     unsafe_cast_fnid_zero_to_PDIALOG @ 0x1C00EC290 (unsafe_cast_fnid_zero_to_PDIALOG.c)
 *     ??8?$RedirectedFieldfnid@G@tagWND@@QEBAE$$QEAG@Z @ 0x1C00EC448 (--8-$RedirectedFieldfnid@G@tagWND@@QEBAE$$QEAG@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetDialogPointer(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int16 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int16 v9; // r9
  int v10; // ecx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h]
  int v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = a2;
  v12 = a1;
  v4 = *(_QWORD *)(a1 + 40);
  if ( *(int *)(v4 + 200) >= 30
    && (*(_BYTE *)(v4 + 18) & 4) == 0
    && PsGetCurrentProcessWin32Process(v4) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL)
    && (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x800) == 0 )
  {
    v14 = 0;
    if ( tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(a1 + 321, &v14)
      && (LOWORD(v14) = v5, (unsigned __int8)tagWND::RedirectedFieldfnid<unsigned short>::operator==(a1 + 87, &v14)) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
    }
    else
    {
      v8 = unsafe_cast_fnid_zero_to_PDIALOG(a1);
      if ( v8 )
      {
        *(_QWORD *)(v8 + 8) = a2;
        if ( a2 )
        {
          LOWORD(v12) = v9;
          if ( (unsigned __int8)tagWND::RedirectedFieldfnid<unsigned short>::operator==(a1 + 87, &v12) )
            *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) = 676;
          v10 = 1;
        }
        else
        {
          *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) |= 0x4000u;
          v10 = 0;
        }
        SetOrClrWF(v10, a1, 0x201u, 1);
      }
    }
  }
  return 1LL;
}
