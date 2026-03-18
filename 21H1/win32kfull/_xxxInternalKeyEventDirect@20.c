/*
 * XREFs of _xxxInternalKeyEventDirect@20 @ 0xAFD06
 * Callers:
 *     _xxxSendInput@8 @ 0xAFB7E (_xxxSendInput@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YGHH@Z @ 0xAFF1C (-IsGpqForegroundAccessibleCurrent@@YGHH@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ?MSGLUA_GPQFOREGROUND@@YGXXZ @ 0xC5904 (-MSGLUA_GPQFOREGROUND@@YGXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@@Z @ 0x1439C9 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall xxxInternalKeyEventDirect(unsigned __int8 a1, __int16 a2, char a3, int a4, int a5)
{
  char v6; // cl
  __int16 v7; // ax
  int v8; // edi
  _WORD *v9; // esi
  unsigned __int8 v10; // dl
  __int16 v12; // ax
  struct _NT_TIB *v13; // eax
  int v14; // [esp+0h] [ebp-3Ch]
  int v15; // [esp+14h] [ebp-28h] BYREF
  __int16 v16; // [esp+1Ah] [ebp-22h]
  _DWORD v17[6]; // [esp+1Ch] [ebp-20h] BYREF

  v16 = a2;
  memset(v17, 0, sizeof(v17));
  if ( *(_DWORD *)(_gptiCurrent + 248) == _grpdeskRitInput
    && (PsGetCurrentProcess() == _gpepCSRSS || RtlAreAllAccessesGranted(*(_DWORD *)(_gptiCurrent + 496), 0x20u)) )
  {
    if ( IsGpqForegroundAccessibleCurrent(v14) )
    {
      if ( (unsigned int)dword_2689E8 > 4 && (unsigned __int8)_tlgKeywordOn(0x4000, 0) )
      {
        v15 = (int)"SendInput";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (int)&dword_2689E8,
          (int)&unk_2556B9,
          0,
          0,
          (int)&v15);
      }
      v6 = a3;
      LOBYTE(v17[0]) = v16;
      v17[2] = 0;
      if ( (a3 & 8) != 0 )
      {
        LOBYTE(v7) = VKFromVSC(v17, (a3 & 1) != 0 ? 0xE0 : 0);
        v6 = a3;
        a1 = v7;
        v7 = (unsigned __int8)v7;
      }
      else
      {
        switch ( a1 )
        {
          case 0x10u:
            a1 = ((v16 & 0x7F) == 54) - 96;
            break;
          case 0x11u:
            a1 = a3 & 1 | 0xA2;
            break;
          case 0x12u:
            a1 = a3 & 1 | 0xA4;
            break;
        }
        v7 = a1 | 0x2000;
        HIWORD(v17[0]) = v7;
        if ( a1 != 0xA1 )
        {
LABEL_12:
          v15 = v6 & 2;
          if ( (v6 & 2) != 0 )
          {
            v7 |= 0x8000u;
            HIWORD(v17[0]) = v7;
          }
          if ( (v6 & 4) != 0 )
          {
            v10 = v16;
            HIWORD(v17[0]) = v7 | 0x1000;
            LOWORD(v17[0]) = v16;
            goto LABEL_23;
          }
          if ( (v6 & 1) != 0 )
          {
            v12 = v7 | 0x100;
          }
          else
          {
            if ( (a1 < 0x60u || a1 > 0x69u) && a1 != 110 )
            {
              v8 = 0;
              if ( !_ausNumPadCvt )
              {
LABEL_22:
                v10 = v16;
LABEL_23:
                HIWORD(v17[3]) = v10;
                LOWORD(v17[4]) = v15 != 0;
                if ( (v6 & 1) != 0 )
                  LOWORD(v17[4]) = (v15 != 0) | 2;
                HIWORD(v17[4]) = 0;
                LOWORD(v17[3]) = -2;
                v17[5] = a5;
                _gppiInputProvider = *(_DWORD *)(_gptiCurrent + 232);
                v17[1] = a4;
                xxxProcessKeyEvent(v17, a5, 1, 0, 0, 0);
                return 1;
              }
              v9 = (_WORD *)_ausNumPadCvt;
              while ( a1 != *(_BYTE *)v9 )
              {
                ++v8;
                v9 = (_WORD *)((char *)&_ausNumPadCvt + 2 * v8);
                v6 = a3;
                if ( !*v9 )
                  goto LABEL_22;
              }
            }
            v12 = v7 | 0x800;
          }
          HIWORD(v17[0]) = v12;
          goto LABEL_22;
        }
        v7 |= 0x100u;
      }
      HIWORD(v17[0]) = v7;
      goto LABEL_12;
    }
    MSGLUA_GPQFOREGROUND();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(20, 11, &WPP_52501f1c8d413b885f9056fc758955fa_Traceguids);
    return 1;
  }
  else
  {
    v13 = (struct _NT_TIB *)RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v13);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(20, 10, &WPP_52501f1c8d413b885f9056fc758955fa_Traceguids);
    return 0;
  }
}
