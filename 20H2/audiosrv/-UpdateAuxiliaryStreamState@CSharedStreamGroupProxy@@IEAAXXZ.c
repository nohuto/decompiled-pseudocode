/*
 * XREFs of ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x180046010
 * Callers:
 *     ?OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180046C80 (-OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     ?OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180046F10 (-OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@PEBG@Z @ 0x1800E3C30 (-AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@PEBG@Z.c)
 *     ?StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x1800E6630 (-StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z.c)
 *     ?StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x1800E6700 (-StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180057AD4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSharedStreamGroupProxy::UpdateAuxiliaryStreamState(CSharedStreamGroupProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  struct IUnknown *v3; // rbx
  struct IUnknown *v4; // rdx
  struct IUnknown *v5; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+38h] [rbp+10h]

  if ( *((_QWORD *)this + 46) )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 288);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
    v6 = v2;
    v3 = 0LL;
    v5 = 0LL;
    v4 = (struct IUnknown *)*((_QWORD *)this + 48);
    if ( v4 )
    {
      ATL::AtlComPtrAssign(&v5, v4);
      v3 = v5;
    }
    if ( *((_DWORD *)this + 70) )
    {
      if ( !*((_BYTE *)this + 328) )
      {
        ((void (__fastcall *)(struct IUnknown *, _QWORD))v3->lpVtbl[1].Release)(v3, *((_QWORD *)this + 46));
        *((_BYTE *)this + 328) = 1;
      }
    }
    else if ( *((_BYTE *)this + 328) )
    {
      ((void (__fastcall *)(struct IUnknown *, _QWORD))v3->lpVtbl[2].QueryInterface)(v3, *((_QWORD *)this + 46));
      *((_BYTE *)this + 328) = 0;
    }
    if ( v3 )
      ((void (__fastcall *)(struct IUnknown *))v3->lpVtbl->Release)(v3);
    if ( v2 )
      LeaveCriticalSection(v2);
  }
}
