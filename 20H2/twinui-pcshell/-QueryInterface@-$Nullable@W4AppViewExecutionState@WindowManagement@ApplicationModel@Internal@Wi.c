/*
 * XREFs of ?QueryInterface@?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800307E0
 * Callers:
 *     ?QueryInterface@?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F88F0 (-QueryInterface@-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationMode_ea_1800F88F0.c)
 *     ?QueryInterface@?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8900 (-QueryInterface@-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationMode_ea_1800F8900.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // r11
  __int64 v13; // rcx
  _QWORD *v14; // r8
  int v15; // ebx

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_12741485_ca3b_5d37_b0e1_161f70753091) )
  {
    *v8 = v9;
LABEL_11:
    v15 = 0;
LABEL_12:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    return (unsigned int)v15;
  }
  if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v11 = v12;
    goto LABEL_11;
  }
  if ( (unsigned int)InlineIsEqualGUID(v10, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
    || (unsigned int)InlineIsEqualGUID(v13, &GUID_00000003_0000_0000_c000_000000000046) )
  {
    *v14 = v9;
    v15 = 0;
  }
  else
  {
    v15 = -2147467262;
    v9 = 0LL;
  }
  if ( v15 >= 0 )
    goto LABEL_12;
  return (unsigned int)v15;
}
