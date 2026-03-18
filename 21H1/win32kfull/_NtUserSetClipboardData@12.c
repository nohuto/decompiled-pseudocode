/*
 * XREFs of _NtUserSetClipboardData@12 @ 0x168BC2
 * Callers:
 *     <none>
 * Callees:
 *     ?ForegroundInputOwnerMatch@@YGHPBUtagTHREADINFO@@H@Z @ 0x11182 (-ForegroundInputOwnerMatch@@YGHPBUtagTHREADINFO@@H@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _UserGetLastError@0 @ 0xAC854 (_UserGetLastError@0.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@G@@@Z @ 0x15EB77 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6GJP.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBX1IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YGJ011I2@ZPBX@@SGJPBU_tlgProvider_t@@PBX1ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@G@@@Z @ 0x15EC02 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 *     __SetClipboardData@16 @ 0x182F88 (__SetClipboardData@16.c)
 */

int __stdcall NtUserSetClipboardData(char *a1, const char *a2, ULONG a3)
{
  int v3; // eax
  char *v4; // ebx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // ebx
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  char *v13; // ebx
  int v14; // ecx
  int v15; // ecx
  char *v16; // ebx
  int v17; // ecx
  int *v18; // eax
  struct _NT_TIB *LastError; // eax
  struct _NT_TIB *v20; // eax
  bool v21; // sf
  struct _NT_TIB *v22; // eax
  _DWORD v24[2]; // [esp+1Ch] [ebp-D0h] BYREF
  _DWORD v25[2]; // [esp+24h] [ebp-C8h] BYREF
  _DWORD v26[2]; // [esp+2Ch] [ebp-C0h] BYREF
  _DWORD v27[2]; // [esp+34h] [ebp-B8h] BYREF
  int v28; // [esp+3Ch] [ebp-B0h]
  int v29; // [esp+40h] [ebp-ACh]
  LONGLONG TimeQuadPart; // [esp+44h] [ebp-A8h] BYREF
  const char *v31; // [esp+6Ch] [ebp-80h] BYREF
  struct _NT_TIB *v32; // [esp+70h] [ebp-7Ch] BYREF
  char *v33; // [esp+74h] [ebp-78h] BYREF
  _DWORD *v34; // [esp+78h] [ebp-74h] BYREF
  const char *v35; // [esp+7Ch] [ebp-70h] BYREF
  struct _NT_TIB *v36; // [esp+80h] [ebp-6Ch] BYREF
  char *v37; // [esp+84h] [ebp-68h] BYREF
  const char *v38; // [esp+88h] [ebp-64h] BYREF
  int v39; // [esp+8Ch] [ebp-60h] BYREF
  char *v40; // [esp+90h] [ebp-5Ch] BYREF
  _DWORD *v41; // [esp+94h] [ebp-58h] BYREF
  const char *v42; // [esp+98h] [ebp-54h] BYREF
  int v43; // [esp+9Ch] [ebp-50h] BYREF
  char *v44; // [esp+A0h] [ebp-4Ch] BYREF
  const char *v45; // [esp+A4h] [ebp-48h] BYREF
  int v46; // [esp+A8h] [ebp-44h] BYREF
  char *v47; // [esp+ACh] [ebp-40h] BYREF
  _DWORD *v48; // [esp+B0h] [ebp-3Ch] BYREF
  const char *v49; // [esp+B4h] [ebp-38h] BYREF
  int v50; // [esp+B8h] [ebp-34h] BYREF
  char *v51; // [esp+BCh] [ebp-30h] BYREF
  const char *v52; // [esp+C0h] [ebp-2Ch] BYREF
  int v53; // [esp+C4h] [ebp-28h] BYREF
  char *v54; // [esp+C8h] [ebp-24h] BYREF
  _DWORD *v55; // [esp+CCh] [ebp-20h] BYREF
  char *v56; // [esp+D0h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+D4h] [ebp-18h]

  v28 = 0;
  v29 = 0;
  EnterCrit(0, 1);
  v3 = *(_DWORD *)(_gptiCurrent + 232);
  v4 = (char *)(v3 + 584);
  v56 = (char *)(v3 + 584);
  v55 = *(_DWORD **)(v3 + 32);
  TimeQuadPart = PsGetProcessCreateTimeQuadPart((PEPROCESS)*(_DWORD *)v3);
  EtwTraceUiAuditWriteClipboard(v55, &TimeQuadPart);
  if ( (*(_DWORD *)(_gptiCurrent + 264) & 0x20000000) != 0 )
    v5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 416) + 12) & 4;
  else
    v5 = 0;
  if ( v5 )
  {
    EtwTraceUiLimitWriteClipboard(v55, &TimeQuadPart);
    if ( (unsigned int)dword_266258 > 5 && _tlgKeywordOn(&dword_266258, 0x400000000000LL) )
    {
      v27[0] = 1;
      v27[1] = 0;
      a1 = v4;
      a3 = -2147024891;
      a2 = "RestrictedThread";
      v55 = v27;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        byte_2555E5,
        v6,
        &v55,
        &a2,
        (int)&a3,
        &a1);
    }
    if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 1LL) )
    {
      v54 = v4;
      v53 = -2147024891;
      v52 = "RestrictedThread";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v7,
        byte_2555A5,
        v7,
        v7,
        &v52,
        (int)&v53,
        &v54);
    }
LABEL_11:
    v8 = 0;
    UserSetLastError((struct _NT_TIB *)5);
    goto LABEL_52;
  }
  if ( *(_DWORD *)(PsGetCurrentProcessWin32Process() + 500) )
  {
    v9 = _gptiCurrent;
    v10 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 20);
    if ( (!_gpqForeground || !ForegroundInputOwnerMatch(_gptiCurrent, 1)) && v9 != *(_DWORD *)(v10 + 40) )
    {
      v11 = *(_DWORD *)(v10 + 56);
      if ( !v11 || *(_DWORD *)(v11 + 8) != v9 )
      {
        if ( (unsigned int)dword_266258 > 5 && _tlgKeywordOn(&dword_266258, 0x400000000000LL) )
        {
          v26[0] = 1;
          v26[1] = 0;
          v13 = v56;
          v51 = v56;
          v50 = -2147024891;
          v49 = "NoForeground";
          v48 = v26;
          _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v12,
            byte_2555E5,
            v12,
            &v48,
            &v49,
            (int)&v50,
            &v51);
        }
        else
        {
          v13 = v56;
        }
        if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 1LL) )
        {
          v47 = v13;
          v46 = -2147024891;
          v45 = "NoForeground";
          _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v14,
            byte_2555A5,
            v14,
            v14,
            &v45,
            (int)&v46,
            &v47);
        }
        goto LABEL_11;
      }
    }
    if ( a1 != (char *)1 && a1 != (char *)13 )
    {
      if ( (unsigned int)dword_266258 > 5 && _tlgKeywordOn(&dword_266258, 0x400000000000LL) )
      {
        v25[0] = 1;
        v25[1] = 0;
        v16 = v56;
        v44 = v56;
        v43 = -2147024891;
        v42 = "UnsupportedFormatForLowBoxApp";
        v41 = v25;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v15,
          byte_2555E5,
          v15,
          &v41,
          &v42,
          (int)&v43,
          &v44);
      }
      else
      {
        v16 = v56;
      }
      if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 1LL) )
      {
        v40 = v16;
        v39 = -2147024891;
        v38 = "UnsupportedFormatForLowBoxApp";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v17,
          byte_2555A5,
          v17,
          v17,
          &v38,
          (int)&v39,
          &v40);
      }
      goto LABEL_11;
    }
  }
  ms_exc.registration.TryLevel = 0;
  v18 = (int *)_MmUserProbeAddress;
  if ( a3 < _MmUserProbeAddress )
    v18 = (int *)a3;
  v28 = *v18;
  v29 = v18[1];
  ms_exc.registration.TryLevel = -2;
  v8 = _SetClipboardData(a1, a2, v28 != 0, v29 != 0);
  if ( (unsigned int)dword_266258 > 5 && _tlgKeywordOn(&dword_266258, 0x400000000000LL) )
  {
    if ( v8 )
    {
      LastError = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( (int)LastError > 0 )
        LastError = (struct _NT_TIB *)((unsigned __int16)LastError | 0x80070000);
    }
    v24[0] = 1;
    v24[1] = 0;
    v37 = v56;
    v36 = LastError;
    v35 = "FunctionExit";
    v34 = v24;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (int)v56,
      byte_2555E5,
      (int)v56,
      &v34,
      &v35,
      (int)&v36,
      &v37);
  }
  if ( !v8 )
  {
    v20 = UserGetLastError();
    v21 = (int)v20 < 0;
    if ( (int)v20 > 0 )
      v21 = 1;
    if ( v21 && (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 1LL) )
    {
      v22 = UserGetLastError();
      if ( (int)v22 > 0 )
        v22 = (struct _NT_TIB *)((unsigned __int16)v22 | 0x80070000);
      v33 = v56;
      v32 = v22;
      v31 = "FunctionExit";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        (int)v56,
        byte_2555A5,
        (int)v56,
        (int)v56,
        &v31,
        (int)&v32,
        &v33);
    }
  }
LABEL_52:
  UserSessionSwitchLeaveCrit();
  return v8;
}
