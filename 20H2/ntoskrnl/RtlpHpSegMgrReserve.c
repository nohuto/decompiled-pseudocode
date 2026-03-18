/*
 * XREFs of RtlpHpSegMgrReserve @ 0x14030801C
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x140307F64 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x1402379DC (RtlpHpFreeVA.c)
 *     RtlpHpAllocVA @ 0x1402CB9B8 (RtlpHpAllocVA.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x14030813C (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x140308600 (RtlpHpSegMgrVaCtxInitialize.c)
 */

__int64 __fastcall RtlpHpSegMgrReserve(__int64 a1, unsigned int a2, _QWORD *a3, unsigned int *a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  void *v9; // rdx
  __int64 v10; // r8
  bool v11; // cf
  int v12; // esi
  int v13; // ecx
  _DWORD *v14; // rax
  void *v15; // rax
  void *v17[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  v6 = -*(_DWORD *)a1;
  v19 = v6;
  v17[0] = (void *)RtlpHpSegMgrVaCtxAlloc(a1, v6, a2);
  v9 = v17[0];
  if ( v17[0] )
    goto LABEL_10;
  v10 = v19;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    if ( v6 < 0x200000 )
      v10 = 0x200000LL;
    v19 = v10;
  }
  v11 = (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 20LL) & 0x40000000) != 0;
  v18 = *(_OWORD *)(a1 + 40);
  v12 = RtlpHpAllocVA(v17, &v19, v10, 0x2000, v11 ? 64 : 4, &v18);
  if ( v12 >= 0 )
  {
    v13 = v19;
    v9 = v17[0];
    if ( v6 >= v19 )
    {
LABEL_5:
      v14 = a5;
      *a4 = v6;
      *a3 = v9;
      *v14 = v13;
      v15 = 0LL;
      v17[0] = 0LL;
      v12 = 0;
      goto LABEL_6;
    }
    RtlpHpSegMgrVaCtxInitialize(a1, v17[0], v6, (unsigned int)v19);
    v9 = v17[0];
LABEL_10:
    v13 = v19;
    goto LABEL_5;
  }
  v15 = v17[0];
LABEL_6:
  if ( v15 )
  {
    v18 = *(_OWORD *)(a1 + 40);
    RtlpHpFreeVA((unsigned __int64 *)v17, &v19, 0x8000, &v18);
  }
  return (unsigned int)v12;
}
