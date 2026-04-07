/*
 * XREFs of ?UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x180027798
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001E0C0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180027698 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     wistd::__function::__func__lambda_fa4b3ee05bc46f8629bf882075405124__void___cdecl(int_const_&)_::operator() @ 0x180052CD0 (wistd--__function--__func__lambda_fa4b3ee05bc46f8629bf882075405124__void___cdecl(in_ea_180052CD0.c)
 * Callees:
 *     ?OnAccentStateUpdated@CAccent@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x1800142A8 (-OnAccentStateUpdated@CAccent@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 */

void __fastcall CWindowList::UpdateAccentState(__int64 a1, __int64 a2, int a3)
{
  unsigned int i; // ebx
  __int64 v7; // rdx
  struct CWindowData *v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rcx

  for ( i = 0; i < *(_DWORD *)(a1 + 560); ++i )
  {
    v7 = *(_QWORD *)(a1 + 536);
    if ( *(_DWORD *)(v7 + 16LL * i + 8) == a3 )
    {
      v8 = *(struct CWindowData **)(v7 + 16LL * i);
      v9 = *((_QWORD *)v8 + 48);
      if ( v9 )
      {
        if ( !a2 || *((_QWORD *)v8 + 15) == *(_QWORD *)(a2 + 120) )
        {
          v10 = *(_QWORD **)(v9 + 272);
          if ( v10 )
            CAccent::OnAccentStateUpdated(v10, v8, a3);
        }
      }
    }
  }
}
