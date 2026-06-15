/*
 * XREFs of ?ULongLongSub@@YAJ_K0PEA_K@Z @ 0x180052654
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z @ 0x18000316C (-LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ULongLongSub(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r9

  if ( a1 < a2 )
    v3 = -1LL;
  else
    v3 = a1 - a2;
  *a3 = v3;
  return a1 < a2 ? 0x80070216 : 0;
}
