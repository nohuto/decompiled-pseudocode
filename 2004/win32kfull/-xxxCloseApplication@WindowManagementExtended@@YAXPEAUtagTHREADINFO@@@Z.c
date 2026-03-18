/*
 * XREFs of ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0241E10
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C003366C (GetNonChildAncestor.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00344E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_3029ce1d0d0873684df583e6396a0ba0___ @ 0x1C0240714 (_anonymous_namespace_--TryExecuteIfPolicyAllows__lambda_3029ce1d0d0873684df583e6396a0ba0___.c)
 */

void __fastcall WindowManagementExtended::xxxCloseApplication(WindowManagementExtended *this, struct tagTHREADINFO *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)this + 53) + 120LL);
  if ( v3 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 136) + 8LL);
    if ( (*(_BYTE *)(v4 + 9) & 2) == 0
      && !anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_3029ce1d0d0873684df583e6396a0ba0___(v3, v4) )
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 53) + 112LL);
      if ( !v5 || GetNonChildAncestor(v5) != v3 )
      {
        v6 = *((_QWORD *)this + 51);
        v13[2] = 0LL;
        v13[0] = v6;
        *((_QWORD *)this + 51) = v13;
        v13[1] = v3;
        HMLockObject(v3);
        xxxSetFocus((struct tagWND *)v3, v7, v8, v9);
        v3 = ThreadUnlock1(v11, v10, v12);
      }
      if ( v3 )
        PostMessage(v3, 274, 61536, 0);
    }
  }
}
