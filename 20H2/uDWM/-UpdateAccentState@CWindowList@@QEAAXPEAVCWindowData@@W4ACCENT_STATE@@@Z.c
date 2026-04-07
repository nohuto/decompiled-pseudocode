/*
 * XREFs of ?UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18002A6AC
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001A260 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002A5AC (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     wistd::__function::__func__lambda_fa4b3ee05bc46f8629bf882075405124__void___cdecl(int_const_&)_::operator() @ 0x180052820 (wistd--__function--__func__lambda_fa4b3ee05bc46f8629bf882075405124__void___cdecl(in_ea_180052820.c)
 * Callees:
 *     ?OnAccentStateUpdated@CAccent@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18002A94C (-OnAccentStateUpdated@CAccent@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 */

__int64 __fastcall CWindowList::UpdateAccentState(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int i; // ebx
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx

  for ( i = 0; i < *(_DWORD *)(a1 + 560); ++i )
  {
    v7 = *(_QWORD *)(a1 + 536);
    result = 2LL * i;
    if ( *(_DWORD *)(v7 + 16LL * i + 8) == a3 )
    {
      v9 = *(_QWORD *)(v7 + 16LL * i);
      v10 = *(_QWORD *)(v9 + 384);
      if ( v10 )
      {
        if ( !a2 || (result = *(_QWORD *)(a2 + 120), *(_QWORD *)(v9 + 120) == result) )
        {
          v11 = *(_QWORD *)(v10 + 272);
          if ( v11 )
            result = CAccent::OnAccentStateUpdated(v11, v9, a3);
        }
      }
    }
  }
  return result;
}
