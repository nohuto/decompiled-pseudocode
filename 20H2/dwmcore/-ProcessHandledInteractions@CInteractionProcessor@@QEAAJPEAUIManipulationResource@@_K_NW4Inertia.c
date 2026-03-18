/*
 * XREFs of ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x18022B274
 * Callers:
 *     ?ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTelemetryData@@PEAW4PointerResult@@@Z @ 0x1801C5D80 (-ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTeleme.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4C64 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18022AF34 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x18022B060 (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 *     ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTelemetryData@@AEAUInteractionOutput@@@Z @ 0x18022BA00 (-ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTeleme.c)
 */

__int64 __fastcall CInteractionProcessor::ProcessHandledInteractions(
        __int64 a1,
        struct IManipulationResource *a2,
        __int64 a3,
        bool a4,
        int a5,
        struct IManipulationTelemetryData *a6,
        _DWORD *a7)
{
  int v7; // r12d
  bool v11; // r15
  char v12; // cl
  __int64 v13; // rbx
  bool v14; // r9
  bool v15; // r9
  bool v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v21; // [rsp+38h] [rbp-A9h]
  _DWORD v22[4]; // [rsp+40h] [rbp-A1h] BYREF
  int v23; // [rsp+50h] [rbp-91h]
  __int128 v24; // [rsp+58h] [rbp-89h] BYREF
  __int128 v25; // [rsp+68h] [rbp-79h]
  __int128 v26; // [rsp+78h] [rbp-69h]
  __int64 v27; // [rsp+88h] [rbp-59h]
  int v28; // [rsp+90h] [rbp-51h]
  _BYTE v29[64]; // [rsp+98h] [rbp-49h] BYREF

  v7 = 0;
  v21 = a3;
  if ( a7 )
    *a7 = 1;
  v11 = (*(_BYTE *)(a1 + 808) & 0x20) != 0 && *(_DWORD *)(a1 + 784) != 1
     || (*(unsigned __int8 (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 48LL))(a2);
  if ( !(*(unsigned int (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 40LL))(a2)
    || (*(unsigned int (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 40LL))(a2) == 2
    && *(_DWORD *)(a1 + 788) == 3
    || v11
    || *(_DWORD *)(a1 + 788) == 6 )
  {
    if ( a7 )
      *a7 = 2;
    v12 = *(_BYTE *)(a1 + 808);
    if ( (v12 & 0x10) == 0 )
    {
      *(_BYTE *)(a1 + 808) = (16 * a4) | v12 & 0xEF;
      if ( !a5 )
      {
        v20 = 0LL;
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v20);
        CInteractionProcessor::GetInteractionContext((CInteractionProcessor *)a1, *(_DWORD *)(a1 + 788), &v20);
        v13 = v20;
        if ( v20 )
        {
          v27 = 0LL;
          v28 = 0;
          v24 = 0LL;
          v25 = 0LL;
          v26 = 0LL;
          if ( a4 )
          {
            if ( (*(_BYTE *)(a1 + 808) & 0x20) != 0
              && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 112LL))(v20) )
            {
              if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 120LL))(v13, 0LL) )
              {
                if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, __int64, __int128 *))(*(_QWORD *)v13 + 144LL))(
                       v13,
                       *(_QWORD *)(a1 + 832),
                       v21,
                       a1 + 1180,
                       &v24) )
                {
                  CInteractionProcessor::ProcessOutput(
                    (CInteractionProcessor *)a1,
                    a2,
                    a4,
                    v14,
                    a6,
                    (struct InteractionOutput *)&v24);
                }
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 152LL))(v13);
              }
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 104LL))(v13, 0LL);
            }
            v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v13 + 80LL))(v13, a1 + 1180, &v24);
            if ( v7 < 0 )
              goto LABEL_32;
            v16 = a4;
          }
          else
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 120LL))(v20, 0LL) )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 152LL))(v13);
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 104LL))(v13, 0LL);
            }
            v17 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 40LL))(v13, v29);
            v16 = 0;
            v24 = *(_OWORD *)v17;
            v25 = *(_OWORD *)(v17 + 16);
            v26 = *(_OWORD *)(v17 + 32);
            v27 = *(_QWORD *)(v17 + 48);
            v28 = *(_DWORD *)(v17 + 56);
          }
          CInteractionProcessor::ProcessOutput(
            (CInteractionProcessor *)a1,
            a2,
            v16,
            v15,
            a6,
            (struct InteractionOutput *)&v24);
        }
LABEL_32:
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v20);
        return (unsigned int)v7;
      }
      v22[1] = *(_DWORD *)(a1 + 812);
      v22[2] = *(_DWORD *)(a1 + 816);
      v22[3] = *(_DWORD *)(a1 + 820);
      v22[0] = 3;
      v23 = (unsigned __int8)CInteractionProcessor::GetRailsEnabled(a1, 0) | 4;
      v23 = v23 & 0xFD | (unsigned __int8)(2 * CInteractionProcessor::GetRailsEnabled(a1, 1));
      (*(void (__fastcall **)(struct IManipulationResource *, _DWORD *))(*(_QWORD *)a2 + 32LL))(a2, v22);
      if ( a5 == 2 )
      {
        v18 = *(_QWORD *)a2;
        v22[0] = 0;
        (*(void (__fastcall **)(struct IManipulationResource *, _DWORD *))(v18 + 32))(a2, v22);
      }
      *(_DWORD *)(a1 + 1268) = a5;
    }
  }
  return (unsigned int)v7;
}
