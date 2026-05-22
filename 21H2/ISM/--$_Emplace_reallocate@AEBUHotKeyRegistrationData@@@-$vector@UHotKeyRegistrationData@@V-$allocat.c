/*
 * XREFs of ??$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@?$vector@UHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@QEAAPEAUHotKeyRegistrationData@@QEAU2@AEBU2@@Z @ 0x1800BB144
 * Callers:
 *     ?ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z @ 0x1800BB2E0 (-ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAG.c)
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x1800C9BD0 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18004B267 (memmove_0.c)
 *     ?_Change_array@?$vector@UHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@AEAAXQEAUHotKeyRegistrationData@@_K1@Z @ 0x1800BB56C (-_Change_array@-$vector@UHotKeyRegistrationData@@V-$allocator@UHotKeyRegistrationData@@@std@@@st.c)
 */

__int64 __fastcall std::vector<HotKeyRegistrationData>::_Emplace_reallocate<HotKeyRegistrationData const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // r15
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  char *v18; // rcx
  size_t v19; // r8
  __int64 result; // rax
  void *v21; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) / 12;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 12;
  if ( v7 == 0x1555555555555555LL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 12;
  v10 = v9 >> 1;
  if ( v9 <= 0x1555555555555555LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 12 * v11;
  if ( v11 > 0x1555555555555555LL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v21 = v13;
  try
  {
    v15 = 3 * v6;
    *(_QWORD *)((char *)v13 + 4 * v15) = *(_QWORD *)a3;
    *((_DWORD *)v13 + v15 + 2) = *(_DWORD *)(a3 + 8);
    v16 = a1[1];
    v17 = *a1;
    v18 = (char *)v13;
    if ( a2 == v16 )
    {
      v19 = v16 - v17;
    }
    else
    {
      memmove_0(v13, v17, a2 - (_BYTE *)*a1);
      v18 = (char *)v14 + 4 * v15 + 12;
      v19 = (_BYTE *)a1[1] - a2;
      v17 = a2;
    }
    memmove_0(v18, v17, v19);
    std::vector<HotKeyRegistrationData>::_Change_array(a1, v14, v8, v11);
    result = (__int64)*a1 + 4 * v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(12 * v11));
    throw;
  }
  return result;
}
