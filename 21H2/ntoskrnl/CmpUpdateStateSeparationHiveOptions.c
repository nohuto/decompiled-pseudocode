/*
 * XREFs of CmpUpdateStateSeparationHiveOptions @ 0x140A8FB1C
 * Callers:
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 CmpUpdateStateSeparationHiveOptions()
{
  _DWORD *v0; // rcx
  __int64 v1; // rdx
  __int64 result; // rax

  if ( CmStateSeparationAllHivesVolatile )
  {
    v0 = &unk_140C00F20;
    v1 = 7LL;
    result = 0x8000LL;
    do
    {
      *v0 |= 0x8000u;
      v0 += 50;
      --v1;
    }
    while ( v1 );
  }
  else
  {
    byte_140C01004 = 0;
    if ( !CmStateSeparationDevMode )
    {
      result = 0x8000LL;
      dword_140C010B0 |= 0x8000u;
      dword_140C01178 |= 0x8000u;
    }
    byte_140C01324 = 0;
    byte_140C013EB = 1;
  }
  return result;
}
