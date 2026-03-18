/*
 * XREFs of _VerifierEngAllocMem@12 @ 0x1FC7C1
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?VerifierRandomFailure@@YIHK@Z @ 0x1FC707 (-VerifierRandomFailure@@YIHK@Z.c)
 */

_DWORD *__stdcall VerifierEngAllocMem(char a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  size_t v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // eax

  v3 = a2;
  if ( VerifierRandomFailure() || !a2 )
    return 0;
  if ( (gvs & 8) != 0 )
  {
    if ( a2 > 0xFFFFFFEF )
      return 0;
    v3 = a2 + 16;
  }
  if ( v3 > 0xFFFFFFEF )
    return 0;
  v4 = v3 + 16;
  if ( v4 >= 0x2710000 )
    return 0;
  v5 = (_DWORD *)Win32AllocPoolWithPriority((a1 & 2) != 0 ? 512 : 33, v4, a3, 40);
  v6 = v5;
  if ( v5 )
  {
    if ( (a1 & 1) != 0 )
      memset(v5, 0, v4);
    MultiUserGreTrackAddEngResource(v6, 2);
    v6 += 4;
    if ( (gvs & 8) != 0 )
    {
      v6[2] = a2;
      v6[3] = a3;
      GreAcquireSemaphore(dword_269050);
      v7 = (_DWORD *)dword_269058;
      if ( *(_UNKNOWN **)dword_269058 != &unk_269054 )
        __fastfail(3u);
      *v6 = &unk_269054;
      v6[1] = v7;
      *v7 = v6;
      dword_269058 = (int)v6;
      EtwTraceGreLockReleaseSemaphore(L"gvs.hsemPoolTracker", dword_269050);
      GreReleaseSemaphoreInternal(dword_269050);
      v6 += 4;
    }
  }
  return v6;
}
