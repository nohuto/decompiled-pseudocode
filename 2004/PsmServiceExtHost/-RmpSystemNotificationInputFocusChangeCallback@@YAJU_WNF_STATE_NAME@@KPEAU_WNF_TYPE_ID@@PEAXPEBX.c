/*
 * XREFs of ?RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180009890
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180009B88 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800702B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

__int64 __fastcall RmpSystemNotificationInputFocusChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        int *a5)
{
  DWORD v7; // edi
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  int v11; // ecx
  int v12; // ebp
  unsigned int v13; // ebx
  void *v14; // rbp
  char v15; // al
  char v16; // al
  __int64 v17; // rcx
  DWORD v18; // ebx
  bool v20; // cl
  char v21; // dl
  int v22; // eax
  bool v23; // al
  bool v24[4]; // [rsp+50h] [rbp-E8h] BYREF
  int v25; // [rsp+54h] [rbp-E4h] BYREF
  int v26; // [rsp+58h] [rbp-E0h] BYREF
  int v27; // [rsp+5Ch] [rbp-DCh] BYREF
  unsigned int v28; // [rsp+60h] [rbp-D8h] BYREF
  void *v29; // [rsp+68h] [rbp-D0h] BYREF
  _BYTE TlsValue[144]; // [rsp+70h] [rbp-C8h] BYREF

  v29 = 0LL;
  memset_0(TlsValue, 0, 0x88uLL);
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, TlsValue);
  }
  RtlAcquireSRWLockExclusive(a4 + 148);
  a4[162] = GetCurrentThreadId();
  if ( a1 == WNF_SHEL_FOCUS_CHANGE )
  {
    if ( a5 )
      v10 = *a5;
    else
      v10 = 0;
    if ( v10 != a4[156] )
    {
      a4[156] = v10;
LABEL_10:
      *((_BYTE *)a4 + 644) |= 1u;
    }
  }
  else if ( a1 == WNF_HOLO_SYSTEM_DISPLAY_CONTEXT_CHANGE )
  {
    v20 = a5 && *a5 == 1;
    v21 = *((_BYTE *)a4 + 644);
    if ( v20 != ((v21 & 4) != 0) )
      *((_BYTE *)a4 + 644) = (4 * v20) | v21 & 0xFB | 1;
  }
  else
  {
    if ( a5 )
      v22 = a5[4];
    else
      v22 = 0;
    if ( v22 != a4[157] )
    {
      a4[157] = v22;
      goto LABEL_10;
    }
  }
  v11 = *((unsigned __int8 *)a4 + 644);
  if ( (v11 & 3) == 1 )
  {
    for ( LOBYTE(v11) = v11 | 2; (v11 & 1) != 0; v11 = *((unsigned __int8 *)a4 + 644) )
    {
      v12 = a4[160];
      LOBYTE(v11) = v11 & 0xFE;
      *((_BYTE *)a4 + 644) = v11;
      if ( (v11 & 4) != 0 )
        v13 = a4[157];
      else
        v13 = a4[156];
      if ( v13 != v12 )
      {
        if ( v13 && (int)RmpSystemOpenProcess(&v29, 0x2000u, v13) < 0 )
          v13 = 0;
        if ( v13 != v12 )
        {
          if ( (unsigned int)dword_1800B31E0 > 5
            && (byte_1800B31F0 & 1) != 0
            && (qword_1800B31F8 & 1) == qword_1800B31F8 )
          {
            v23 = (a4[161] & 4) != 0;
            v28 = v13;
            v24[0] = v23;
            v25 = a4[157];
            v26 = a4[156];
            v27 = a4[160];
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
              v11,
              (unsigned int)&unk_18009CD3E,
              v8,
              v9,
              (__int64)&v28,
              (__int64)&v27,
              (__int64)&v26,
              (__int64)&v25,
              (__int64)v24);
          }
          v14 = (void *)*((_QWORD *)a4 + 79);
          *((_QWORD *)a4 + 79) = v29;
          a4[160] = v13;
          a4[162] = 0;
          v29 = 0LL;
          RtlReleaseSRWLockExclusive(a4 + 148);
          if ( v14 )
            NtClose(v14);
          RtlAcquireSRWLockExclusive(a4 + 422);
          a4[424] = GetCurrentThreadId();
          v15 = *((_BYTE *)a4 + 1764);
          if ( (v15 & 4) == 0 )
          {
            v16 = v15 | 1;
            *((_BYTE *)a4 + 1764) = v16;
            if ( (v16 & 2) == 0 )
            {
              v17 = *((_QWORD *)a4 + 210);
              *((_BYTE *)a4 + 1764) = v16 | 2;
              TpPostWork(v17);
            }
          }
          a4[424] = 0;
          RtlReleaseSRWLockExclusive(a4 + 422);
          RtlAcquireSRWLockExclusive(a4 + 148);
          a4[162] = GetCurrentThreadId();
        }
      }
    }
    *((_BYTE *)a4 + 644) = v11 & 0xFD;
  }
  a4[162] = 0;
  RtlReleaseSRWLockExclusive(a4 + 148);
  v18 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v18, 0LL);
  }
  return 0LL;
}
