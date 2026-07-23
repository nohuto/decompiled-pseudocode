/*
 * XREFs of _RtlpHpVaMgrFree@8 @ 0x4B37AE7C
 * Callers:
 *     _RtlpHpVaMgrAlloc@12 @ 0x4B37A845 (_RtlpHpVaMgrAlloc@12.c)
 *     _RtlpHpVaMgrCtxFree@12 @ 0x4B37AC12 (_RtlpHpVaMgrCtxFree@12.c)
 * Callees:
 *     _RtlRbInsertNodeEx@16 @ 0x4B2CEB50 (_RtlRbInsertNodeEx@16.c)
 *     _RtlpHpVaMgrRangeCoalesce@8 @ 0x4B37AF85 (_RtlpHpVaMgrRangeCoalesce@8.c)
 */

int __thiscall RtlpHpVaMgrFree(int this)
{
  int v2; // edi
  unsigned __int16 v3; // bx
  _RTL_RB_TREE *v4; // edx
  int v5; // eax
  int v6; // esi
  int v7; // ecx

  v2 = RtlpHpVaMgrRangeCoalesce();
  v3 = *(_WORD *)(v2 + 12);
  if ( v3 != *(_WORD *)(this + 20) )
  {
    v4 = (_RTL_RB_TREE *)(this + 4);
    v5 = *(_DWORD *)(this + 4);
    if ( (*(_BYTE *)(this + 8) & 1) != 0 )
    {
      if ( v5 )
        v5 ^= (unsigned int)v4;
      else
        v5 = 0;
    }
    v6 = *(_BYTE *)(this + 8) & 1;
    if ( v5 )
    {
      while ( 1 )
      {
        if ( v3 < *(_WORD *)(v5 + 12) )
        {
          v7 = *(_DWORD *)v5;
          if ( v6 )
          {
            if ( !v7 )
              break;
            v7 ^= v5;
          }
          if ( !v7 )
            break;
        }
        else
        {
          v7 = *(_DWORD *)(v5 + 4);
          if ( v6 )
          {
            if ( !v7 )
              goto LABEL_12;
            v7 ^= v5;
          }
          if ( !v7 )
          {
LABEL_12:
            RtlRbInsertNodeEx(v4, (PRTL_BALANCED_NODE)v5, 1u, (PRTL_BALANCED_NODE)v2);
            return 0;
          }
        }
        v5 = v7;
      }
    }
    RtlRbInsertNodeEx(v4, (PRTL_BALANCED_NODE)v5, 0, (PRTL_BALANCED_NODE)v2);
    return 0;
  }
  return v2;
}
