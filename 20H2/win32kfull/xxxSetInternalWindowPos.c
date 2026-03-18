/*
 * XREFs of xxxSetInternalWindowPos @ 0x1C0208ED8
 * Callers:
 *     NtUserSetInternalWindowPos @ 0x1C0201E50 (NtUserSetInternalWindowPos.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C003A968 (UpdateCheckpoint.c)
 *     GetMonitorWorkRect @ 0x1C003AE18 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C003AFE8 (GetMonitorRect.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 */

__int64 __fastcall xxxSetInternalWindowPos(struct tagWND *a1, unsigned __int8 a2, struct tagRECT *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rbx
  __m128i v12; // xmm6
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // edx
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rbx
  __m128i v20; // xmm6
  __int64 v21; // r8
  __int64 v22; // r9
  __int128 *MonitorRect; // rax
  __int128 v24; // xmm0
  unsigned int v25; // ecx
  char v26; // dl
  __int128 v27; // [rsp+40h] [rbp-38h] BYREF

  result = UpdateCheckpoint((__int64)a1);
  v9 = result;
  if ( result )
  {
    if ( a3 )
    {
      *(struct tagRECT *)result = *a3;
      if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      {
        v11 = MonitorFromRect(a3, 1LL, 0LL, v10);
        v12 = *(__m128i *)GetMonitorWorkRect(&v27, v11);
        v15 = *(_QWORD *)GetMonitorRect(&v27, v11, v13, v14);
        v16 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4)) - HIDWORD(v15);
        *(_DWORD *)(v9 + 12) += v16;
        v17 = _mm_cvtsi128_si32(v12) - v15;
        *(_DWORD *)v9 += v17;
        *(_DWORD *)(v9 + 8) += v17;
        *(_DWORD *)(v9 + 4) += v16;
      }
    }
    if ( !a4 || *(_DWORD *)a4 == -1 )
    {
      v25 = *(_DWORD *)(v9 + 48) & 0xFFFFFFDE;
    }
    else
    {
      *(_QWORD *)(v9 + 32) = *a4;
      if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      {
        v19 = MonitorFromRect((struct tagRECT *)v9, 1LL, 0LL, v18);
        v20 = *(__m128i *)GetMonitorWorkRect(&v27, v19);
        MonitorRect = GetMonitorRect(&v27, v19, v21, v22);
        v24 = *MonitorRect;
        *(_DWORD *)(v9 + 32) += _mm_cvtsi128_si32(v20) - *MonitorRect;
        *(_DWORD *)(v9 + 36) += _mm_cvtsi128_si32(_mm_srli_si128(v20, 4)) - DWORD1(v24);
      }
      v25 = *(_DWORD *)(v9 + 48) | 0x21;
    }
    *(_DWORD *)(v9 + 48) = v25;
    v26 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
    if ( (v26 & 0x20) != 0 )
    {
      if ( (v25 & 0x20) != 0 )
        xxxSetWindowPos(a1, 0LL, *(unsigned int *)(v9 + 32), *(unsigned int *)(v9 + 36), 0, 0, 21);
    }
    else if ( (v26 & 1) == 0 && a3 )
    {
      xxxSetWindowPos(
        a1,
        0LL,
        (unsigned int)a3->left,
        (unsigned int)a3->top,
        a3->right - a3->left,
        a3->bottom - a3->top,
        4);
    }
    xxxShowWindowEx(a1, a2, 0);
    return 1LL;
  }
  return result;
}
