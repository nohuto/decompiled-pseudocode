/*
 * XREFs of ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x1C000A138
 * Callers:
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01306EC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 * Callees:
 *     <none>
 */

char __fastcall DXGSESSIONDATA::CanEnumerateAdapter(DXGSESSIONDATA *this, struct DXGADAPTER *a2)
{
  if ( !*((_BYTE *)this + 18495) )
    return (*((_DWORD *)a2 + 87) & 0x10) != 0;
  if ( *((_BYTE *)this + 18494) )
    return *((_BYTE *)a2 + 2651) != 0;
  return 1;
}
