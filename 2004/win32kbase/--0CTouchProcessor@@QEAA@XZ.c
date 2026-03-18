/*
 * XREFs of ??0CTouchProcessor@@QEAA@XZ @ 0x1C000AEDC
 * Callers:
 *     InputInitialize @ 0x1C0034604 (InputInitialize.c)
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x1C01A22CC (--0CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C000ADFC (--0CSpatialProcessor@@QEAA@XZ.c)
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C000BA28 (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 */

CTouchProcessor *__fastcall CTouchProcessor::CTouchProcessor(CTouchProcessor *this)
{
  __int64 v2; // rdx

  CSpatialProcessor::CSpatialProcessor(this);
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 120) = 0;
  *((_QWORD *)this + 17) = (char *)this + 128;
  *((_QWORD *)this + 16) = (char *)this + 128;
  *((_QWORD *)this + 19) = (char *)this + 144;
  *((_QWORD *)this + 18) = (char *)this + 144;
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 20) = (char *)this + 160;
  *((_WORD *)this + 88) = 2;
  if ( (unsigned __int8)isChildPartition() )
    *((_WORD *)this + 88) = 0x4000;
  *((_QWORD *)this + 24) = v2;
  *((_QWORD *)this + 23) = v2;
  CInpLockGuard::Initialize((CTouchProcessor *)((char *)this + 40));
  return this;
}
