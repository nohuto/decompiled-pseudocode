/*
 * XREFs of ?Scribble@CSuperWetInkScribbleBase@@UEAAJPEAUID3D12GraphicsCommandList@@PEAUID3D12Resource@@PEAUIUnknown@@PEAW4D3D12_RESOURCE_STATES@@PEAUComputeScribbleLatencyData@@PEAUtagRECT@@@Z @ 0x1800EDA80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0qqqxx_EventWriteTransfer @ 0x1802666D8 (McTemplateU0qqqxx_EventWriteTransfer.c)
 */

__int64 __fastcall CSuperWetInkScribbleBase::Scribble(
        CSuperWetInkScribbleBase *this,
        struct ID3D12GraphicsCommandList *a2,
        struct ID3D12Resource *a3,
        struct IUnknown *a4,
        enum D3D12_RESOURCE_STATES *a5,
        struct ComputeScribbleLatencyData *a6,
        struct tagRECT *a7)
{
  int v11; // edi
  __int64 v12; // rdx
  struct tagRECT *v14; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // [rsp+20h] [rbp-81h]
  __int64 v18; // [rsp+40h] [rbp-61h] BYREF
  __int64 v19; // [rsp+48h] [rbp-59h] BYREF
  __int64 v20; // [rsp+50h] [rbp-51h] BYREF
  struct tagRECT *v21; // [rsp+58h] [rbp-49h]
  int v22; // [rsp+60h] [rbp-41h]
  int v23; // [rsp+64h] [rbp-3Dh]
  int v24; // [rsp+68h] [rbp-39h]
  __int64 v25; // [rsp+70h] [rbp-31h]
  __int64 v26; // [rsp+78h] [rbp-29h]
  _BYTE v27[16]; // [rsp+80h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+47h]

  v21 = a7;
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v11 = (*(__int64 (__fastcall **)(CSuperWetInkScribbleBase *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)this + 64LL))(
          this,
          &v20,
          &v19,
          &v18);
  if ( v11 < 0 )
  {
    v12 = 30LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
      (const char *)(unsigned int)v11,
      v17);
    return (unsigned int)v11;
  }
  *((_QWORD *)a6 + 6) = v18;
  *((_QWORD *)a6 + 2) = v19;
  *((_QWORD *)a6 + 1) = v20;
  v14 = (struct tagRECT *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                            *((_QWORD *)this + 2),
                            v27);
  v17 = (int)a5;
  *v21 = *v14;
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D12GraphicsCommandList *, struct ID3D12Resource *, struct IUnknown *))(**((_QWORD **)this + 2) + 48LL))(
          *((_QWORD *)this + 2),
          a2,
          a3,
          a4);
  if ( v11 < 0 )
  {
    v12 = 43LL;
    goto LABEL_3;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0qqqxx_EventWriteTransfer(v16, v15, v24, v22, v23, v25, v26);
  *(_DWORD *)a6 = v22;
  *((_DWORD *)a6 + 1) = v23;
  *((_QWORD *)a6 + 3) = v25;
  *((_QWORD *)a6 + 5) = *((_QWORD *)this + 4);
  return 0LL;
}
