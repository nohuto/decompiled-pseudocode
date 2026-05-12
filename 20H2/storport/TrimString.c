/*
 * XREFs of TrimString @ 0x1C0058940
 * Callers:
 *     ATAShimGetMsftId @ 0x1C0058190 (ATAShimGetMsftId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TrimString(unsigned __int16 *a1, struct _STRING *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v6; // esi
  __int64 v7; // rdi
  SIZE_T v8; // rdi
  const char *PoolWithTag; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  char *v12; // rdx
  __int64 v13; // r9
  char v14; // al
  char *v15; // rcx

  v2 = *a1;
  v3 = 0;
  if ( (_WORD)v2 )
  {
    v6 = v2 - 1;
    v7 = *a1;
    while ( --v7 >= 0 && isspace(*(char *)(v7 + *((_QWORD *)a1 + 1))) )
      --v6;
    if ( v6 >= 0 )
    {
      v8 = v6 + 2LL;
      PoolWithTag = (const char *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x48536152u);
      if ( PoolWithTag )
      {
        if ( (unsigned __int64)(v6 + 1LL) <= 0x7FFFFFFE )
        {
          v10 = v6 + 1LL;
          if ( v10 <= 0x7FFFFFFE )
          {
            v11 = v10 - v8;
            v12 = (char *)PoolWithTag;
            v13 = *((_QWORD *)a1 + 1) - (_QWORD)PoolWithTag;
            do
            {
              if ( !(v11 + v8) )
                break;
              v14 = v12[v13];
              if ( !v14 )
                break;
              *v12++ = v14;
              --v8;
            }
            while ( v8 );
            v15 = v12 - 1;
            if ( v8 )
              v15 = v12;
            *v15 = 0;
          }
          else
          {
            *PoolWithTag = 0;
          }
        }
        RtlInitAnsiString(a2, PoolWithTag);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v3;
}
