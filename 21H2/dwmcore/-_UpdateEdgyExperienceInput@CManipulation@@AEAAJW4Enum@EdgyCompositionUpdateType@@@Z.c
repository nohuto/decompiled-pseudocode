/*
 * XREFs of ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x1801D5EC0
 * Callers:
 *     ?ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE@@@Z @ 0x1801D4840 (-ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPUL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x180064F0C (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 *     ?UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1802224C8 (-UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 */

__int64 __fastcall CManipulation::_UpdateEdgyExperienceInput(__int64 a1)
{
  int v1; // ebx
  __int128 *v2; // rsi
  int v4; // eax
  struct CWeakResourceReference *v5; // rcx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rax
  int updated; // eax
  __int64 v15; // rcx
  struct CWeakResourceReference *v17; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+50h] [rbp-A8h]
  __int128 v20; // [rsp+60h] [rbp-98h]
  __int128 v21; // [rsp+70h] [rbp-88h]
  __int128 v22; // [rsp+80h] [rbp-78h]
  __int128 v23; // [rsp+90h] [rbp-68h]
  __int128 v24; // [rsp+A0h] [rbp-58h]
  __int128 v25; // [rsp+B0h] [rbp-48h]
  __int128 v26; // [rsp+C0h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-28h]
  void *retaddr; // [rsp+F8h] [rbp+0h]

  v1 = 0;
  v2 = (__int128 *)(a1 + 568);
  if ( !*(_DWORD *)(a1 + 568) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( *(_QWORD *)(a1 + 712) )
    goto LABEL_16;
  v17 = 0LL;
  v4 = CWeakResourceReference::Get((struct CResource *)a1, &v17);
  v1 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, 0LL, 0, v4, 0x97u, 0LL);
    v5 = v17;
    if ( v17 )
      (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v17 + 8LL))(v17);
  }
  else
  {
    *(_QWORD *)(a1 + 712) = v17;
  }
  if ( v1 >= 0 )
  {
LABEL_16:
    if ( *(_QWORD *)(a1 + 712) )
    {
      v6 = *v2;
      v18[0] = *(_QWORD *)(a1 + 712);
      v7 = v2[1];
      v18[1] = 2LL;
      v19 = v6;
      v8 = v2[2];
      v20 = v7;
      v9 = v2[3];
      v21 = v8;
      v10 = v2[4];
      v22 = v9;
      v11 = v2[5];
      v23 = v10;
      v12 = v2[6];
      v24 = v11;
      v25 = v12;
      v13 = *((_QWORD *)v2 + 16);
      v26 = v2[7];
      v27 = v13;
      LODWORD(v19) = *(_DWORD *)(a1 + 704);
      updated = CInputManager::UpdateEdgyInput(
                  *(CInputManager **)(*(_QWORD *)(a1 + 16) + 104LL),
                  (const struct EdgyCompositionConfigurationUpdateEx *)v18);
      v1 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, updated, 0x40Eu, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, 0LL, 0, v1, 0x3F3u, 0LL);
  }
  return (unsigned int)v1;
}
