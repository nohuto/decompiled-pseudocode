/*
 * XREFs of CmpUpdateStateSeparationHiveOptions @ 0x140B4E100
 * Callers:
 *     CmInitSystem1 @ 0x140B15F88 (CmInitSystem1.c)
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
    v0 = &unk_140C02550;
    v1 = 7LL;
    result = 0x8000LL;
    do
    {
      *v0 |= 0x8000u;
      v0 += 46;
      --v1;
    }
    while ( v1 );
  }
  else
  {
    byte_140C02624 = 0;
    if ( !CmStateSeparationDevMode )
    {
      result = 0x8000LL;
      dword_140C026C0 |= 0x8000u;
      dword_140C02778 |= 0x8000u;
    }
    byte_140C02904 = 0;
    byte_140C029BB = 1;
  }
  return result;
}
