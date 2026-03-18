/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_TARGET@@I@Z @ 0x1C0162A8C
 * Callers:
 *     DxgkDDisplayEnumInternal @ 0x1C012DB20 (DxgkDDisplayEnumInternal.c)
 * Callees:
 *     memset @ 0x1C0027400 (memset.c)
 */

PVOID __fastcall PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_TARGET,1>::AllocateElements(_DWORD *a1, unsigned int a2)
{
  __int64 v4; // rdi
  PVOID result; // rax

  v4 = a2;
  if ( a2 <= 1 )
  {
    result = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 0x434 )
      return 0LL;
    result = ExAllocatePoolWithTag(PagedPool, 1076LL * a2, 0x4B677844u);
  }
  *(_QWORD *)a1 = result;
  a1[271] = a2;
  if ( result )
  {
    memset(result, 0, 1076 * v4);
    return *(PVOID *)a1;
  }
  return result;
}
