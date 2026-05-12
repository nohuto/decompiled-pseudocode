/*
 * XREFs of PortpBinaryReadCallBack @ 0x1C00584D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C001D740 (memmove.c)
 */

__int64 __fastcall PortpBinaryReadCallBack(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax

  result = 3221225507LL;
  if ( *(_DWORD *)(a6 + 44) >= a4 )
  {
    memmove((void *)(*(_QWORD *)(a6 + 32) + *(unsigned int *)(a6 + 52)), a3, a4);
    result = 0LL;
  }
  *(_DWORD *)(a6 + 44) = a4;
  *(_DWORD *)(a6 + 60) = result;
  return result;
}
