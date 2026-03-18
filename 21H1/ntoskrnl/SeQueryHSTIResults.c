/*
 * XREFs of SeQueryHSTIResults @ 0x14075E660
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 */

__int64 __fastcall SeQueryHSTIResults(void *a1, unsigned int a2, _DWORD *a3)
{
  size_t v3; // rax
  unsigned int v4; // ebx

  v3 = (unsigned int)dword_140D3E340;
  *a3 = dword_140D3E340;
  v4 = 0;
  if ( (_DWORD)v3 )
  {
    if ( a2 >= (unsigned int)v3 )
      memmove(a1, qword_140D3E348, v3);
    else
      return (unsigned int)-1073741820;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v4;
}
