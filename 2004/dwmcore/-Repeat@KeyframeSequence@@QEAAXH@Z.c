/*
 * XREFs of ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x18001A0BC
 * Callers:
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18008B82C (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x18008BD78 (-Play@KeyframeSequence@@QEAAXXZ.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x18008BDEC (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Repeat(KeyframeSequence *this, int a2)
{
  KeyframeSequence *v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // r8d
  int v7; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  KeyframeSequence::ConfigureTimer(this);
  KeyframeSequence::Play(v4);
  *((_DWORD *)this + 23) += a2;
  v5 = 0LL;
  v6 = *((_DWORD *)this + 28);
  if ( v6 )
  {
    do
    {
      v7 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24 * v5 + 8) + 20LL);
      if ( v7 != 1 && (unsigned int)(v7 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < v6 );
  }
}
