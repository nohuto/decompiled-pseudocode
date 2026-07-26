/*
 * XREFs of ?ndisDereferenceWithTagCompact@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C000F6E0
 * Callers:
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000E9D0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EB70 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisDereferenceWithTagCompact(ULONG_PTR BugCheckParameter3, unsigned __int8 a2)
{
  __int64 v2; // r9
  ULONG_PTR v4; // r10
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // al
  _BYTE *v7; // rcx
  char v8; // dl

  v2 = *(_QWORD *)(BugCheckParameter3 + 8);
  v4 = a2;
  if ( v2 && (v5 = *(_BYTE *)(BugCheckParameter3 + 3), v6 = 0, v5) )
  {
    while ( 1 )
    {
      v7 = (_BYTE *)(v2 + 2LL * v6);
      if ( *v7 == (_BYTE)v4 )
      {
        v8 = v7[1];
        if ( v8 )
          break;
      }
      if ( ++v6 >= v5 )
        goto LABEL_5;
    }
    v7[1] = v8 - 1;
  }
  else
  {
LABEL_5:
    if ( !_bittestandreset((signed __int32 *)(BugCheckParameter3 + 16), v4) )
      ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, v4);
  }
}
