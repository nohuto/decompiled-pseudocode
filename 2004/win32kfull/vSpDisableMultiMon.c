/*
 * XREFs of vSpDisableMultiMon @ 0x1C0286D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSpDisableMultiMon(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 152);
  if ( v2 )
    result = Win32FreePool(v2);
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  return result;
}
