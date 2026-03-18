/*
 * XREFs of ??1CHolographicFrameProcessor@@MEAA@XZ @ 0x18025D2F8
 * Callers:
 *     ??_ECHolographicFrameProcessor@@MEAAPEAXI@Z @ 0x18025D3C8 (--_ECHolographicFrameProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicFrameProcessor::~CHolographicFrameProcessor(CHolographicFrameProcessor *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CHolographicFrameProcessor::`vftable'{for `IHolographicFrameProcessor'};
  *((_QWORD *)this + 1) = &CHolographicFrameProcessor::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 3) = &CHolographicFrameProcessor::`vftable'{for `IFlipPresentCallback'};
  *((_QWORD *)this + 4) = &CHolographicFrameProcessor::`vftable'{for `IFlipContentCallback'};
  *((_QWORD *)this + 5) = &CHolographicFrameProcessor::`vftable'{for `IHolographicWin32kInteropTexture'};
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  v2 = (char *)*((_QWORD *)this + 15);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 12);
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    *((_QWORD *)this + 6) = 0LL;
    CDrawListEntry::Release((CDrawListEntry *)(v4 + 8));
  }
  *((_QWORD *)this + 1) = &CMILCOMBase::`vftable';
}
