/*
 * XREFs of _TppCallbackEpilog@4 @ 0x4B2B6183
 * Callers:
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _TppCallbackCheckThreadAfterCallback@4 @ 0x4B2B638B (_TppCallbackCheckThreadAfterCallback@4.c)
 *     _TppWorkCallbackEpilog@4 @ 0x4B2B68C0 (_TppWorkCallbackEpilog@4.c)
 *     _TppAlpcpCallbackEpilog@4 @ 0x4B2B6DA0 (_TppAlpcpCallbackEpilog@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _LdrUnloadDll@4 @ 0x4B2CCD40 (_LdrUnloadDll@4.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtReleaseSemaphore@12 @ 0x4B2F2A00 (_NtReleaseSemaphore@12.c)
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 *     _ZwReleaseMutant@8 @ 0x4B2F2B80 (_ZwReleaseMutant@8.c)
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 */

void *__thiscall TppCallbackEpilog(void *this)
{
  void *v1; // edi
  unsigned int v2; // eax
  unsigned int v3; // ecx
  int v4; // ecx
  int v5; // eax
  void (__thiscall *v6)(_DWORD, int); // esi
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edi
  unsigned int v13; // esi
  signed __int64 v14; // rax
  int v15; // eax
  void *v16; // eax
  volatile signed __int64 *v17; // edi
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // esi
  signed __int64 v21; // rax
  NTSTATUS v22; // esi
  NTSTATUS v23; // esi
  unsigned int v24; // eax
  unsigned int v25; // eax
  size_t v26; // [esp-4h] [ebp-84h]
  size_t v27; // [esp-4h] [ebp-84h]
  unsigned int v28; // [esp+10h] [ebp-70h]
  unsigned int v29; // [esp+10h] [ebp-70h]
  int v30; // [esp+14h] [ebp-6Ch]
  unsigned int v31; // [esp+14h] [ebp-6Ch]
  int v32; // [esp+18h] [ebp-68h]
  volatile signed __int64 *v33; // [esp+18h] [ebp-68h]
  int v35; // [esp+20h] [ebp-60h]
  int WorkerFactoryInformation; // [esp+24h] [ebp-5Ch] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [esp+28h] [ebp-58h] BYREF

  v1 = this;
  TppCallbackCheckThreadAfterCallback(this);
  while ( 1 )
  {
    v2 = *((_DWORD *)v1 + 20);
    if ( !v2 )
      break;
    _BitScanForward(&v3, v2);
    *((_DWORD *)v1 + 20) = v2 ^ (1 << v3);
    switch ( v3 )
    {
      case 0u:
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)v1 + 28));
        *((_DWORD *)v1 + 28) = 0;
        continue;
      case 1u:
        v22 = ZwReleaseMutant(*((HANDLE *)v1 + 22), 0);
        if ( v22 < 0 )
        {
          LODWORD(v26) = 80;
          memset(&ExceptionRecord, 0, v26);
          v24 = *((_DWORD *)v1 + 22);
          ExceptionRecord.ExceptionCode = -1073740019;
LABEL_35:
          ExceptionRecord.NumberParameters = 4;
          ExceptionRecord.ExceptionInformation[2] = v24;
          ExceptionRecord.ExceptionInformation[3] = v22;
LABEL_36:
          LODWORD(v27) = 152;
          ExceptionRecord.ExceptionInformation[0] = *((_DWORD *)v1 + 12);
          ExceptionRecord.ExceptionInformation[1] = *((_DWORD *)v1 + 13);
          memset(v1, 0, v27);
          RtlRaiseException(&ExceptionRecord);
        }
        *((_DWORD *)v1 + 22) = 0;
        break;
      case 2u:
        v22 = NtSetEvent(*((HANDLE *)v1 + 21), 0);
        if ( v22 < 0 )
        {
          LODWORD(v26) = 80;
          memset(&ExceptionRecord, 0, v26);
          v24 = *((_DWORD *)v1 + 21);
          ExceptionRecord.ExceptionCode = -1073740021;
          goto LABEL_35;
        }
        *((_DWORD *)v1 + 21) = 0;
        break;
      case 3u:
        v23 = NtReleaseSemaphore(*((HANDLE *)v1 + 23), *((_DWORD *)v1 + 24), 0);
        if ( v23 < 0 )
        {
          LODWORD(v26) = 80;
          memset(&ExceptionRecord, 0, v26);
          ExceptionRecord.ExceptionInformation[2] = *((_DWORD *)v1 + 23);
          v25 = *((_DWORD *)v1 + 24);
          ExceptionRecord.ExceptionCode = -1073740020;
          ExceptionRecord.NumberParameters = 5;
          ExceptionRecord.ExceptionInformation[3] = v25;
          ExceptionRecord.ExceptionInformation[4] = v23;
          goto LABEL_36;
        }
        *((_DWORD *)v1 + 23) = 0;
        *((_DWORD *)v1 + 24) = 0;
        continue;
      case 4u:
        v8 = *((_DWORD *)v1 + 27);
        v35 = *((_DWORD *)v1 + 9);
        v9 = *((_DWORD *)v1 + 18);
        v30 = v8;
        v32 = v9;
        if ( v9 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 248));
          _InterlockedDecrement((volatile signed __int32 *)(v9 + 252));
          v17 = (volatile signed __int64 *)(v9 + 8);
          v18 = *(_DWORD *)(v9 + 8);
          v19 = *(_DWORD *)(v9 + 12);
          v31 = v19;
          do
          {
            v20 = v18;
            v29 = v19;
            v21 = _InterlockedCompareExchange64(
                    v17,
                    __SPAIR64__(v31, v18 ^ (unsigned __int16)(v18 ^ (v18 - 1))),
                    __SPAIR64__(v19, v18));
            v18 = v21;
            v19 = HIDWORD(v21);
            v31 = HIDWORD(v21);
          }
          while ( __PAIR64__(v18, HIDWORD(v21)) != __PAIR64__(v20, v29) );
          v15 = v32;
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_DWORD *)(v8 + 92) + 248));
          _InterlockedDecrement((volatile signed __int32 *)(*(_DWORD *)(v8 + 92) + 252));
          v10 = *(_DWORD *)(v8 + 92);
          v33 = (volatile signed __int64 *)(v10 + 8);
          v11 = *(_DWORD *)(v10 + 8);
          v12 = *(_DWORD *)(v10 + 12);
          do
          {
            v13 = v11;
            v28 = v12;
            v14 = _InterlockedCompareExchange64(
                    v33,
                    __SPAIR64__(v12, v11 ^ (unsigned __int16)(v11 ^ (v11 - 1))),
                    __SPAIR64__(v12, v11));
            v12 = HIDWORD(v14);
            v11 = v14;
          }
          while ( __PAIR64__(v14, HIDWORD(v14)) != __PAIR64__(v13, v28) );
          v15 = *(_DWORD *)(v30 + 92);
        }
        v16 = *(void **)(v15 + 36);
        v1 = this;
        if ( v35 == 2 )
        {
          WorkerFactoryInformation = 0;
          ZwSetInformationWorkerFactory(v16, WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
        }
        continue;
      case 5u:
        TppBarrierAdjust(0);
        *((_DWORD *)v1 + 26) = 0;
        continue;
      case 6u:
        TppBarrierAdjust(0);
        continue;
      case 7u:
        v22 = LdrUnloadDll(*((PVOID *)v1 + 29));
        if ( v22 < 0 )
        {
          LODWORD(v26) = 80;
          memset(&ExceptionRecord, 0, v26);
          v24 = *((_DWORD *)v1 + 29);
          ExceptionRecord.ExceptionCode = -1073740018;
          goto LABEL_35;
        }
        *((_DWORD *)v1 + 29) = 0;
        continue;
      case 8u:
        LdrUnloadDll(*((PVOID *)v1 + 25));
        *((_DWORD *)v1 + 25) = 0;
        continue;
      case 9u:
        v4 = *((_DWORD *)v1 + 27);
        *((_DWORD *)v1 + 27) = 0;
        v5 = *(_DWORD *)(v4 + 4);
        v6 = *(void (__thiscall **)(_DWORD, int))(v5 + 4);
        if ( (char *)v6 == (char *)TppWorkCallbackEpilog )
        {
          TppWorkCallbackEpilog(v4);
        }
        else if ( (char *)v6 == (char *)TppAlpcpCallbackEpilog )
        {
          TppAlpcpCallbackEpilog(v4);
        }
        else
        {
          v6(*(_DWORD *)(v5 + 4), v4);
        }
        continue;
      default:
        continue;
    }
  }
  LODWORD(v26) = 80;
  return memset(v1, 0, v26);
}
