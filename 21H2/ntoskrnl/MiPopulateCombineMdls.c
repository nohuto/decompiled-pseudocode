/*
 * XREFs of MiPopulateCombineMdls @ 0x140726E20
 * Callers:
 *     MiProcessCrcList @ 0x140726FD0 (MiProcessCrcList.c)
 * Callees:
 *     MiAllocatePagesForMdl @ 0x140294744 (MiAllocatePagesForMdl.c)
 */

__int64 __fastcall MiPopulateCombineMdls(char *a1, int a2, __int64 a3)
{
  unsigned __int64 *v3; // rdi
  unsigned int v4; // ebp
  __int64 v5; // r15
  __int64 v8; // r13
  char *v9; // r12
  __int64 result; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 *v13; // rsi
  __int64 PagesForMdl; // rax
  __int64 *v15; // rcx

  v3 = (unsigned __int64 *)(a1 + 88);
  v4 = 0;
  v5 = a3 - (_QWORD)a1;
  v8 = **(_QWORD **)a1;
  v9 = (char *)((char *)MiCombineMinimumPages - a1);
  result = 1048574LL;
  do
  {
    v11 = *(unsigned __int64 *)((char *)v3 + v5 - 88);
    if ( v11 )
    {
      v12 = *v3;
      v13 = (__int64 *)*(v3 - 3);
      if ( v11 > 0xFFFFE )
        v11 = 1048574LL;
      if ( !v12 || v12 < v11 )
      {
        if ( (*((_DWORD *)a1 + 15) & 2) != 0 && v11 < *(unsigned __int64 *)((char *)v3 + (_QWORD)v9 - 88) )
          v11 = *(unsigned __int64 *)((char *)v3 + (_QWORD)v9 - 88);
        PagesForMdl = MiAllocatePagesForMdl(v8, 0LL, -1LL, 0LL, (v11 - v12) << 12, v4, a2, 19);
        if ( PagesForMdl )
        {
          *v3 += (unsigned __int64)*(unsigned int *)(PagesForMdl + 40) >> 12;
          if ( *(v3 - 3) )
          {
            v15 = (__int64 *)*v13;
            if ( *v13 )
            {
              do
              {
                v13 = v15;
                v15 = (__int64 *)*v15;
              }
              while ( v15 );
            }
            *v13 = PagesForMdl;
          }
          else
          {
            *(v3 - 3) = PagesForMdl;
          }
        }
        result = 1048574LL;
      }
    }
    ++v4;
    ++v3;
  }
  while ( v4 < 3 );
  return result;
}
