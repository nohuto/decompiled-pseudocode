/*
 * XREFs of _NtUserOpenClipboard@8 @ 0x116D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ForegroundInputOwnerMatch@@YGHPBUtagTHREADINFO@@H@Z @ 0x11182 (-ForegroundInputOwnerMatch@@YGHPBUtagTHREADINFO@@H@Z.c)
 *     __OpenClipboard@8 @ 0x11832 (__OpenClipboard@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _UserGetLastError@0 @ 0xAC854 (_UserGetLastError@0.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@G@@@Z @ 0x15EB77 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6GJP.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBX1IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YGJ011I2@ZPBX@@SGJPBU_tlgProvider_t@@PBX1ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@G@@@Z @ 0x15EC02 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 */

int __stdcall NtUserOpenClipboard(int a1, ULONG a2)
{
  int v2; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v5; // edi
  _DWORD *v6; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // ecx
  int v13; // ecx
  int v14; // edi
  int v15; // ecx
  int v16; // ecx
  signed int LastError; // eax
  int v18; // eax
  bool v19; // sf
  signed int v20; // eax
  int v21; // ecx
  int v22; // edi
  int v23; // ecx
  int v24; // [esp+14h] [ebp-DCh] BYREF
  int v25; // [esp+18h] [ebp-D8h]
  int v26; // [esp+1Ch] [ebp-D4h]
  _DWORD v27[2]; // [esp+20h] [ebp-D0h] BYREF
  _DWORD v28[2]; // [esp+30h] [ebp-C0h] BYREF
  _DWORD v29[2]; // [esp+38h] [ebp-B8h] BYREF
  _DWORD v30[3]; // [esp+40h] [ebp-B0h] BYREF
  const char *v31; // [esp+4Ch] [ebp-A4h] BYREF
  int v32; // [esp+50h] [ebp-A0h] BYREF
  int v33; // [esp+54h] [ebp-9Ch] BYREF
  _DWORD *v34; // [esp+58h] [ebp-98h] BYREF
  const char *v35; // [esp+5Ch] [ebp-94h] BYREF
  int v36; // [esp+60h] [ebp-90h] BYREF
  int v37; // [esp+64h] [ebp-8Ch] BYREF
  const char *v38; // [esp+84h] [ebp-6Ch] BYREF
  signed int v39; // [esp+88h] [ebp-68h] BYREF
  int v40; // [esp+8Ch] [ebp-64h] BYREF
  _DWORD *v41; // [esp+90h] [ebp-60h] BYREF
  const char *v42; // [esp+94h] [ebp-5Ch] BYREF
  signed int v43; // [esp+98h] [ebp-58h] BYREF
  int v44; // [esp+9Ch] [ebp-54h] BYREF
  const char *v45; // [esp+A0h] [ebp-50h] BYREF
  int v46; // [esp+A4h] [ebp-4Ch] BYREF
  int v47; // [esp+A8h] [ebp-48h] BYREF
  _DWORD *v48; // [esp+ACh] [ebp-44h] BYREF
  const char *v49; // [esp+B0h] [ebp-40h] BYREF
  int v50; // [esp+B4h] [ebp-3Ch] BYREF
  int v51; // [esp+B8h] [ebp-38h] BYREF
  const char *v52; // [esp+BCh] [ebp-34h] BYREF
  int v53; // [esp+C0h] [ebp-30h] BYREF
  int v54; // [esp+C4h] [ebp-2Ch] BYREF
  _DWORD *v55; // [esp+C8h] [ebp-28h] BYREF
  const char *v56; // [esp+CCh] [ebp-24h] BYREF
  int v57; // [esp+D0h] [ebp-20h] BYREF
  int v58; // [esp+D4h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+D8h] [ebp-18h]
  int v60; // [esp+F8h] [ebp+8h]

  v24 = 0;
  v25 = 0;
  v26 = 0;
  v57 = 0;
  EnterCrit(0, 1);
  if ( a1 )
  {
    v2 = ValidateHwnd(a1);
    if ( !v2 )
    {
      v5 = 0;
      goto LABEL_15;
    }
  }
  else
  {
    v2 = 0;
  }
  v60 = *(_DWORD *)(_gptiCurrent + 232) + 584;
  if ( _gbLockScreenActive || *(PVOID *)(_gptiCurrent + 248) == grpdeskLogon )
  {
    if ( (unsigned int)dword_266258 > 5 && (unsigned __int8)_tlgKeywordOn(0, 0x4000) )
    {
      v27[0] = 1;
      v27[1] = 0;
      v22 = v60;
      v37 = v60;
      v36 = -2147024891;
      v35 = "OnLockscreen";
      v34 = v27;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v21,
        &v34,
        &v35,
        &v36,
        &v37);
    }
    else
    {
      v22 = v60;
    }
    if ( (unsigned int)dword_266280 > 5 && (unsigned __int8)_tlgKeywordOn(1, 0) )
    {
      v33 = v22;
      v32 = -2147024891;
      v31 = "OnLockscreen";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v23,
        v23,
        &v31,
        &v32,
        &v33);
    }
    goto LABEL_60;
  }
  if ( *(_DWORD *)(PsGetCurrentProcessWin32Process() + 500) )
  {
    v8 = _gptiCurrent;
    v58 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 20);
    if ( !_gpqForeground || !ForegroundInputOwnerMatch(_gptiCurrent, 1) )
    {
      v9 = *(_DWORD *)(v58 + 56);
      if ( !v9 || *(_DWORD *)(v9 + 8) != v8 )
      {
        if ( (unsigned int)dword_266258 > 5 && (unsigned __int8)_tlgKeywordOn(0, 0x4000) )
        {
          v30[0] = 1;
          v30[1] = 0;
          v11 = v60;
          a2 = v60;
          v58 = -2147024891;
          v56 = "NoForeground";
          v55 = v30;
          _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v10,
            &v55,
            &v56,
            &v58,
            &a2);
        }
        else
        {
          v11 = v60;
        }
        if ( (unsigned int)dword_266280 > 5 && (unsigned __int8)_tlgKeywordOn(1, 0) )
        {
          v54 = v11;
          v53 = -2147024891;
          v52 = "NoForeground";
          _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v12,
            v12,
            &v52,
            &v53,
            &v54);
        }
LABEL_60:
        v16 = 5;
LABEL_61:
        v5 = 0;
        UserSetLastError(v16);
        goto LABEL_15;
      }
    }
  }
  if ( v2
    && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 8) + 232) + 356) != *(_DWORD *)(PsGetCurrentProcessWin32Process() + 356)
    && *(_DWORD *)(PsGetCurrentProcessWin32Process() + 356)
    && (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 8) + 232) + 356)
     || (*(_BYTE *)(*(_DWORD *)(PsGetCurrentProcessWin32Process() + 356) + 32) & 4) != 0) )
  {
    UserSetLastError(87);
    if ( (unsigned int)dword_266258 > 5 && (unsigned __int8)_tlgKeywordOn(0, 0x4000) )
    {
      v29[0] = 1;
      v29[1] = 0;
      v14 = v60;
      v51 = v60;
      v50 = -2147024809;
      v49 = "InvalidParameter";
      v48 = v29;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v13,
        &v48,
        &v49,
        &v50,
        &v51);
    }
    else
    {
      v14 = v60;
    }
    if ( (unsigned int)dword_266280 > 5 && (unsigned __int8)_tlgKeywordOn(1, 0) )
    {
      v47 = v14;
      v46 = -2147024809;
      v45 = "InvalidParameter";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v15,
        v15,
        &v45,
        &v46,
        &v47);
    }
    v16 = 0;
    goto LABEL_61;
  }
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v24 = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = &v24;
  v25 = v2;
  if ( v2 )
    HMLockObject(v2);
  v5 = _OpenClipboard(v2, &v57);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 0;
  v6 = (_DWORD *)a2;
  if ( a2 >= _MmUserProbeAddress )
    v6 = (_DWORD *)_MmUserProbeAddress;
  *v6 = v57;
  ms_exc.registration.TryLevel = -2;
  if ( (unsigned int)dword_266258 > 5 && (unsigned __int8)_tlgKeywordOn(0, 0x4000) )
  {
    if ( v5 )
    {
      LastError = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    v28[0] = 1;
    v28[1] = 0;
    v44 = v60;
    v43 = LastError;
    v42 = "FunctionExit";
    v41 = v28;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v60,
      &v41,
      &v42,
      &v43,
      &v44);
  }
  if ( !v5 )
  {
    v18 = UserGetLastError();
    v19 = v18 < 0;
    if ( v18 > 0 )
      v19 = 1;
    if ( v19 && (unsigned int)dword_266280 > 5 && (unsigned __int8)_tlgKeywordOn(1, 0) )
    {
      v20 = UserGetLastError();
      if ( v20 > 0 )
        v20 = (unsigned __int16)v20 | 0x80070000;
      v40 = v60;
      v39 = v20;
      v38 = "FunctionExit";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v60,
        v60,
        &v38,
        &v39,
        &v40);
    }
  }
LABEL_15:
  UserSessionSwitchLeaveCrit();
  return v5;
}
