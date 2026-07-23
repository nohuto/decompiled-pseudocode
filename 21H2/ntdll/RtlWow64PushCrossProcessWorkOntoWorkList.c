/*
 * XREFs of RtlWow64PushCrossProcessWorkOntoWorkList @ 0x180103500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlWow64PushCrossProcessWorkOntoWorkList(volatile signed __int64 *a1, char *a2, _QWORD *a3)
{
  unsigned int v5; // r8d
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  char v11; // [rsp+0h] [rbp-A8h]
  char v12; // [rsp+1h] [rbp-A7h]
  signed __int64 v13; // [rsp+8h] [rbp-A0h]
  char *v14; // [rsp+10h] [rbp-98h]
  char *v15; // [rsp+18h] [rbp-90h]
  int v16; // [rsp+20h] [rbp-88h]
  signed __int64 i; // [rsp+28h] [rbp-80h]
  __int64 v18; // [rsp+30h] [rbp-78h]
  __int128 v19; // [rsp+38h] [rbp-70h]
  __int128 v20; // [rsp+48h] [rbp-60h]
  __int64 v21; // [rsp+58h] [rbp-50h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v11 = 0;
  v14 = 0LL;
  v12 = 0;
  v16 = (_DWORD)a2 - (_DWORD)a1;
  for ( i = *a1; ; i = v8 )
  {
    LODWORD(v13) = i;
    if ( (int)i >= 0 )
    {
      v5 = i & 0x7FFFFFFF;
      if ( *((_DWORD *)a2 + 1) == 8 )
      {
        if ( v5 )
        {
          if ( *((_QWORD *)a2 + 1) + *((_QWORD *)a2 + 2) >= *((_QWORD *)a2 + 1) )
          {
            v18 = *((_QWORD *)a2 + 1) + *((_QWORD *)a2 + 2);
            v14 = (char *)a1 + v5;
            if ( *((_DWORD *)v14 + 1) == 8 )
            {
              v6 = *((_QWORD *)v14 + 1);
              v7 = *((_QWORD *)v14 + 2);
              if ( v7 + v6 >= v6 && *((_QWORD *)a2 + 1) == v7 + v6 )
              {
                if ( !v12 )
                {
                  v19 = *(_OWORD *)a2;
                  v20 = *((_OWORD *)a2 + 1);
                  v21 = *((_QWORD *)a2 + 4);
                  v12 = 1;
                }
                *(_DWORD *)a2 = *(_DWORD *)v14;
                *((_QWORD *)a2 + 1) = v6;
                *((_QWORD *)a2 + 2) = v18 - v6;
                v11 = 1;
              }
            }
          }
        }
      }
      if ( v11 )
      {
        v15 = v14;
      }
      else
      {
        *(_DWORD *)a2 = i & 0x7FFFFFFF;
        v15 = 0LL;
      }
      LODWORD(v13) = (v16 ^ i) & 0x7FFFFFFF ^ i;
    }
    else
    {
      v15 = a2;
    }
    v9 = i;
    HIDWORD(v13) = HIDWORD(i) + 1;
    v8 = _InterlockedCompareExchange64(a1, v13, i);
    if ( v9 == v8 )
      break;
    if ( v11 )
    {
      *(_OWORD *)a2 = v19;
      *((_OWORD *)a2 + 1) = v20;
      *((_QWORD *)a2 + 4) = v21;
      v11 = 0;
    }
  }
  *a3 = v15;
  return 1;
}
