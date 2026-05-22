/*
 * XREFs of ?OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1800F0940
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037280 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ?GetEnabled@BamoControllerNavigationManagerProxy@@UEAA_NXZ @ 0x1800E6470 (-GetEnabled@BamoControllerNavigationManagerProxy@@UEAA_NXZ.c)
 *     ?GetTouchpadRect@BamoVirtualTouchpadControllerProxy@@UEAAAEBUtagRECT@@XZ @ 0x1800F0910 (-GetTouchpadRect@BamoVirtualTouchpadControllerProxy@@UEAAAEBUtagRECT@@XZ.c)
 *     ?ServerIsActiveChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N@Z @ 0x1800F0D50 (-ServerIsActiveChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N@Z.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x180145E3C (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJ_KAEBUtagRECT@@@Z @ 0x180145ECC (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJ_KAEBUtagRECT@@@Z.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x180145FB8 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualTouchpadControllerProxy::OnIsActiveChanged(VirtualTouchpadControllerProxy *this)
{
  BamoVirtualTouchpadControllerProxy *v2; // rsi
  bool Enabled; // al
  struct VirtualTouchpadContextProvider *Instance; // rax
  struct VirtualTouchpadContextProvider *v5; // rbx
  const struct tagRECT *TouchpadRect; // rax
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (VirtualTouchpadControllerProxy *)((char *)this + 8);
  Enabled = BamoControllerNavigationManagerProxy::GetEnabled((VirtualTouchpadControllerProxy *)((char *)this + 8));
  InputTraceLogging::VirtualTouchpad::ServerIsActiveChanged(this, Enabled);
  Instance = VirtualTouchpadContextProvider::GetInstance();
  v5 = Instance;
  if ( Instance )
  {
    _InterlockedIncrement((volatile signed __int32 *)Instance + 4);
    v5 = Instance;
  }
  if ( *((_BYTE *)this + 72) )
  {
    if ( BamoControllerNavigationManagerProxy::GetEnabled(v2) )
    {
      TouchpadRect = BamoVirtualTouchpadControllerProxy::GetTouchpadRect(v2);
      v7 = VirtualTouchpadContextProvider::OnTouchpadAdded(v5, (unsigned __int64)this, TouchpadRect);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 41LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\virtualtouchpadcontrolle"
                   "r\\server\\virtualtouchpadcontrollerproxy.cpp",
          (const char *)(unsigned int)v7);
        goto LABEL_11;
      }
    }
    else
    {
      v7 = VirtualTouchpadContextProvider::OnTouchpadRemoved(v5, (unsigned __int64)this);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 47LL;
        goto LABEL_9;
      }
    }
  }
  v8 = 0;
LABEL_11:
  if ( v5 )
    RefCountedObject::Release((struct VirtualTouchpadContextProvider *)((char *)v5 + 8));
  return v8;
}
