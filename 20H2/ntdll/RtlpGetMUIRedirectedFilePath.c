/*
 * XREFs of RtlpGetMUIRedirectedFilePath @ 0x180046810
 * Callers:
 *     RtlGetFileMUIPath @ 0x180046930 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180046434 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     GetOverlayFilePath @ 0x18004CFBC (GetOverlayFilePath.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

__int64 __fastcall RtlpGetMUIRedirectedFilePath(
        __m128i *a1,
        const WCHAR *a2,
        const WCHAR *a3,
        _DWORD *a4,
        char a5,
        char a6,
        void *a7)
{
  __m128i v7; // xmm6
  WCHAR *v11; // rbx
  unsigned int MUIRedirectedFilePathInternal; // edi
  unsigned __int64 v14; // rdi
  int OverlayFilePath; // eax
  WCHAR *Heap; // rax
  int v17; // eax
  unsigned int v18; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING v19; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING Source_8; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE BaseAddress[528]; // [rsp+68h] [rbp-A0h] BYREF

  v7 = *a1;
  memset(BaseAddress, 0, 0x208uLL);
  v18 = 520;
  v11 = (WCHAR *)BaseAddress;
  if ( !a6 )
    goto LABEL_2;
  v14 = _mm_srli_si128(v7, 8).m128i_u64[0];
  OverlayFilePath = GetOverlayFilePath(v14, a2, &v18, BaseAddress);
  if ( OverlayFilePath == -1073741789 )
  {
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v18);
    v11 = Heap;
    if ( !Heap )
    {
LABEL_2:
      Source_8 = (UNICODE_STRING)v7;
      MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal(&Source_8, a2, a3, a4, a5, a7);
      goto LABEL_3;
    }
    OverlayFilePath = GetOverlayFilePath(v14, a2, &v18, Heap);
  }
  if ( OverlayFilePath < 0 )
    goto LABEL_2;
  v19 = (UNICODE_STRING)v7;
  v17 = RtlpGetMUIRedirectedFilePathInternal(&v19, v11, a3, a4, a5, a7);
  MUIRedirectedFilePathInternal = v17;
  if ( v17 < 0 )
    goto LABEL_2;
LABEL_3:
  if ( v11 != (WCHAR *)BaseAddress && v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  return MUIRedirectedFilePathInternal;
}
