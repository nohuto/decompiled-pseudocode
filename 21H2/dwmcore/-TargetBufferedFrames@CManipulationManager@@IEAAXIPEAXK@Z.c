/*
 * XREFs of ?TargetBufferedFrames@CManipulationManager@@IEAAXIPEAXK@Z @ 0x18017FAEC
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18017FBC0 (-TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CManipulationManager::TargetBufferedFrames(
        CManipulationManager *this,
        int a2,
        void *a3,
        unsigned int a4)
{
  int v5; // eax
  __int64 i; // r10
  __int64 v10; // rbx
  unsigned int v11; // edx
  __int64 v12; // r9
  unsigned int v13; // r8d
  __int64 v14; // rcx

  v5 = *((_DWORD *)this + 64) - 1;
  for ( i = v5; i >= 0; *(_BYTE *)(*(_QWORD *)(v10 + 8 * i--) + 176LL) |= 1u )
  {
    v10 = *((_QWORD *)this + 31);
    v11 = 0;
    v12 = *(_QWORD *)(v10 + 8 * i);
    v13 = *(_DWORD *)(v12 + 16);
    if ( a4 < v13 && *(_DWORD *)(248LL * a4 + v12 + 372) == a2 )
    {
      v11 = a4;
    }
    else if ( v13 )
    {
      while ( *(_DWORD *)(248LL * v11 + v12 + 372) != a2 )
      {
        if ( ++v11 >= v13 )
          goto LABEL_8;
      }
      a4 = v11;
    }
    else
    {
LABEL_8:
      if ( v11 == v13 )
        return;
    }
    v14 = 248LL * v11;
    if ( *(_QWORD *)(v14 + v12 + 392) != -1LL )
      break;
    *(_QWORD *)(v14 + v12 + 392) = a3;
  }
}
