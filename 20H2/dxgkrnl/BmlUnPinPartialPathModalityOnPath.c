/*
 * XREFs of BmlUnPinPartialPathModalityOnPath @ 0x1C02EAE1C
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C0139F78 (BmlPinNextBestTargetMode.c)
 *     BmlUnPinAllPathsPartialModalityFromSource @ 0x1C02EAD68 (BmlUnPinAllPathsPartialModalityFromSource.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C02EB880 (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007C30 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0008108 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BmlUnPinPartialPathModalityOnPath(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // r8d
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DMMVIDPNPRESENTPATH *v17; // r14
  _QWORD *v18; // rax
  bool v20; // zf
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r15d
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // r14d
  _QWORD *v37; // rax
  __int64 v38; // [rsp+70h] [rbp+8h] BYREF
  __int64 v39; // [rsp+78h] [rbp+10h]
  int v40; // [rsp+80h] [rbp+18h]

  v3 = a3;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = v3;
  v9 = 104 * v3;
  v10 = *(_QWORD *)(v9 + a1 + 16);
  v11 = *(_DWORD *)(v10 + 28);
  LODWORD(v10) = *(_DWORD *)(v10 + 24);
  v40 = v11;
  LODWORD(v38) = v10;
  Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(a2 + 96), v10, v11);
  v17 = Path;
  if ( Path )
  {
    v20 = *((_DWORD *)Path + 29) == 254;
    v21 = *(_QWORD *)(a2 + 48);
    v22 = *(_QWORD *)(v21 + 432);
    v39 = v22;
    if ( v20
      || (v23 = a2 + 96,
          LOBYTE(v23) = 1,
          v40 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v22 + 88))(
                  (a2 + 96) & -(__int64)(a2 != -289),
                  (unsigned int)v38,
                  (unsigned int)v40,
                  v23),
          v40 >= 0) )
    {
      if ( *((_DWORD *)v17 + 28) == 254
        || (LOBYTE(v16) = 1,
            v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v22 + 72))(
                    (a2 + 96) & -(__int64)(a2 != -289),
                    *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 24LL),
                    *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 28LL),
                    v16),
            v29 >= 0) )
      {
        v31 = *((_QWORD *)v17 + 12);
        v32 = *(_QWORD *)(v31 + 104);
        if ( v32 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v32 + 96));
          v32 = *(_QWORD *)(v31 + 104);
        }
        v20 = *(_QWORD *)(v32 + 144) == 0LL;
        v38 = v32;
        if ( v20
          || (LOBYTE(v13) = 1,
              v36 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v21 + 448) + 56LL))(
                      v32 & -(__int64)(v32 != -137),
                      v13),
              v36 >= 0) )
        {
          v36 = 0;
        }
        else
        {
          v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35);
          v37[3] = v8;
          v37[4] = a2;
          v37[5] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 24LL);
          v37[6] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 28LL);
          WdLogEvent5_WdWarning(v37);
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v38, 0LL);
        return (unsigned int)v36;
      }
      else
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v13, v28);
        v30[3] = v8;
        v30[4] = a2;
        v30[5] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 24LL);
        v30[6] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 28LL);
        WdLogEvent5_WdWarning(v30);
        return (unsigned int)v29;
      }
    }
    else
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v13, v25);
      v26[3] = v8;
      v26[4] = a2;
      v26[5] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 24LL);
      v26[6] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 28LL);
      WdLogEvent5_WdWarning(v26);
      return (unsigned int)v40;
    }
  }
  else
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    v18[3] = v8;
    v18[4] = a2;
    v18[5] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 24LL);
    v18[6] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 28LL);
    WdLogEvent5_WdWarning(v18);
    return 3223192345LL;
  }
}
