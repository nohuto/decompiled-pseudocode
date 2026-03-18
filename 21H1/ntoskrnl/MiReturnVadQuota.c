/*
 * XREFs of MiReturnVadQuota @ 0x14062DB60
 * Callers:
 *     MiFinishVadDeletion @ 0x140279A00 (MiFinishVadDeletion.c)
 * Callees:
 *     MiVadPureReserve @ 0x14021AF70 (MiVadPureReserve.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140279990 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402799D0 (PsReturnProcessNonPagedPoolQuota.c)
 */

unsigned __int64 __fastcall MiReturnVadQuota(__int64 a1, ULONG_PTR a2, int a3)
{
  __int64 v3; // r9
  unsigned __int64 result; // rax

  v3 = *(unsigned int *)(a1 + 52);
  LODWORD(v3) = v3 & 0x7FFFFFFF;
  result = v3 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  if ( result >= 0x7FFFFFFFDLL )
  {
    if ( result == 0x7FFFFFFFDLL )
      return PsReturnProcessNonPagedPoolQuota(a2, 0x40uLL);
  }
  else
  {
    result = PsReturnProcessNonPagedPoolQuota(a2, 0x88uLL);
    if ( a3 == 1 )
    {
      result = MiVadPureReserve(a1);
      if ( !(_DWORD)result )
        return PsReturnProcessPagedPoolQuota(
                 a2,
                 8
               * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
                - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)))
               + 8);
    }
  }
  return result;
}
