/*
 * XREFs of ?vCalculateCursorBounds@@YGXPAU_SURFOBJ@@0PAU_RECTL@@@Z @ 0x93840
 * Callers:
 *     ?vProcessCursorShape@@YGXPAUHDEV__@@HHPAU_SURFOBJ@@1PAVPALETTE@@PAU_RECTL@@PAPAUHBITMAP__@@@Z @ 0x935DE (-vProcessCursorShape@@YGXPAUHDEV__@@HHPAU_SURFOBJ@@1PAVPALETTE@@PAU_RECTL@@PAPAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     ?vDetermineSurfaceBounds@@YGXPAU_SURFOBJ@@EJJPAU_RECTL@@@Z @ 0x938C2 (-vDetermineSurfaceBounds@@YGXPAU_SURFOBJ@@EJJPAU_RECTL@@@Z.c)
 *     ??_5ERECTL@@QAEXABU_RECTL@@@Z @ 0x93A0E (--_5ERECTL@@QAEXABU_RECTL@@@Z.c)
 */

void __userpurge vCalculateCursorBounds(
        int a1@<edx>,
        int a2@<ecx>,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _RECTL *a5)
{
  int v6; // esi
  ERECTL *v7; // ecx
  int v8; // [esp+0h] [ebp-34h]
  int v9; // [esp+0h] [ebp-34h]
  struct _RECTL *v10; // [esp+4h] [ebp-30h]
  struct _RECTL *v11; // [esp+4h] [ebp-30h]
  int v12[4]; // [esp+10h] [ebp-24h] BYREF
  int v13; // [esp+20h] [ebp-14h] BYREF
  HSURF v14; // [esp+24h] [ebp-10h]
  int v15; // [esp+28h] [ebp-Ch]
  int v16; // [esp+2Ch] [ebp-8h]

  v6 = *(int *)(a2 + 20) >> 1;
  vDetermineSurfaceBounds(0, v6, (int)v12, v8, v10);
  if ( a1 )
  {
    vDetermineSurfaceBounds(0, v6, (int)&v13, v9, v11);
  }
  else
  {
    vDetermineSurfaceBounds((struct _SURFOBJ *)v6, 2 * v6, (int)&v13, v9, v11);
    if ( !ERECTL::bWrapped((ERECTL *)&v13) )
    {
      v14 = (HSURF)((char *)v14 - v6);
      v16 -= v6;
    }
  }
  ERECTL::operator|=(v12);
  if ( ERECTL::bWrapped(v7) )
  {
    v13 = 0;
    v14 = 0;
    v15 = 1;
    v16 = 1;
  }
  a3->dhsurf = (DHSURF)v13;
  a3->hsurf = v14;
  a3->dhpdev = (DHPDEV)v15;
  a3->hdev = (HDEV)v16;
}
