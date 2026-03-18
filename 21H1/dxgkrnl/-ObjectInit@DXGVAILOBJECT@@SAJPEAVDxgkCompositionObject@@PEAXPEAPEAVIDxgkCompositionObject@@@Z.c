/*
 * XREFs of ?ObjectInit@DXGVAILOBJECT@@SAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C02B1090
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVAILOBJECT@@QEAA@XZ @ 0x1C02AF554 (--0DXGVAILOBJECT@@QEAA@XZ.c)
 */

__int64 __fastcall DXGVAILOBJECT::ObjectInit(
        struct DxgkCompositionObject *a1,
        void *a2,
        struct IDxgkCompositionObject **a3)
{
  if ( a1 )
    DXGVAILOBJECT::DXGVAILOBJECT(a1);
  *a3 = (struct DxgkCompositionObject *)((char *)a1 + 32);
  return 0LL;
}
