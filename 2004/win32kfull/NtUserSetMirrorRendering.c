/*
 * XREFs of NtUserSetMirrorRendering @ 0x1C0203040
 * Callers:
 *     <none>
 * Callees:
 *     GreDisableMirrorRendering @ 0x1C0286098 (GreDisableMirrorRendering.c)
 *     GreEnableMirrorRendering @ 0x1C02861A8 (GreEnableMirrorRendering.c)
 */

__int64 __fastcall NtUserSetMirrorRendering(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x3FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v15;
      *((_QWORD *)&v15 + 1) = v4;
      HMLockObject(v4);
      v9 = *(_QWORD *)(gpDispInfo + 40LL);
      if ( a2 )
        v10 = GreEnableMirrorRendering(v9, a1);
      else
        v10 = GreDisableMirrorRendering(v9, a1);
      v7 = v10;
      ThreadUnlock1(v12, v11, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8);
  return v7;
}
