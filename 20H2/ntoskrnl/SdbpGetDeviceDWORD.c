/*
 * XREFs of SdbpGetDeviceDWORD @ 0x14096818C
 * Callers:
 *     SdbpMatchDeviceDWORD @ 0x14096872C (SdbpMatchDeviceDWORD.c)
 * Callees:
 *     SdbReadDWORDTag @ 0x140752FC4 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1407533B4 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpGetDeviceDWORD(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebx
  unsigned int FirstTag; // eax

  v3 = a3;
  v5 = -1;
  FirstTag = SdbFindFirstTag(a1, a2, a3);
  if ( FirstTag )
    return (unsigned int)SdbReadDWORDTag(a1, FirstTag, v3);
  return v5;
}
