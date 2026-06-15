/*
 * XREFs of sub_18001325C @ 0x18001325C
 * Callers:
 *     sub_1800175C0 @ 0x1800175C0 (sub_1800175C0.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001325C(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r8
  int v9; // edx
  _QWORD *i; // rcx
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v15; // rbp
  _DWORD *v16; // rbx
  __int64 *v17; // rdx
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  ATL::CAtlException *v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+50h] [rbp+8h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+60h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 120);
  if ( *(_QWORD *)(a1 + 152) )
    goto LABEL_13;
  v7 = *(unsigned int *)(a1 + 160);
  if ( *(_DWORD *)(a1 + 160) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 0x18 )
    {
LABEL_8:
      v8 = 0LL;
      goto LABEL_9;
    }
    v7 *= 24LL;
  }
  if ( ~v7 < 8 )
    goto LABEL_8;
  v8 = (_QWORD *)o_malloc(v7 + 8);
  if ( !v8 )
    goto LABEL_26;
  while ( 1 )
  {
    *v8 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 144) = v8;
LABEL_9:
    if ( v8 )
      break;
LABEL_26:
    try
    {
      sub_18000A174(-2147024882);
    }
    catch ( ATL::CAtlException *v19 )
    {
      v17 = &v18;
      v15 = v17;
      v16 = (_DWORD *)v17[4];
      if ( *v16 == -1073741571 )
        o__resetstkoflw();
      *((_DWORD *)v15 + 20) = *v16;
      v5 = v20;
      v4 = v21;
      goto LABEL_17;
    }
  }
  v9 = *(_DWORD *)(a1 + 160);
  for ( i = &v8[2 * (v9 - 1) + 1 + (unsigned int)(v9 - 1)]; --v9 >= 0; i -= 3 )
  {
    *i = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 152) = i;
  }
LABEL_13:
  v11 = *(__int64 **)(a1 + 152);
  v12 = *v11;
  v11[2] = a2;
  *(_QWORD *)(a1 + 152) = v12;
  v11[1] = 0LL;
  *v11 = v6;
  ++*(_QWORD *)(a1 + 136);
  v13 = *(_QWORD *)(a1 + 120);
  if ( v13 )
    *(_QWORD *)(v13 + 8) = v11;
  else
    *(_QWORD *)(a1 + 128) = v11;
  *(_QWORD *)(a1 + 120) = v11;
LABEL_17:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v5;
}
