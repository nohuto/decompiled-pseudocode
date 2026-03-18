/*
 * XREFs of ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C00FB5C0
 * Callers:
 *     zzzImeSetFutureOwner @ 0x1C0031D44 (zzzImeSetFutureOwner.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 * Callees:
 *     Feature_Servicing_2109c_34956946__private_IsEnabled @ 0x1C0159424 (Feature_Servicing_2109c_34956946__private_IsEnabled.c)
 */

__int64 __fastcall WantImeWindow(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v8; // r8

  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x2000000) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 18LL) & 4) != 0 )
    return 0LL;
  if ( (unsigned int)Feature_Servicing_2109c_34956946__private_IsEnabled() )
  {
    v4 = *(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL);
    if ( *(_WORD *)v4 == *(_WORD *)(gpsi + 898LL) || (*(_BYTE *)(v4 + 10) & 1) != 0 )
      return 0LL;
  }
  v5 = *((_QWORD *)a2 + 3);
  if ( !v5 )
    return 0LL;
  v6 = *(_QWORD *)(v5 + 40);
  if ( !v6 || (*(_DWORD *)(v6 + 64) & 4) != 0 )
    return 0LL;
  while ( a1 && v5 == *((_QWORD *)a1 + 3) )
  {
    if ( a1 == *(struct tagWND **)(v5 + 104) )
      return 0LL;
    if ( (unsigned int)Feature_Servicing_2109c_34956946__private_IsEnabled() )
    {
      v8 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
      if ( *(_WORD *)v8 == *(_WORD *)(gpsi + 898LL) || (*(_BYTE *)(v8 + 10) & 1) != 0 )
        return 0LL;
    }
    a1 = (struct tagWND *)*((_QWORD *)a1 + 13);
  }
  return 1LL;
}
