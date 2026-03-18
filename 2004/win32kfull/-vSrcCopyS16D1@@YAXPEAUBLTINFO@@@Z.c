/*
 * XREFs of ?vSrcCopyS16D1@@YAXPEAUBLTINFO@@@Z @ 0x1C02C9360
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00B9BB0 (XLATEOBJ_iXlate.c)
 */

void __fastcall vSrcCopyS16D1(struct BLTINFO *a1)
{
  char v1; // si
  __int64 v2; // rdx
  int *v3; // rdi
  int v4; // r13d
  int v5; // r8d
  _BYTE *v6; // r14
  unsigned __int16 *v7; // rbp
  int v8; // ebx
  _BYTE *v9; // r15
  unsigned __int16 *v10; // r12
  int v12; // ebx
  bool v13; // zf
  int v15; // [rsp+78h] [rbp+10h]
  int v16; // [rsp+80h] [rbp+18h]
  XLATEOBJ *pxlo; // [rsp+88h] [rbp+20h]

  v1 = 0;
  v2 = *((int *)a1 + 14);
  v3 = (int *)a1;
  v4 = *((_DWORD *)a1 + 8);
  v5 = v2 + *((_DWORD *)a1 + 7);
  pxlo = *(XLATEOBJ **)a1;
  v6 = (_BYTE *)(*((_QWORD *)a1 + 2) + (v2 >> 3));
  v7 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v15 = v5;
  v16 = v4;
  while ( 1 )
  {
    v8 = v3[14];
    v9 = v6;
    v10 = v7;
    if ( (v8 & 7) != 0 )
      v1 = *v6 >> (8 - (v8 & 7));
    if ( v8 != v5 )
    {
      do
      {
        v1 *= 2;
        if ( XLATEOBJ_iXlate(pxlo, *v10++) )
          v1 |= 1u;
        if ( (++v8 & 7) == 0 )
          *v9++ = v1;
      }
      while ( v8 != v15 );
      v3 = (int *)a1;
      v4 = v16;
      v5 = v15;
    }
    v12 = v8 & 7;
    if ( v12 )
    {
      v1 <<= 8 - v12;
      *v9 = (255 >> v12) & *v9 | v1 & ~(255 >> v12);
    }
    v13 = v4-- == 1;
    v16 = v4;
    if ( v13 )
      break;
    v7 = (unsigned __int16 *)((char *)v7 + v3[10]);
    v6 += v3[11];
  }
}
