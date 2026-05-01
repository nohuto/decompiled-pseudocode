/*
 * XREFs of ?PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180406410
 * Callers:
 *     ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x1803F86AC (-Initialize@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x18038699C (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VPositionAdjustmentHistory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAdjustmentHistory@@@Z @ 0x180405FA4 (--$MakeAndInitialize@VPositionAdjustmentHistory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositio.c)
 */

__int64 __fastcall PositionAdjustmentHistory_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  int v4; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  PositionAdjustmentHistory *v9; // rcx
  PositionAdjustmentHistory *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PositionAdjustmentHistory *v13; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease((volatile int **)&v13);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<PositionAdjustmentHistory,PositionAdjustmentHistory,>(&v13);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = (unsigned int)v3;
    v6 = 115LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\positionadjustmenthistory.cpp",
      (const char *)v5);
    goto LABEL_15;
  }
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_7ae7ff38_b4c2_4847_a3b7_4657c8b5bc82, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v10 = v13;
    *a2 = v13;
    (*(void (__fastcall **)(PositionAdjustmentHistory *))(*(_QWORD *)v10 + 8LL))(v10);
    v4 = 0;
    goto LABEL_15;
  }
  if ( InlineIsEqualGUID(v7, v7) )
  {
    v9 = v13;
    v4 = 0;
    *a2 = v13;
  }
  else
  {
    if ( InlineIsEqualGUID(v8, &GUID_fd10ce77_803f_4316_961f_cc6c4ac32fca) )
    {
      v9 = (PositionAdjustmentHistory *)((char *)v13 + 8);
      *a2 = (char *)v13 + 8;
      v4 = 0;
    }
    else
    {
      v4 = -2147467262;
      v9 = 0LL;
    }
    if ( v4 < 0 )
    {
      v5 = (unsigned int)v4;
      v6 = 116LL;
      goto LABEL_14;
    }
  }
  (*(void (__fastcall **)(PositionAdjustmentHistory *))(*(_QWORD *)v9 + 8LL))(v9);
LABEL_15:
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease((volatile int **)&v13);
  return (unsigned int)v4;
}
