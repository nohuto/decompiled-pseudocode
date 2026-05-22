/*
 * XREFs of ??$_Emplace_reallocate@AEBUHotkeyRegistration@HotKeyClient@@@?$vector@UHotkeyRegistration@HotKeyClient@@V?$allocator@UHotkeyRegistration@HotKeyClient@@@std@@@std@@QEAAPEAUHotkeyRegistration@HotKeyClient@@QEAU23@AEBU23@@Z @ 0x180147F80
 * Callers:
 *     ?RegisterHotKey@HotKeyClient@@UEAAJIII_N@Z @ 0x180148880 (-RegisterHotKey@HotKeyClient@@UEAAJIII_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18004AC87 (memmove_0.c)
 *     ?_Change_array@?$vector@UHotkeyRegistration@HotKeyClient@@V?$allocator@UHotkeyRegistration@HotKeyClient@@@std@@@std@@AEAAXQEAUHotkeyRegistration@HotKeyClient@@_K1@Z @ 0x180148DB4 (-_Change_array@-$vector@UHotkeyRegistration@HotKeyClient@@V-$allocator@UHotkeyRegistration@HotKe.c)
 */

__int64 __fastcall std::vector<HotKeyClient::HotkeyRegistration>::_Emplace_reallocate<HotKeyClient::HotkeyRegistration const &>(
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

  v6 = (a2 - (_BYTE *)*a1) / 20;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 20;
  if ( v7 == 0xCCCCCCCCCCCCCCCLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 20;
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
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v21 = v13;
  try
  {
    v15 = 5 * v6;
    *(_OWORD *)((char *)v13 + 4 * v15) = *(_OWORD *)a3;
    *((_DWORD *)v13 + v15 + 4) = *(_DWORD *)(a3 + 16);
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
      v18 = (char *)v14 + 4 * v15 + 20;
      v19 = (_BYTE *)a1[1] - a2;
      v17 = a2;
    }
    memmove_0(v18, v17, v19);
    std::vector<HotKeyClient::HotkeyRegistration>::_Change_array(a1, v14, v8, v11);
    result = (__int64)*a1 + 4 * v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(20 * v11));
    throw;
  }
  return result;
}
