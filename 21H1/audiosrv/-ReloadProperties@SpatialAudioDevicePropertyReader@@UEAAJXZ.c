/*
 * XREFs of ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x18001D640
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x18001C160 (-LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z.c)
 *     ?LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x18001C200 (-LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::ReloadProperties(SpatialAudioDevicePropertyReader *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  int DeviceProperties; // eax
  __int16 v7; // ax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  int v16; // esi
  void *v17; // rax
  void *v18; // rax
  int v19; // eax
  __m128 v20; // xmm1
  __m128 v21; // xmm2
  __m128 v22; // xmm3
  __int64 v24; // [rsp+70h] [rbp+30h] BYREF
  __int64 v25; // [rsp+78h] [rbp+38h] BYREF
  __int64 v26; // [rsp+80h] [rbp+40h] BYREF
  __int64 v27; // [rsp+88h] [rbp+48h] BYREF

  LODWORD(v24) = 1;
  *((_DWORD *)this + 128) = 0;
  *((_DWORD *)this + 106) = 0;
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    _aligned_free(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    _aligned_free(v3);
    *((_QWORD *)this + 7) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 63);
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v4);
  *((_QWORD *)this + 63) = 0LL;
  DeviceProperties = SpatialAudioDevicePropertyReader::LoadDeviceProperties(this, (int *)&v24);
  if ( DeviceProperties < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      goto LABEL_8;
    LODWORD(v26) = 277;
    goto LABEL_23;
  }
  DeviceProperties = SpatialAudioDevicePropertyReader::LoadDeviceSettings(this);
  if ( DeviceProperties < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      goto LABEL_8;
    LODWORD(v26) = 281;
    goto LABEL_23;
  }
  DeviceProperties = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 52) + 24LL))(*((_QWORD *)this + 52));
  if ( DeviceProperties < 0 && (unsigned int)dword_18019D4B0 > 2 )
  {
    LODWORD(v26) = 284;
LABEL_23:
    LODWORD(v25) = DeviceProperties;
    v27 = (__int64)"SpatialAudioDevicePropertyReader::ReloadProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_18019D4B0,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25);
  }
LABEL_8:
  if ( (_DWORD)v24 )
  {
    *(_OWORD *)((char *)this + 108) = MULTICHANNEL_SPATIAL_ENCODER;
    *(_QWORD *)((char *)this + 124) = 262142LL;
    *(_OWORD *)((char *)this + 134) = xmmword_180161120;
    *((_WORD *)this + 66) = 0;
    *(_OWORD *)((char *)this + 150) = xmmword_180161130;
    *(_OWORD *)((char *)this + 166) = xmmword_180161140;
    *(_OWORD *)((char *)this + 182) = xmmword_180161150;
    *(_OWORD *)((char *)this + 198) = xmmword_180161160;
    *(_OWORD *)((char *)this + 214) = xmmword_180161170;
    *(_OWORD *)((char *)this + 230) = xmmword_180161180;
    *(_DWORD *)((char *)this + 246) = 0;
    v7 = *((_WORD *)this + 124);
    v8 = *(_OWORD *)((char *)this + 120);
    *(_OWORD *)((char *)this + 250) = *(_OWORD *)((char *)this + 104);
    v9 = *(_OWORD *)((char *)this + 136);
    *(_OWORD *)((char *)this + 266) = v8;
    v10 = *(_OWORD *)((char *)this + 152);
    *(_OWORD *)((char *)this + 282) = v9;
    v11 = *(_OWORD *)((char *)this + 168);
    *(_OWORD *)((char *)this + 298) = v10;
    v12 = *(_OWORD *)((char *)this + 184);
    *(_OWORD *)((char *)this + 314) = v11;
    v13 = *(_OWORD *)((char *)this + 200);
    *(_OWORD *)((char *)this + 330) = v12;
    v14 = *(_OWORD *)((char *)this + 216);
    *(_OWORD *)((char *)this + 346) = v13;
    v15 = *(_OWORD *)((char *)this + 232);
    *(_OWORD *)((char *)this + 362) = v14;
    *(_OWORD *)((char *)this + 378) = v15;
    *((_WORD *)this + 197) = v7;
  }
  v16 = -2147024882;
  v17 = _aligned_malloc(0x110uLL, 0x10uLL);
  *((_QWORD *)this + 6) = v17;
  if ( v17 )
    v16 = (*(__int64 (__fastcall **)(_QWORD, char *, void *, __int64))(**((_QWORD **)this + 50) + 24LL))(
            *((_QWORD *)this + 50),
            (char *)this + 134,
            v17,
            272LL);
  v18 = _aligned_malloc(0x110uLL, 0x10uLL);
  *((_QWORD *)this + 7) = v18;
  if ( v18 )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, char *, void *, __int64))(**((_QWORD **)this + 50) + 24LL))(
            *((_QWORD *)this + 50),
            (char *)this + 280,
            v18,
            272LL);
    v16 = v19;
    if ( v19 < 0 )
    {
      if ( (unsigned int)dword_18019D4B0 > 2 )
      {
        LODWORD(v24) = v19;
        LODWORD(v25) = 425;
        v26 = (__int64)"SpatialAudioDevicePropertyReader::AllocatePositionTable";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_18019D4B0,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24);
      }
    }
    else
    {
      v20 = (__m128)*((unsigned int *)this + 71);
      v21 = (__m128)*((unsigned int *)this + 72);
      v20.m128_f32[0] = v20.m128_f32[0] * 0.5;
      v21.m128_f32[0] = v21.m128_f32[0] * 0.5;
      v22 = _mm_unpacklo_ps(_mm_unpacklo_ps(v20, v21), (__m128)0LL);
      *(__m128 *)*((_QWORD *)this + 7) = _mm_add_ps(*(__m128 *)*((_QWORD *)this + 7), v22);
      *(__m128 *)(*((_QWORD *)this + 7) + 16LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 16LL), v22);
      *(__m128 *)(*((_QWORD *)this + 7) + 32LL) = _mm_add_ps(v22, *(__m128 *)(*((_QWORD *)this + 7) + 32LL));
      *(__m128 *)(*((_QWORD *)this + 7) + 48LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 48LL), v22);
      *(__m128 *)(*((_QWORD *)this + 7) + 64LL) = _mm_add_ps(v22, *(__m128 *)(*((_QWORD *)this + 7) + 64LL));
      *(__m128 *)(*((_QWORD *)this + 7) + 80LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 80LL), v22);
      *(__m128 *)(*((_QWORD *)this + 7) + 96LL) = _mm_add_ps(v22, *(__m128 *)(*((_QWORD *)this + 7) + 96LL));
      *(__m128 *)(*((_QWORD *)this + 7) + 112LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 112LL), v22);
      *(__m128 *)(*((_QWORD *)this + 7) + 128LL) = _mm_add_ps(v22, *(__m128 *)(*((_QWORD *)this + 7) + 128LL));
      *(__m128 *)(*((_QWORD *)this + 7) + 144LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 144LL), v22);
      *(__m128 *)(*((_QWORD *)this + 7) + 160LL) = _mm_add_ps(v22, *(__m128 *)(*((_QWORD *)this + 7) + 160LL));
      *(__m128 *)(*((_QWORD *)this + 7) + 176LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 176LL), v22);
      *(__m128 *)(*((_QWORD *)this + 7) + 192LL) = _mm_add_ps(v22, *(__m128 *)(*((_QWORD *)this + 7) + 192LL));
      *(__m128 *)(*((_QWORD *)this + 7) + 208LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 208LL), v22);
      *(__m128 *)(*((_QWORD *)this + 7) + 224LL) = _mm_add_ps(v22, *(__m128 *)(*((_QWORD *)this + 7) + 224LL));
      *(__m128 *)(*((_QWORD *)this + 7) + 240LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 240LL), v22);
      *(__m128 *)(*((_QWORD *)this + 7) + 256LL) = _mm_add_ps(v22, *(__m128 *)(*((_QWORD *)this + 7) + 256LL));
    }
  }
  if ( v16 < 0 && (unsigned int)dword_18019D4B0 > 2 )
  {
    LODWORD(v24) = v16;
    LODWORD(v25) = 302;
    v26 = (__int64)"SpatialAudioDevicePropertyReader::ReloadProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_18019D4B0,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24);
  }
  return (unsigned int)v16;
}
