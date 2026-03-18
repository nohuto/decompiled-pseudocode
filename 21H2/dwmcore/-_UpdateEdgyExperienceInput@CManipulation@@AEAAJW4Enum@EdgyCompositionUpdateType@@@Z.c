/*
 * XREFs of ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x1801F59C8
 * Callers:
 *     ?ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE@@@Z @ 0x1801F42C8 (-ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPUL.c)
 * Callees:
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x18004A55C (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180181064 (-UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CManipulation::_UpdateEdgyExperienceInput(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // ebx
  __int128 *v4; // r14
  int v6; // eax
  __int64 v7; // rcx
  int v8; // esi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rax
  int updated; // eax
  __int64 v18; // rcx
  struct CWeakResourceReference *v20; // rcx
  struct CWeakResourceReference *v21; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+50h] [rbp-A8h]
  __int128 v24; // [rsp+60h] [rbp-98h]
  __int128 v25; // [rsp+70h] [rbp-88h]
  __int128 v26; // [rsp+80h] [rbp-78h]
  __int128 v27; // [rsp+90h] [rbp-68h]
  __int128 v28; // [rsp+A0h] [rbp-58h]
  __int128 v29; // [rsp+B0h] [rbp-48h]
  __int128 v30; // [rsp+C0h] [rbp-38h]
  __int64 v31; // [rsp+D0h] [rbp-28h]
  void *retaddr; // [rsp+F8h] [rbp+0h]

  v3 = 0;
  v4 = (__int128 *)(a1 + 576);
  if ( !*(_DWORD *)(a1 + 576) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( *(_QWORD *)(a1 + 720) )
    goto LABEL_6;
  v21 = 0LL;
  v6 = CWeakResourceReference::Get((struct CResource *)a1, &v21);
  v8 = v6;
  v3 = v6;
  if ( v6 >= 0 )
  {
    *(_QWORD *)(a1 + 720) = v21;
LABEL_6:
    if ( *(_QWORD *)(a1 + 720) )
    {
      v9 = *v4;
      v22[0] = *(_QWORD *)(a1 + 720);
      v10 = v4[1];
      v22[1] = 2LL;
      v23 = v9;
      v11 = v4[2];
      v24 = v10;
      v12 = v4[3];
      v25 = v11;
      v13 = v4[4];
      v26 = v12;
      v14 = v4[5];
      v27 = v13;
      v15 = v4[6];
      v28 = v14;
      v29 = v15;
      v16 = *((_QWORD *)v4 + 16);
      v30 = v4[7];
      v31 = v16;
      LODWORD(v23) = *(_DWORD *)(a1 + 712);
      updated = CInputManager::UpdateEdgyInput(
                  *(CInputManager **)(*(_QWORD *)(a1 + 16) + 232LL),
                  (const struct EdgyCompositionConfigurationUpdateEx *)v22,
                  a3);
      v3 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, updated, 0x40Cu);
    }
    return v3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x94u);
  v20 = v21;
  if ( v21 )
    (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v21 + 8LL))(v21);
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v20, 0LL, 0LL, v8, 0x3F1u);
  return v3;
}
