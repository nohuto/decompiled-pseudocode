/*
 * XREFs of ?MapFontFiles@@YG_NKPAPAU_FONTFILEVIEW@@PAPAXPAK@Z @ 0xDE468
 * Callers:
 *     ??0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z @ 0x8737C (--0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z.c)
 *     _lambda_e38443a3a25c903e7c5b58388f45a0a4_::operator() @ 0xDE294 (_lambda_e38443a3a25c903e7c5b58388f45a0a4_--operator().c)
 * Callees:
 *     _EngUnmapFontFileFD@4 @ 0x8B56C (_EngUnmapFontFileFD@4.c)
 *     _EngMapFontFileFDInternal@16 @ 0x8BDE8 (_EngMapFontFileFDInternal@16.c)
 */

char __userpurge MapFontFiles@<al>(
        int a1@<edx>,
        unsigned int a2@<ecx>,
        _DWORD *a3,
        struct _FONTFILEVIEW **a4,
        void **a5,
        unsigned int *a6)
{
  unsigned int v6; // edi
  _DWORD *v7; // esi
  _DWORD *v8; // ebx
  struct _FONTFILEVIEW **v9; // ecx
  int v11; // [esp+10h] [ebp-8h]
  struct _FONTFILEVIEW **v13; // [esp+24h] [ebp+Ch]

  v6 = 0;
  if ( !a2 )
    return 1;
  v7 = a3;
  v8 = a3;
  v9 = (struct _FONTFILEVIEW **)((char *)a4 - (char *)a3);
  v13 = (struct _FONTFILEVIEW **)((char *)a4 - (char *)a3);
  v11 = a1 - (_DWORD)a3;
  while ( EngMapFontFileFDInternal(*(_DWORD **)((char *)v8 + v11), v8, (_DWORD *)((char *)v8 + (_DWORD)v9), 0) )
  {
    v9 = v13;
    ++v6;
    ++v8;
    if ( v6 >= a2 )
      return 1;
  }
  for ( ; v6; --v6 )
  {
    EngUnmapFontFileFD(*(_DWORD *)((char *)v7 + v11));
    *v7 = 0;
    *(struct _FONTFILEVIEW **)((char *)v13 + (_DWORD)v7++) = 0;
  }
  return 0;
}
