/*
 * XREFs of PiDqGetPnpObjectType @ 0x140777298
 * Callers:
 *     PiDqIrpPropertySet @ 0x14076DD0C (PiDqIrpPropertySet.c)
 *     PiDqQueryValidateQueryData @ 0x140776CFC (PiDqQueryValidateQueryData.c)
 *     PiDqPropertyCallback @ 0x1407770E0 (PiDqPropertyCallback.c)
 *     PiDqQueryAppendActionEntry @ 0x140777CF0 (PiDqQueryAppendActionEntry.c)
 *     PiDqActionDataCreate @ 0x140778100 (PiDqActionDataCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDqGetPnpObjectType(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx

  v1 = 0;
  v2 = a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v6 = v4 - 1;
        if ( v6 )
        {
          v7 = v6 - 3;
          if ( v7 )
          {
            if ( v7 == 4 )
              return 6;
          }
          else
          {
            return 2;
          }
        }
        else
        {
          return 4;
        }
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 5;
    }
  }
  else
  {
    return 3;
  }
  return v1;
}
