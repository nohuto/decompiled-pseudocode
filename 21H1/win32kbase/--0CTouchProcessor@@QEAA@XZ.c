/*
 * XREFs of ??0CTouchProcessor@@QEAA@XZ @ 0x1C00212A8
 * Callers:
 *     InputInitialize @ 0x1C001E64C (InputInitialize.c)
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x1C01A802C (--0CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C0021490 (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C00220FC (--0CSpatialProcessor@@QEAA@XZ.c)
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
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
