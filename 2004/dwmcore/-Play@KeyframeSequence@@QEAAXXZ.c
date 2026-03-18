/*
 * XREFs of ?Play@KeyframeSequence@@QEAAXXZ @ 0x18008BD78
 * Callers:
 *     ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x18001A0BC (-Repeat@KeyframeSequence@@QEAAXH@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x18008BCCC (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x18008BDEC (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?SortKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18008BE58 (-SortKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Play(KeyframeSequence *this)
{
  char v1; // al
  __int64 i; // r10
  int v4; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_BYTE *)this + 140);
  if ( (v1 & 1) != 0 )
  {
    *((_BYTE *)this + 140) = v1 | 2;
  }
  else
  {
    KeyframeSequence::SortKeyFrames(this);
    KeyframeSequence::ConfigureTimer(this);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
    {
      v4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24 * i + 8) + 20LL);
      if ( v4 != 1 && (unsigned int)(v4 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
    *((_BYTE *)this + 140) |= 3u;
  }
}
