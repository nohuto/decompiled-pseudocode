/*
 * XREFs of sub_18003FAB0 @ 0x18003FAB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180040654 @ 0x180040654 (sub_180040654.c)
 */

__int64 __fastcall sub_18003FAB0(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // ebx
  int v4; // edx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    v3 = -2147467261;
    v4 = 328;
LABEL_3:
    sub_180003268(
      retaddr,
      v4,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v3);
    return (unsigned int)v3;
  }
  *a3 = 0LL;
  v3 = sub_180040654(a1, a2, 0LL, a3);
  result = 2147943568LL;
  if ( v3 != -2147023728 )
  {
    if ( v3 < 0 )
    {
      v4 = 335;
      goto LABEL_3;
    }
    return 0LL;
  }
  return result;
}
