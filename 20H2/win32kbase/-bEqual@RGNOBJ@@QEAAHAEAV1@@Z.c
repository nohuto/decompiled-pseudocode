/*
 * XREFs of ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00A1170
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C000AD60 (EngUpdateDeviceSurface.c)
 *     ?GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z @ 0x1C00A1144 (-GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z.c)
 * Callees:
 *     memcmp @ 0x1C00D2790 (memcmp.c)
 */

__int64 __fastcall RGNOBJ::bEqual(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx

  v2 = *(_QWORD *)a2;
  v3 = 0;
  if ( *(_DWORD *)(*(_QWORD *)this + 84LL) == *(_DWORD *)(v2 + 84) )
    return memcmp(
             *(const void **)(*(_QWORD *)this + 88LL),
             *(const void **)(v2 + 88),
             (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 40LL) - *(_DWORD *)(*(_QWORD *)this + 88LL))) == 0;
  return v3;
}
