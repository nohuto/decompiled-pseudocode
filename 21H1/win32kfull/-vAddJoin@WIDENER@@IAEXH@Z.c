/*
 * XREFs of ?vAddJoin@WIDENER@@IAEXH@Z @ 0x23631A
 * Callers:
 *     ?bWiden@WIDENER@@IAEHXZ @ 0x235BBB (-bWiden@WIDENER@@IAEHXZ.c)
 * Callees:
 *     ??9EVECTORFX@@QBEHABU_VECTORFX@@@Z @ 0x234D4D (--9EVECTORFX@@QBEHABU_VECTORFX@@@Z.c)
 *     ?bComputeIntersect@@YGHPAVEVECTORFX@@0000@Z @ 0x234D9E (-bComputeIntersect@@YGHPAVEVECTORFX@@0000@Z.c)
 *     ?bMiterInLimit@WIDENER@@IAEHVEVECTORFX@@@Z @ 0x235446 (-bMiterInLimit@WIDENER@@IAEHVEVECTORFX@@@Z.c)
 *     ?bTurnLeftRandom@@YGHPAVEVECTORFX@@0@Z @ 0x235A9B (-bTurnLeftRandom@@YGHPAVEVECTORFX@@0@Z.c)
 *     ?vAddLeft@WIDENER@@IAEXAAVEVECTORFX@@H@Z @ 0x2364C6 (-vAddLeft@WIDENER@@IAEXAAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@H@Z @ 0x236568 (-vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z @ 0x23659C (-vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IAEXH@Z @ 0x23670B (-vAddRoundJoin@WIDENER@@IAEXH@Z.c)
 *     ?vecInPerp@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x2379B6 (-vecInPerp@WIDENER@@IAE-AVEVECTORFX@@XZ.c)
 *     ?vecOutPerp@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x237A1A (-vecOutPerp@WIDENER@@IAE-AVEVECTORFX@@XZ.c)
 */

void __thiscall WIDENER::vAddJoin(WIDENER *this, int a2)
{
  int v3; // eax
  int *v4; // edx
  unsigned int *v5; // ecx
  int v6; // ecx
  int v7; // ecx
  WIDEPATHOBJ *v8; // ecx
  int v9; // ecx
  int v10; // ecx
  _DWORD *v11; // ecx
  __int64 v12; // rax
  int v13; // ecx
  WIDEPATHOBJ *v14; // ecx
  int v15; // ecx
  int v16; // [esp-4h] [ebp-28h]
  int v17; // [esp-4h] [ebp-28h]
  struct EVECTORFX *v18; // [esp+0h] [ebp-24h]
  struct EVECTORFX *v19; // [esp+4h] [ebp-20h]
  _DWORD v20[2]; // [esp+Ch] [ebp-18h] BYREF
  int v21[2]; // [esp+14h] [ebp-10h] BYREF
  _DWORD v22[2]; // [esp+1Ch] [ebp-8h] BYREF
  unsigned int v23; // [esp+2Ch] [ebp+8h]
  unsigned int v24; // [esp+2Ch] [ebp+8h]

  v3 = *((_DWORD *)this + 270);
  if ( !v3 || a2 )
  {
    WIDENER::vAddRoundJoin(this, a2);
  }
  else
  {
    v4 = (int *)(*((_DWORD *)this + 172) + 40);
    v5 = (unsigned int *)(*((_DWORD *)this + 171) + 40);
    if ( v3 == 1 )
    {
      v23 = bTurnLeftRandom(v5, v4);
      WIDENER::vecInPerp(v20);
      WIDENER::vecOutPerp(this, v21);
      WIDENER::vAddLeft(this, (struct EVECTORFX *)v20, v6);
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 996),
        (struct _POINTFIX *)((char *)this + 676),
        (struct EVECTORFX *)v20,
        0);
      if ( EVECTORFX::operator!=(v20, v21) )
      {
        v16 = v7;
        v8 = (WIDENER *)((char *)this + 912);
        if ( !v23 )
          v8 = (WIDENER *)((char *)this + 996);
        WIDEPATHOBJ::vAddPoint(v8, (struct _POINTFIX *)((char *)this + 676), v16);
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 996),
          (struct _POINTFIX *)((char *)this + 676),
          (struct EVECTORFX *)v21,
          0);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)v21, v9);
      }
    }
    else
    {
      v24 = bTurnLeftRandom(v5, v4);
      WIDENER::vecInPerp(v22);
      WIDENER::vecOutPerp(this, v20);
      WIDENER::vAddLeft(this, (struct EVECTORFX *)v22, v10);
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 996),
        (struct _POINTFIX *)((char *)this + 676),
        (struct EVECTORFX *)v22,
        0);
      if ( EVECTORFX::operator!=(v22, v20) )
      {
        HIDWORD(v12) = *((_DWORD *)this + 171) + 32;
        LODWORD(v12) = v20;
        if ( bComputeIntersect(
               v12,
               v11,
               (struct EVECTORFX *)v20,
               (struct EVECTORFX *)(*((_DWORD *)this + 172) + 32),
               (struct EVECTORFX *)v21,
               v18,
               v19)
          && WIDENER::bMiterInLimit((int *)this, v21[0], v21[1]) )
        {
          if ( v24 )
            WIDEPATHOBJ::vAddPoint(
              (WIDENER *)((char *)this + 996),
              (struct _POINTFIX *)((char *)this + 676),
              (struct EVECTORFX *)v21,
              0);
          else
            WIDENER::vAddLeft(this, (struct EVECTORFX *)v21, v13);
        }
        v17 = v13;
        v14 = (WIDENER *)((char *)this + 912);
        if ( !v24 )
          v14 = (WIDENER *)((char *)this + 996);
        WIDEPATHOBJ::vAddPoint(v14, (struct _POINTFIX *)((char *)this + 676), v17);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)v20, v15);
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 996),
          (struct _POINTFIX *)((char *)this + 676),
          (struct EVECTORFX *)v20,
          0);
      }
    }
  }
}
