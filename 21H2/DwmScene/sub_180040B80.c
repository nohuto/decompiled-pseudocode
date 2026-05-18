/*
 * XREFs of sub_180040B80 @ 0x180040B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180040B80(_QWORD *a1, _QWORD *a2, int a3)
{
  int v3; // r8d
  int v4; // r8d
  __int64 v5; // r8
  __int64 v6; // rax

  v3 = a3 - 1;
  if ( !v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    v5 = a1[27];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = a1[27];
    }
    v6 = a1[26];
    goto LABEL_13;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    v5 = a1[29];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = a1[29];
    }
    v6 = a1[28];
    goto LABEL_13;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v4 == 1 )
  {
    v5 = a1[31];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = a1[31];
    }
    v6 = a1[30];
LABEL_13:
    *a2 = v6;
    a2[1] = v5;
  }
  return a2;
}
