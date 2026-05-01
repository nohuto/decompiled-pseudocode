/*
 * XREFs of ?v_PrepareAppRects@CAppArrangementSingleTransitionTarget@@EEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803C8F20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?MatchRectPillarBoxState@@YAXPEBUtagRECT@@00PEAU1@1@Z @ 0x1803C7A94 (-MatchRectPillarBoxState@@YAXPEBUtagRECT@@00PEAU1@1@Z.c)
 *     ?v_PrepareAppRects@CAppTransitionTargetBase@@MEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803C9070 (-v_PrepareAppRects@CAppTransitionTargetBase@@MEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryApp.c)
 */

void __fastcall CAppArrangementSingleTransitionTarget::v_PrepareAppRects(
        CAppArrangementSingleTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  __int64 v7; // rax
  struct tagRECT *v8; // rdi
  unsigned __int8 (__fastcall *v9)(CAppArrangementSingleTransitionTarget *); // rax
  _DWORD v10[2]; // [rsp+30h] [rbp-20h] BYREF
  struct tagRECT v11; // [rsp+38h] [rbp-18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF

  CAppTransitionTargetBase::v_PrepareAppRects(this, a2, a3, a4);
  v7 = *(_QWORD *)a2;
  v12 = 0LL;
  if ( !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(v7 + 80))(a2) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    if ( (*(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL))(
           a2,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           &v12) >= 0 )
    {
      if ( IsIconic(*((HWND *)this + 7))
        && (int)DwmpQueryWindowThumbnailSourceSize(*((_QWORD *)this + 7), 0LL, v10) >= 0 )
      {
        v8 = (struct tagRECT *)((char *)this + 204);
        v11.left = 0;
        v11.top = 0;
        v11.right = v10[0];
        v11.bottom = v10[1];
        *(struct tagRECT *)((char *)this + 204) = v11;
      }
      else
      {
        v8 = (struct tagRECT *)((char *)this + 204);
        GetWindowRect(*((HWND *)this + 7), (LPRECT)((char *)this + 204));
      }
      v9 = *(unsigned __int8 (__fastcall **)(CAppArrangementSingleTransitionTarget *))(*(_QWORD *)this + 72LL);
      *(struct tagRECT *)((char *)this + 172) = *v8;
      if ( v9(this) && a3 )
      {
        v11 = *v8;
        MatchRectPillarBoxState(
          &v11,
          (const struct tagRECT *)((char *)this + 236),
          (const struct tagRECT *)((char *)this + 252),
          (struct tagRECT *)((char *)this + 172),
          v8);
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
}
