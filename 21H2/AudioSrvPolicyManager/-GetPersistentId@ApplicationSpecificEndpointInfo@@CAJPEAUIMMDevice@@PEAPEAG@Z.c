/*
 * XREFs of ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x1800326F4
 * Callers:
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180030E60 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x1800328D0 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180018844 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::GetPersistentId(struct IMMDevice *a1, unsigned __int16 **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v14);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 807LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_12;
  }
  v11 = 0LL;
  v12 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, void *, __int128 *))(*(_QWORD *)v14 + 40LL))(
         v14,
         &PKEY_AudioEndpoint_PersistentId,
         &v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 812LL;
    goto LABEL_10;
  }
  if ( (_WORD)v11 == 31 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(*((_QWORD *)&v11 + 1) + 2 * v8) );
    v3 = _AllocStringWorker<CTCoAllocPolicy>(v7, v6, *((const unsigned __int16 **)&v11 + 1), v8, v10, a2);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 816LL;
      goto LABEL_10;
    }
  }
  v4 = 0;
LABEL_12:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v4;
}
