/*
 * XREFs of ?OnTouchpadRectChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1800F06D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037590 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ?GetEnabled@BamoControllerNavigationManagerProxy@@UEAA_NXZ @ 0x1800E60A0 (-GetEnabled@BamoControllerNavigationManagerProxy@@UEAA_NXZ.c)
 *     ?GetTouchpadRect@BamoVirtualTouchpadControllerProxy@@UEAAAEBUtagRECT@@XZ @ 0x1800F0540 (-GetTouchpadRect@BamoVirtualTouchpadControllerProxy@@UEAAAEBUtagRECT@@XZ.c)
 *     ?ServerRectChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUtagRECT@@@Z @ 0x1800F0A54 (-ServerRectChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUtagRECT@@@Z.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x1801459DC (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJ_KAEBUtagRECT@@@Z @ 0x180145A6C (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJ_KAEBUtagRECT@@@Z.c)
 *     ?OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJ_KAEBUtagRECT@@@Z @ 0x180145C6C (-OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJ_KAEBUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualTouchpadControllerProxy::OnTouchpadRectChanged(VirtualTouchpadControllerProxy *this)
{
  BamoVirtualTouchpadControllerProxy *v2; // rdi
  const struct tagRECT *TouchpadRect; // rax
  struct VirtualTouchpadContextProvider *Instance; // rax
  struct VirtualTouchpadContextProvider *v5; // rbx
  const struct tagRECT *v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  const struct tagRECT *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (VirtualTouchpadControllerProxy *)((char *)this + 8);
  TouchpadRect = BamoVirtualTouchpadControllerProxy::GetTouchpadRect((VirtualTouchpadControllerProxy *)((char *)this + 8));
  InputTraceLogging::VirtualTouchpad::ServerRectChanged(this, TouchpadRect);
  Instance = VirtualTouchpadContextProvider::GetInstance();
  v5 = Instance;
  if ( Instance )
  {
    _InterlockedIncrement((volatile signed __int32 *)Instance + 4);
    v5 = Instance;
  }
  if ( BamoControllerNavigationManagerProxy::GetEnabled(v2) )
  {
    if ( *((_BYTE *)this + 72) )
    {
      v6 = BamoVirtualTouchpadControllerProxy::GetTouchpadRect(v2);
      v7 = VirtualTouchpadContextProvider::OnTouchpadUpdated(v5, (unsigned __int64)this, v6);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 69LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\virtualtouchpadcontrolle"
                   "r\\server\\virtualtouchpadcontrollerproxy.cpp",
          (const char *)(unsigned int)v7);
        goto LABEL_12;
      }
    }
    else
    {
      v10 = BamoVirtualTouchpadControllerProxy::GetTouchpadRect(v2);
      v7 = VirtualTouchpadContextProvider::OnTouchpadAdded(v5, (unsigned __int64)this, v10);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 76LL;
        goto LABEL_9;
      }
      *((_BYTE *)this + 72) = 1;
    }
  }
  v8 = 0;
LABEL_12:
  if ( v5 )
    RefCountedObject::Release((struct VirtualTouchpadContextProvider *)((char *)v5 + 8));
  return v8;
}
