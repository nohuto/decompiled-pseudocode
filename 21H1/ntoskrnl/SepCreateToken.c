/*
 * XREFs of SepCreateToken @ 0x1407A6EB8
 * Callers:
 *     SeMakeSystemToken @ 0x140A6134C (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A618FC (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A61B88 (SeMakeAnonymousLogonToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x1402D874C (SepCreateTokenEx.c)
 */

__int64 __fastcall SepCreateToken(
        HANDLE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        _QWORD *a8,
        _SID_AND_ATTRIBUTES *a9,
        ULONG Count,
        _SID_AND_ATTRIBUTES *a11,
        unsigned int a12,
        unsigned int a13,
        char **a14,
        void *a15,
        void *a16,
        void *a17)
{
  return SepCreateTokenEx(
           a1,
           0,
           0,
           a4,
           1,
           0,
           a7,
           a8,
           a9,
           Count,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           "*SYSTEM*",
           0LL,
           0LL,
           0,
           0LL,
           0LL,
           1);
}
