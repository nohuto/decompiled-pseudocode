/*
 * XREFs of ?_ValidateInjectionTime@@YGHKKKHH@Z @ 0x1498F6
 * Callers:
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 * Callees:
 *     <none>
 */

BOOL __userpurge _ValidateInjectionTime@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  int v7; // esi
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  unsigned int v11; // edx

  v7 = a2;
  if ( a4 && !a2 || !a1 && !a2 )
    return 1;
  if ( !a4 && (!a1 && a2 && !a5 || a2 == a1 || a2 - a1 > a3) )
    return 0;
  v8 = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v10 = MEMORY[0xFFDF0324];
    v11 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v10 = MEMORY[0xFFDF0324];
        v11 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v7 = a2;
      v8 = MEMORY[0xFFDF0004];
    }
    v9 = v8 * (v10 << 8) + (((unsigned int)v8 * (unsigned __int64)v11) >> 24);
  }
  else
  {
    v9 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  return (unsigned int)(v9 - v7) <= 0x1388;
}
