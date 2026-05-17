/*
 * XREFs of RtlFindExportedRoutineByName @ 0x18007ACC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 */

unsigned __int64 __fastcall RtlFindExportedRoutineByName(unsigned __int64 a1, char *a2)
{
  int v4; // eax
  _DWORD *v5; // r8
  unsigned __int64 v6; // rdx
  int v7; // r10d
  unsigned __int64 v8; // rsi
  int v9; // ecx
  char *v10; // rax
  int v11; // r9d
  unsigned __int64 v12; // rdi
  char v13; // r11
  int v14; // eax
  unsigned int v16; // [rsp+70h] [rbp+18h] BYREF
  _DWORD *v17; // [rsp+78h] [rbp+20h] BYREF

  v4 = RtlpImageDirectoryEntryToDataEx(a1, 1, 0, &v16, (__int64 *)&v17);
  v5 = v17;
  v6 = 0LL;
  if ( v4 < 0 )
    v5 = 0LL;
  if ( v5 )
  {
    v7 = 0;
    v8 = a1 + (unsigned int)v5[9];
    v9 = v5[6] - 1;
    if ( v9 >= 0 )
    {
      do
      {
        v10 = a2;
        v11 = (v9 + v7) >> 1;
        v12 = a1 + *(unsigned int *)(a1 + (unsigned int)v5[8] + 4LL * v11) - (_QWORD)a2;
        while ( 1 )
        {
          v13 = *v10;
          if ( *v10 != v10[v12] )
            break;
          ++v10;
          if ( !v13 )
          {
            v14 = 0;
            goto LABEL_9;
          }
        }
        v14 = (unsigned __int8)*v10 < (unsigned __int8)v10[v12] ? -1 : 1;
LABEL_9:
        if ( v14 < 0 )
        {
          if ( !v11 )
            return v6;
          v9 = v11 - 1;
        }
        else
        {
          if ( v14 <= 0 )
            break;
          v7 = v11 + 1;
        }
      }
      while ( v9 >= v7 );
      if ( v9 >= v7 && (unsigned int)*(unsigned __int16 *)(v8 + 2LL * v11) < v5[5] )
      {
        v6 = a1 + *(unsigned int *)(a1 + (unsigned int)v5[7] + 4LL * *(unsigned __int16 *)(v8 + 2LL * v11));
        if ( v6 > (unsigned __int64)v5 && v6 < (unsigned __int64)v5 + v16 )
          return 0LL;
      }
    }
  }
  return v6;
}
