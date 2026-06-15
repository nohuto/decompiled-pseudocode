/*
 * XREFs of ?GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x18013F260
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180072324 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_c537ee8d_5574_454a_9354_aaa4e421d31e@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180119474 (--0-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_c537ee8d_5574_454a_9354_aaa4e421d31e@@3U__s_GUID@@.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x18013E230 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall EndpointCollection::GetDeviceByInterfacePath(
        EndpointCollection *this,
        char *a2,
        struct IEndpointDevice **a3)
{
  EndpointCollection *v5; // r8
  __int64 v6; // rcx
  int v7; // edi
  int v8; // ebx
  unsigned __int16 *v9; // rax
  int v10; // r8d
  int v11; // ecx
  void (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+68h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+78h] [rbp+38h] BYREF

  v5 = this;
  v14 = 0LL;
  v6 = 0LL;
  v16 = 0LL;
  v7 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      *a3 = 0LL;
      v8 = (*(__int64 (__fastcall **)(EndpointCollection *, __int64 *))(*(_QWORD *)v5 + 64LL))(v5, &v14);
      if ( v8 >= 0 )
      {
        while ( 1 )
        {
          Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v16);
          v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, &v16);
          if ( v8 < 0 )
            break;
          v6 = v16;
          if ( !v16 )
            goto LABEL_23;
          v13 = 0LL;
          pv = 0LL;
          v8 = (*(__int64 (__fastcall **)(__int64, void (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(*(_QWORD *)v16 + 24LL))(
                 v16,
                 &v13);
          if ( v8 < 0 )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
            if ( v13 )
              ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[2])(v13);
            break;
          }
          ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_c537ee8d_5574_454a_9354_aaa4e421d31e>::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_c537ee8d_5574_454a_9354_aaa4e421d31e>(
            &v15,
            v13);
          v8 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v15 + 96LL))(v15, &pv);
          if ( v8 >= 0 )
          {
            v9 = (unsigned __int16 *)pv;
            do
            {
              v10 = *(unsigned __int16 *)((char *)v9 + a2 - (_BYTE *)pv);
              v11 = *v9 - v10;
              if ( v11 )
                break;
              ++v9;
            }
            while ( v10 );
            if ( !v11 )
            {
              v7 = 1;
              ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v16, a3);
            }
          }
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          CoTaskMemFree(pv);
          pv = 0LL;
          if ( v13 )
            ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[2])(v13);
          v6 = v16;
          if ( !v16 )
          {
            if ( v7 )
              goto LABEL_27;
LABEL_23:
            v8 = -2147023728;
            goto LABEL_27;
          }
          if ( v7 )
            goto LABEL_27;
        }
      }
      v6 = v16;
    }
    else
    {
      v8 = -2147467261;
    }
  }
  else
  {
    v8 = -2147024809;
  }
LABEL_27:
  if ( v6 )
    (*(void (__fastcall **)(__int64, char *, EndpointCollection *))(*(_QWORD *)v6 + 16LL))(v6, a2, v5);
  if ( v14 )
    (*(void (__fastcall **)(__int64, char *, EndpointCollection *))(*(_QWORD *)v14 + 16LL))(v14, a2, v5);
  return (unsigned int)v8;
}
