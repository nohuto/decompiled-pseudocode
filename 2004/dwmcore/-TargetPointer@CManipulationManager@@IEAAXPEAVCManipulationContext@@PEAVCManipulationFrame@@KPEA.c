/*
 * XREFs of ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1802260F8
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180225F08 (-TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x18009D0AC (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D0844 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801542B8 (McTemplateU0qq_EventWriteTransfer.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180221058 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x180222968 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180222E24 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1802237F0 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?IsRoute@TargetingInfo@@QEBA_NXZ @ 0x180223810 (-IsRoute@TargetingInfo@@QEBA_NXZ.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x180224EF4 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x180225B40 (-SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z.c)
 *     ?GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z @ 0x1802327D8 (-GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1802359B8 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 */

void __fastcall CManipulationManager::TargetPointer(
        CManipulationContext **this,
        struct CManipulationContext *a2,
        struct CManipulationFrame *a3,
        unsigned int a4,
        void **a5)
{
  void **v5; // r13
  __int64 v7; // rbx
  __int64 v10; // r12
  char *v11; // rbx
  __int64 v12; // r15
  __int64 *v13; // rcx
  int v14; // edx
  __int64 v15; // rdx
  struct CInteraction *HoverTarget; // rax
  struct CInteraction *v17; // rax
  int PointerTarget; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 (__fastcall ***v22)(_QWORD); // r10
  int v23; // r14d
  __int64 (__fastcall **v24)(_QWORD); // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 (__fastcall *v27)(_QWORD); // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  int v30; // eax
  __int64 v31; // rdx
  char IsRoute; // al
  char v33; // dl
  unsigned int v34; // eax
  __int64 v35; // r9
  __int64 v36; // r10
  int v37; // [rsp+50h] [rbp-61h] BYREF
  __int64 (__fastcall ***v38)(_QWORD); // [rsp+58h] [rbp-59h] BYREF
  __int64 v39; // [rsp+60h] [rbp-51h] BYREF
  __int64 (__fastcall ***v40)(_QWORD); // [rsp+68h] [rbp-49h] BYREF
  int v41; // [rsp+70h] [rbp-41h] BYREF
  __int64 (__fastcall ***v42)(_QWORD); // [rsp+78h] [rbp-39h] BYREF
  _OWORD v43[8]; // [rsp+80h] [rbp-31h] BYREF
  int v44; // [rsp+110h] [rbp+5Fh] BYREF
  int v45; // [rsp+120h] [rbp+6Fh] BYREF
  int v46; // [rsp+128h] [rbp+77h] BYREF

  v5 = a5;
  v38 = 0LL;
  v7 = a4;
  v37 = 1;
  *a5 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v38);
  v10 = 248 * v7;
  v11 = (char *)a3 + 248 * v7 + 160;
  if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(
                       (QpcTimeConverter *)(this + 38),
                       *((_QWORD *)v11 + 10),
                       (unsigned __int64 *)&a5) )
    v12 = (__int64)a5;
  else
    v12 = 1000LL * *((unsigned int *)v11 + 16);
  if ( (*((_BYTE *)a3 + 72) & 2) != 0 )
  {
    v13 = (__int64 *)&v38;
LABEL_35:
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v13);
    goto LABEL_36;
  }
  if ( (*((_DWORD *)v11 + 3) & 0x40004) != 0 || CManipulationFrame::IsMousewheelFrame(a3) )
  {
    PointerTarget = CGestureTargetingManager::GetPointerTarget(
                      (const struct tagPOINTER_INFO *)v11,
                      a2,
                      (struct TargetingInfo *)&v37);
    v22 = v38;
    v23 = PointerTarget;
    if ( PointerTarget >= 0 && v38 && v37 )
    {
      v24 = *v38;
      v25 = *((_OWORD *)a3 + 6);
      v43[0] = *((_OWORD *)a3 + 5);
      v26 = *((_OWORD *)a3 + 7);
      v27 = v24[23];
      LOBYTE(v20) = 1;
      v43[1] = v25;
      v28 = *((_OWORD *)a3 + 8);
      v43[2] = v26;
      v29 = *((_OWORD *)a3 + 9);
      v43[3] = v28;
      v43[4] = v29;
      v30 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), __int64, __int64, _QWORD, _OWORD *, int *))v27)(
              v38,
              v12,
              v20,
              0LL,
              v43,
              &v37);
      v22 = v38;
      v23 = v30;
    }
    if ( (unsigned int)dword_180342EF0 > 4 && (qword_180342F00 & 2) != 0 && (qword_180342F08 & 2) == qword_180342F08 )
    {
      LODWORD(a5) = *((_DWORD *)v11 + 9);
      v44 = *((_DWORD *)v11 + 8);
      v45 = v37;
      v41 = *((_DWORD *)v11 + 1);
      v46 = v23;
      v42 = v22;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v19,
        byte_1802E8681,
        v20,
        v21,
        (__int64)&v41,
        (__int64)&v42,
        (__int64)&v45,
        (__int64)&v44,
        (__int64)&a5,
        (__int64)&v46);
    }
    InputTraceLogging::GestureTargeting::SetPointerResult(
      *((_QWORD *)a3 + 30),
      *((_QWORD *)a3 + 4),
      *((_DWORD *)a3 + 6),
      *((_DWORD *)v11 + 1),
      (const struct TargetingInfo *)&v37);
    v31 = *((unsigned int *)v11 + 1);
    v40 = 0LL;
    v39 = 0LL;
    (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, v31, &v39);
    if ( v23 < 0 )
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v38, &v40);
    if ( v37 )
    {
      if ( v38 != v40 )
      {
        if ( (_DWORD)v39 )
        {
          TargetingInfo::IsRoute((TargetingInfo *)&v39);
          IsRoute = TargetingInfo::IsRoute((TargetingInfo *)&v37);
          if ( v33 != IsRoute )
          {
            *((_BYTE *)a3 + v10 + 400) |= 1u;
            *((_BYTE *)a3 + 72) |= 4u;
          }
        }
      }
    }
    else
    {
      if ( (*((_DWORD *)v11 + 3) & 0x40000) == 0 )
      {
        *v5 = (void *)-1LL;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
          McTemplateU0qq_EventWriteTransfer(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &MANIPULATION_POINTER_BUFFERED,
            *((_DWORD *)v11 + 2),
            *((_DWORD *)v11 + 1));
        goto LABEL_34;
      }
      v37 = 1;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v38);
    }
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
      a2,
      *((unsigned int *)v11 + 1),
      &v37);
LABEL_34:
    v13 = (__int64 *)&v40;
    goto LABEL_35;
  }
  if ( (v14 & 0x800002) == 0 )
  {
    v15 = *((unsigned int *)v11 + 1);
    v40 = 0LL;
    v39 = 0LL;
    (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, v15, &v39);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v38, &v40);
    if ( !(_DWORD)v39 && !v40 )
    {
      HoverTarget = CManipulationContext::GetHoverTarget(this[33], *((_DWORD *)v11 + 1));
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(
        &v38,
        (__int64 (__fastcall ***)(_QWORD))HoverTarget);
    }
    goto LABEL_34;
  }
  if ( (v14 & 0x20006) == 0x20002 )
  {
    v17 = CManipulationContext::GetHoverTarget(this[33], *((_DWORD *)v11 + 1));
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(&v38, (__int64 (__fastcall ***)(_QWORD))v17);
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
      a2,
      *((unsigned int *)v11 + 1),
      &v37);
  }
LABEL_36:
  if ( v38 && TargetingInfo::IsRoute((TargetingInfo *)&v37) )
  {
    v34 = ConvertToInputType(*(_DWORD *)v11, *((_DWORD *)v11 + 3));
    (*(void (__fastcall **)(__int64, _QWORD, void **))(v35 + 72))(v36, v34, v5);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v38);
}
