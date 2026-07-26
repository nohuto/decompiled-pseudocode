/*
 * XREFs of ??1?$KStringAtomTableBase@$00@Rtl@@QEAA@XZ @ 0x1C01237EC
 * Callers:
 *     ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C012396C (--1NdisBindBuilderGlobal@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Rtl::KStringAtomTableBase<1>::~KStringAtomTableBase<1>(__int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD **v3; // rdx
  _QWORD *v4; // r10
  _QWORD **i; // rcx
  _QWORD *j; // rdx
  void *v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h]

  while ( 1 )
  {
    v2 = *(_QWORD ***)(a1 + 8);
    v3 = v2;
    if ( v2 )
    {
      v4 = *v2;
      if ( ((unsigned __int64)*v2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v4 = *v2;
      if ( ((unsigned __int8)v4 & 1) == 0 )
        goto LABEL_11;
      v3 = *(_QWORD ***)(a1 + 8);
    }
    for ( i = v2 + 1; i < &v3[(unsigned __int64)*(unsigned int *)(a1 + 4) >> 5]; ++i )
    {
      v4 = *i;
      if ( ((unsigned __int8)*i & 1) == 0 )
        goto LABEL_11;
    }
    v4 = 0LL;
LABEL_11:
    if ( !v4 )
      break;
    v8 = v4[1] & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    for ( j = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * ((37
                         * (BYTE6(v8)
                          + 37
                          * (BYTE5(v8)
                           + 37
                           * (BYTE4(v8)
                            + 37
                            * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                         + HIBYTE(v8)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1))); (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v4 )
      {
        *j = *v4;
        --*(_DWORD *)a1;
        *v4 |= 0x8000000000000002uLL;
        break;
      }
    }
    ExFreePoolWithTag(v4, 0x6D74414Bu);
  }
  v7 = *(void **)(a1 + 8);
  if ( (void *)(a1 + 16) != v7 )
    ExFreePoolWithTag(v7, 0x6873484Bu);
}
