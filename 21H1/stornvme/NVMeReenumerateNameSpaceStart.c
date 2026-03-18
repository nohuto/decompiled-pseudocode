/*
 * XREFs of NVMeReenumerateNameSpaceStart @ 0x1C0019C00
 * Callers:
 *     NVMeGetLogPageCompletion @ 0x1C0017D20 (NVMeGetLogPageCompletion.c)
 * Callees:
 *     memset @ 0x1C0005500 (memset.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C00196DC (NVMeReenumerateNameSpaceIdentify.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceStart(__int64 a1)
{
  __int64 i; // rdi
  void *v3; // rcx

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1608) + 516LL) )
    return NVMeReenumerateNameSpaceIdentify(a1);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 200); i = (unsigned int)(i + 1) )
  {
    v3 = *(void **)(a1 + 8 * i + 1720);
    if ( v3 )
      memset(v3, 0, 0x68uLL);
  }
  *(_DWORD *)(a1 + 188) = 0;
  return StorPortNotification(7LL, a1, 0LL);
}
