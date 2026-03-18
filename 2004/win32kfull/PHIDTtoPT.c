/*
 * XREFs of PHIDTtoPT @ 0x1C01EEFBC
 * Callers:
 *     PostPointerEventMessage @ 0x1C01EF040 (PostPointerEventMessage.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C01EFB40 (_GetPointerDeviceInfoProperties.c)
 *     _GetPointerDeviceType @ 0x1C01EFBD8 (_GetPointerDeviceType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PHIDTtoPT(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 24);
  result = 1LL;
  if ( v1 > 0 )
  {
    if ( v1 <= 4 )
    {
      return 3LL;
    }
    else if ( v1 != 5 )
    {
      if ( v1 == 6 )
      {
        return 2LL;
      }
      else if ( v1 == 7 )
      {
        return 4LL;
      }
    }
  }
  return result;
}
