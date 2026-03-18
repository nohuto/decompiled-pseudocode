/*
 * XREFs of ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C005A9E0
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C005A410 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x1C005B540 (GreExtCreateRegion.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vTighten(RGNOBJ *this)
{
  __int64 v1; // r9
  int v2; // r8d
  int v3; // r11d
  int *v4; // r10
  signed int v5; // ebx
  int v6; // edi
  __int128 v7; // [rsp+0h] [rbp-18h]

  v1 = *(_QWORD *)this;
  v2 = *(_DWORD *)(*(_QWORD *)this + 84LL);
  if ( v2 == 1 )
  {
    *(_DWORD *)(v1 + 96) = 0;
    *(_DWORD *)(*(_QWORD *)this + 108LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 104LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 100LL) = 0;
  }
  else
  {
    v3 = 0x7FFFFFFF;
    v4 = *(int **)(v1 + 88);
    v5 = 0x80000000;
    LODWORD(v7) = 0x7FFFFFFF;
    DWORD2(v7) = 0x80000000;
    DWORD1(v7) = v4[2];
    if ( !v2 )
      goto LABEL_13;
    do
    {
      v6 = *v4;
      --v2;
      if ( *v4 )
      {
        if ( v3 > v4[3] )
          v3 = v4[3];
        LODWORD(v7) = v3;
        if ( v5 < v4[v6 - 1 + 3] )
          v5 = v4[v6 - 1 + 3];
        DWORD2(v7) = v5;
      }
      v4 = (int *)((char *)v4 + (unsigned int)(4 * v6 + 16));
    }
    while ( v2 );
    if ( v3 >= v5 )
    {
LABEL_13:
      LODWORD(v7) = 0;
      DWORD2(v7) = 0;
    }
    HIDWORD(v7) = *(_DWORD *)(*(_QWORD *)(v1 + 40)
                            - 4LL
                            - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(v1 + 40) - 4LL) + 16)
                            + 8);
    *(_OWORD *)(v1 + 96) = v7;
  }
}
