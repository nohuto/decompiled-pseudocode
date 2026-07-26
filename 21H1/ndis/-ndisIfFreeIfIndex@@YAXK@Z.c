/*
 * XREFs of ?ndisIfFreeIfIndex@@YAXK@Z @ 0x1C00B520C
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00098F0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000C780 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000F740 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C00187E4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIfFreeIfIndex(unsigned int a1)
{
  int *v1; // rax
  unsigned int v2; // ecx
  _RTL_BITMAP_EX *v3; // rbx
  unsigned int v4; // edi

  v1 = &dword_1C00E4318;
  if ( a1 < *(_DWORD *)dword_1C00E48D4 )
    v1 = &dword_1C00E4300;
  v2 = a1 - *v1;
  v3 = (_RTL_BITMAP_EX *)(v1 + 2);
  v4 = v2;
  if ( (unsigned __int64)v2 < *((_QWORD *)v1 + 1) )
  {
    if ( RtlTestBitEx((PRTL_BITMAP_EX)(v1 + 2), v2) )
      RtlClearBitEx(v3, v4);
  }
}
