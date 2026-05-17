/*
 * XREFs of _RtlpGetMUIRedirectedFilePath@32 @ 0x4B35421A
 * Callers:
 *     _RtlGetFileMUIPath@28 @ 0x4B3519E0 (_RtlGetFileMUIPath@28.c)
 * Callees:
 *     _GetOverlayFilePath@16 @ 0x4B2B8D7B (_GetOverlayFilePath@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpGetMUIRedirectedFilePathInternal@28 @ 0x4B354358 (_RtlpGetMUIRedirectedFilePathInternal@28.c)
 */

int __thiscall RtlpGetMUIRedirectedFilePath(void *this, int a2, char a3, char a4, void *a5, char a6, int a7)
{
  wchar_t *v8; // esi
  int OverlayFilePath; // eax
  wchar_t *Heap; // eax
  int MUIRedirectedFilePathInternal; // edi
  int v13; // [esp+24h] [ebp-214h] BYREF
  wchar_t v14[262]; // [esp+28h] [ebp-210h] BYREF

  memset(v14, 0, 0x208u);
  v13 = 520;
  v8 = v14;
  if ( !a4 )
    goto LABEL_7;
  OverlayFilePath = GetOverlayFilePath(a7, this, (unsigned int *)&v13, v14);
  if ( OverlayFilePath == -1073741789 )
  {
    Heap = (wchar_t *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v13);
    v8 = Heap;
    if ( !Heap )
    {
LABEL_7:
      MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal(a2, a3, a5, a6, a7);
      goto LABEL_8;
    }
    OverlayFilePath = GetOverlayFilePath(a7, this, (unsigned int *)&v13, Heap);
  }
  if ( OverlayFilePath < 0 )
    goto LABEL_7;
  MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal(a2, a3, a5, a6, a7);
  if ( MUIRedirectedFilePathInternal < 0 )
    goto LABEL_7;
LABEL_8:
  if ( v8 != v14 && v8 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v8);
  return MUIRedirectedFilePathInternal;
}
