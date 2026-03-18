/*
 * XREFs of _NtUserGetClipboardData@8 @ 0x161F6A
 * Callers:
 *     <none>
 * Callees:
 *     ?InForegroundQueue@@YGHPBUtagTHREADINFO@@H@Z @ 0x1112C (-InForegroundQueue@@YGHPBUtagTHREADINFO@@H@Z.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 *     _UserGetLastError@0 @ 0xAC854 (_UserGetLastError@0.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ?Feature_ReadClipboardEvent__private_IsEnabled@@YGHXZ @ 0xF20F0 (-Feature_ReadClipboardEvent__private_IsEnabled@@YGHXZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@G@@@Z @ 0x15EB77 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6GJP.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBX1IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YGJ011I2@ZPBX@@SGJPBU_tlgProvider_t@@PBX1ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@G@@@Z @ 0x15EC02 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 *     _xxxGetClipboardData@12 @ 0x18310B (_xxxGetClipboardData@12.c)
 */

int __stdcall NtUserGetClipboardData(char *a1, ULONG a2)
{
  char *v2; // esi
  int v3; // ecx
  int v4; // ecx
  int ClipboardData; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  _DWORD *v11; // esi
  int v12; // esi
  int v13; // esi
  char *v14; // esi
  int v15; // eax
  _DWORD *v16; // edi
  _DWORD *v17; // edi
  unsigned int v18; // ecx
  struct _NT_TIB *LastError; // eax
  struct _NT_TIB *v20; // eax
  bool v21; // sf
  struct _NT_TIB *v22; // eax
  unsigned int v23; // ecx
  _DWORD v25[3]; // [esp+10h] [ebp-100h] BYREF
  char *v26; // [esp+20h] [ebp-F0h] BYREF
  int v27; // [esp+24h] [ebp-ECh]
  int v28; // [esp+28h] [ebp-E8h]
  _DWORD v29[2]; // [esp+2Ch] [ebp-E4h] BYREF
  LONGLONG v30; // [esp+3Ch] [ebp-D4h] BYREF
  _DWORD v31[2]; // [esp+44h] [ebp-CCh] BYREF
  _DWORD v32[2]; // [esp+4Ch] [ebp-C4h] BYREF
  _DWORD v33[3]; // [esp+54h] [ebp-BCh] BYREF
  int v34; // [esp+60h] [ebp-B0h] BYREF
  const char *v35; // [esp+64h] [ebp-ACh] BYREF
  unsigned int v36; // [esp+68h] [ebp-A8h] BYREF
  char *v37; // [esp+6Ch] [ebp-A4h] BYREF
  _DWORD *v38; // [esp+70h] [ebp-A0h] BYREF
  const char *v39; // [esp+74h] [ebp-9Ch] BYREF
  unsigned int v40; // [esp+78h] [ebp-98h] BYREF
  char *v41; // [esp+7Ch] [ebp-94h] BYREF
  const char *v42; // [esp+A0h] [ebp-70h] BYREF
  int v43; // [esp+A4h] [ebp-6Ch] BYREF
  char *v44; // [esp+A8h] [ebp-68h] BYREF
  _DWORD *v45; // [esp+ACh] [ebp-64h] BYREF
  const char *v46; // [esp+B0h] [ebp-60h] BYREF
  int v47; // [esp+B4h] [ebp-5Ch] BYREF
  char *v48; // [esp+B8h] [ebp-58h] BYREF
  const char *v49; // [esp+BCh] [ebp-54h] BYREF
  int v50; // [esp+C0h] [ebp-50h] BYREF
  char *v51; // [esp+C4h] [ebp-4Ch] BYREF
  _DWORD *v52; // [esp+C8h] [ebp-48h] BYREF
  const char *v53; // [esp+CCh] [ebp-44h] BYREF
  int v54; // [esp+D0h] [ebp-40h] BYREF
  char *v55; // [esp+D4h] [ebp-3Ch] BYREF
  const char *v56; // [esp+D8h] [ebp-38h] BYREF
  LONGLONG TimeQuadPart; // [esp+DCh] [ebp-34h] BYREF
  const char *ThreadProcessId; // [esp+E4h] [ebp-2Ch] BYREF
  PVOID Object; // [esp+E8h] [ebp-28h] BYREF
  char *v60; // [esp+ECh] [ebp-24h] BYREF
  char *v61; // [esp+F0h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+F8h] [ebp-18h]

  memset(v25, 0, sizeof(v25));
  v26 = 0;
  v27 = 0;
  v28 = 0;
  EnterCrit(0, 1);
  v60 = (char *)_gptiCurrent;
  v2 = (char *)(*(_DWORD *)(_gptiCurrent + 232) + 584);
  v61 = v2;
  Object = CheckClipboardAccess();
  if ( !Object )
  {
    if ( (unsigned int)dword_266258 > 5 && _tlgKeywordOn(&dword_266258, 0x400000000000LL) )
    {
      v33[0] = 1;
      v33[1] = 0;
      a1 = v2;
      a2 = -2147024891;
      ThreadProcessId = "AccessDenied";
      Object = v33;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v3,
        byte_255559,
        v3,
        &Object,
        &ThreadProcessId,
        (int)&a2,
        &a1);
    }
    if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 1LL) )
    {
      v60 = v2;
      v34 = -2147024891;
      v56 = "AccessDenied";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v4,
        byte_255519,
        v4,
        v4,
        &v56,
        (int)&v34,
        &v60);
    }
LABEL_8:
    ClipboardData = 0;
    goto LABEL_54;
  }
  if ( (*((_DWORD *)v60 + 66) & 0x20000000) != 0 )
    v6 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v60 + 58) + 416) + 12) & 2;
  else
    v6 = 0;
  if ( v6 )
  {
    UserSetLastError((struct _NT_TIB *)5);
    if ( (unsigned int)dword_266258 > 5 && _tlgKeywordOn(&dword_266258, 0x400000000000LL) )
    {
      v32[0] = 1;
      v32[1] = 0;
      v55 = v2;
      v54 = -2147024891;
      v53 = "RestrictedThread";
      v52 = v32;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v7,
        byte_255559,
        v7,
        &v52,
        &v53,
        (int)&v54,
        &v55);
    }
    if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 1LL) )
    {
      v51 = v2;
      v50 = -2147024891;
      v49 = "RestrictedThread";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v8,
        byte_255519,
        v8,
        v8,
        &v49,
        (int)&v50,
        &v51);
    }
    goto LABEL_8;
  }
  if ( !*(_DWORD *)(*((_DWORD *)v60 + 58) + 500) || InForegroundQueue(v60) && (a1 == (char *)1 || a1 == (char *)13) )
  {
    v11 = Object;
    PushW32ThreadLock((int)Object, v25, (int)UserDereferenceObject);
    ObfReferenceObject(v11);
    if ( Feature_ReadClipboardEvent__private_IsEnabled() )
    {
      ThreadProcessId = 0;
      TimeQuadPart = 0LL;
      v12 = v11[14];
      if ( v12 )
      {
        v13 = *(_DWORD *)(v12 + 8);
        ThreadProcessId = (const char *)PsGetThreadProcessId(*(PETHREAD *)v13);
        TimeQuadPart = PsGetProcessCreateTimeQuadPart((PEPROCESS)**(_DWORD **)(v13 + 232));
      }
      v14 = v60;
      v30 = PsGetProcessCreateTimeQuadPart((PEPROCESS)**((_DWORD **)v60 + 58));
      v15 = *(_DWORD *)(*((_DWORD *)v14 + 58) + 32);
      v11 = Object;
      EtwTraceUiAuditReadClipboard(v15, &v30, ThreadProcessId, &TimeQuadPart, *((_DWORD *)Object + 19));
    }
    v26 = a1;
    ClipboardData = xxxGetClipboardData(v11, &v26);
    a1 = (char *)ClipboardData;
    if ( ClipboardData )
    {
      ms_exc.registration.TryLevel = 0;
      v16 = (_DWORD *)a2;
      if ( a2 >= _MmUserProbeAddress )
        v16 = (_DWORD *)_MmUserProbeAddress;
      *v16 = v26;
      v17 = v16 + 1;
      *v17 = v27;
      v17[1] = v28;
      ms_exc.registration.TryLevel = -2;
      ClipboardData = (int)a1;
    }
    PopAndFreeW32ThreadLock((int)v25);
    if ( (unsigned int)dword_266258 > 5 && _tlgKeywordOn(&dword_266258, 0x400000000000LL) )
    {
      if ( ClipboardData )
      {
        v18 = 0;
      }
      else
      {
        LastError = UserGetLastError();
        v18 = (unsigned int)LastError;
        if ( (int)LastError > 0 )
          v18 = (unsigned __int16)LastError | 0x80070000;
      }
      v29[0] = 1;
      v29[1] = 0;
      v41 = v61;
      v40 = v18;
      v39 = "FunctionExit";
      v38 = v29;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v18,
        byte_255559,
        v18,
        &v38,
        &v39,
        (int)&v40,
        &v41);
    }
    if ( !ClipboardData )
    {
      v20 = UserGetLastError();
      v21 = (int)v20 < 0;
      if ( (int)v20 > 0 )
        v21 = 1;
      if ( v21 && (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 1LL) )
      {
        v22 = UserGetLastError();
        v23 = (unsigned int)v22;
        if ( (int)v22 > 0 )
          v23 = (unsigned __int16)v22 | 0x80070000;
        v37 = v61;
        v36 = v23;
        v35 = "FunctionExit";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v23,
          byte_255519,
          v23,
          v23,
          &v35,
          (int)&v36,
          &v37);
      }
    }
  }
  else
  {
    if ( (unsigned int)dword_266258 > 5 && _tlgKeywordOn(&dword_266258, 0x400000000000LL) )
    {
      v31[0] = 1;
      v31[1] = 0;
      v48 = v2;
      v47 = -2147024891;
      v46 = "UnsupportedFormatForLowBoxApp";
      v45 = v31;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v9,
        byte_255559,
        v9,
        &v45,
        &v46,
        (int)&v47,
        &v48);
    }
    if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 1LL) )
    {
      v44 = v2;
      v43 = -2147024891;
      v42 = "UnsupportedFormatForLowBoxApp";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v10,
        byte_255519,
        v10,
        v10,
        &v42,
        (int)&v43,
        &v44);
    }
    ClipboardData = 0;
    UserSetLastError((struct _NT_TIB *)5);
  }
LABEL_54:
  UserSessionSwitchLeaveCrit();
  return ClipboardData;
}
