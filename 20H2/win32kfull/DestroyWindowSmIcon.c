/*
 * XREFs of DestroyWindowSmIcon @ 0x1C00D39BC
 * Callers:
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023D830 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C0242F5C (xxxRecreateSmallIcons.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0076550 (HMValidateHandleNoRip.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C0093B5C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 */

__int64 __fastcall DestroyWindowSmIcon(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // rax
  struct tagCURSOR *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL);
  if ( !v2 )
    return 0LL;
  v4 = HMValidateHandleNoRip(v2, 3);
  v5 = (struct tagCURSOR *)v4;
  if ( !v4 || (*(_DWORD *)(v4 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0, a1, 0x720u, 1);
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL) = 0LL;
  _DestroyCursor(v5, 0LL, v6, v7);
  return 1LL;
}
