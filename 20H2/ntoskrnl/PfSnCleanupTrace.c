/*
 * XREFs of PfSnCleanupTrace @ 0x14065ACDC
 * Callers:
 *     PfSnBeginTrace @ 0x1405D858C (PfSnBeginTrace.c)
 *     PfSnEndTrace @ 0x14065AA98 (PfSnEndTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnCleanupTrace(__int64 a1)
{
  __int64 v1; // rbx
  bool v3; // zf
  unsigned __int64 v4; // rcx
  char v5; // al
  int v6; // ebp
  _QWORD *v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  void *v11; // rcx
  _QWORD **v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  void *v15; // rcx
  void *v16; // rcx

  v1 = a1 + 520;
  v3 = (*(_BYTE *)(a1 + 528) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 520);
  if ( !v3 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8);
  v6 = v5 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v7 = (_QWORD *)v4;
          if ( v6 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          *v7 = 0LL;
        }
        v8 = *(_QWORD *)(v4 + 8);
        if ( !v8 )
          break;
        v9 = v4;
        if ( v6 )
          v4 ^= v8;
        else
          v4 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)(v9 + 8) = 0LL;
      }
      v10 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v6 && v10 )
        v10 ^= v4;
      CmSiFreeMemory((PPRIVILEGE_SET)v4);
      if ( !v10 )
        break;
      v4 = v10;
    }
    v5 = *(_BYTE *)(v1 + 8);
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v5 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  v11 = *(void **)(a1 + 584);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = (_QWORD **)(a1 + 104);
  while ( 1 )
  {
    v13 = *v12;
    if ( *v12 == v12 )
      break;
    if ( (_QWORD **)v13[1] != v12 || (v14 = (_QWORD *)*v13, *(_QWORD **)(*v13 + 8LL) != v13) )
      __fastfail(3u);
    *v12 = v14;
    v14[1] = v12;
    --*(_DWORD *)(a1 + 120);
    ExFreePoolWithTag(v13, 0);
  }
  v15 = *(void **)(a1 + 472);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  v16 = *(void **)(a1 + 352);
  if ( v16 )
    ObfDereferenceObjectWithTag(v16, 0x73576650u);
  if ( (*(_BYTE *)(a1 + 486) & 2) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&RunRef);
}
