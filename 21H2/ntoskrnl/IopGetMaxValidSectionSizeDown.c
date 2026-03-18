/*
 * XREFs of IopGetMaxValidSectionSizeDown @ 0x140554938
 * Callers:
 *     KeCapturePersistentThreadState @ 0x1405558E0 (KeCapturePersistentThreadState.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14028FBF0 (MmIsAddressValidEx.c)
 */

__int64 __fastcall IopGetMaxValidSectionSizeDown(unsigned __int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx

  v2 = a2;
  v3 = 0;
  if ( a1 < a2 )
    v2 = a1;
  if ( v2 )
  {
    do
    {
      if ( !MmIsAddressValidEx(a1 - v3) )
        break;
      ++v3;
    }
    while ( v3 < v2 );
  }
  return v3;
}
