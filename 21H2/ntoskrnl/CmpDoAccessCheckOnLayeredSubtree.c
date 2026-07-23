/*
 * XREFs of CmpDoAccessCheckOnLayeredSubtree @ 0x140729C10
 * Callers:
 *     CmSaveKey @ 0x14072907C (CmSaveKey.c)
 *     CmpDoAccessCheckOnKcbSubtree @ 0x140871BFC (CmpDoAccessCheckOnKcbSubtree.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x1405F8F30 (CmpInitializeKeyNodeStack.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406038E0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406DEBC0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140729D00 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpCheckKeyNodeStackAccess @ 0x140729D84 (CmpCheckKeyNodeStackAccess.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140729E3C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x14072A464 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x1408768A8 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x140876938 (CmpSubtreeEnumeratorStartForKcbStack.c)
 */

__int64 __fastcall CmpDoAccessCheckOnLayeredSubtree(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        KPROCESSOR_MODE a4,
        ACCESS_MASK a5,
        char a6)
{
  __int64 v10; // rdx
  __int64 v11; // r9
  char v12; // si
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int i; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 SecurityCacheEntryForKcbStack; // rax
  int v22; // eax
  __int64 v23; // [rsp+20h] [rbp-79h] BYREF
  __int64 v24; // [rsp+28h] [rbp-71h] BYREF
  _WORD v25[56]; // [rsp+30h] [rbp-69h] BYREF

  v23 = 0LL;
  v24 = 0LL;
  memset(&v25[1], 0, 0x66uLL);
  v25[0] = -2;
  CmpInitializeKeyNodeStack((char *)&v25[8]);
  v12 = (a6 & 2) != 0;
  if ( (a6 & 1) == 0
    || (a1
      ? (v18 = CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL),
         v13 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(v18 + 32), a4, a5, v12))
      : (LOBYTE(v11) = (a6 & 2) != 0, LOBYTE(v10) = a4, v13 = CmpCheckKeyNodeStackAccess(a3, v10, a5, v11)),
        v14 = v13,
        v13 >= 0) )
  {
    v15 = a1 ? CmpSubtreeEnumeratorStartForKcbStack(v25, a1) : CmpSubtreeEnumeratorStartForKeyNodeStack(v25, a3);
    v14 = v15;
    if ( v15 >= 0 )
    {
      for ( i = CmpSubtreeEnumeratorAdvance(v25); i != -2147483622; i = CmpSubtreeEnumeratorAdvance(v25) )
      {
        CmpSubtreeEnumeratorGetCurrentKeyStacks(v25, &v23, &v24);
        if ( v23 )
        {
          SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(v23, a2, 0LL);
          v22 = CmpCheckKeySecurityDescriptorAccess(
                  (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
                  a4,
                  a5,
                  v12);
        }
        else
        {
          LOBYTE(v20) = (a6 & 2) != 0;
          LOBYTE(v19) = a4;
          v22 = CmpCheckKeyNodeStackAccess(v24, v19, a5, v20);
        }
        v14 = v22;
        if ( v22 < 0 )
          goto LABEL_11;
      }
      v14 = 0;
    }
  }
LABEL_11:
  CmpSubtreeEnumeratorCleanup(v25);
  return v14;
}
