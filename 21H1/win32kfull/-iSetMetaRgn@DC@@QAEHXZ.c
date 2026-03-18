/*
 * XREFs of ?iSetMetaRgn@DC@@QAEHXZ @ 0xA9452
 * Callers:
 *     _GreSetMetaRgn@4 @ 0xA9410 (_GreSetMetaRgn@4.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 */

int __thiscall DC::iSetMetaRgn(DC *this)
{
  int v2; // edx
  int result; // eax
  int v4; // edx
  int v5; // esi
  int v6; // ebx
  int v7; // eax
  int v8; // [esp+4h] [ebp-10h] BYREF
  int v9; // [esp+8h] [ebp-Ch]
  int v10; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  v2 = *((_DWORD *)this + 26);
  if ( !*((_DWORD *)this + 27) )
  {
    if ( !v2 )
      return 2;
    v10 = *((_DWORD *)this + 26);
    result = RGNOBJ::iComplexity((RGNOBJ *)&v10);
    *((_DWORD *)this + 26) = 0;
    *((_DWORD *)this + 27) = v4;
    return result;
  }
  v11 = *((_DWORD *)this + 27);
  if ( !v2 )
    return RGNOBJ::iComplexity((RGNOBJ *)&v11);
  v10 = v2;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v8);
  if ( !v8 )
  {
    v5 = 0;
    if ( v9 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
    return v5;
  }
  v6 = RGNOBJ::iCombine((RGNOBJ *)&v8, (struct RGNOBJ *)&v11, (struct RGNOBJ *)&v10, 1);
  if ( v6 )
  {
    ++*(_DWORD *)(v8 + 24);
    *((_DWORD *)this + 27) = v8;
    if ( !--*(_DWORD *)(v11 + 24) )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
    v7 = v10;
    *((_DWORD *)this + 26) = 0;
    --*(_DWORD *)(v7 + 24);
    if ( !*(_DWORD *)(v10 + 24) )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
    DC::vReleaseRao(this);
  }
  else
  {
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
  }
  if ( v9 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
  return v6;
}
