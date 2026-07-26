/*
 * XREFs of NdisFreeBuffer @ 0x1C00BCA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisFreeBuffer(PMDL Mdl)
{
  IoFreeMdl(Mdl);
}
