/*
 * XREFs of Callout @ 0x14066B9F0
 * Callers:
 *     <none>
 * Callees:
 *     SPCall2ServerInternal @ 0x14066C0B8 (SPCall2ServerInternal.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = SPCall2ServerInternal(
                   *(_QWORD *)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (int)Parameter + 16,
                   (__int64)(Parameter + 6));
}
