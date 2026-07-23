/*
 * XREFs of Callout @ 0x140601CC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = sub_1406EDA0C(
                   *(_QWORD *)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (int)Parameter + 16,
                   (__int64)(Parameter + 6));
}
