/*
 * XREFs of ?CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@PEAPEAVCResource@@@Z @ 0x1800A1E44
 * Callers:
 *     ?Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x1800A1DEC (-Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x180046154 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18005E9EC (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2008 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z @ 0x1800C186C (--$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z.c)
 *     ?AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z @ 0x1800C6FDC (-AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z.c)
 *     _anonymous_namespace_::AddToResourceCount @ 0x1800C704C (_anonymous_namespace_--AddToResourceCount.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqxqx_EventWriteTransfer @ 0x180174248 (McTemplateU0qqxqx_EventWriteTransfer.c)
 */

__int64 __fastcall CResourceTable::CreateEmptyResource(
        CResourceTable *this,
        struct CComposition *a2,
        struct CChannelContext *a3,
        const struct tagMILCMD_CHANNEL_CREATERESOURCE *a4,
        struct CResource **a5)
{
  __int64 v5; // rbp
  int v6; // r12d
  int v7; // edi
  unsigned int v8; // r14d
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  unsigned int *v18; // rdi
  unsigned int v19; // eax
  unsigned int v20; // r8d
  struct CResource *v21; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // r9d
  unsigned int v26; // [rsp+20h] [rbp-58h]
  _QWORD *v27; // [rsp+80h] [rbp+8h] BYREF
  struct CComposition *v28; // [rsp+88h] [rbp+10h]

  v28 = a2;
  v27 = 0LL;
  v5 = 0LL;
  v6 = *((_DWORD *)a4 + 2);
  v7 = 0;
  v8 = *((_DWORD *)a4 + 1);
  if ( v6 && v8 )
  {
    if ( v8 < *((_DWORD *)this + 7)
      || (v23 = HANDLE_TABLE::ResizeToFit((CResourceTable *)((char *)this + 16), v8), v7 = v23, v23 >= 0) )
    {
      v12 = *((_QWORD *)this + 5);
      v13 = v8 * *((_DWORD *)this + 6);
      if ( *(_DWORD *)(v13 + v12) )
      {
        v14 = -2147024809;
        v7 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024809, 0x1AAu, 0LL);
LABEL_25:
        v25 = v7;
        v26 = 42;
LABEL_26:
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v25, v26, 0LL);
        goto LABEL_20;
      }
      *(_DWORD *)(v13 + v12) = v6;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x19Bu, 0LL);
    }
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x18Eu, 0LL);
  }
  if ( v7 >= 0 )
  {
    v5 = *((_QWORD *)this + 5) + v8 * *((_DWORD *)this + 6);
    *(_QWORD *)(v5 + 8) = 0LL;
  }
  v14 = v7;
  if ( v7 < 0 )
    goto LABEL_25;
  v15 = CResourceFactory::Create(v28, a3, *((unsigned int *)a4 + 2), &v27);
  v14 = v15;
  if ( v15 < 0 )
  {
    v26 = 47;
    goto LABEL_32;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD *))(*v27 + 48LL))(v27);
  v14 = v15;
  if ( v15 < 0 )
  {
    v26 = 53;
LABEL_32:
    v25 = v15;
    goto LABEL_26;
  }
  v16 = *((unsigned int *)a4 + 1);
  v14 = -2147024890;
  v17 = v27;
  if ( !(_DWORD)v16
    || (unsigned int)v16 >= *((_DWORD *)this + 7)
    || (v18 = (unsigned int *)(*((_QWORD *)this + 5) + (unsigned int)(v16 * *((_DWORD *)this + 6))), !*v18) )
  {
    v18 = 0LL;
  }
  if ( v18 )
  {
    *((_QWORD *)v18 + 1) = v27;
    v14 = 0;
    (*(void (__fastcall **)(_QWORD *))(*v17 + 8LL))(v17);
    v19 = AddToResourceCount(*((_QWORD *)this + 7) + 44LL, *v18, 1LL);
    anonymous_namespace_::AddToResourceCount(v19, v20);
    v17 = v27;
  }
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v14, 0x36u, 0LL);
  }
  else
  {
    v17[6] = a3;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
      McTemplateU0qqxqx_EventWriteTransfer(
        *((_DWORD *)a4 + 1),
        *((_DWORD *)a4 + 1),
        *((_DWORD *)a3 + 4),
        *((_DWORD *)a4 + 1),
        *((_DWORD *)a4 + 1),
        *((_DWORD *)a4 + 2),
        (char)v27);
    v21 = (struct CResource *)v27;
    v5 = 0LL;
    v27 = 0LL;
    *a5 = v21;
  }
LABEL_20:
  if ( v14 < 0 )
  {
    if ( v5 )
      CResourceTable::DeleteHandle(this, *((_DWORD *)a4 + 1));
    ReleaseInterface<CResource>(&v27);
  }
  return (unsigned int)v14;
}
