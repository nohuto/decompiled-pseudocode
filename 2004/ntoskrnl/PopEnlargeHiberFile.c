/*
 * XREFs of PopEnlargeHiberFile @ 0x1407676E4
 * Callers:
 *     PopTransitionToSleep @ 0x140992920 (PopTransitionToSleep.c)
 * Callees:
 *     PopResizeHiberFile @ 0x140767784 (PopResizeHiberFile.c)
 */

__int64 __fastcall PopEnlargeHiberFile(bool *a1)
{
  __int64 v2; // rbx
  int v3; // r9d
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  qword_140C24048 = qword_140C23030;
  v2 = *(_QWORD *)(*(_QWORD *)qword_140C4E448 + 6928LL) << 12;
  v3 = PopResizeHiberFile(v2, &v5, &v6);
  if ( v3 >= 0 )
  {
    qword_140C24058 = v5;
    qword_140C24060 = v6;
    qword_140C24050 = v2;
    if ( a1 )
      *a1 = (unsigned int)(100 * v2 / v5) < 0x28;
  }
  return (unsigned int)v3;
}
