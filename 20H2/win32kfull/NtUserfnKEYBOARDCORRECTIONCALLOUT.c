/*
 * XREFs of NtUserfnKEYBOARDCORRECTIONCALLOUT @ 0x1C0206310
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserfnKEYBOARDCORRECTIONCALLOUT(__int64 a1, __int64 a2, __int64 a3)
{
  UserSetLastError(5LL, a2, a3);
  return 0LL;
}
