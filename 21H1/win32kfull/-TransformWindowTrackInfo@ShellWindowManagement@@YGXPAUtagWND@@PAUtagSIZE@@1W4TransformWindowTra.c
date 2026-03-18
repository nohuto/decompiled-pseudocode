/*
 * XREFs of ?TransformWindowTrackInfo@ShellWindowManagement@@YGXPAUtagWND@@PAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1305E
 * Callers:
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YGXPAUtagWND@@QBUtagMINMAXINFO@@@Z @ 0x12FC4 (-TrackedWindowTrackingInfo@NotifyShell@@YGXPAUtagWND@@QBUtagMINMAXINFO@@@Z.c)
 *     _NtUserUpdateWindowTrackingInfo@12 @ 0x16AF00 (_NtUserUpdateWindowTrackingInfo@12.c)
 * Callees:
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 */

int __fastcall ShellWindowManagement::TransformWindowTrackInfo(int a1, INT *a2, INT *a3, int a4)
{
  int v4; // edi
  int v5; // esi
  int result; // eax
  int v7; // eax
  unsigned __int16 v8; // dx
  INT v9; // ebx
  INT v10; // esi
  INT v11; // eax
  INT v12; // [esp-10h] [ebp-1Ch]
  unsigned __int16 v14; // [esp+18h] [ebp+Ch]

  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(_DWORD *)(v4 + 184) & 0xF;
  if ( v5 == 3 )
  {
    result = (*(_DWORD *)(v4 + 184) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v4 + 144) & 0x8000000) != 0 )
  {
    result = (unsigned __int16)GetWindowDpiLastNotify();
  }
  else if ( !v5
         && (v7 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 248)) != 0
         && (*(_BYTE *)(**(_DWORD **)(v7 + 4) + 32) & 1) != 0 )
  {
    result = 96;
  }
  else
  {
    result = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 232) + 160);
  }
  if ( *(_WORD *)(v4 + 180) != (_WORD)result )
  {
    if ( a4 )
    {
      v8 = result;
      LOWORD(result) = *(_WORD *)(v4 + 180);
    }
    else
    {
      v8 = *(_WORD *)(v4 + 180);
    }
    v9 = (unsigned __int16)result;
    v10 = v8;
    v14 = v8;
    v11 = EngMulDiv(*a2, v8, (unsigned __int16)result);
    v12 = a2[1];
    *a2 = v11;
    a2[1] = EngMulDiv(v12, v10, v9);
    *a3 = EngMulDiv(*a3, v10, v9);
    result = EngMulDiv(a3[1], v14, v9);
    a3[1] = result;
  }
  return result;
}
