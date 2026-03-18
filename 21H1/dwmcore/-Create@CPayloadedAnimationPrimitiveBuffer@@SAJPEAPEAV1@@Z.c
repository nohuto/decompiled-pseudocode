/*
 * XREFs of ?Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z @ 0x180018A4C
 * Callers:
 *     ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x180018954 (-ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_APPEND@@PEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPayloadedAnimationPrimitiveBuffer::Create(struct CPayloadedAnimationPrimitiveBuffer **a1)
{
  unsigned int v2; // edi
  struct CPayloadedAnimationPrimitiveBuffer *v3; // rax
  unsigned int v4; // ecx
  struct CPayloadedAnimationPrimitiveBuffer *v5; // rbx

  v2 = 0;
  v3 = (struct CPayloadedAnimationPrimitiveBuffer *)operator new(0x30uLL);
  v5 = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 2) = 0;
    *(_QWORD *)v3 = &CPayloadedAnimationPrimitiveBuffer::`vftable';
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_DWORD *)v3 + 8) = 0;
    *((_DWORD *)v3 + 9) = 0;
    *((_DWORD *)v3 + 10) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    (**(void (__fastcall ***)(struct CPayloadedAnimationPrimitiveBuffer *))v5)(v5);
    *a1 = v5;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024882, 0xDu, 0LL);
  }
  return v2;
}
