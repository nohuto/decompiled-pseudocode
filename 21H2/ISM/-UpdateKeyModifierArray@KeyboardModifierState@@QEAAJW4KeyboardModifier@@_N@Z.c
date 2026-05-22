/*
 * XREFs of ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x180136EAC
 * Callers:
 *     ?InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ @ 0x18013554C (-InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ.c)
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180135740 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall KeyboardModifierState::UpdateKeyModifierArray(__int64 a1, int a2, char a3)
{
  __int64 appended; // rax
  int v6; // r11d
  __int64 v7; // r10
  __int64 *v8; // rcx
  __int64 v9; // r9
  __int64 *i; // rdx
  __int64 *v11; // rax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = a2;
  appended = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)&v15, 4uLL);
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(__int64 **)(a1 + 24);
  v9 = 2 * (*(_QWORD *)(a1 + 64) & appended);
  for ( i = *(__int64 **)(v7 + 16 * (*(_QWORD *)(a1 + 64) & appended)); ; i = (__int64 *)*i )
  {
    v11 = *(__int64 **)(v7 + 8 * v9) == v8 ? *(__int64 **)(a1 + 24) : **(__int64 ***)(v7 + 8 * v9 + 8);
    if ( i == v11 )
      break;
    if ( *((_DWORD *)i + 4) == v6 )
      goto LABEL_9;
  }
  i = *(__int64 **)(a1 + 24);
LABEL_9:
  if ( i == v8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\utilities\\keyboardmodifierstate\\lib\\keyboar"
               "dmodifierstate.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  else
  {
    v13 = *((_DWORD *)i + 5);
    if ( a3 )
    {
      ++v13;
      *(_DWORD *)(a1 + 80) |= v6;
    }
    else if ( v13 )
    {
      if ( !--v13 )
        *(_DWORD *)(a1 + 80) &= ~v6;
    }
    *((_DWORD *)i + 5) = v13;
    return 0LL;
  }
}
