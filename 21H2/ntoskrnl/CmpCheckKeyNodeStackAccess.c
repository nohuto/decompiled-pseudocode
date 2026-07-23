/*
 * XREFs of CmpCheckKeyNodeStackAccess @ 0x140729D84
 * Callers:
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140729C10 (CmpDoAccessCheckOnLayeredSubtree.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406038E0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x14072A1AC (CmpGetSecurityCellForKeyNodeStack.c)
 */

__int64 __fastcall CmpCheckKeyNodeStackAccess(__int64 a1, KPROCESSOR_MODE a2, ACCESS_MASK a3, char a4)
{
  __int64 v7; // r14
  __int64 v8; // rbx
  unsigned int v9; // edi
  unsigned int v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0xFFFFFFFFLL;
  v11 = 0;
  v13[0] = 0LL;
  CmpGetSecurityCellForKeyNodeStack(a1, v13, &v11);
  v7 = v13[0];
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(v13[0] + 8LL))(v13[0], v11, &v12);
  v9 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(v8 + 20), a2, a3, a4);
  if ( v8 )
    (*(void (__fastcall **)(__int64, __int64 *))(v7 + 16))(v7, &v12);
  return v9;
}
