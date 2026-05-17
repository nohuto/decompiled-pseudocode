/*
 * XREFs of _RtlpValidAttributeInfo@4 @ 0x4B34CC0F
 * Callers:
 *     _RtlAddResourceAttributeAce@28 @ 0x4B34B260 (_RtlAddResourceAttributeAce@28.c)
 * Callees:
 *     _RtlpValidAttribute@4 @ 0x4B34CA83 (_RtlpValidAttribute@4.c)
 */

char __thiscall RtlpValidAttributeInfo(void *this)
{
  int v2; // edi
  int *i; // ebx

  if ( this )
  {
    if ( *(_WORD *)this == 1 )
    {
      v2 = 0;
      if ( !*((_WORD *)this + 1) )
      {
        if ( *((_DWORD *)this + 1) )
        {
          for ( i = (int *)*((_DWORD *)this + 2); RtlpValidAttribute(i); i += 5 )
          {
            if ( (unsigned int)++v2 >= *((_DWORD *)this + 1) )
              return 1;
          }
        }
      }
    }
  }
  return 0;
}
