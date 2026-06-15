/*
 * XREFs of ?SetApplicationHandlesGroupingParams@CProcess@@UEAAXXZ @ 0x18001F150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::SetApplicationHandlesGroupingParams(CProcess *this)
{
  *((_BYTE *)this + 800) = 1;
  CProcess::ResetReusedSessionGroupingParams((CProcess *)((char *)this - 16));
}
