/*
 * XREFs of ?SendViewStateToWindow@LegacyViewWrapper@@AEAAX_N@Z @ 0x1802C9414
 * Callers:
 *     ?v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1802C95E0 (-v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?v_SetDesiredPosition_OnBeforePositionWindow@LegacyViewWrapper@@EEAAX_N0@Z @ 0x1802C9810 (-v_SetDesiredPosition_OnBeforePositionWindow@LegacyViewWrapper@@EEAAX_N0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyViewWrapper::SendViewStateToWindow(LegacyViewWrapper *this, unsigned __int8 a2)
{
  int v2; // r8d
  __int64 v3; // rdx

  v2 = a2;
  v3 = *((_QWORD *)this + 35);
  if ( v3 )
  {
    if ( (*((_BYTE *)this + 472) & 0x10) == 0 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64, unsigned __int64))(**(_QWORD **)(*((_QWORD *)this + 22) + 456LL)
                                                                                           + 24LL))(
        *(_QWORD *)(*((_QWORD *)this + 22) + 456LL),
        v3,
        1LL,
        *((unsigned __int16 *)this + 114) | ((unsigned __int64)*((unsigned __int16 *)this + 116) << 16),
        *((unsigned __int16 *)this + 118) | (unsigned __int64)(unsigned int)(v2 << 17));
  }
}
