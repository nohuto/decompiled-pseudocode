/*
 * XREFs of ??0RGNMEMOBJTMPIFNEEDED@@QAE@AAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPAU_RECTL@@@Z @ 0x1E4403
 * Callers:
 *     _EngFillPath@28 @ 0x1E7DFE (_EngFillPath@28.c)
 *     _EngStrokeAndFillPath@40 @ 0x1E8174 (_EngStrokeAndFillPath@40.c)
 * Callees:
 *     <none>
 */

RGNMEMOBJ *__thiscall RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED(
        RGNMEMOBJ *this,
        struct EPATHOBJ *a2,
        int a3,
        unsigned int a4,
        struct _RECTL *a5)
{
  int v6; // eax
  int v8; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h]

  RGNMEMOBJ::RGNMEMOBJ(this, 0, 0);
  *((_DWORD *)this + 2) = 0;
  if ( a3 )
  {
    v6 = *(_DWORD *)this;
  }
  else
  {
    v6 = *((_DWORD *)a2 + 6);
    *(_DWORD *)this = v6;
  }
  if ( a3 == 1 )
  {
    if ( (*(_BYTE *)a2 & 0x10) != 0 )
    {
      if ( a4 == 2 )
        v6 = *((_DWORD *)a2 + 5);
      else
        v6 = *((_DWORD *)a2 + 4);
    }
    else
    {
      v6 = *((_DWORD *)a2 + 3);
    }
    *(_DWORD *)this = v6;
  }
  if ( !v6 )
  {
    *((_DWORD *)this + 2) = 1;
    v9 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v8, a2, a4, a5);
    *(_DWORD *)this = v8;
    RGNMEMOBJ::vPushThreadGuardedObject(this);
    if ( v9 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
  }
  return this;
}
