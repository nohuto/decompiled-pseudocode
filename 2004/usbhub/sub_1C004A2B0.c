/*
 * XREFs of sub_1C004A2B0 @ 0x1C004A2B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002F8C0 @ 0x1C002F8C0 (sub_1C002F8C0.c)
 */

__int64 __fastcall sub_1C004A2B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // edi
  _DWORD *v7; // rax

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x13u, (__int64)&unk_1C0063950);
  v6 = *(_DWORD *)(a5 + 4);
  if ( !v6 )
    sub_1C000F050(a1);
  v7 = sub_1C000F050(a1);
  sub_1C002F8C0(a1, v6, (__int64)(v7 + 346), 0);
  return 0LL;
}
