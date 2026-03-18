/*
 * XREFs of _ScaleRGB @ 0x1BE8D9
 * Callers:
 *     _ComputeBGRMappingTable @ 0x1BCF91 (_ComputeBGRMappingTable.c)
 * Callees:
 *     _DivFD6 @ 0xED9D4 (_DivFD6.c)
 */

int __thiscall ScaleRGB(int *this)
{
  int result; // eax
  int v3; // edx
  int v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // esi
  int v8; // [esp+8h] [ebp-10h]
  int v9; // [esp+Ch] [ebp-Ch]
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]

  result = this[1];
  v3 = *this;
  v10 = result;
  if ( *this <= result )
  {
    v4 = this[1];
    v11 = *this;
    result = *this;
  }
  else
  {
    v4 = *this;
    v11 = this[1];
  }
  v5 = this[2];
  v8 = v5;
  if ( v5 > v4 )
    v4 = v5;
  if ( v5 < result )
  {
    result = v5;
    v11 = v5;
  }
  if ( v4 > 1000000 || result < 0 )
  {
    if ( result < 1000000 )
    {
      if ( v4 > 0 )
      {
        if ( v4 < 1000000 )
          v4 = 1000000;
        if ( result > 0 )
        {
          result = 0;
          v11 = 0;
        }
        v9 = v4 - result;
        v6 = DivFD6(v3 - result, v4 - result);
        v7 = DivFD6(v10 - v11, v9);
        result = DivFD6(v8 - v11, v9);
        *this = v6;
        this[1] = v7;
      }
      else
      {
        result = 0;
        this[1] = 0;
        *this = 0;
      }
      this[2] = result;
    }
    else
    {
      this[2] = 1000000;
      this[1] = 1000000;
      *this = 1000000;
    }
  }
  return result;
}
