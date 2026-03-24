/*
 * XREFs of Callout @ 0x1406A1D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = sub_1405FE2AC(
                   *(unsigned int **)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (_QWORD *)Parameter + 2,
                   (__int64)(Parameter + 6));
}
