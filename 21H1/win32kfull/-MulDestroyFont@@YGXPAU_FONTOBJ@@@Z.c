/*
 * XREFs of ?MulDestroyFont@@YGXPAU_FONTOBJ@@@Z @ 0x202E06
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyFont@PDEVOBJ@@QAEXPAU_FONTOBJ@@@Z @ 0xD0B8E (-DestroyFont@PDEVOBJ@@QAEXPAU_FONTOBJ@@@Z.c)
 *     ??0MULTIFONT@@QAE@PAU_FONTOBJ@@JPAU_VDEV@@@Z @ 0x2015B7 (--0MULTIFONT@@QAE@PAU_FONTOBJ@@JPAU_VDEV@@@Z.c)
 *     ??1MULTIFONT@@QAE@XZ @ 0x201732 (--1MULTIFONT@@QAE@XZ.c)
 *     ?DestroyTable@MULTIFONT@@QAEXXZ @ 0x2017E6 (-DestroyTable@MULTIFONT@@QAEXXZ.c)
 */

void __stdcall MulDestroyFont(struct _FONTOBJ *a1)
{
  struct _FONTOBJ *v1; // edi
  _DWORD **v2; // ecx
  _DWORD *v3; // esi
  int v4; // eax
  _DWORD *v5; // ebx
  _DWORD *v6; // [esp+4h] [ebp-Ch] BYREF
  _DWORD **v7; // [esp+8h] [ebp-8h]
  int v8; // [esp+Ch] [ebp-4h]

  v1 = a1;
  if ( a1->pvConsumer )
  {
    MULTIFONT::MULTIFONT((MULTIFONT *)&v6, a1, 0xFFFFFFFF, 0);
    v2 = v7;
    v3 = (_DWORD *)**v7;
    v4 = (*v7)[2];
    if ( v4 )
    {
      v5 = v6;
      do
      {
        v8 = v4 - 1;
        a1 = (struct _FONTOBJ *)v3[9];
        if ( a1[47].iFace )
        {
          if ( v5 )
            v5[9] = v2[v3[2] + 1];
          PDEVOBJ::DestroyFont((PDEVOBJ *)&a1, v1);
          if ( v5 )
            v7[v3[2] + 1] = (_DWORD *)v5[9];
          v2 = v7;
        }
        v4 = v8;
        v3 = (_DWORD *)*v3;
      }
      while ( v8 );
    }
    MULTIFONT::DestroyTable((PVOID *)&v6);
    MULTIFONT::~MULTIFONT((MULTIFONT *)&v6);
  }
}
