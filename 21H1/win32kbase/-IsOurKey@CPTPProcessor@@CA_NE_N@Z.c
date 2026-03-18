/*
 * XREFs of ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x1C01A8EB8
 * Callers:
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C01A94BC (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CPTPProcessor::IsOurKey(unsigned __int64 a1, char a2)
{
  char v2; // r8
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax

  v2 = 0;
  if ( !a2 && !_InterlockedCompareExchange64(&qword_1C0256DB0, 0LL, 0LL) )
    return 0;
  if ( (unsigned __int8)(a1 - 48) <= 0x3Fu )
  {
    v4 = 0xFFFF07FFFFFE03FFuLL;
    if ( _bittest64((const __int64 *)&v4, (unsigned int)(a1 - 48)) )
      return 1;
  }
  if ( (unsigned __int8)a1 <= 0x20u )
  {
    v5 = 0x100002200LL;
    if ( _bittest64(&v5, a1) )
      return 1;
  }
  LOBYTE(a1) = a1 + 70;
  if ( (unsigned __int8)a1 <= 0x25u )
  {
    v6 = 0x3E0000007FLL;
    if ( _bittest64(&v6, a1) )
      return 1;
  }
  return v2;
}
