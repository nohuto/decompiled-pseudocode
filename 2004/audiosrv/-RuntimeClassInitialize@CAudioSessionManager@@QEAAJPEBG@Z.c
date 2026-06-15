/*
 * XREFs of ?RuntimeClassInitialize@CAudioSessionManager@@QEAAJPEBG@Z @ 0x18002BFD8
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSessionManager@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSessionManager@@AEAPEBG@Z @ 0x18002BEE4 (--$MakeAndInitialize@VCAudioSessionManager@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSe.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002C164 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002C1C0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionManager::RuntimeClassInitialize(CAudioSessionManager *this, const unsigned __int16 *a2)
{
  char *v4; // rcx
  __int64 v5; // rax
  int v6; // edi
  struct IUnknown *v7; // rdi
  struct IUnknown *v8; // rcx
  bool v9; // r14
  struct IUnknown *v10; // rcx
  CAudioSessionManager *v12; // rcx
  struct IUnknown *v13; // [rsp+20h] [rbp-48h] BYREF
  struct IUnknown *v14; // [rsp+28h] [rbp-40h] BYREF
  CAudioSessionManager *v15; // [rsp+70h] [rbp+8h] BYREF
  const unsigned __int16 *v16; // [rsp+78h] [rbp+10h] BYREF
  struct IUnknown *v17; // [rsp+88h] [rbp+20h] BYREF

  v16 = a2;
  v15 = this;
  v13 = 0LL;
  v14 = 0LL;
  v17 = 0LL;
  v4 = (char *)this + 296;
  if ( a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
  }
  else
  {
    LODWORD(v5) = 0;
  }
  ATL::CSimpleStringT<unsigned short,0>::SetString(v4, a2, (unsigned int)v5);
  v6 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                       + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v13);
  if ( v6 < 0 )
    goto LABEL_31;
  v7 = v13;
  v8 = v17;
  if ( !v17 )
  {
    if ( !v13 )
    {
LABEL_30:
      v6 = -2147024809;
      goto LABEL_31;
    }
    goto LABEL_7;
  }
  if ( !v13 )
  {
LABEL_7:
    v9 = 0;
    goto LABEL_8;
  }
  v15 = 0LL;
  v16 = 0LL;
  ((void (__fastcall *)(struct IUnknown *, GUID *, CAudioSessionManager **))v17->lpVtbl->QueryInterface)(
    v17,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v15);
  ((void (__fastcall *)(struct IUnknown *, GUID *, const unsigned __int16 **))v7->lpVtbl->QueryInterface)(
    v7,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v16);
  v12 = v15;
  v9 = v15 == (CAudioSessionManager *)v16;
  if ( v16 )
  {
    (*(void (__fastcall **)(const unsigned __int16 *))(*(_QWORD *)v16 + 16LL))(v16);
    v12 = v15;
  }
  if ( v12 )
    (*(void (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v12 + 16LL))(v12);
  v7 = v13;
  v8 = v17;
LABEL_8:
  if ( !v9 )
  {
    ATL::AtlComQIPtrAssign(&v17, v7, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e);
    v8 = v17;
  }
  if ( !v8 )
    goto LABEL_30;
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v8->lpVtbl[2].Release)(v8, (char *)this + 304);
  if ( v6 >= 0 )
  {
    v10 = v14;
    if ( v14 != v13 )
    {
      ATL::AtlComQIPtrAssign(&v14, v13, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
      v10 = v14;
    }
    if ( v10 )
    {
      v6 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v10->lpVtbl[1].QueryInterface)(v10, (char *)this + 312);
      if ( v6 >= 0 )
        goto LABEL_16;
      goto LABEL_31;
    }
    goto LABEL_30;
  }
LABEL_31:
  AudSrvTraceLoggingErrorHelper("CAudioSessionManager::RuntimeClassInitialize", 0x5E8u, v6);
LABEL_16:
  if ( v17 )
    ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl->Release)(v17);
  if ( v14 )
    ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
  if ( v13 )
    ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
  return (unsigned int)v6;
}
