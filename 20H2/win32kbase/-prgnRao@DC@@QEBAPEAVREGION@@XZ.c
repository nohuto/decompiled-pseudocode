/*
 * XREFs of ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C004BD4C
 * Callers:
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C004BBCC (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     GreGetClipBox @ 0x1C004C930 (GreGetClipBox.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C0082808 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C00409C0 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 */

struct REGION *__fastcall DC::prgnRao(DC *this)
{
  DC *v1; // r8
  struct REGION *result; // rax
  bool v3; // zf
  struct REGION *v4; // r9

  v1 = this;
  if ( !*((_QWORD *)this + 144) )
    return (struct REGION *)*((_QWORD *)v1 + 142);
  if ( (*((_DWORD *)this + 10) & 2) == 0 )
    return (struct REGION *)*((_QWORD *)v1 + 142);
  v3 = (unsigned int)DC::bDpiScaledSurface(this) == 0;
  result = v4;
  if ( v3 )
    return (struct REGION *)*((_QWORD *)v1 + 142);
  return result;
}
