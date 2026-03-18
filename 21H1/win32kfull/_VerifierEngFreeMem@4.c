/*
 * XREFs of _VerifierEngFreeMem@4 @ 0x1FC9FA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall VerifierEngFreeMem(_DWORD *a1)
{
  _DWORD *v1; // esi
  int v2; // ecx
  _DWORD *v3; // eax
  PATHOBJ *v4; // esi

  v1 = a1;
  if ( a1 )
  {
    if ( (gvs & 8) != 0 )
    {
      v1 = a1 - 4;
      GreAcquireSemaphore(dword_269050);
      v2 = *(a1 - 4);
      if ( *(_DWORD **)(*v1 + 4) != v1 || (v3 = (_DWORD *)v1[1], (_DWORD *)*v3 != v1) )
        __fastfail(3u);
      *v3 = v2;
      *(_DWORD *)(v2 + 4) = v3;
      EtwTraceGreLockReleaseSemaphore(L"gvs.hsemPoolTracker", dword_269050);
      GreReleaseSemaphoreInternal(dword_269050);
    }
    v4 = (PATHOBJ *)(v1 - 4);
    MultiUserGreTrackRemoveEngResource(v4);
    Win32FreePool(v4);
  }
}
