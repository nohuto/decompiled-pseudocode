/*
 * XREFs of ?HampAppInterruptiveUIChangeWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180022F40
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180023100 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18007FB8C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$.c)
 */

void __fastcall HampAppInterruptiveUIChangeWorker(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_WORK *a3)
{
  DWORD v4; // esi
  _QWORD *Value; // rdi
  unsigned int v6; // ecx
  int v7; // edi
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  DWORD v10; // ebx
  __int64 v11; // rcx
  char **v12; // [rsp+20h] [rbp-E8h]
  char *v13; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v14[144]; // [rsp+60h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  while ( 1 )
  {
    v4 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        __int2c();
      *Value |= 0x20uLL;
      ++Value[6];
    }
    RtlAcquireSRWLockExclusive(a2 + 144);
    a2[146] = GetCurrentThreadId();
    v6 = a2[152];
    v7 = (v6 >> 18) & 1;
    if ( ((v6 >> 17) & 1) == v7 )
      break;
    a2[152] = v6 & 0xFFFDFFFF | (v7 << 17);
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)a2);
    if ( (unsigned int)dword_1800B3218 > 4
      && (byte_1800B3228 & 0x40) != 0
      && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 88LL) + 160LL);
      v13 = (char *)(a2 + 24);
      v12 = &v13;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v11,
        &unk_1800A1816);
    }
    v8 = *((_QWORD *)a2 + 11);
    v9 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(v9 - 1264) & 1) != 0 )
    {
      LODWORD(v12) = v7;
      RmRpsNotifyApplicationInterruptiveUIChange(
        *(_QWORD *)(v9 - 1272),
        a2 + 24,
        v8 + 228,
        *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v8 + 88) + 160LL) + 88LL),
        v12);
    }
  }
  a2[152] = v6 & 0xFFF7FFFF;
  HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)a2);
  CemRcObjectDereference(a2);
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
}
