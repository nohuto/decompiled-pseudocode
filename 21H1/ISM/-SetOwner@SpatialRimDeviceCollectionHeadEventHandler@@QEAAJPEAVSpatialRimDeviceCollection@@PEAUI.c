/*
 * XREFs of ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x180095C10
 * Callers:
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x180093204 (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 *     ?EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800934BC (-EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ.c)
 * Callees:
 *     ??4?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEAAAEAV012@PEAUISystemInputRouter@@@Z @ 0x18002AEAC (--4-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEAAAEAV012@PEAUISystemInputRouter@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z @ 0x18008D780 (-AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18008D894 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z @ 0x18008DD70 (-RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollectionHeadEventHandler::SetOwner(
        SpatialRimDeviceCollectionHeadEventHandler *this,
        struct SpatialRimDeviceCollection *a2,
        struct IMessageSession *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 *v9; // rsi
  MPCHeadUpdateListener *Instance; // rax
  MPCHeadUpdateListener *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( a2 && *((_QWORD *)this + 3) )
  {
    v7 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)0x8000FFFFLL);
  }
  else
  {
    Microsoft::WRL::ComPtr<ISystemInputRouter>::operator=((__int64 *)this + 9, (__int64)a3);
    *((_QWORD *)this + 3) = a2;
    v9 = (__int64 *)((char *)this + 16);
    if ( a2 )
    {
      if ( !*v9 )
      {
        Instance = MPCHeadUpdateListener::GetInstance(v8);
        MPCHeadUpdateListener::AddHeadEventOccurred(Instance, this, (unsigned __int8 *)this + 16);
      }
    }
    else if ( *v9 )
    {
      v11 = MPCHeadUpdateListener::GetInstance(v8);
      MPCHeadUpdateListener::RemoveHeadEventOccurred(v11, *v9);
      *v9 = 0LL;
    }
    v7 = 0;
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return v7;
}
