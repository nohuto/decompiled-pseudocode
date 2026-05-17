/*
 * XREFs of LdrSetImplicitPathOptions @ 0x1800CE4D0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180010500 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 */

__int64 __fastcall LdrSetImplicitPathOptions(unsigned __int64 a1, int a2)
{
  unsigned __int64 v3; // rdx
  int LoadedDllByHandle; // edi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  int v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  if ( (~((LdrpPolicyBits & 4 | 0x7B) << 8) & a2) != 0 || !a2 )
    return 3221225485LL;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v10, &v9);
  if ( LoadedDllByHandle >= 0 )
  {
    v7 = v10;
    *(_DWORD *)(v10 + 272) = a2;
    LdrpDereferenceModule(v7, v3, v5, v6);
  }
  return (unsigned int)LoadedDllByHandle;
}
