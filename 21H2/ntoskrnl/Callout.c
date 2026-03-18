/*
 * XREFs of Callout @ 0x1406CADF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = sub_1407D0090(
                   *(_QWORD *)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (int)Parameter + 16,
                   (__int64)(Parameter + 6));
}
