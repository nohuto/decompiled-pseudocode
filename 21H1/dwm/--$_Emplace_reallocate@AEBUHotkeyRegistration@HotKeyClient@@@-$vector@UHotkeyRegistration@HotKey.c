/*
 * XREFs of ??$_Emplace_reallocate@AEBUHotkeyRegistration@HotKeyClient@@@?$vector@UHotkeyRegistration@HotKeyClient@@V?$allocator@UHotkeyRegistration@HotKeyClient@@@std@@@std@@QEAAPEAUHotkeyRegistration@HotKeyClient@@QEAU23@AEBU23@@Z @ 0x14000A574
 * Callers:
 *     ?RegisterHotKey@HotKeyClient@@UEAAJIII_N@Z @ 0x14000B1D0 (-RegisterHotKey@HotKeyClient@@UEAAJIII_N@Z.c)
 * Callees:
 *     memmove_0 @ 0x140004AE3 (memmove_0.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400083F4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UHotkeyRegistration@HotKeyClient@@V?$allocator@UHotkeyRegistration@HotKeyClient@@@std@@@std@@AEAAXQEAUHotkeyRegistration@HotKeyClient@@_K1@Z @ 0x14000BD94 (-_Change_array@-$vector@UHotkeyRegistration@HotKeyClient@@V-$allocator@UHotkeyRegistration@HotKe.c)
 */

// Hidden C++ exception states: #wind=30
__int64 __fastcall std::vector<HotKeyClient::HotkeyRegistration>::_Emplace_reallocate<HotKeyClient::HotkeyRegistration const &>(
        __int64 a1,
        const void *a2,
        __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  char *v13; // rax
  char *v14; // rsi
  __int64 v15; // r14
  const void *v16; // rdx
  size_t v17; // r8
  char *v18; // rcx
  char *v20; // [rsp+58h] [rbp+10h]

  v6 = ((__int64)a2 - *(_QWORD *)a1) / 20;
  v7 = (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) / 20LL;
  if ( v7 == 0xCCCCCCCCCCCCCCCLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 20LL;
  v10 = v9 >> 1;
  if ( v9 <= 0xCCCCCCCCCCCCCCCLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 20 * v11;
  if ( v11 > 0xCCCCCCCCCCCCCCCLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v20 = v13;
  try
  {
    v15 = 5 * v6;
    *(_OWORD *)&v13[4 * v15] = *(_OWORD *)a3;
    *(_DWORD *)&v13[4 * v15 + 16] = *(_DWORD *)(a3 + 16);
    if ( a2 == *(const void **)(a1 + 8) )
    {
      v16 = *(const void **)a1;
      v17 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
      v18 = v13;
    }
    else
    {
      memmove_0(v13, *(const void **)a1, (size_t)a2 - *(_QWORD *)a1);
      v18 = &v14[4 * v15 + 20];
      v17 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
      v16 = a2;
    }
    memmove_0(v18, v16, v17);
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, 20 * v11);
    throw;
  }
  std::vector<HotKeyClient::HotkeyRegistration>::_Change_array(a1, v14, v8, v11);
  return *(_QWORD *)a1 + 4 * v15;
}
