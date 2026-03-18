/*
 * XREFs of ?ValidateBatches@CPrimitiveGroup@@AEBAJPEAX_K@Z @ 0x18009E914
 * Callers:
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x18009F6C0 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::ValidateBatches(CPrimitiveGroup *this, char *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 i; // rax
  __int64 v5; // rcx

  v3 = 0;
  for ( i = 0LL; ; i = (unsigned int)v5 )
  {
    v5 = (unsigned int)(i + 144);
    if ( (unsigned int)v5 > a3 )
      break;
    if ( *(_DWORD *)&a2[i] > 3u || *(_DWORD *)&a2[i + 12] > 7u )
    {
      v3 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003303421, 0x142u, 0LL);
      return v3;
    }
  }
  return v3;
}
