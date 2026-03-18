/*
 * XREFs of ?vSrcCopyS32D8@@YAXPEAUBLTINFO@@@Z @ 0x1C01493C0
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0149564 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSrcCopyS32D8(struct BLTINFO *a1)
{
  unsigned __int8 (__fastcall *v1)(struct _XLATEOBJ *, const unsigned __int8 *, unsigned int); // r12
  unsigned int v2; // ebp
  struct BLTINFO *v3; // rsi
  struct _XLATEOBJ *v4; // rdi
  _BYTE *v5; // r13
  int v6; // eax
  unsigned int *v7; // rbx
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ebp
  ULONG v11; // ecx
  _BYTE *v12; // r15
  unsigned int *v13; // r14
  unsigned int v14; // ebp
  int v15; // ebx
  int v16; // edi
  int v17; // ebx
  unsigned __int8 v18; // al
  int v19; // ebx
  int v20; // esi
  unsigned int v21; // [rsp+20h] [rbp-68h]
  int v22; // [rsp+24h] [rbp-64h]
  unsigned int *v23; // [rsp+28h] [rbp-60h]
  unsigned __int8 *Xlate555; // [rsp+30h] [rbp-58h]
  struct _XLATEOBJ *v25; // [rsp+38h] [rbp-50h]
  int v27; // [rsp+98h] [rbp+10h]
  int v28; // [rsp+A0h] [rbp+18h]

  v1 = XLATEOBJ_ulIndexToPalSurf;
  v2 = *((_DWORD *)a1 + 7);
  v3 = a1;
  v4 = *(struct _XLATEOBJ **)a1;
  v5 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v6 = *((_DWORD *)a1 + 8);
  v7 = (unsigned int *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v8 = v2;
  v27 = v6;
  v23 = v7;
  v25 = v4;
  if ( (-(int)v5 & 3u) <= v2 )
    v8 = -(int)v5 & 3;
  v28 = v8;
  v9 = v2 - v8;
  v10 = (v2 - v8) & 3;
  v21 = v9 >> 2;
  v22 = v10;
  v11 = v4[1].pulXlate[6];
  if ( (v11 & 4) != 0 )
  {
    v1 = XLATEOBJ_RGB32ToPalSurf;
  }
  else if ( (v11 & 8) != 0 )
  {
    v1 = XLATEOBJ_BGR32ToPalSurf;
  }
  Xlate555 = XLATEOBJ_pGetXlate555(v4);
  if ( Xlate555 )
  {
    while ( 1 )
    {
      v12 = v5;
      v13 = v7;
      if ( v28 )
      {
        v19 = v28;
        do
        {
          *v12++ = v1(v4, Xlate555, *v13++);
          --v19;
        }
        while ( v19 );
        v3 = a1;
        v7 = v23;
      }
      if ( v21 )
      {
        v14 = v21;
        do
        {
          v15 = v1(v4, Xlate555, v13[3]) << 8;
          v16 = (v15 | v1(v4, Xlate555, v13[2])) << 8;
          v17 = v16 | v1(v25, Xlate555, v13[1]);
          v4 = v25;
          v18 = v1(v25, Xlate555, *v13);
          v13 += 4;
          *(_DWORD *)v12 = (v17 << 8) | v18;
          v12 += 4;
          --v14;
        }
        while ( v14 );
        v3 = a1;
        v10 = v22;
        v7 = v23;
      }
      if ( v10 )
      {
        v20 = v10;
        do
        {
          *v12++ = v1(v4, Xlate555, *v13++);
          --v20;
        }
        while ( v20 );
        v3 = a1;
        v7 = v23;
      }
      if ( !--v27 )
        break;
      v7 = (unsigned int *)((char *)v7 + *((int *)v3 + 10));
      v5 += *((int *)v3 + 11);
      v23 = v7;
    }
  }
}
