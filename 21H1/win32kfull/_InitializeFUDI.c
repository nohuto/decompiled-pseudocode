/*
 * XREFs of _InitializeFUDI @ 0x1C5214
 * Callers:
 *     _AAHalftoneBitmap @ 0x1BAE67 (_AAHalftoneBitmap.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void *__thiscall InitializeFUDI(char *this)
{
  int v2; // eax
  char *v3; // ecx
  _BYTE **v4; // eax
  _BYTE *v5; // esi
  bool v6; // zf
  int *v7; // eax
  int v8; // esi
  int v10; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+Ch] [ebp-Ch]
  int v12; // [esp+10h] [ebp-8h]
  char *v13; // [esp+10h] [ebp-8h]
  char *v14; // [esp+14h] [ebp-4h]
  int v15; // [esp+14h] [ebp-4h]

  if ( (*(_DWORD *)this & 0x400) != 0 )
    v2 = *((_DWORD *)this + 23);
  else
    v2 = *((_DWORD *)this + 9);
  v3 = this + 8;
  *((_DWORD *)this + 80) = v2;
  if ( (this[8] & 4) != 0 )
  {
    v4 = (_BYTE **)(this + 300);
    v12 = 2;
    v10 = *((_DWORD *)this + 8);
    v14 = this + 300;
    do
    {
      v5 = *v4;
      (*((void (__cdecl **)(char *))this + 4))(v3);
      *v5 = v5[2];
      v5[v10 + 1] = v5[v10 - 1];
      v4 = (_BYTE **)(v14 + 4);
      v6 = v12-- == 1;
      v14 += 4;
      v3 = this + 8;
    }
    while ( !v6 );
  }
  else
  {
    v15 = 2;
    v11 = 3 * *((_DWORD *)this + 8);
    v7 = (int *)(this + 300);
    v13 = this + 300;
    do
    {
      v8 = *v7;
      (*((void (__cdecl **)(char *))this + 4))(v3);
      *(_WORD *)v8 = *(_WORD *)(v8 + 6);
      *(_BYTE *)(v8 + 2) = *(_BYTE *)(v8 + 8);
      *(_WORD *)(v11 + v8 + 3) = *(_WORD *)(v11 + v8 - 3);
      *(_BYTE *)(v11 + v8 + 5) = *(_BYTE *)(v11 + v8 - 1);
      v7 = (int *)(v13 + 4);
      v6 = v15-- == 1;
      v13 += 4;
      v3 = this + 8;
    }
    while ( !v6 );
  }
  memcpy(*((void **)this + 78), *((const void **)this + 75), *((_DWORD *)this + 79));
  return memcpy(*((void **)this + 74), *((const void **)this + 76), *((_DWORD *)this + 79));
}
