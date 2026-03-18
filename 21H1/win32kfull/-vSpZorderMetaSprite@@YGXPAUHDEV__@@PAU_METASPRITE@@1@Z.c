/*
 * XREFs of ?vSpZorderMetaSprite@@YGXPAUHDEV__@@PAU_METASPRITE@@1@Z @ 0x1E3374
 * Callers:
 *     ?GdiZorderSprite@@YGXPAUHDEV__@@PAUHWND__@@1@Z @ 0x9FBC6 (-GdiZorderSprite@@YGXPAUHDEV__@@PAUHWND__@@1@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge vSpZorderMetaSprite(
        struct HDEV__ *a1@<edx>,
        int a2@<ecx>,
        HDEV a3,
        struct _METASPRITE *a4,
        struct _METASPRITE *a5)
{
  struct HDEV__ *v6; // esi
  struct HDEV__ *v7; // ecx
  int v8; // eax

  v6 = *(struct HDEV__ **)(a2 + 112);
  if ( a1 && v6 )
  {
    if ( v6 == a1 )
    {
      *(_DWORD *)(struct HDEV__ *)(a2 + 112) = v6[1];
    }
    else
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = *((_DWORD *)v6 + 1);
        if ( v6 == a1 )
          break;
        v7 = v6;
        v6 = (struct HDEV__ *)*((_DWORD *)v6 + 1);
        if ( !v8 )
          goto LABEL_11;
      }
      *((_DWORD *)v7 + 1) = v8;
    }
    *((_DWORD *)v6 + 1) = 0;
LABEL_11:
    if ( !*((_DWORD *)a1 + 1) )
    {
      if ( a3 )
      {
        a1[1] = a3[1];
        *((_DWORD *)a3 + 1) = a1;
      }
      else
      {
        *(_DWORD *)(a1 + 1) = *(_DWORD *)(struct HDEV__ *)(a2 + 112);
        *(_DWORD *)(a2 + 112) = a1;
      }
    }
  }
}
