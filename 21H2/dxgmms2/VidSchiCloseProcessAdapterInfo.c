/*
 * XREFs of VidSchiCloseProcessAdapterInfo @ 0x1C0097E38
 * Callers:
 *     VidSchTerminateDevice @ 0x1C0098CB0 (VidSchTerminateDevice.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0014BA0 (_tlgKeywordOn.c)
 *     ??_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0018D10 (--_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@6666@Z @ 0x1C0033830 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapSz@D@@U-$_.c)
 */

__int64 __fastcall VidSchiCloseProcessAdapterInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v6; // rsi
  _DWORD *v7; // r8
  unsigned int i; // r14d
  __int64 v9; // rbx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  PVOID *v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // eax
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  __int64 v23; // rcx
  __int64 v24; // r9
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // ecx
  __int64 v46; // rcx
  int v47; // [rsp+70h] [rbp-29h] BYREF
  int v48; // [rsp+74h] [rbp-25h] BYREF
  int v49; // [rsp+78h] [rbp-21h] BYREF
  void *v50; // [rsp+80h] [rbp-19h] BYREF
  void *v51; // [rsp+88h] [rbp-11h] BYREF
  __int64 v52; // [rsp+90h] [rbp-9h] BYREF
  __int64 v53; // [rsp+98h] [rbp-1h] BYREF
  __int64 v54; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v55[9]; // [rsp+A8h] [rbp+Fh] BYREF
  int v56; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v57; // [rsp+108h] [rbp+6Fh] BYREF
  int v58; // [rsp+110h] [rbp+77h] BYREF
  int v59; // [rsp+118h] [rbp+7Fh] BYREF

  v2 = *(unsigned int *)(a2 + 4);
  v3 = a1 + 2664;
  ExAcquirePushLockExclusiveEx(a1 + 2664, 0LL);
  v6 = (unsigned int)v2;
  v7 = *(_DWORD **)(*(_QWORD *)(a1 + 32) + 8 * v2);
  --*v7;
  if ( !**(_DWORD **)(*(_QWORD *)(a1 + 32) + 8 * v2) )
  {
    for ( i = 0; i < *(_DWORD *)(a2 + 40); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6) + 8 * v9 + 88) = 0LL )
    {
      v9 = i;
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6) + 8LL * i++ + 88), 0);
    }
    v10 = 0;
    if ( *(_DWORD *)(a2 + 80) )
    {
      do
      {
        if ( *(_DWORD *)(a1 + 60) )
        {
          v23 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6);
          v24 = *(_QWORD *)(v23 + 8);
          v25 = *(_DWORD *)(v23 + 80);
          v26 = v24 + 8LL * v10;
          if ( v10 >= v25 )
            v26 = *(_QWORD *)(v23 + 8);
          if ( *(_DWORD *)(*(_QWORD *)v26 + 224LL) )
          {
            v27 = 8LL * v10;
            if ( v10 >= v25 )
            {
              v28 = *(_QWORD *)(v23 + 8);
            }
            else
            {
              v28 = v27 + v24;
              v24 += v27;
            }
            if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v28 + 224LL) - *(_DWORD *)(*(_QWORD *)v24 + 228LL)) <= 0xA )
            {
              if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000010LL) )
              {
                v40 = *(_QWORD *)(a1 + 32);
                v56 = *(_DWORD *)(a1 + 60);
                v57 = v10;
                v58 = v39;
                v41 = *(_QWORD *)(v40 + 8 * v6);
                v42 = *(_QWORD *)(v41 + 8);
                if ( v10 < *(_DWORD *)(v41 + 80) )
                  v42 += v38;
                v48 = *(_DWORD *)(*(_QWORD *)v42 + 228LL);
                v43 = *(_QWORD *)(v40 + 8 * v6);
                v44 = *(_QWORD *)(v43 + 8);
                if ( v10 < *(_DWORD *)(v43 + 80) )
                  v44 += v38;
                v45 = *(_DWORD *)(*(_QWORD *)v44 + 224LL);
                v51 = *(void **)(a1 + 2648);
                v49 = v45;
                v46 = *(_QWORD *)(a2 + 16);
                v50 = *(void **)(v46 + 1616);
                v54 = *(_QWORD *)(v46 + 404);
                v55[0] = 0x2000000LL;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  v46,
                  byte_1C0051AB1,
                  v38,
                  v39,
                  (__int64)v55,
                  (__int64)&v54,
                  (unsigned __int16 **)&v50,
                  &v51,
                  (__int64)&v49,
                  (__int64)&v48,
                  (__int64)&v58,
                  (__int64)&v57,
                  (__int64)&v56);
              }
            }
            else if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000010LL) )
            {
              v31 = *(_QWORD *)(a1 + 32);
              v56 = *(_DWORD *)(a1 + 60);
              v57 = v10;
              v58 = v30;
              v32 = *(_QWORD *)(v31 + 8 * v6);
              v33 = *(_QWORD *)(v32 + 8);
              if ( v10 < *(_DWORD *)(v32 + 80) )
                v33 += v29;
              v59 = *(_DWORD *)(*(_QWORD *)v33 + 228LL);
              v34 = *(_QWORD *)(v31 + 8 * v6);
              v35 = *(_QWORD *)(v34 + 8);
              if ( v10 < *(_DWORD *)(v34 + 80) )
                v35 += v29;
              v36 = *(_DWORD *)(*(_QWORD *)v35 + 224LL);
              v50 = *(void **)(a1 + 2648);
              v47 = v36;
              v37 = *(_QWORD *)(a2 + 16);
              v51 = *(void **)(v37 + 1616);
              v52 = *(_QWORD *)(v37 + 404);
              v53 = 0x2000000LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v37,
                byte_1C0051B7D,
                v29,
                v30,
                (__int64)&v53,
                (__int64)&v52,
                (unsigned __int16 **)&v51,
                &v50,
                (__int64)&v47,
                (__int64)&v59,
                (__int64)&v58,
                (__int64)&v57,
                (__int64)&v56);
            }
          }
        }
        v11 = *(_QWORD *)(a1 + 32);
        v12 = *(_QWORD *)(v11 + 8 * v6);
        v13 = *(_DWORD *)(v12 + 80);
        v14 = *(_QWORD *)(v12 + 8);
        v15 = v14 + 8LL * v10;
        if ( v10 >= v13 )
          v15 = v14;
        if ( *(_QWORD *)(*(_QWORD *)v15 + 216LL) )
        {
          if ( v10 < v13 )
            v14 += 8LL * v10;
          PcwCloseInstance(*(PPCW_INSTANCE *)(*(_QWORD *)v14 + 216LL));
          v11 = *(_QWORD *)(a1 + 32);
        }
        v16 = *(_QWORD *)(v11 + 8 * v6);
        v17 = (PVOID *)(*(_QWORD *)(v16 + 8) + 8LL * v10);
        if ( v10 >= *(_DWORD *)(v16 + 80) )
          v17 = *(PVOID **)(v16 + 8);
        ExFreePoolWithTag(*v17, 0);
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6);
        v19 = *(_DWORD *)(v18 + 80);
        v20 = *(_QWORD **)(v18 + 8);
        v21 = &v20[v10];
        if ( v10 >= v19 )
          v21 = v20;
        ++v10;
        *v21 = 0LL;
      }
      while ( v10 < *(_DWORD *)(a2 + 80) );
      v3 = a1 + 2664;
    }
    VIDSCH_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(*(VIDSCH_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(a1 + 32)
                                                                                              + 8 * v6));
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 32) + 8 * v6), 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6) = 0LL;
  }
  return ExReleasePushLockExclusiveEx(v3, 0LL);
}
