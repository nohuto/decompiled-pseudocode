/*
 * XREFs of Callout @ 0x1406C5DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140689640 @ 0x140689640 (sub_140689640.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = sub_140689640(
                   *(unsigned int **)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (_QWORD *)Parameter + 2,
                   (__int64)(Parameter + 6));
}
