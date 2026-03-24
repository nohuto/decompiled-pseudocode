/*
 * XREFs of ?FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z @ 0x1802305E8
 * Callers:
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18022FE74 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 *     ?DepartBufferedOutputPointer@CInteractionContextWrapper@@UEAA_NI@Z @ 0x180230560 (-DepartBufferedOutputPointer@CInteractionContextWrapper@@UEAA_NI@Z.c)
 *     ?HasBufferedOutput@CInteractionContextWrapper@@UEBA_NI@Z @ 0x180230B10 (-HasBufferedOutput@CInteractionContextWrapper@@UEBA_NI@Z.c)
 * Callees:
 *     <none>
 */

struct CBufferedOutputPointer *__fastcall CInteractionContextWrapper::FindBufferedOutputPointer(
        CInteractionContextWrapper *this,
        int a2)
{
  __int64 v2; // r8
  int v3; // r9d
  _DWORD **v4; // r11
  __int64 v5; // rbx
  _DWORD **v6; // rcx
  __int64 v7; // r10

  v2 = 0LL;
  v3 = 0;
  if ( *((int *)this + 154) > 0 )
  {
    v4 = (_DWORD **)*((_QWORD *)this + 76);
    v5 = *((int *)this + 154);
    v6 = v4;
    v7 = 0LL;
    while ( a2 != **v6 )
    {
      ++v3;
      ++v7;
      ++v6;
      if ( v7 >= v5 )
        return (struct CBufferedOutputPointer *)v2;
    }
    return (struct CBufferedOutputPointer *)v4[v3];
  }
  return (struct CBufferedOutputPointer *)v2;
}
