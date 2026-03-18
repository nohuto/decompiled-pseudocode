/*
 * XREFs of ?EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z @ 0x18009D01C
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x18009D0F8 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x18009D0AC (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 */

__int64 __fastcall CHitTestContext::EvaluateHitTestAttributesAndInputType(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // r9
  __int16 v5; // r10
  __int64 result; // rax
  int v7; // eax
  int v8; // eax

  v3 = ConvertToInputType((unsigned int)a3, 0LL, a3, a1);
  *(_DWORD *)(v4 + 96) = v3;
  *(_DWORD *)(v4 + 208) = 0;
  *(_QWORD *)(v4 + 100) = 0LL;
  if ( (v5 & 1) != 0 )
  {
    *(_DWORD *)(v4 + 96) = 6;
    v7 = v5 & 2;
    if ( (v5 & 0x100) != 0 )
    {
      if ( (v5 & 4) == 0 )
      {
        *(_DWORD *)(v4 + 100) = v7 != 0 ? 16 : 32;
        goto LABEL_2;
      }
    }
    else if ( (v5 & 4) == 0 )
    {
      v8 = v7 != 0 ? 4 : 8;
LABEL_21:
      *(_DWORD *)(v4 + 100) |= v8;
      goto LABEL_2;
    }
    v8 = 2 - (v7 != 0);
    goto LABEL_21;
  }
LABEL_2:
  if ( (v5 & 8) != 0 )
    *(_DWORD *)(v4 + 100) |= 0x100u;
  result = *(unsigned int *)(v4 + 100);
  if ( !*(_DWORD *)(v4 + 100) )
    result = 1024LL;
  *(_DWORD *)(v4 + 100) = result;
  if ( (v5 & 0x40) != 0 )
    *(_DWORD *)(v4 + 104) |= 0x100u;
  if ( (v5 & 0x80u) != 0 )
    *(_DWORD *)(v4 + 104) |= 0x200u;
  if ( (v5 & 0x10) != 0 )
    *(_DWORD *)(v4 + 208) |= 1u;
  if ( (v5 & 0x20) == 0 )
    *(_DWORD *)(v4 + 208) |= 2u;
  return result;
}
