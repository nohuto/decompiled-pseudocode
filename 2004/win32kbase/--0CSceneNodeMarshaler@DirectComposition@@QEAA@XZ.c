/*
 * XREFs of ??0CSceneNodeMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01D05A8
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0097BF0 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CSceneNodeMarshaler *__fastcall DirectComposition::CSceneNodeMarshaler::CSceneNodeMarshaler(
        DirectComposition::CSceneNodeMarshaler *this)
{
  DirectComposition::CSceneNodeMarshaler *result; // rax

  *(_QWORD *)((char *)this + 20) = 1LL;
  *((_QWORD *)this + 6) = 0LL;
  *(_QWORD *)this = &DirectComposition::CSceneNodeMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 10) = 160;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  return result;
}
