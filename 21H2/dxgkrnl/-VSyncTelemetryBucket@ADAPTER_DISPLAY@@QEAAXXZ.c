/*
 * XREFs of ?VSyncTelemetryBucket@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C004596C
 * Callers:
 *     ?VSyncTelemetryTimerDpc@ADAPTER_DISPLAY@@SAXPEAU_KDPC@@PEAX11@Z @ 0x1C0045CD0 (-VSyncTelemetryTimerDpc@ADAPTER_DISPLAY@@SAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U_tlgWrapperBinary@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$03@@444AEBU_tlgWrapperBinary@@5@Z @ 0x1C00454E0 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U_tlgWrapperBinary@@U3.c)
 */

void __fastcall ADAPTER_DISPLAY::VSyncTelemetryBucket(ADAPTER_DISPLAY *this)
{
  unsigned __int64 v2; // rdi
  char v3; // r9
  _DWORD *v4; // rcx
  int v5; // r8d
  int v6; // edx
  __int64 v7; // r10
  int v8; // edx
  __int64 v9; // rdx
  unsigned int v10; // r9d
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r10d
  __int64 v14; // rcx
  __int16 v15; // ax
  void *v16; // rcx
  void *v17; // rcx
  int v18; // [rsp+70h] [rbp-29h] BYREF
  int v19; // [rsp+74h] [rbp-25h] BYREF
  int v20; // [rsp+78h] [rbp-21h] BYREF
  __int64 v21; // [rsp+80h] [rbp-19h] BYREF
  __int16 v22; // [rsp+88h] [rbp-11h]
  __int64 v23; // [rsp+90h] [rbp-9h] BYREF
  __int16 v24; // [rsp+98h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp+7h] BYREF
  __int16 v26; // [rsp+100h] [rbp+67h] BYREF
  __int16 v27; // [rsp+108h] [rbp+6Fh] BYREF
  __int16 v28; // [rsp+110h] [rbp+77h] BYREF
  int v29; // [rsp+118h] [rbp+7Fh] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)this + 2) + 4064LL), &LockHandle);
  if ( ++*((_DWORD *)this + 182) >= 0x384u || (v3 = 0, (unsigned int)(v2 - *((_DWORD *)this + 183)) > 0xE10) )
    v3 = 1;
  v4 = (_DWORD *)*((_QWORD *)this + 127);
  if ( v4 )
  {
    v5 = *((_DWORD *)this + 244);
    v6 = *((_DWORD *)this + 242);
    if ( v5 == v6 )
    {
      if ( !*((_DWORD *)this + 236) )
        goto LABEL_14;
      if ( !v6 )
      {
        *v4 &= 0xFC03FFFF;
        **((_DWORD **)this + 127) ^= (**((_DWORD **)this + 127) ^ *((_DWORD *)this + 182)) & 0x3FFFF;
        *((_DWORD *)this + 243) = 1;
        goto LABEL_14;
      }
      v7 = *((unsigned int *)this + 243);
      v8 = v4[(unsigned int)(v7 - 1)];
      if ( (v8 & 0x3FC0000) == 0 )
      {
        v4[(unsigned int)(v7 - 1)] = v8 ^ (v8 ^ (v8 + 1)) & 0x3FFFF;
        goto LABEL_14;
      }
      v4[v7] &= 0xFC03FFFF;
      *(_DWORD *)(*((_QWORD *)this + 127) + 4LL * *((unsigned int *)this + 243)) = *(_DWORD *)(*((_QWORD *)this + 127)
                                                                                             + 4LL
                                                                                             * *((unsigned int *)this
                                                                                               + 243)) & 0xFFFC0000 | 1;
    }
    else
    {
      v4[*((unsigned int *)this + 243)] ^= (v4[*((unsigned int *)this + 243)] ^ ((v6 - v5) << 18)) & 0x3FC0000;
      *(_DWORD *)(*((_QWORD *)this + 127) + 4LL * *((unsigned int *)this + 243)) ^= (*((_DWORD *)this + 245) ^ *(_DWORD *)(*((_QWORD *)this + 127) + 4LL * *((unsigned int *)this + 243))) & 0x3FFFF;
      *((_QWORD *)this + 122) = *((unsigned int *)this + 242);
    }
    ++*((_DWORD *)this + 243);
  }
LABEL_14:
  if ( v3 )
  {
    if ( (*((_DWORD *)this + 242) || *((_DWORD *)this + 241))
      && (unsigned int)dword_1C012F8E0 > 4
      && tlgKeywordOn((__int64)&dword_1C012F8E0, 0x400000002000LL)
      && v10 > 5
      && tlgKeywordOn((__int64)&dword_1C012F8E0, v9) )
    {
      v14 = *((_QWORD *)this + 127);
      if ( v14 )
        v15 = 4 * *((_WORD *)this + 486);
      else
        v15 = 0;
      v22 = v15;
      v23 = *((_QWORD *)this + 126);
      v21 = v14;
      v19 = v13;
      v27 = 1;
      v24 = v23 != 0 ? 0x180 : 0;
      v29 = 2 * *((_DWORD *)this + 246);
      v18 = *((_DWORD *)this + 241);
      v20 = v2 - *((_DWORD *)this + 183);
      v26 = *((_WORD *)this + 478);
      v28 = 2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary>(
        v14,
        byte_1C0097687,
        v11,
        v12,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v29,
        &v23,
        &v21);
    }
    v16 = (void *)*((_QWORD *)this + 126);
    if ( v16 )
      memset(v16, 0, 0x180uLL);
    v17 = (void *)*((_QWORD *)this + 127);
    if ( v17 )
      memset(v17, 0, 4LL * *((unsigned int *)this + 243));
    ++*((_DWORD *)this + 239);
    *(_QWORD *)((char *)this + 964) = 0LL;
    *(_QWORD *)((char *)this + 972) = 0LL;
    *((_DWORD *)this + 182) = 0;
    *((_DWORD *)this + 183) = v2;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
