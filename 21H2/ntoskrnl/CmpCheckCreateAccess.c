/*
 * XREFs of CmpCheckCreateAccess @ 0x1405FC81C
 * Callers:
 *     CmpCheckCreateAccessOnKcbStack @ 0x1405FC750 (CmpCheckCreateAccessOnKcbStack.c)
 * Callees:
 *     SeAccessCheck @ 0x1402AB090 (SeAccessCheck.c)
 *     RtlIsSandboxedToken @ 0x14071C8A0 (RtlIsSandboxedToken.c)
 */

BOOLEAN __fastcall CmpCheckCreateAccess(
        __int64 a1,
        void *a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        KPROCESSOR_MODE AccessMode,
        int a5,
        PNTSTATUS a6)
{
  PNTSTATUS v6; // rdi
  struct _SECURITY_SUBJECT_CONTEXT *v7; // rbp
  BOOLEAN v8; // bl
  ACCESS_MASK v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+64h] [rbp+Ch]

  v11 = HIDWORD(a1);
  v6 = a6;
  v7 = a3 + 1;
  v10 = 0;
  v8 = SeAccessCheck(
         a2,
         a3 + 1,
         0,
         a5 | 4,
         0,
         0LL,
         (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
         AccessMode,
         &v10,
         a6);
  if ( v8 && (a5 & 0x20) != 0 && (unsigned __int8)RtlIsSandboxedToken(v7) )
  {
    v8 = 0;
    *v6 = -1073741790;
  }
  return v8;
}
