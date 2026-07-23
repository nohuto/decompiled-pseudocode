/*
 * XREFs of BgkDisplayString @ 0x1404FF670
 * Callers:
 *     <none>
 * Callees:
 *     BgkDisplayStringEx @ 0x1404FF724 (BgkDisplayStringEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall BgkDisplayString(char *a1)
{
  char *v1; // rbx
  __int64 v3; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v5; // rsi
  int v6; // edx
  _WORD *v7; // rcx
  __int64 v8; // r8
  __int16 v9; // ax
  char v10; // bl

  v1 = a1;
  if ( !a1 )
    return 0;
  if ( !*a1 )
    return 1;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 2LL * (unsigned int)(v3 + 1), 0x4B494742u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  v6 = 0;
  if ( (_DWORD)v3 )
  {
    v7 = PoolWithTag;
    v8 = (unsigned int)v3;
    v6 = v3;
    do
    {
      v9 = *v1++;
      *v7++ = v9;
      --v8;
    }
    while ( v8 );
  }
  v5[v6] = 0;
  v10 = BgkDisplayStringEx(v5);
  ExFreePoolWithTag(v5, 0x4B494742u);
  return v10;
}
