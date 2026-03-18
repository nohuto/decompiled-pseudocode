/*
 * XREFs of RtlHashBytes2 @ 0x1403F15C4
 * Callers:
 *     MiFindUserSidHotPatchContext @ 0x1408C54FC (MiFindUserSidHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x1408C65E0 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x1402F7440 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 */

__int64 __fastcall RtlHashBytes2(const unsigned __int8 *a1, unsigned __int64 a2)
{
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  MetroHash64::Hash(a1, a2, (unsigned __int8 *const)&v3);
  return v3;
}
