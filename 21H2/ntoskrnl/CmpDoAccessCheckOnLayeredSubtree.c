/*
 * XREFs of CmpDoAccessCheckOnLayeredSubtree @ 0x14065B560
 * Callers:
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmpDoAccessCheckOnKcbSubtree @ 0x14091854C (CmpDoAccessCheckOnKcbSubtree.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14065B81C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpCheckKeyNodeStackAccess @ 0x14065BF3C (CmpCheckKeyNodeStackAccess.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x14065C388 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x14065C63C (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x14065C6C0 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14069F2B4 (CmpInitializeKeyNodeStack.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406B5158 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140721BF0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x14091D2E4 (CmpSubtreeEnumeratorStartForKcbStack.c)
 */

__int64 __fastcall CmpDoAccessCheckOnLayeredSubtree(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        char a6)
{
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // ebx
  int v13; // eax
  int i; // eax
  __int64 v15; // rdx
  __int64 v16; // r9
  int v17; // eax
  __int64 SecurityCacheEntryForKcbStack; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-79h] BYREF
  __int64 v22; // [rsp+28h] [rbp-71h] BYREF
  _WORD v23[56]; // [rsp+30h] [rbp-69h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  memset(&v23[1], 0, 0x66uLL);
  v23[0] = -2;
  CmpInitializeKeyNodeStack(&v23[8]);
  if ( (a6 & 1) != 0 )
  {
    if ( a1 )
    {
      SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL);
      v12 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32));
      if ( v12 < 0 )
        goto LABEL_14;
      goto LABEL_16;
    }
    LOBYTE(v11) = (a6 & 2) != 0;
    LOBYTE(v10) = a4;
    v12 = CmpCheckKeyNodeStackAccess(a3, v10, a5, v11);
    if ( v12 < 0 )
      goto LABEL_14;
  }
  if ( !a1 )
  {
    v13 = CmpSubtreeEnumeratorStartForKeyNodeStack(v23, a3);
    goto LABEL_6;
  }
LABEL_16:
  v13 = CmpSubtreeEnumeratorStartForKcbStack(v23, a1);
LABEL_6:
  v12 = v13;
  if ( v13 >= 0 )
  {
    for ( i = CmpSubtreeEnumeratorAdvance(v23); i != -2147483622; i = CmpSubtreeEnumeratorAdvance(v23) )
    {
      CmpSubtreeEnumeratorGetCurrentKeyStacks(v23, &v21, &v22);
      if ( v21 )
      {
        v20 = CmpGetSecurityCacheEntryForKcbStack(v21, a2, 0LL);
        v17 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(v20 + 32));
      }
      else
      {
        LOBYTE(v16) = (a6 & 2) != 0;
        LOBYTE(v15) = a4;
        v17 = CmpCheckKeyNodeStackAccess(v22, v15, a5, v16);
      }
      v12 = v17;
      if ( v17 < 0 )
        goto LABEL_14;
    }
    v12 = 0;
  }
LABEL_14:
  CmpSubtreeEnumeratorCleanup(v23);
  return (unsigned int)v12;
}
