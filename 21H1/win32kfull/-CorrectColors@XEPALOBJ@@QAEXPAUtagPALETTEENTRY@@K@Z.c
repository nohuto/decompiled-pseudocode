/*
 * XREFs of ?CorrectColors@XEPALOBJ@@QAEXPAUtagPALETTEENTRY@@K@Z @ 0x1F4872
 * Callers:
 *     _PALOBJ_cGetColors@16 @ 0x2235D0 (_PALOBJ_cGetColors@16.c)
 * Callees:
 *     <none>
 */

void __thiscall XEPALOBJ::CorrectColors(XEPALOBJ *this, struct tagPALETTEENTRY *a2, unsigned int a3)
{
  int v3; // eax
  int v4; // edx
  unsigned int v5; // esi
  BYTE *p_peBlue; // ecx

  v3 = *(_DWORD *)(*(_DWORD *)this + 48);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 1048);
    if ( v4 )
    {
      v5 = a3;
      if ( a3 )
      {
        p_peBlue = &a2->peBlue;
        do
        {
          *(p_peBlue - 2) = *(_BYTE *)(v4 + 2 * *(p_peBlue - 2) + 1);
          *(p_peBlue - 1) = *(_BYTE *)(v4 + 2 * *(p_peBlue - 1) + 513);
          *p_peBlue = *(_BYTE *)(v4 + 2 * *p_peBlue + 1025);
          p_peBlue += 4;
          --v5;
        }
        while ( v5 );
      }
    }
  }
}
