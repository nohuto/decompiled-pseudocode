/*
 * XREFs of sub_1C002C5C0 @ 0x1C002C5C0
 * Callers:
 *     sub_1C00298F8 @ 0x1C00298F8 (sub_1C00298F8.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C002C474 @ 0x1C002C474 (sub_1C002C474.c)
 *     sub_1C002C860 @ 0x1C002C860 (sub_1C002C860.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C002C5C0(__int64 a1)
{
  _DWORD *v2; // rbx
  _WORD *PoolWithTag; // rdi
  unsigned int v4; // edx
  __int64 result; // rax
  unsigned int v6; // ecx

  v2 = sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 34, (__int64)&unk_1C0062088);
  PoolWithTag = ExAllocatePoolWithTag(PoolType, 2uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    if ( (int)sub_1C002C860(a1, PoolWithTag) >= 0 )
    {
      if ( (*(_BYTE *)PoolWithTag & 1) != 0 )
      {
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
          sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 35, (__int64)&unk_1C0062088);
        v2[761] = 500;
      }
      else
      {
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
          sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 36, (__int64)&unk_1C0062088);
        v2[761] = 100;
      }
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  sub_1C002C474(a1);
  v4 = v2[759];
  if ( v4 )
  {
    result = v4;
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      if ( LOWORD(DeviceObject->DeviceType) )
      {
        sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 37, (__int64)&unk_1C0062088, v4);
        return (unsigned int)v2[759];
      }
    }
  }
  else
  {
    result = (unsigned int)v2[761];
    if ( !(_DWORD)result )
    {
      v6 = v2[760];
      result = 500LL;
      if ( v6 )
        return v6;
    }
  }
  return result;
}
