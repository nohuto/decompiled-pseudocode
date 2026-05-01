/*
 * XREFs of ?HamSrvPackageGetDebugMode@@YAEPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXK@Z @ 0x180024DD0
 * Callers:
 *     PsmHamGetPackageDebugMode @ 0x180024DA0 (PsmHamGetPackageDebugMode.c)
 * Callees:
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180025030 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800782A4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSid@U_SID@@@@U-$_tlgWrapperByVal@$.c)
 */

_BOOL8 __fastcall HamSrvPackageGetDebugMode(struct _HOST_ACTIVITY_MANAGER *a1, char *a2, void *a3, int a4)
{
  DWORD v8; // ebx
  _WORD *v9; // rax
  __int64 v10; // rdx
  __int16 v11; // cx
  __int64 v12; // rcx
  struct _HAM_PACKAGE *v13; // rsi
  DWORD v14; // edi
  _QWORD *Value; // rbx
  bool v16; // bl
  _QWORD *v17; // rax
  DWORD v19; // edi
  _BYTE v21[132]; // [rsp+60h] [rbp-1B8h] BYREF
  _BYTE DestinationSid[68]; // [rsp+E4h] [rbp-134h] BYREF
  int v23; // [rsp+128h] [rbp-F0h]
  _BYTE TlsValue[144]; // [rsp+130h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+1C0h] [rbp-58h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_18009F605, 0, 0, 2u, &v25);
  memset_0(TlsValue, 0, 0x88uLL);
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v8, TlsValue);
  }
  memset_0(v21, 0, 0xCCuLL);
  v9 = v21;
  v10 = 65LL;
  while ( v10 != -2147483581 )
  {
    v11 = *(_WORD *)((char *)v9 + a2 - v21);
    if ( !v11 )
      break;
    *v9++ = v11;
    if ( !--v10 )
    {
      --v9;
      break;
    }
  }
  *v9 = 0;
  RtlCopySid(0x44u, DestinationSid, a3);
  v23 = a4;
  v13 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v21);
  if ( v13 )
  {
    v14 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v14) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *Value |= 0x40uLL;
      ++Value[7];
    }
    RtlAcquireSRWLockShared((char *)v13 + 304);
    v16 = (*((_DWORD *)v13 + 85) & 2) != 0;
    if ( HampLockTrackerId != -1 )
    {
      v17 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v17 & 0x40) == 0 )
        __int2c();
      if ( v17[7]-- == 1LL )
        *v17 &= ~0x40uLL;
    }
    RtlReleaseSRWLockShared((char *)v13 + 304);
    CemRcObjectDereference(v13);
  }
  else
  {
    v16 = 0;
  }
  v19 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v19, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>,_tlgWrapperByVal<1>>(
      v12,
      &unk_18009F218);
  return v16;
}
