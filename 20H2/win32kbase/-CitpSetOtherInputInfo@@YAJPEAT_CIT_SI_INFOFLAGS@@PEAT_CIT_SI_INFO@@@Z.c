/*
 * XREFs of ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C01F8C0C
 * Callers:
 *     CitSetInfo @ 0x1C00634A0 (CitSetInfo.c)
 * Callees:
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0065954 (-CitpLastInputUpdate@@YAXGI@Z.c)
 */

__int64 __fastcall CitpSetOtherInputInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  struct _CIT_IMPACT_CONTEXT *v3; // rbx
  __int64 CurrentProcessWin32Process; // rax

  v3 = xmmword_1C024E4A0;
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    CurrentProcessWin32Process = *((_QWORD *)xmmword_1C024E4A0 + 15);
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process != *((_QWORD *)v3 + 15) )
      return 3221225659LL;
  }
  if ( !CurrentProcessWin32Process )
    return 3221226021LL;
  CitpLastInputUpdate(*(_WORD *)a2, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return 0LL;
}
