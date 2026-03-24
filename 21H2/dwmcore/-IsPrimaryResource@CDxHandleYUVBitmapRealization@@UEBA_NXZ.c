/*
 * XREFs of ?IsPrimaryResource@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x1802664B0
 * Callers:
 *     ?IsPrimaryResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F9270 (-IsPrimaryResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::IsPrimaryResource(CDxHandleYUVBitmapRealization *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this - 14);
  result = 0;
  if ( v1 )
    return *(_BYTE *)(v1 + 84) != 0;
  return result;
}
