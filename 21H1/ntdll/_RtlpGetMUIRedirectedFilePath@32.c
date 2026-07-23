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

int __thiscall RtlpGetMUIRedirectedFilePath(const WCHAR *this, int a2, char a3, char a4, void *a5, UNICODE_STRING a6)
{
  wchar_t *v7; // esi
  NTSTATUS OverlayFilePath; // eax
  wchar_t *Heap; // eax
  int MUIRedirectedFilePathInternal; // edi
  size_t v12; // [esp-4h] [ebp-23Ch]
  SIZE_T v13; // [esp-4h] [ebp-23Ch]
  UNICODE_STRING Source; // [esp+20h] [ebp-218h] BYREF
  wchar_t v15[262]; // [esp+28h] [ebp-210h] BYREF

  LODWORD(v12) = 520;
  memset(v15, 0, v12);
  Source.Buffer = (wchar_t *)520;
  v7 = v15;
  if ( !a4 )
    goto LABEL_7;
  OverlayFilePath = GetOverlayFilePath((int)a6.Buffer, this, (unsigned int *)&Source.Buffer, v15);
  if ( OverlayFilePath == -1073741789 )
  {
    LODWORD(v13) = Source.Buffer;
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v13);
    v7 = Heap;
    if ( !Heap )
    {
LABEL_7:
      MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal(a2, a3, a5, a6);
      goto LABEL_8;
    }
    OverlayFilePath = GetOverlayFilePath((int)a6.Buffer, this, (unsigned int *)&Source.Buffer, Heap);
  }
  if ( OverlayFilePath < 0 )
    goto LABEL_7;
  MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal(a2, a3, a5, a6);
  if ( MUIRedirectedFilePathInternal < 0 )
    goto LABEL_7;
LABEL_8:
  if ( v7 != v15 && v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  return MUIRedirectedFilePathInternal;
}
