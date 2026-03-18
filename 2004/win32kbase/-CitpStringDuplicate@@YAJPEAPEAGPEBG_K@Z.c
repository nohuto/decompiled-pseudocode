/*
 * XREFs of ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C0039540
 * Callers:
 *     ?CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z @ 0x1C0038FCC (-CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0039064 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C01FA2FC (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

__int64 __fastcall CitpStringDuplicate(unsigned __int16 **a1, const unsigned __int16 *a2, size_t a3)
{
  size_t v5; // rsi
  unsigned __int16 *v6; // rax
  unsigned __int16 *v7; // rbx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !a2 || !a3 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  v5 = a3;
  v6 = (unsigned __int16 *)Win32AllocPool(2 * a3 + 2, 1231254357LL);
  v7 = v6;
  if ( v6 )
  {
    *a1 = v6;
    _InterlockedOr(v9, 0);
    memmove(v6, a2, v5 * 2);
    v7[v5] = 0;
    return 0LL;
  }
  return 3221225626LL;
}
