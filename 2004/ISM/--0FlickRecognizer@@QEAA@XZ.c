/*
 * XREFs of ??0FlickRecognizer@@QEAA@XZ @ 0x1801834BC
 * Callers:
 *     ??0GestureSession@@AEAA@XZ @ 0x180182744 (--0GestureSession@@AEAA@XZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18007D7AC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x180185714 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
FlickRecognizer *__fastcall FlickRecognizer::FlickRecognizer(FlickRecognizer *this)
{
  *((_DWORD *)this + 2) = 256;
  *(_QWORD *)this = &FlickRecognizer::`vftable';
  `vector constructor iterator'(
    (char *)this + 16,
    12LL,
    10LL,
    (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  GestureRecognizer::StaticInitConfig();
  *((_WORD *)this + 78) = FlickRecognizer::s_minimumFlickSpeed;
  *((_WORD *)this + 79) = FlickRecognizer::s_minimumFlickDelta;
  *((_WORD *)this + 80) = FlickRecognizer::s_maximumFlickTail;
  *((_WORD *)this + 81) = FlickRecognizer::s_maximumFlickUp;
  return this;
}
