/*
 * XREFs of ?ObjectInit@CompositionSurfaceObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C001CCC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CompositionSurfaceObject@@IEAA@XZ @ 0x1C001CD28 (--0CompositionSurfaceObject@@IEAA@XZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        void *a2,
        struct IDxgkCompositionObject **a3)
{
  __int64 result; // rax

  if ( a1 )
    CompositionSurfaceObject::CompositionSurfaceObject(a1);
  *a3 = (struct DxgkCompositionObject *)((char *)a1 + 40);
  *((_DWORD *)a1 + 16) = 0;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 11) = 0LL;
  *((_DWORD *)a1 + 32) = 0;
  *((_DWORD *)a1 + 33) = 0;
  *((_QWORD *)a1 + 15) = (char *)a1 + 112;
  *((_QWORD *)a1 + 14) = (char *)a1 + 112;
  result = 0LL;
  *((_BYTE *)a1 + 153) = 0;
  return result;
}
