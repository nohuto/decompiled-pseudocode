/*
 * XREFs of ?RemoveLogicalSurfaceEntry@CLogicalSurfaceHandleMap@@QEAAXPEBVCGdiSpriteBitmap@@PEAX@Z @ 0x1800CD5F0
 * Callers:
 *     ??1CRedirectedGDISurface@@MEAA@XZ @ 0x1800CD444 (--1CRedirectedGDISurface@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CLogicalSurfaceHandleMap::RemoveLogicalSurfaceEntry(
        CLogicalSurfaceHandleMap *this,
        const struct CGdiSpriteBitmap *a2,
        void *a3)
{
  struct _RTL_GENERIC_TABLE *v3; // rbx
  const struct CGdiSpriteBitmap **v5; // rax
  void *Buffer; // [rsp+20h] [rbp-28h] BYREF

  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  Buffer = a3;
  v5 = (const struct CGdiSpriteBitmap **)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
  if ( v5 && v5[2] == a2 && !RtlDeleteElementGenericTable(v3, v5) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
