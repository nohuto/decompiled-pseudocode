/*
 * XREFs of ?pjTable@RFONTOBJ@@QAEPAEKPAK@Z @ 0x20988E
 * Callers:
 *     _FONTOBJ_pjOpenTypeTablePointer@12 @ 0x1F3609 (_FONTOBJ_pjOpenTypeTablePointer@12.c)
 * Callees:
 *     ?QueryTrueTypeTable@PFFOBJ@@QAEJKKKJKPAEPAPAEPAK@Z @ 0x86BE2 (-QueryTrueTypeTable@PFFOBJ@@QAEJKKKJKPAEPAPAEPAK@Z.c)
 *     ?pchTranslate@RFONTOBJ@@QAEPADPBD@Z @ 0x20967F (-pchTranslate@RFONTOBJ@@QAEPADPBD@Z.c)
 */

char *__thiscall RFONTOBJ::pjTable(RFONTOBJ *this, unsigned int a2, unsigned int *a3)
{
  unsigned int v4; // esi
  char *v5; // edx
  int v6; // eax
  unsigned int v7; // ecx
  int v9; // [esp+8h] [ebp-10h] BYREF
  unsigned int v10; // [esp+10h] [ebp-8h] BYREF
  char *v11; // [esp+14h] [ebp-4h] BYREF

  v4 = 0;
  v5 = 0;
  v10 = 0;
  v11 = 0;
  v6 = *(_DWORD *)(*(_DWORD *)this + 84);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 56);
    if ( v7 )
    {
      v9 = v6;
      if ( PFFOBJ::QueryTrueTypeTable((PFFOBJ *)&v9, v7, 1u, a2, 0, 0, 0, (unsigned __int8 **)&v11, &v10) == -1 )
      {
        v5 = 0;
      }
      else
      {
        v5 = RFONTOBJ::pchTranslate(this, v11);
        if ( v5 )
          v4 = v10;
      }
    }
  }
  if ( a3 )
    *a3 = v4;
  return v5;
}
