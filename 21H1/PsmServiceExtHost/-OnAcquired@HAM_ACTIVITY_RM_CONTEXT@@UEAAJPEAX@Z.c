/*
 * XREFs of ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x18001EF50
 * Callers:
 *     <none>
 * Callees:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180019A40 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BB00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CA10 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@443@Z @ 0x18007F97C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@U2@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

__int64 __fastcall HAM_ACTIVITY_RM_CONTEXT::OnAcquired(HAM_ACTIVITY_RM_CONTEXT *this, void *a2)
{
  DWORD v4; // esi
  __int64 v5; // rbp
  _QWORD *Value; // rbx
  __int64 v7; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v8; // rcx
  int v9; // eax
  int v10; // esi
  __int64 v11; // rbx
  _QWORD *v12; // rax
  int v14; // r8d
  int v15; // r9d
  __int64 v17; // rdx
  int v18; // ecx
  char v19; // [rsp+50h] [rbp-58h] BYREF
  char v20; // [rsp+51h] [rbp-57h] BYREF
  _BYTE v21[6]; // [rsp+52h] [rbp-56h] BYREF
  void *v22; // [rsp+58h] [rbp-50h] BYREF
  __int64 v23; // [rsp+60h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+68h] [rbp-40h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A190B, 0, 0, 2u, &v24);
  v4 = HampLockTrackerId;
  v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 80LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v5);
  *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
  if ( a2 == *((void **)this + 2) )
  {
    v7 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v7 + 548) == 2 )
    {
      RtlQueryPerformanceCounter(*(_QWORD *)(v7 + 520) + 8LL);
      v8 = *(struct _RM_HAM_ACTIVITY_HOST **)(v7 + 80);
      *(_BYTE *)(v7 + 549) = 1;
      HampHostUpdateActivityState(v8);
      v9 = HampActTryStart(v7);
      v10 = v9;
      if ( v9 )
      {
        if ( (unsigned int)(v9 - 8) <= 6 )
          HampHostCheckQueueStateWorker(*(struct _RM_HAM_ACTIVITY_HOST **)(v7 + 80), 0);
      }
      else
      {
        v10 = 0;
      }
      if ( !v10 )
        LOBYTE(v10) = 0;
    }
    else
    {
      LOBYTE(v10) = 4;
    }
  }
  else
  {
    LOBYTE(v10) = 1;
  }
  v11 = *(_QWORD *)(*((_QWORD *)this + 1) + 80LL);
  if ( HampLockTrackerId != -1 )
  {
    v12 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v12 & 2) == 0 )
      __int2c();
    if ( v12[2]-- == 1LL )
      *v12 &= ~2uLL;
  }
  *(_DWORD *)(v11 + 8) = 0;
  RtlReleaseSRWLockExclusive(v11);
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    v17 = *((_QWORD *)this + 1);
    v18 = *(unsigned __int8 *)(v17 + 548);
    v19 = *(_BYTE *)(v17 + 549);
    v20 = v18;
    v22 = a2;
    v21[0] = v10;
    v23 = *(_QWORD *)(v17 + 40);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v18,
      (unsigned int)&unk_1800A195B,
      v14,
      v15,
      (__int64)&v23,
      (__int64)v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v22);
  }
  return 0LL;
}
