/*
 * XREFs of sub_180027A98 @ 0x180027A98
 * Callers:
 *     sub_180027B9C @ 0x180027B9C (sub_180027B9C.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180027958 @ 0x180027958 (sub_180027958.c)
 */

void __fastcall sub_180027A98(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx

  EnterCriticalSection(&CriticalSection);
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x10u, &stru_180044DE8, *(_DWORD *)a1);
  }
  v2 = 0LL;
  if ( !*(_DWORD *)(a1 + 4) && *(_DWORD *)a1 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    v4 = *(_QWORD *)(v3 + 200);
    if ( v4 && (v5 = *(_QWORD *)(v3 + 176)) != 0 )
    {
      if ( v4 > v5 )
        v5 = v4;
    }
    else
    {
      v5 = 0LL;
    }
    v6 = (_QWORD *)qword_18004FF98;
    while ( v6 )
    {
      v7 = v6[2];
      v6 = (_QWORD *)*v6;
      if ( *(_DWORD *)v7 && *(_DWORD *)(v7 + 344) )
      {
        v8 = *(_QWORD *)(v7 + 40);
        v9 = *(_QWORD *)(v8 + 200);
        if ( v9 )
        {
          v10 = *(_QWORD *)(v8 + 176);
          if ( v10 )
          {
            v2 = v10;
            if ( v9 > v10 )
              v2 = v9;
          }
        }
        break;
      }
    }
    if ( v5 > v2 )
      sub_180027958((int *)a1);
  }
  LeaveCriticalSection(&CriticalSection);
}
