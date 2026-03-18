/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ @ 0x1800C5760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CVisual *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 31);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 224LL))(v1);
  else
    return 0;
}
