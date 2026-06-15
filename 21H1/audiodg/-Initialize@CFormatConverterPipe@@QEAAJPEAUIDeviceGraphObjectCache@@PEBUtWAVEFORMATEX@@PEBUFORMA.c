/*
 * XREFs of ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140044618
 * Callers:
 *     ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x1400442E8 (-CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
 * Callees:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007334 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B890 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1400326EC (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140033900 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003C564 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x140044AD0 (-Reset@CFormatConverterPipe@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFormatConverterPipe::Initialize(
        CFormatConverterPipe *this,
        struct IUnknown *a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX **a4)
{
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  CPipeInstance *v11; // rsi
  void *v12; // rcx
  LPVOID v13; // rax
  void *v14; // rcx
  void *v15; // rcx
  LPVOID pv; // [rsp+20h] [rbp-30h] BYREF
  CPipeInstance *v18; // [rsp+28h] [rbp-28h] BYREF
  LPVOID *p_pv; // [rsp+30h] [rbp-20h]
  struct tWAVEFORMATEX *v20; // [rsp+38h] [rbp-18h] BYREF
  char v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  CFormatConverterPipe::Reset(this);
  v18 = 0LL;
  v8 = CPipeInstance::CreateFormatConverterPipeInstance(a2, a4, &v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 250LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_18;
  }
  v11 = v18;
  v8 = CPipeInstance::Initialize(v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 251LL;
    goto LABEL_7;
  }
  v8 = CPipeInstance::ConnectAPOs(v11, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 252LL;
    goto LABEL_7;
  }
  pv = 0LL;
  p_pv = &pv;
  v20 = 0LL;
  v21 = 1;
  v9 = CloneWaveFormat(a3, &v20);
  if ( v21 )
  {
    v12 = *p_pv;
    *p_pv = v20;
    if ( v12 )
      CoTaskMemFree(v12);
  }
  if ( v9 >= 0 )
  {
    v18 = 0LL;
    *(_QWORD *)this = v11;
    v13 = pv;
    pv = 0LL;
    v14 = (void *)*((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = v13;
    if ( v14 )
      CoTaskMemFree(v14);
    *((_QWORD *)this + 2) = a4[3];
    *((_BYTE *)this + 24) = 0;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFF,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v9);
  }
  v15 = pv;
  pv = 0LL;
  if ( v15 )
    CoTaskMemFree(v15);
LABEL_18:
  ATL::CAutoPtr<CPipeInstance>::Free((LPVOID **)&v18);
  return (unsigned int)v9;
}
