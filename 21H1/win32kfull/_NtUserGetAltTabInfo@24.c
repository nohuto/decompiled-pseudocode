/*
 * XREFs of _NtUserGetAltTabInfo@24 @ 0x16194A
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     __GetAltTabInfo@20 @ 0x15D068 (__GetAltTabInfo@20.c)
 *     _GetLogicalDpiFromMonitor@8 @ 0x15FA34 (_GetLogicalDpiFromMonitor@8.c)
 */

int __stdcall NtUserGetAltTabInfo(int a1, int a2, _BYTE *a3, volatile void *a4, ULONG BytesInMultiByteString, int a6)
{
  int v6; // eax
  int v7; // edi
  int AltTabInfo; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v11; // eax
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  INT LogicalDpiFromMonitor; // ebx
  INT v17; // edi
  int v19; // [esp+24h] [ebp-54h]
  int v20; // [esp+2Ch] [ebp-4Ch]
  _DWORD *Address; // [esp+30h] [ebp-48h]
  volatile void *Addressa; // [esp+30h] [ebp-48h]
  _DWORD v23[11]; // [esp+34h] [ebp-44h] BYREF
  CPPEH_RECORD ms_exc; // [esp+60h] [ebp-18h]

  memset(v23, 0, 0x28u);
  EnterSharedCrit(0, 1);
  if ( a1 )
  {
    v6 = ValidateHwnd(a1);
    v7 = v6;
    v20 = v6;
    if ( !v6 )
    {
      AltTabInfo = 0;
      goto LABEL_35;
    }
    if ( v6 != gspwndAltTab )
    {
      AltTabInfo = 0;
      UserSetLastError((struct _NT_TIB *)0x578);
      goto LABEL_35;
    }
  }
  else
  {
    v7 = 0;
    v20 = 0;
  }
  ms_exc.registration.TryLevel = 0;
  if ( (unsigned int)a3 >= _MmUserProbeAddress )
    *(_BYTE *)_MmUserProbeAddress = 0;
  *a3 = *a3;
  a3[39] = a3[39];
  if ( a6 )
  {
    ProbeForWrite(a4, BytesInMultiByteString, 1u);
  }
  else
  {
    if ( BytesInMultiByteString > 0x7FFFFFFF )
      ExRaiseAccessViolation();
    ProbeForWrite(a4, 2 * BytesInMultiByteString, 1u);
  }
  if ( *(_DWORD *)a3 != 40 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    AltTabInfo = 0;
LABEL_34:
    ms_exc.registration.TryLevel = -2;
    goto LABEL_35;
  }
  ms_exc.registration.TryLevel = -2;
  v23[0] = 40;
  AltTabInfo = _GetAltTabInfo(a2, v23, (PCHAR)a4, BytesInMultiByteString, a6);
  v19 = AltTabInfo;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( v7 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 148) & 1) == 0 )
    {
      v11 = KeGetCurrentThread();
      if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v11) + 260) + 148) & 0x20) == 0 )
      {
        Address = *(_DWORD **)(v7 + 20);
        v12 = Address[46];
        if ( (((CurrentThreadDpiAwarenessContext >> 8) ^ (v12 >> 8)) & 0x1FF) != 0
          || ((v12 & 0xF) != 2 || (v12 & 0x20000000) == 0 ? (v13 = 0) : (v13 = 1),
              (CurrentThreadDpiAwarenessContext & 0xF) != 2 || (CurrentThreadDpiAwarenessContext & 0x20000000) == 0
            ? (v14 = 0)
            : (v14 = 1),
              v13 != v14) )
        {
          v15 = ValidateHmonitorNoRip(Address[41]);
          Addressa = (volatile void *)v15;
          if ( v15 )
          {
            LogicalDpiFromMonitor = (unsigned __int16)GetLogicalDpiFromMonitor(v15, CurrentThreadDpiAwarenessContext);
            v17 = (unsigned __int16)GetLogicalDpiFromMonitor((int)Addressa, *(_DWORD *)(*(_DWORD *)(v7 + 20) + 184));
            v23[6] = EngMulDiv(v23[6], LogicalDpiFromMonitor, v17);
            v23[7] = EngMulDiv(v23[7], LogicalDpiFromMonitor, v17);
            AltTabInfo = v19;
            v7 = v20;
          }
          TransformPointBetweenCoordinateSpaces(&v23[8], &v23[8], 0, v7);
        }
      }
    }
  }
  if ( AltTabInfo )
  {
    ms_exc.registration.TryLevel = 1;
    qmemcpy(a3, v23, 0x28u);
    goto LABEL_34;
  }
LABEL_35:
  UserSessionSwitchLeaveCrit();
  return AltTabInfo;
}
