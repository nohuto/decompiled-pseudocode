/*
 * XREFs of NullifyLookasideRef @ 0x1C0221300
 * Callers:
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     MNFlushDestroyedPopups @ 0x1C0221670 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C0221D60 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C02225EC (xxxMNStartMenuState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NullifyLookasideRef(__int64 a1)
{
  bool v1; // zf
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  v1 = *(_DWORD *)(a1 + 8) == 0;
  *(_BYTE *)(a1 + 12) = 1;
  if ( v1 )
    return Win32FreeToPagedLookasideList(gpStackRefLookAside, a1);
  return result;
}
