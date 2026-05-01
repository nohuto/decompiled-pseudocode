/*
 * XREFs of sub_1800867B4 @ 0x1800867B4
 * Callers:
 *     sub_18007D3AC @ 0x18007D3AC (sub_18007D3AC.c)
 * Callees:
 *     sub_180086824 @ 0x180086824 (sub_180086824.c)
 *     sub_180087048 @ 0x180087048 (sub_180087048.c)
 */

__int64 __fastcall sub_1800867B4(__int64 a1, void *a2, __int64 a3, int a4, unsigned int a5)
{
  int v5; // ecx
  int v6; // eax
  __int64 result; // rax

  switch ( a4 )
  {
    case 3328:
      v6 = sub_180087048(a1, a2, a3, a5, 245948);
      break;
    case 3584:
      v6 = sub_180086824(a2);
      break;
    case 5120:
      v6 = sub_180087048(a1, a2, a3, a5, 507964);
      break;
    default:
      v5 = -1073741582;
      goto LABEL_9;
  }
  v5 = v6;
LABEL_9:
  result = 0LL;
  if ( v5 < 0 )
    return (unsigned int)v5;
  return result;
}
