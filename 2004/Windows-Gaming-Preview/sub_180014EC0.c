/*
 * XREFs of sub_180014EC0 @ 0x180014EC0
 * Callers:
 *     sub_180013C70 @ 0x180013C70 (sub_180013C70.c)
 *     sub_1800189E0 @ 0x1800189E0 (sub_1800189E0.c)
 * Callees:
 *     sub_180016088 @ 0x180016088 (sub_180016088.c)
 */

__int64 __fastcall sub_180014EC0(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, unsigned int *a5, _BYTE *a6)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v11; // eax
  char v13; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v13 = 0;
  v7 = 0;
  if ( a3 )
  {
    while ( (int)v6 >= 0 )
    {
      v11 = sub_180016088(v6, a4, *a2, &v13);
      v6 = (unsigned int)v11;
      if ( v11 >= 0 && v13 )
      {
        *a6 = 1;
        *a5 = v7;
        return (unsigned int)v6;
      }
      ++v7;
      ++a2;
      if ( v7 >= a3 )
        return (unsigned int)v6;
    }
  }
  return (unsigned int)v6;
}
