/*
 * XREFs of ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x1800102F0
 * Callers:
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180010720 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18000FE60 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x1800105A0 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026310 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x180072004 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

void __fastcall ExecutionModel::ResourceSet::PerformReleaseResources(ExecutionModel::ResourceSet *this)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rcx
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r9
  _QWORD *i; // rdx
  __int64 v10; // r8
  _OWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  DWORD v16; // ebx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v27[24]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+88h] [rbp-90h]
  __int64 v29; // [rsp+A0h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+C0h] [rbp-58h] BYREF
  __int64 *v31; // [rsp+E0h] [rbp-38h]
  __int64 v32; // [rsp+E8h] [rbp-30h]

  if ( (*((_BYTE *)this + 1284) & 1) != 0 )
  {
    if ( dword_1800B31E0 )
    {
      v16 = GetTickCount() - *((_DWORD *)this + 443);
      RmpSystemMemoryMetricsQuery(
        *(struct _RM_PARTITION **)(*((_QWORD *)this + 164) + 64LL),
        (struct _RM_SYSTEM_MEMORY_METRICS *)v27);
      if ( (unsigned int)dword_1800B31E0 > 4 )
      {
        if ( tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
        {
          v19 = *((_QWORD *)this + 219);
          v22 = v16;
          v23 = v28;
          v24 = v29;
          v25 = v19;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v19,
            (unsigned int)&unk_18009D38C,
            v17,
            v18,
            (__int64)&v25,
            (__int64)&v24,
            (__int64)&v23,
            (__int64)&v22);
        }
      }
    }
  }
  v2 = (_QWORD *)*((_QWORD *)this + 164);
  v3 = v2 + 10;
  if ( v2[10] && v2[11] )
  {
    v20 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 )
      goto LABEL_26;
    v21 = (_QWORD *)v2[11];
    if ( (_QWORD *)*v21 != v3 )
      goto LABEL_26;
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    *(_OWORD *)v3 = 0LL;
  }
  v4 = (__int64 *)v2[6];
  RmpObjectRelease(v2);
  v5 = *v4;
  v4[164] = 0LL;
  (*(void (__fastcall **)(__int64 *))(v5 + 16))(v4);
  v6 = v2[8];
  v2[6] = 0LL;
  v7 = *(_QWORD *)(v6 + 24) + 536LL;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(v6 + 24) + 552LL);
  v8 = v2[1] & (-1LL << (*(_DWORD *)(v7 + 4) & 0x1F));
  for ( i = (_QWORD *)(*(_QWORD *)(v7 + 8)
                     + 8
                     * ((HIBYTE(v8)
                       + 37
                       * (BYTE6(v8)
                        + 37
                        * (BYTE5(v8)
                         + 37
                         * (BYTE4(v8)
                          + 37
                          * ((((_DWORD)v2[1] & (unsigned int)(-1 << (*(_DWORD *)(v7 + 4) & 0x1F))) >> 24)
                           + 37
                           * ((unsigned __int8)(((_DWORD)v2[1] & (unsigned int)(-1 << (*(_DWORD *)(v7 + 4) & 0x1F))) >> 16)
                            + 37
                            * (37 * ((unsigned __int8)v8 + 11623883)
                             + (unsigned __int8)((unsigned __int16)(v2[1] & (-1 << (*(_DWORD *)(v7 + 4) & 0x1F))) >> 8)))))))) & ((*(_DWORD *)(v7 + 4) >> 5) - 1)));
        (*i & 1) == 0;
        i = (_QWORD *)*i )
  {
    if ( (_QWORD *)*i == v2 )
    {
      *i = *v2;
      --*(_DWORD *)v7;
      *v2 |= 0x8000000000000002uLL;
      break;
    }
  }
  *((_DWORD *)v2 + 6) |= 0x80000000;
  RtlReleaseSRWLockExclusive(v7 + 16);
  RmpObjectRelease(v2);
  *((_QWORD *)this + 164) = 0LL;
  ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(this);
  v10 = *((_QWORD *)this + 165) + 24LL * *((int *)this + 332);
  v11 = (_OWORD *)((char *)this + 1296);
  v12 = *((_QWORD *)this + 162);
  if ( *(ExecutionModel::ResourceSet **)(v12 + 8) != (ExecutionModel::ResourceSet *)((char *)this + 1296)
    || (v13 = (_QWORD *)*((_QWORD *)this + 163), (_OWORD *)*v13 != v11) )
  {
LABEL_26:
    __fastfail(3u);
  }
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  *v11 = 0LL;
  --*(_DWORD *)(v10 + 1128);
  v14 = *(_QWORD *)this;
  *((_DWORD *)this + 332) = 2;
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(v14 + 16))(this);
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 16LL))(this);
  v15 = *((_QWORD *)this + 214);
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    *((_QWORD *)this + 214) = 0LL;
  }
  *((_OWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 218) = 0LL;
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 9) != 0 && (qword_1800B31F8 & 9) == qword_1800B31F8 )
  {
    v26 = *((_QWORD *)this + 219);
    v32 = 8LL;
    v31 = &v26;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B31E0, (int)&dword_18009D100, 0, 0, 3u, &v30);
  }
  *((_BYTE *)this + 12) = 0;
}
