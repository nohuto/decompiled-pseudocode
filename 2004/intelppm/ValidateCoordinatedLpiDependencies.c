/*
 * XREFs of ValidateCoordinatedLpiDependencies @ 0x1C002E858
 * Callers:
 *     LpiTranslateCoordinatedIdleStates @ 0x1C003A120 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002E8D8 (ValidateCoordinatedLpiDependenciesProcessor.c)
 */

__int64 __fastcall ValidateCoordinatedLpiDependencies(_DWORD *a1)
{
  int v1; // ebx
  unsigned int v3; // esi
  _DWORD *v4; // rbp
  __int64 result; // rax

  v1 = 0;
  if ( !*a1 )
    return 0LL;
  while ( 1 )
  {
    v3 = 0;
    v4 = &a1[56 * v1];
    if ( v4[63] )
      break;
LABEL_6:
    if ( (unsigned int)++v1 >= *a1 )
      return 0LL;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v4 + 33) + 16LL * v3) != -1 )
    {
      result = ValidateCoordinatedLpiDependenciesProcessor(v4 + 12);
      if ( (int)result < 0 )
        return result;
    }
    if ( ++v3 >= v4[63] )
      goto LABEL_6;
  }
}
