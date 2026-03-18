/*
 * XREFs of SetDialogPointer @ 0x1C00E87B0
 * Callers:
 *     <none>
 * Callees:
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z @ 0x1C00BC6D4 (--9-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     unsafe_cast_fnid_zero_to_PDIALOG @ 0x1C00E88D4 (unsafe_cast_fnid_zero_to_PDIALOG.c)
 *     ??8?$RedirectedFieldfnid@G@tagWND@@QEBAE$$QEAG@Z @ 0x1C00E8AB8 (--8-$RedirectedFieldfnid@G@tagWND@@QEBAE$$QEAG@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetDialogPointer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // ecx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h]
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v14 = a2;
  v13 = a1;
  v5 = *(_QWORD *)(a1 + 40);
  if ( *(int *)(v5 + 200) >= 30
    && (*(_BYTE *)(v5 + 18) & 4) == 0
    && PsGetCurrentProcessWin32Process(v5, a2, a3) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL)
    && (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x800) == 0 )
  {
    v15 = 0;
    if ( tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(a1 + 321, &v15)
      && (LOWORD(v15) = 0, (unsigned __int8)tagWND::RedirectedFieldfnid<unsigned short>::operator==(a1 + 87, &v15)) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
    }
    else
    {
      v10 = unsafe_cast_fnid_zero_to_PDIALOG(a1);
      if ( v10 )
      {
        *(_QWORD *)(v10 + 8) = a2;
        if ( a2 )
        {
          LOWORD(v13) = 0;
          if ( (unsigned __int8)tagWND::RedirectedFieldfnid<unsigned short>::operator==(a1 + 87, &v13) )
            *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) = 676;
          v11 = 1;
        }
        else
        {
          *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) |= 0x4000u;
          v11 = 0;
        }
        SetOrClrWF(v11, a1, 0x201u, 1);
      }
    }
  }
  return 1LL;
}
