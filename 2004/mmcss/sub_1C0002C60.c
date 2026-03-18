/*
 * XREFs of sub_1C0002C60 @ 0x1C0002C60
 * Callers:
 *     sub_1C0002A80 @ 0x1C0002A80 (sub_1C0002A80.c)
 *     sub_1C0002B50 @ 0x1C0002B50 (sub_1C0002B50.c)
 *     StartRoutine @ 0x1C0002D50 (StartRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0002C60(__int64 a1)
{
  bool v2; // zf
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 24) )
  {
    v2 = *(_BYTE *)(a1 + 36) == 0;
    *(_QWORD *)(a1 + 24) = 0LL;
    if ( !v2 )
      *(_BYTE *)(a1 + 36) = 0;
    result = RtlRbRemoveNode(&DeviceObject.SectorSize, a1);
    if ( qword_1C0007040 == a1 )
      qword_1C0007040 = 2LL;
  }
  return result;
}
