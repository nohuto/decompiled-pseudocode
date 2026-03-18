/*
 * XREFs of _xxxHardErrorControl@12 @ 0x1A022C
 * Callers:
 *     _NtUserHardErrorControl@12 @ 0x164F51 (_NtUserHardErrorControl@12.c)
 * Callees:
 *     _CanForceForeground@4 @ 0x1B040 (_CanForceForeground@4.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _zzzAttachToQueue@16 @ 0xC7DF0 (_zzzAttachToQueue@16.c)
 *     _xxxRestoreCsrssThreadDesktop@8 @ 0xC9290 (_xxxRestoreCsrssThreadDesktop@8.c)
 *     _xxxSetCsrssThreadDesktop@8 @ 0xC9346 (_xxxSetCsrssThreadDesktop@8.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall xxxHardErrorControl(void *a1, void *a2, PVOID *a3)
{
  int v3; // edi
  _DWORD (__stdcall *v5)(_DWORD); // esi
  _DWORD *v6; // eax
  int v7; // esi
  void **v8; // esi
  _BYTE *v9; // esi
  NTSTATUS v10; // esi
  int v11; // edx
  int v12; // eax
  _DWORD *v13; // eax
  HANDLE v14; // ecx
  NTSTATUS v15; // eax
  PVOID v16; // esi
  int ThreadWin32Thread; // eax
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // esi
  int v21; // [esp-Ch] [ebp-34h]
  char v23; // [esp-4h] [ebp-2Ch]
  PVOID Object; // [esp+10h] [ebp-18h] BYREF
  HANDLE Handle[2]; // [esp+14h] [ebp-14h] BYREF
  _DWORD v26[3]; // [esp+1Ch] [ebp-Ch] BYREF

  Handle[0] = a2;
  memset(v26, 0, sizeof(v26));
  Object = a1;
  v3 = 0;
  _gptiBlockInput = 0;
  switch ( (unsigned int)a1 )
  {
    case 0u:
      if ( !_grpdeskRitInput || _gHardErrorHandler[0] )
        return 1;
      _gHardErrorHandler[0] = _gptiCurrent;
      goto LABEL_5;
    case 1u:
      if ( _gHardErrorHandler[0] != _gptiCurrent )
        return 1;
      _gHardErrorHandler[0] = 0;
      return 0;
    case 2u:
      goto LABEL_26;
    case 3u:
    case 8u:
      if ( !_grpdeskRitInput )
        return 1;
      if ( (PVOID)_grpdeskRitInput == gspdeskDisconnect )
      {
        if ( !_gspdeskShouldBeForeground || (PVOID)_gspdeskShouldBeForeground == gspdeskDisconnect )
          return 1;
        v5 = ObQueryNameInfo;
        if ( ObQueryNameInfo(_gspdeskShouldBeForeground) )
        {
          v6 = (_DWORD *)_gspdeskShouldBeForeground;
LABEL_17:
          v7 = v5(*v6) + 4;
          goto LABEL_19;
        }
      }
      else
      {
        v5 = ObQueryNameInfo;
        if ( ObQueryNameInfo(_grpdeskRitInput) )
        {
          v6 = (_DWORD *)_grpdeskRitInput;
          goto LABEL_17;
        }
      }
      v7 = 0;
LABEL_19:
      if ( !v7
        || __wcsicmp(L"Winlogon", *(const wchar_t **)(v7 + 4))
        && __wcsicmp(L"Disconnect", *(const wchar_t **)(v7 + 4))
        && __wcsicmp(L"Screen-saver", *(const wchar_t **)(v7 + 4)) )
      {
        if ( Object == (PVOID)8 )
        {
LABEL_5:
          *(_DWORD *)(_gptiCurrent + 264) &= ~0x40000000u;
        }
        else
        {
LABEL_26:
          _gHardErrorHandler[1] = *(_DWORD *)(_gptiCurrent + 236);
          ++*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 292);
LABEL_27:
          v8 = (void **)_grpdeskRitInput;
          if ( !_grpdeskRitInput
            || (PVOID)_grpdeskRitInput == gspdeskDisconnect
            && (!_gspdeskShouldBeForeground || (PVOID)_gspdeskShouldBeForeground == gspdeskDisconnect) )
          {
            return 1;
          }
          gbDisconnectHardErrorAttach = 0;
          if ( (PVOID)_grpdeskRitInput == gspdeskDisconnect )
          {
            v8 = (void **)_gspdeskShouldBeForeground;
            gbDisconnectHardErrorAttach = 1;
          }
          v9 = *v8;
          PushW32ThreadLock((int)v9, v26, (int)UserDereferenceObject);
          if ( v9 )
            ObfReferenceObject(v9);
          v10 = xxxSetCsrssThreadDesktop(v9, a3);
          PopAndFreeW32ThreadLock((int)v26);
          if ( v10 < 0 )
          {
            if ( Object != (PVOID)5 )
            {
              _gHardErrorHandler[1] = 0;
              v12 = *(_DWORD *)(_gptiCurrent + 236);
              if ( !*(_DWORD *)(v12 + 292) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
                v12 = *(_DWORD *)(_gptiCurrent + 236);
              }
              --*(_DWORD *)(v12 + 292);
              v13 = *(_DWORD **)(_gptiCurrent + 236);
              if ( !v13[73] && !v13[72] && (v13[71] & 0x4000000) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
            }
            return 1;
          }
          v14 = Handle[0];
          if ( Handle[0] )
          {
            Object = 0;
            v15 = ObReferenceObjectByHandle(Handle[0], 0x40u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0);
            v16 = Object;
            if ( v15 >= 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread(Object);
              if ( !ThreadWin32Thread || CanForceForeground(*(_DWORD **)(ThreadWin32Thread + 232)) )
                v3 = 1;
              ObfDereferenceObject(v16);
            }
          }
          v18 = *(_DWORD *)(_gptiCurrent + 264);
          if ( v3 )
          {
            *(_DWORD *)(_gptiCurrent + 264) = v18 | 0x20;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v23 = _gptiCurrent;
              v21 = 10;
LABEL_55:
              LOBYTE(v11) = 4;
              WPP_RECORDER_SF_q((int)v14, v11, 2u, v21, (int)&WPP_5901630660a43b674b375421d11cd869_Traceguids, v23);
            }
          }
          else
          {
            *(_DWORD *)(_gptiCurrent + 264) = v18 & 0xFFFFFFDF;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v23 = _gptiCurrent;
              v21 = 11;
              goto LABEL_55;
            }
          }
        }
        return 0;
      }
      UserSetLastError((struct _NT_TIB *)5);
      return 2;
    case 4u:
      *(_DWORD *)(_gptiCurrent + 264) &= ~0x40000000u;
      if ( !*(_DWORD *)(_gHardErrorHandler[1] + 292) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      --*(_DWORD *)(_gHardErrorHandler[1] + 292);
      v19 = (_DWORD *)_gHardErrorHandler[1];
      if ( !v19[73] && !v19[72] && (v19[71] & 0x4000000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      ++_gdwDeferWinEvent;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)Handle);
      if ( *(_DWORD *)(_gptiCurrent + 236) != _gHardErrorHandler[1] )
      {
        AllocQueue(0, _gHardErrorHandler[1]);
        ++*(_DWORD *)(_gHardErrorHandler[1] + 288);
        zzzAttachToQueue(_gptiCurrent, _gHardErrorHandler[1], 0, 0);
      }
      _gHardErrorHandler[1] = 0;
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)Handle);
      zzzEndDeferWinEventNotify();
      goto LABEL_65;
    case 5u:
      goto LABEL_27;
    case 6u:
LABEL_65:
      v20 = *(_DWORD *)(_gptiCurrent + 248);
      xxxRestoreCsrssThreadDesktop((int *)a3, 0);
      if ( gbDisconnectHardErrorAttach )
      {
        gbDisconnectHardErrorAttach = 0;
        return 3;
      }
      return _grpdeskRitInput != v20 ? 3 : 0;
    default:
      return 0;
  }
}
