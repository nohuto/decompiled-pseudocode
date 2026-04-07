/*
 * XREFs of ?InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ @ 0x18002D258
 * Callers:
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x18002D080 (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x18002D5BC (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18003CB28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDXGIEnumeration::InitDXGI(CDWMDXGIEnumeration *this)
{
  unsigned int v2; // r15d
  HRESULT v3; // eax
  int v4; // ebx
  __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // r8d
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  void *v13; // r10
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  struct IDXGIAdapter *v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h] BYREF
  struct CDWMDXGIAdapter *v21[2]; // [rsp+50h] [rbp-10h] BYREF
  void *ppFactory; // [rsp+88h] [rbp+28h] BYREF
  __int64 v23; // [rsp+90h] [rbp+30h] BYREF
  __int64 v24; // [rsp+98h] [rbp+38h] BYREF

  ppFactory = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v17 = 0LL;
  v2 = 0;
  v18 = 0LL;
  v21[0] = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v3 = CreateDXGIFactory1(&GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, &ppFactory);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = 254;
    goto LABEL_48;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
         &v23);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = 260;
    goto LABEL_48;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
         &v24);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = 263;
    goto LABEL_48;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_b14887d9_f537_4af5_b379_7d33031be773,
         &v17);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = 266;
    goto LABEL_48;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_ea9dbf1a_c88e_4486_854a_98aa0138f30c,
         &v18);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = 272;
LABEL_48:
    v15 = v3;
LABEL_52:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CBE08, 1LL, v15, v16);
LABEL_32:
    if ( ppFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppFactory + 16LL))(ppFactory);
    v12 = v18;
    v11 = v17;
    v10 = v24;
    v9 = v23;
    goto LABEL_35;
  }
  while ( (*(unsigned int (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 96LL))(ppFactory, v2, &v20) != -2005270526 )
  {
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIAdapter **))v20)(
           v20,
           &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
           &v19);
    v4 = v3;
    if ( v3 < 0 )
    {
      v16 = 280;
      goto LABEL_48;
    }
    v3 = CDWMDXGIAdapter::Create(v19, v2, v21);
    v4 = v3;
    if ( v3 < 0 )
    {
      v16 = 284;
      goto LABEL_48;
    }
    v6 = *((_DWORD *)this + 20);
    v7 = v6 + 1;
    if ( v6 + 1 < v6 )
    {
      v4 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_50:
      v16 = 286;
LABEL_51:
      v15 = v4;
      goto LABEL_52;
    }
    if ( v7 > *((_DWORD *)this + 19) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 56, 8LL, 1LL, v21);
      v4 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xC0u);
      if ( v4 < 0 )
        goto LABEL_50;
    }
    else
    {
      v4 = 0;
      *(struct CDWMDXGIAdapter **)(*((_QWORD *)this + 7) + 8LL * v6) = v21[0];
      *((_DWORD *)this + 20) = v7;
    }
    if ( v19 )
    {
      ((void (__fastcall *)(struct IDXGIAdapter *))v19->lpVtbl->Release)(v19);
      v19 = 0LL;
    }
    if ( v20 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      v20 = 0LL;
    }
    v21[0] = 0LL;
    ++v2;
  }
  if ( !v2 )
  {
    v4 = -2003304291;
    v16 = 299;
    goto LABEL_51;
  }
  v9 = v23;
  *((_QWORD *)this + 3) = v23;
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v9 = v23;
  }
  v10 = v24;
  *((_QWORD *)this + 4) = v24;
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v9 = v23;
    v10 = v24;
  }
  v11 = v17;
  *((_QWORD *)this + 5) = v17;
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 8LL))(v11, v5, v10);
    v9 = v23;
    v10 = v24;
    v11 = v17;
  }
  v12 = v18;
  *((_QWORD *)this + 6) = v18;
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v9 = v23;
    v10 = v24;
    v11 = v17;
    v12 = v18;
  }
  v13 = ppFactory;
  *((_QWORD *)this + 2) = ppFactory;
  if ( v13 )
  {
    (*(void (__fastcall **)(void *, __int64, __int64, __int64))(*(_QWORD *)v13 + 8LL))(v13, v12, v10, v11);
    goto LABEL_32;
  }
LABEL_35:
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, v12, v10, v11);
    v10 = v24;
    v11 = v17;
    v12 = v18;
  }
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 16LL))(v10, v12);
    v11 = v17;
    v12 = v18;
  }
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 16LL))(v11, v12);
    v12 = v18;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v19 )
    ((void (__fastcall *)(struct IDXGIAdapter *))v19->lpVtbl->Release)(v19);
  return (unsigned int)v4;
}
