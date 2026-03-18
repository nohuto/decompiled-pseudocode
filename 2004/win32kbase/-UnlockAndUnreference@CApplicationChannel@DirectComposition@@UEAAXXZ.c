/*
 * XREFs of ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C001F2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C001CB20 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C01D164C (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 */

void __fastcall DirectComposition::CApplicationChannel::UnlockAndUnreference(
        DirectComposition::CApplicationChannel *this)
{
  struct DirectComposition::CrossChannelVisualData *v2; // rsi
  char v3; // al
  struct _ERESOURCE *v4; // rcx
  struct _ERESOURCE *v5; // rdi
  struct _ERESOURCE *v6; // rdi
  struct _ERESOURCE *v7; // rdi
  struct _ERESOURCE *v8; // rdi
  struct _ERESOURCE *v9; // rdi
  struct _ERESOURCE *v10; // rdi
  struct _ERESOURCE *v11; // rdi
  struct _ERESOURCE *v12; // rdi
  struct _ERESOURCE *v13; // rdi

  v2 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 49);
  if ( v2 )
  {
    v3 = *((_BYTE *)this + 240);
    if ( (v3 & 4) == 0 )
    {
      *((_BYTE *)this + 240) = v3 | 4;
      do
      {
        v4 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
        *((_QWORD *)this + 49) = 0LL;
        ExReleaseResourceLite(v4);
        KeLeaveCriticalRegion();
        do
        {
          if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 2, 1) == 1 )
          {
            v5 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(v5, 1u);
            (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, _QWORD))(*(_QWORD *)this + 48LL))(
              this,
              0LL);
            v6 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(v6, 1u);
            if ( DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
              *((_DWORD *)this + 6) = 4;
            ExReleaseResourceLite(*((PERESOURCE *)this + 4));
            KeLeaveCriticalRegion();
            ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
            KeLeaveCriticalRegion();
          }
          if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 5, 4) == 4 )
          {
            v7 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(v7, 1u);
            (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 56LL))(this);
            v8 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(v8, 1u);
            if ( !DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
              *((_DWORD *)this + 6) = 1;
            ExReleaseResourceLite(*((PERESOURCE *)this + 4));
            KeLeaveCriticalRegion();
            ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
            KeLeaveCriticalRegion();
          }
        }
        while ( *((_DWORD *)this + 6) == 1 );
        DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
          *((struct DirectComposition::CConnection **)this + 5),
          v2);
        v9 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v9, 1u);
        v2 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 49);
      }
      while ( v2 );
      *((_BYTE *)this + 240) &= ~4u;
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 4));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 2, 1) == 1 )
    {
      v10 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v10, 1u);
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, _QWORD))(*(_QWORD *)this + 48LL))(this, 0LL);
      v11 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v11, 1u);
      if ( DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
        *((_DWORD *)this + 6) = 4;
      ExReleaseResourceLite(*((PERESOURCE *)this + 4));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 5, 4) == 4 )
    {
      v12 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v12, 1u);
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 56LL))(this);
      v13 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v13, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
        *((_DWORD *)this + 6) = 1;
      ExReleaseResourceLite(*((PERESOURCE *)this + 4));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *((_DWORD *)this + 6) == 1 );
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 24LL))(this);
}
