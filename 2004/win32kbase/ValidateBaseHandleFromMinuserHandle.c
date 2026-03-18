/*
 * XREFs of ValidateBaseHandleFromMinuserHandle @ 0x1C011C290
 * Callers:
 *     NtUserReportInertia @ 0x1C0003BD0 (NtUserReportInertia.c)
 * Callees:
 *     ?GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z @ 0x1C011C0A0 (-GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z.c)
 */

__int64 __fastcall ValidateBaseHandleFromMinuserHandle(void *a1, int a2)
{
  __int64 v2; // rbx
  struct _HEAD *ObjectFromMinUser; // rax

  v2 = 0LL;
  ObjectFromMinUser = GetObjectFromMinUser(a1, a2 != 0);
  if ( ObjectFromMinUser )
    return *(_QWORD *)ObjectFromMinUser;
  return v2;
}
