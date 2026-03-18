/*
 * XREFs of sub_140A3A9E0 @ 0x140A3A9E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 */

void __fastcall sub_140A3A9E0(_BYTE *Parameter)
{
  Parameter[28] = sub_140A1FEE4(
                    *(_DWORD *)Parameter,
                    *((_DWORD *)Parameter + 1),
                    *((_DWORD *)Parameter + 2),
                    *((_QWORD *)Parameter + 2),
                    *((_DWORD *)Parameter + 6));
}
