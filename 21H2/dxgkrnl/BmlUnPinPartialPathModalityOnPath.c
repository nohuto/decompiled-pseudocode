/*
 * XREFs of BmlUnPinPartialPathModalityOnPath @ 0x1C03AB628
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C01BDB08 (BmlPinNextBestTargetMode.c)
 *     BmlUnPinAllPathsPartialModalityFromSource @ 0x1C03AB580 (BmlUnPinAllPathsPartialModalityFromSource.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03AC0EC (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BmlUnPinPartialPathModalityOnPath(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned int v9; // r12d
  struct DMMVIDPNPRESENTPATH *Path; // rax
  struct DMMVIDPNPRESENTPATH *v11; // rbp
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // r15d
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ebp
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+78h] [rbp+10h]

  v3 = a3;
  if ( !a1 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v6 = 120 * v3;
  v7 = *(_QWORD *)(120 * v3 + a1 + 16);
  v8 = *(unsigned int *)(v7 + 28);
  v9 = *(_DWORD *)(v7 + 24);
  Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(a2 + 96), v9, *(_DWORD *)(v7 + 28));
  v11 = Path;
  if ( !Path )
  {
    WdLogSingleEntry4(3LL, v3, a2, v9, v8);
    return 3223192345LL;
  }
  v13 = *((_DWORD *)Path + 29) == 254;
  v24 = *(_QWORD *)(a2 + 48);
  v14 = *(_QWORD *)(v24 + 488);
  v23 = v14;
  if ( !v13 )
  {
    v15 = a2 + 96;
    LOBYTE(v15) = 1;
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v14 + 88))(
            (a2 + 96) & -(__int64)(a2 != -289),
            v9,
            (unsigned int)v8,
            v15);
    if ( v16 < 0 )
    {
LABEL_9:
      WdLogSingleEntry4(
        3LL,
        v3,
        a2,
        *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 24LL),
        *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 28LL));
      return (unsigned int)v16;
    }
    v14 = v23;
  }
  if ( *((_DWORD *)v11 + 28) != 254 )
  {
    v17 = a2 + 96;
    LOBYTE(v17) = 1;
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v14 + 72))(
            (a2 + 96) & -(__int64)(a2 != -289),
            *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 24LL),
            *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 28LL),
            v17);
    if ( v16 < 0 )
      goto LABEL_9;
  }
  v18 = *((_QWORD *)v11 + 12);
  v19 = *(_QWORD *)(v18 + 104);
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
    v20 = *(_QWORD *)(v18 + 104);
  }
  else
  {
    v20 = 0LL;
  }
  v13 = *(_QWORD *)(v20 + 144) == 0LL;
  v23 = v20;
  if ( v13
    || (v21 = v20 & -(__int64)(v20 != -137),
        LOBYTE(v20) = 1,
        v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v24 + 504) + 56LL))(v21, v20),
        v22 >= 0) )
  {
    v22 = 0;
  }
  else
  {
    WdLogSingleEntry4(
      3LL,
      v3,
      a2,
      *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 24LL),
      *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 28LL));
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v23, 0LL);
  return (unsigned int)v22;
}
