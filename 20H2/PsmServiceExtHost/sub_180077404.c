/*
 * XREFs of sub_180077404 @ 0x180077404
 * Callers:
 *     sub_18007D3AC @ 0x18007D3AC (sub_18007D3AC.c)
 * Callees:
 *     sub_180045D50 @ 0x180045D50 (sub_180045D50.c)
 */

__int64 __fastcall sub_180077404(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !sub_180045D50() )
    goto LABEL_2;
  result = GetPackageTypeForPsmKey(a1 + 24, &v8);
  if ( (int)result < 0 )
    return result;
  if ( v8 != 1 )
  {
LABEL_2:
    *a3 = 0;
    return 0LL;
  }
  switch ( a2 )
  {
    case 3328:
      v7 = 1LL;
      break;
    case 3584:
      v7 = 0LL;
      break;
    case 5120:
      v7 = 2LL;
      break;
    default:
      return 3221225714LL;
  }
  result = CollectErrorReportForGameCorePsmKey(a1 + 24, v7);
  if ( (int)result >= 0 )
  {
    *a3 = 1;
    return 0LL;
  }
  return result;
}
