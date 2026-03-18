/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_ADAPTER@@I@Z @ 0x1C0164A60
 * Callers:
 *     DxgkDDisplayEnumInternal @ 0x1C012DB20 (DxgkDDisplayEnumInternal.c)
 * Callees:
 *     memset @ 0x1C0027400 (memset.c)
 */

PVOID __fastcall PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER,1>::AllocateElements(_DWORD *a1, unsigned int a2)
{
  __int64 v4; // rdi
  PVOID result; // rax

  v4 = a2;
  if ( a2 > 1 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 0x230 )
      return 0LL;
    result = ExAllocatePoolWithTag(PagedPool, 560LL * a2, 0x4B677844u);
  }
  else
  {
    result = a1 + 2;
  }
  *(_QWORD *)a1 = result;
  a1[142] = a2;
  if ( result )
  {
    memset(result, 0, 560 * v4);
    return *(PVOID *)a1;
  }
  return result;
}
