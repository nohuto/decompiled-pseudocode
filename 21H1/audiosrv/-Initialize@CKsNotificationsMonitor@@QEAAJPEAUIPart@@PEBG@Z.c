/*
 * XREFs of ?Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z @ 0x180058000
 * Callers:
 *     ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x180057D4C (-KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V-$CCo.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002C164 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180058174 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CKsNotificationsMonitor::Initialize(CKsNotificationsMonitor *this, struct IUnknown *a2, char *a3)
{
  struct IUnknown **v6; // rcx
  __int64 v7; // rbx
  SIZE_T v8; // rbx
  char *v9; // rax
  SIZE_T v10; // rbx
  SIZE_T v11; // rdx
  signed __int64 v12; // rdi
  __int16 v13; // cx
  struct IUnknown *v14; // rcx
  int v15; // ebx
  struct IUnknown *v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  v6 = (struct IUnknown **)((char *)this + 32);
  if ( *v6 != a2 )
    ATL::AtlComPtrAssign(v6, a2);
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)&a3[2 * v7] );
  v8 = 2 * v7 + 2;
  v9 = (char *)CoTaskMemAlloc(v8);
  *((_QWORD *)this + 2) = v9;
  if ( !v9 )
  {
    v15 = -2147024882;
    goto LABEL_20;
  }
  v10 = v8 >> 1;
  if ( v10 - 1 > 0x7FFFFFFE )
  {
    if ( !v10 )
      goto LABEL_14;
  }
  else
  {
    v11 = 2147483646 - v10;
    v12 = a3 - v9;
    while ( v11 + v10 )
    {
      v13 = *(_WORD *)&v9[v12];
      if ( !v13 )
        break;
      *(_WORD *)v9 = v13;
      v9 += 2;
      if ( !--v10 )
        goto LABEL_24;
    }
    if ( v10 )
      goto LABEL_13;
LABEL_24:
    v9 -= 2;
  }
LABEL_13:
  *(_WORD *)v9 = 0;
LABEL_14:
  v14 = v17;
  if ( v17 != a2 )
  {
    ATL::AtlComQIPtrAssign(&v17, a2, &GUID_9c2c4058_23f5_41de_877a_df3af236a09e);
    v14 = v17;
  }
  v15 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v14->lpVtbl[1].AddRef)(v14, (char *)this + 8);
  if ( v15 >= 0 )
  {
    v15 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v17->lpVtbl[1].QueryInterface)(v17, (char *)this + 28);
    if ( v15 >= 0 )
    {
      v15 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CKsNotificationsMonitor *))a2->lpVtbl[4].Release)(
              a2,
              &CKsNotificationsMonitor::m_ctx,
              this);
      if ( v15 >= 0 )
        *((_DWORD *)this + 3) = 1;
    }
  }
LABEL_20:
  if ( v17 )
    ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl->Release)(v17);
  return (unsigned int)v15;
}
