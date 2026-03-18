/*
 * XREFs of NtUserSetCursor @ 0x1C00AF700
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00AE058 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 */

__int64 __fastcall NtUserSetCursor(unsigned __int64 a1)
{
  __int64 v2; // rbx
  struct tagCURSOR *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct tagCURSOR *v7; // rax

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  if ( a1 )
  {
    v3 = (struct tagCURSOR *)HMValidateHandle(a1, 3u);
    if ( !v3 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0LL;
  }
  v7 = zzzSetCursor(v3);
  if ( v7 )
    v2 = *(_QWORD *)v7;
LABEL_5:
  UserSessionSwitchLeaveCrit(v5, v4, v6);
  return v2;
}
