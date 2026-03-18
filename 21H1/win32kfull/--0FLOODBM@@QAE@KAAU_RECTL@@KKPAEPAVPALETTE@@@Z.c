/*
 * XREFs of ??0FLOODBM@@QAE@KAAU_RECTL@@KKPAEPAVPALETTE@@@Z @ 0x21F4E3
 * Callers:
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     <none>
 */

FLOODBM *__thiscall FLOODBM::FLOODBM(
        FLOODBM *this,
        unsigned int a2,
        struct _RECTL *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *a6,
        struct PALETTE *a7)
{
  int v7; // eax

  *(_DWORD *)this = a2;
  *(struct _RECTL *)((char *)this + 4) = *a3;
  *((_DWORD *)this + 8) = -1;
  *((_DWORD *)this + 5) = a4;
  *((_DWORD *)this + 7) = a5;
  *((_DWORD *)this + 6) = a6;
  if ( a7 )
  {
    v7 = *((_DWORD *)a7 + 4);
    if ( (v7 & 0xC) != 0 )
    {
      *((_DWORD *)this + 8) = 0xFFFFFF;
    }
    else if ( (v7 & 2) != 0 )
    {
      *((_DWORD *)this + 8) = **((_DWORD **)a7 + 19) | *(_DWORD *)(*((_DWORD *)a7 + 19) + 4) | *(_DWORD *)(*((_DWORD *)a7 + 19) + 8);
    }
  }
  return this;
}
