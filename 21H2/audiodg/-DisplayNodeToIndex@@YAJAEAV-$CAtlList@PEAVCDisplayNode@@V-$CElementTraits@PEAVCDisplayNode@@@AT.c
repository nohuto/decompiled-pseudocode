/*
 * XREFs of ?DisplayNodeToIndex@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCDisplayNode@@PEAI@Z @ 0x14004B978
 * Callers:
 *     ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14004CBEC (-Serialize@CDisplayNode@@QEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNod.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DEFC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall DisplayNodeToIndex(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // r11d
  __int64 v5; // r9
  _QWORD *v6; // rax

  v3 = 0;
  v4 = -2147023728;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v5 = 0LL;
    do
    {
      v6 = *(_QWORD **)a1;
      if ( !*(_QWORD *)a1 )
        goto LABEL_11;
      for ( ; v5; --v5 )
        v6 = (_QWORD *)*v6;
      if ( !v6 )
LABEL_11:
        ATL::AtlThrowImpl(-2147467259);
      if ( a2 == v6[2] )
      {
        *a3 = v3;
        v4 = 0;
      }
      v5 = ++v3;
    }
    while ( (unsigned __int64)v3 < *(_QWORD *)(a1 + 16) );
  }
  return v4;
}
