/*
 * XREFs of ?bNextPoint@READER@@IAEHAAU_POINTFIX@@@Z @ 0x23550D
 * Callers:
 *     ??0LINER@@QAE@AAVEPATHOBJ@@@Z @ 0x234A8A (--0LINER@@QAE@AAVEPATHOBJ@@@Z.c)
 *     ?vNextPoint@LINER@@AAEXXZ @ 0x236DD5 (-vNextPoint@LINER@@AAEXXZ.c)
 * Callees:
 *     <none>
 */

int __thiscall READER::bNextPoint(READER *this, struct _POINTFIX *a2)
{
  struct _POINTFIX *v3; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // ecx
  struct _POINTFIX *v8; // edx
  int v9; // edx

  v3 = (struct _POINTFIX *)*((_DWORD *)this + 4);
  if ( (unsigned int)v3 >= *((_DWORD *)this + 5) )
  {
    if ( (*((_BYTE *)this + 4) & 2) != 0 )
    {
      return 0;
    }
    else
    {
      v5 = EPATHOBJ::bEnum(*(EPATHOBJ **)this, (struct _PATHDATA *)((char *)this + 4));
      v6 = *((_DWORD *)this + 6);
      v4 = 1;
      if ( v5 )
        v7 = v6 | 1;
      else
        v7 = v6 & 0xFFFFFFFE;
      v8 = (struct _POINTFIX *)*((_DWORD *)this + 3);
      *((_DWORD *)this + 6) = v7;
      *a2 = *v8;
      v9 = *((_DWORD *)this + 3);
      *((_DWORD *)this + 4) = v9 + 8;
      *((_DWORD *)this + 5) = v9 + 8 * *((_DWORD *)this + 2);
    }
  }
  else
  {
    *a2 = *v3;
    *((_DWORD *)this + 4) += 8;
    return 1;
  }
  return v4;
}
