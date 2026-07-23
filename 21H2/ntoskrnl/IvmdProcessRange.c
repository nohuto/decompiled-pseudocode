/*
 * XREFs of IvmdProcessRange @ 0x1404E4F08
 * Callers:
 *     HsaProcessIvmd @ 0x1404E4308 (HsaProcessIvmd.c)
 * Callees:
 *     ExtEnvAllocateMemory @ 0x1404D5330 (ExtEnvAllocateMemory.c)
 */

__int64 __fastcall IvmdProcessRange(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  _QWORD *v5; // r8
  _QWORD *v6; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  _QWORD *v10; // r9
  __int64 *v12; // rcx
  __int64 *v13; // rcx
  __int64 *v14; // rdx
  __int64 **v15; // r8
  _QWORD *v16; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = (_QWORD *)(a1 + 24);
  v16 = 0LL;
  v6 = *(_QWORD **)(a1 + 24);
  v8 = a1;
  while ( v6 != v5 )
  {
    v9 = v6[2];
    v10 = v6;
    if ( v9 > a3 )
      break;
    a1 = v6[3];
    if ( a1 >= a2 )
    {
      if ( v9 == a2 && a1 == a3 )
        return 0LL;
      v6 = (_QWORD *)*v6;
      if ( !v4 )
      {
        v4 = (__int64)v10;
        v16 = v10;
        if ( v9 < a2 )
          a2 = v9;
      }
      if ( a1 >= a3 )
      {
        a3 = a1;
        break;
      }
    }
    else
    {
      v6 = (_QWORD *)*v6;
    }
  }
  if ( v4 )
  {
    while ( *(_QWORD **)v4 != v6 )
    {
      v13 = *(__int64 **)v4;
      v14 = **(__int64 ***)v4;
      if ( v14[1] != *(_QWORD *)v4 )
        goto LABEL_26;
      v15 = (__int64 **)v13[1];
      if ( *v15 != v13 )
        goto LABEL_26;
      *v15 = v14;
      v14[1] = (__int64)v15;
      --*(_DWORD *)(v8 + 20);
    }
  }
  else
  {
    if ( (int)ExtEnvAllocateMemory(a1, 0x20u, (__int64 *)&v16) < 0 )
      return 3221225626LL;
    v12 = (__int64 *)v6[1];
    if ( (_QWORD *)*v12 != v6 )
LABEL_26:
      __fastfail(3u);
    v4 = (__int64)v16;
    *v16 = v6;
    *(_QWORD *)(v4 + 8) = v12;
    *v12 = v4;
    v6[1] = v4;
    ++*(_DWORD *)(v8 + 20);
  }
  *(_QWORD *)(v4 + 16) = a2;
  *(_QWORD *)(v4 + 24) = a3;
  return 0LL;
}
