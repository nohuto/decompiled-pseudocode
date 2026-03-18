/*
 * XREFs of _anonymous_namespace_::SetProcessPriorityByClass @ 0x18E54
 * Callers:
 *     _anonymous_namespace_::SetForegroundPriorityProcess @ 0x18D4E (_anonymous_namespace_--SetForegroundPriorityProcess.c)
 * Callees:
 *     _anonymous_namespace_::IsProcessForegroundBoostedNoSpin @ 0xC950C (_anonymous_namespace_--IsProcessForegroundBoostedNoSpin.c)
 */

int __fastcall anonymous_namespace_::SetProcessPriorityByClass(int *a1, int a2)
{
  int result; // eax
  int v5; // edx
  int v6; // [esp-4h] [ebp-10h]
  int v7; // [esp+8h] [ebp-4h]

  result = ((unsigned int)a1[116] >> 17) & 3;
  if ( a2 != result )
  {
    v5 = *a1;
    v7 = *a1;
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v6 = 1;
      }
      else
      {
        result = a2 - 2;
        if ( a2 != 2 )
          goto LABEL_6;
        if ( !(unsigned __int8)anonymous_namespace_::IsProcessForegroundBoostedNoSpin() )
        {
          PsSetProcessPriorityByClass(v5, 1);
          result = PsSetProcessPriorityByClass(v7, 2);
          goto LABEL_6;
        }
        v6 = 2;
      }
    }
    else
    {
      v6 = 0;
    }
    result = PsSetProcessPriorityByClass(v5, v6);
LABEL_6:
    a1[116] ^= ((unsigned int)&loc_5FFFF + 1) & (a1[116] ^ (a2 << 17));
  }
  return result;
}
