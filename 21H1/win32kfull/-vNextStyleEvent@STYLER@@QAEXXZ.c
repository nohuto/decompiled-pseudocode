/*
 * XREFs of ?vNextStyleEvent@STYLER@@QAEXXZ @ 0x23710F
 * Callers:
 *     ?bWiden@WIDENER@@IAEHXZ @ 0x235BBB (-bWiden@WIDENER@@IAEHXZ.c)
 * Callees:
 *     ??OEFLOAT@@QAEHAAV0@@Z @ 0x22E48 (--OEFLOAT@@QAEHAAV0@@Z.c)
 *     _subff3_c@12 @ 0xEF05B (_subff3_c@12.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 *     ?efNextStyleLength@STYLER@@IAE?AVEFLOAT@@XZ @ 0x23600C (-efNextStyleLength@STYLER@@IAE-AVEFLOAT@@XZ.c)
 *     ?efWorldLength@STYLER@@IAE?AVEFLOAT@@VEVECTORFX@@@Z @ 0x23605B (-efWorldLength@STYLER@@IAE-AVEFLOAT@@VEVECTORFX@@@Z.c)
 *     ?ptfxFraction@@YG?AU_POINTFIX@@U1@PAVLINEDATA@@AAVEFLOAT@@2@Z @ 0x2360E3 (-ptfxFraction@@YG-AU_POINTFIX@@U1@PAVLINEDATA@@AAVEFLOAT@@2@Z.c)
 *     ?vNextEvent@LINER@@QAEXXZ @ 0x236CF6 (-vNextEvent@LINER@@QAEXXZ.c)
 */

void __thiscall STYLER::vNextStyleEvent(STYLER *this)
{
  int v2; // eax
  int *v3; // esi
  _DWORD *v4; // ebx
  int v5; // eax
  int *v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  int v11; // edx
  _DWORD *StyleLength; // eax
  int v13; // edx
  int v14; // eax
  __int64 v15; // rax
  int v16; // edx
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int *v19; // eax
  int v20; // ecx
  int v21; // eax
  struct _POINTFIX v22; // [esp-Ch] [ebp-24h]
  struct _POINTFIX v23; // [esp-Ch] [ebp-24h]
  struct EFLOAT *v24; // [esp+0h] [ebp-18h]
  struct EFLOAT *v25; // [esp+4h] [ebp-14h]
  int v26[2]; // [esp+10h] [ebp-8h] BYREF

  v2 = *((_DWORD *)this + 6);
  if ( (v2 & 2) == 0 )
  {
    LINER::vNextEvent(this);
    return;
  }
  if ( (v2 & 4) != 0 )
  {
    v3 = (int *)((char *)this + 708);
    v4 = (_DWORD *)((char *)this + 716);
    if ( *((_DWORD *)this + 168) == 5 )
    {
      while ( 1 )
      {
        if ( EFLOAT::operator>((int *)this + 177, (int *)this + 179) )
        {
          subff3_c((int *)this + 177, (int *)this + 177, (_DWORD *)this + 179);
          addff3_c((int *)this + 181, (int *)this + 181, (int *)this + 179);
          LODWORD(v10) = (char *)this + 732;
          v22.y = *((_DWORD *)this + 185);
          HIDWORD(v10) = (char *)this + 724;
          v22.x = (FIX)this + 732;
          *((_DWORD *)this + 169) = ptfxFraction(
                                      v10,
                                      *((_DWORD **)this + 172),
                                      v22,
                                      *((struct LINEDATA **)this + 186),
                                      v24,
                                      v25);
          *((_DWORD *)this + 170) = v11;
          StyleLength = STYLER::efNextStyleLength((unsigned int)this, v11, v26);
          *v4 = *StyleLength;
          *((_DWORD *)this + 180) = StyleLength[1];
          *((_DWORD *)this + 168) = 6;
          return;
        }
        subff3_c((int *)this + 179, (int *)this + 179, (_DWORD *)this + 177);
        LINER::vNextEvent(this);
        v5 = *((_DWORD *)this + 168);
        if ( v5 != 3 && v5 != 4 )
          break;
        *((_DWORD *)this + 181) = _FP_0_0[0];
        *((_DWORD *)this + 182) = _FP_0_0[1];
        v6 = STYLER::efWorldLength(
               (int)this,
               v26,
               *(_DWORD *)(*((_DWORD *)this + 172) + 32),
               *(_DWORD *)(*((_DWORD *)this + 172) + 36));
        v7 = *v6;
        v8 = v6[1];
        *((_DWORD *)this + 184) = v8;
        *((_DWORD *)this + 178) = v8;
        *((_DWORD *)this + 185) = *((_DWORD *)this + 169);
        v9 = *((_DWORD *)this + 170);
        *((_DWORD *)this + 183) = v7;
        *v3 = v7;
        *((_DWORD *)this + 186) = v9;
      }
      if ( v5 == 1 )
        LINER::vNextEvent(this);
      *((_DWORD *)this + 6) &= ~4u;
      *((_DWORD *)this + 168) = 8;
      return;
    }
    if ( !EFLOAT::operator>((int *)this + 179, (int *)this + 177) )
    {
      subff3_c((int *)this + 177, (int *)this + 177, (_DWORD *)this + 179);
      addff3_c((int *)this + 181, (int *)this + 181, (int *)this + 179);
      LODWORD(v15) = (char *)this + 732;
      v23.y = *((_DWORD *)this + 185);
      HIDWORD(v15) = (char *)this + 724;
      v23.x = (FIX)this + 732;
      *((_DWORD *)this + 169) = ptfxFraction(
                                  v15,
                                  *((_DWORD **)this + 172),
                                  v23,
                                  *((struct LINEDATA **)this + 186),
                                  v24,
                                  v25);
      *((_DWORD *)this + 171) = *((_DWORD *)this + 172);
      *((_DWORD *)this + 170) = v16;
      v17 = STYLER::efNextStyleLength((unsigned int)this, v16, v26);
      *v4 = *v17;
      *((_DWORD *)this + 180) = v17[1];
      *((_DWORD *)this + 168) = 5;
      return;
    }
    subff3_c((int *)this + 179, (int *)this + 179, (_DWORD *)this + 177);
  }
  LINER::vNextEvent(this);
  v14 = *((_DWORD *)this + 168);
  if ( v14 )
  {
    if ( (unsigned int)(v14 - 3) > 1 )
    {
      *((_DWORD *)this + 6) &= ~4u;
      return;
    }
  }
  else
  {
    *((_DWORD *)this + 175) = *((_DWORD *)this + 174);
    v18 = STYLER::efNextStyleLength((unsigned int)this, v13, v26);
    *((_DWORD *)this + 179) = *v18;
    *((_DWORD *)this + 180) = v18[1];
  }
  *((_DWORD *)this + 181) = _FP_0_0[0];
  *((_DWORD *)this + 182) = _FP_0_0[1];
  v19 = STYLER::efWorldLength(
          (int)this,
          v26,
          *(_DWORD *)(*((_DWORD *)this + 172) + 32),
          *(_DWORD *)(*((_DWORD *)this + 172) + 36));
  v20 = *v19;
  v21 = v19[1];
  *((_DWORD *)this + 6) |= 4u;
  *((_DWORD *)this + 184) = v21;
  *((_DWORD *)this + 178) = v21;
  *((_DWORD *)this + 185) = *((_DWORD *)this + 169);
  *((_DWORD *)this + 186) = *((_DWORD *)this + 170);
  *((_DWORD *)this + 177) = v20;
  *((_DWORD *)this + 183) = v20;
}
