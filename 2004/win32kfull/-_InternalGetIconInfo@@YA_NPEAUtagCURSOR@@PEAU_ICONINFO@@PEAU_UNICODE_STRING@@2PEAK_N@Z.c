/*
 * XREFs of ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00675D0
 * Callers:
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C0008300 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     NtUserGetIconInfo @ 0x1C0067DA0 (NtUserGetIconInfo.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C02433E4 (-GetCursorHeight@@YAHXZ.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0018AAC (GreCreateCompatibleBitmapInternal.c)
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     GreCreateDIBitmapReal @ 0x1C0066F4C (GreCreateDIBitmapReal.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0067AAC (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

char __fastcall _InternalGetIconInfo(
        struct tagCURSOR *a1,
        struct _ICONINFO *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *a5,
        bool a6)
{
  struct tagCURSOR *v7; // rbx
  __int64 v8; // rsi
  unsigned int v9; // r14d
  int v10; // edi
  unsigned int v11; // eax
  __int64 Bitmap; // r13
  __int64 DIBitmapReal; // rax
  __int64 v14; // rax
  int v15; // r8d
  int v16; // eax
  struct _ICONINFO *v17; // rdi
  __int64 v18; // rcx
  struct _UNICODE_STRING *v19; // rdx
  struct tagCURSOR **v21; // rbx
  int v22; // r9d
  int v23; // r10d
  INT b; // [rsp+70h] [rbp-B8h] BYREF
  int v25[2]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+80h] [rbp-A8h]
  __int64 v27; // [rsp+88h] [rbp-A0h]
  __int64 v28; // [rsp+90h] [rbp-98h]
  struct _ICONINFO *v29; // [rsp+98h] [rbp-90h]
  PUNICODE_STRING DestinationString; // [rsp+A0h] [rbp-88h]
  unsigned int *v31; // [rsp+A8h] [rbp-80h]
  unsigned int v32[3]; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v33; // [rsp+C4h] [rbp-64h]
  int v34; // [rsp+CCh] [rbp-5Ch]
  __int64 v35; // [rsp+D0h] [rbp-58h]
  int v36; // [rsp+D8h] [rbp-50h]
  __int64 v37; // [rsp+DCh] [rbp-4Ch]

  DestinationString = a4;
  v29 = a2;
  v7 = a1;
  v31 = a5;
  v8 = 0LL;
  b = 0;
  v25[0] = 0;
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
  {
    v21 = (struct tagCURSOR **)*((_QWORD *)a1 + 12);
    if ( !v21 )
      return 0;
    v7 = *v21;
  }
  GetVirtualizedCursorSize(v7, &b, v25);
  v9 = b;
  b = b != *((_DWORD *)v7 + 35);
  if ( a6 || !*((_QWORD *)v7 + 12) )
  {
    v10 = v25[0];
    v11 = v25[0];
  }
  else
  {
    v10 = v25[0];
    v11 = v25[0] / 2;
  }
  Bitmap = GreCreateBitmap(v9, v11, 1LL, 1LL, 0LL);
  v26 = Bitmap;
  if ( !Bitmap )
    return 0;
  *(_QWORD *)v25 = 0LL;
  if ( *((_QWORD *)v7 + 12) )
  {
    if ( *((_DWORD *)v7 + 34) == 32 )
    {
      v35 = 0LL;
      v37 = 0LL;
      v32[0] = 40;
      v32[1] = v9;
      v32[2] = v10 / 2;
      v33 = 2097153LL;
      v34 = 0;
      v36 = 0;
      DIBitmapReal = GreCreateDIBitmapReal(
                       *(HDC *)(gpDispInfo + 64LL),
                       0,
                       0LL,
                       v32,
                       0,
                       0x2Cu,
                       0,
                       0LL,
                       0,
                       0LL,
                       0,
                       0LL,
                       0LL);
    }
    else
    {
      DIBitmapReal = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 64LL), v9, v10 / 2, 0, 0LL, 0LL);
    }
    v8 = DIBitmapReal;
    *(_QWORD *)v25 = DIBitmapReal;
    if ( !DIBitmapReal )
    {
      GreDeleteObject(Bitmap);
      return 0;
    }
  }
  v27 = GreSelectBitmap(ghdcMem2, *((_QWORD *)v7 + 11));
  v28 = GreSelectBitmap(ghdcMem, Bitmap);
  v14 = *((_QWORD *)v7 + 12);
  if ( b )
  {
    if ( !v14 || a6 )
      v22 = *((_DWORD *)v7 + 36);
    else
      v22 = *((_DWORD *)v7 + 36) >> 1;
    if ( !v14 || a6 )
      v23 = v10;
    else
      v23 = v10 / 2;
    GreStretchBltInternal(ghdcMem, 0, 0, v9, v23, ghdcMem2, 0, 0, *((_DWORD *)v7 + 35), v22, 13369376, 0xFFFFFF, 0);
  }
  else
  {
    if ( !v14 || a6 )
      v15 = v10;
    else
      v15 = v10 / 2;
    NtGdiBitBltInternal(ghdcMem, 0LL, 0LL, v9, v15, ghdcMem2, 0, 0, 13369376, 0xFFFFFF, 0);
  }
  if ( v8 )
  {
    GreSelectBitmap(ghdcMem2, *((_QWORD *)v7 + 12));
    GreSelectBitmap(ghdcMem, v8);
    v16 = v10 / 2;
    if ( b )
      GreStretchBltInternal(
        ghdcMem,
        0,
        0,
        v9,
        v16,
        ghdcMem2,
        0,
        0,
        *((_DWORD *)v7 + 35),
        *((_DWORD *)v7 + 36) >> 1,
        13369376,
        0,
        0);
    else
      NtGdiBitBltInternal(ghdcMem, 0LL, 0LL, v9, v16, ghdcMem2, 0, 0, 13369376, 0, 0);
  }
  GreSelectBitmap(ghdcMem2, v27);
  GreSelectBitmap(ghdcMem, v28);
  v17 = v29;
  *(_DWORD *)v29 = *((_WORD *)v7 + 37) == 3;
  *((_DWORD *)v17 + 1) = EngMulDiv(*((__int16 *)v7 + 42), v9, *((_DWORD *)v7 + 35));
  *((_DWORD *)v17 + 2) = EngMulDiv(*((__int16 *)v7 + 43), v9, *((_DWORD *)v7 + 35));
  *((_QWORD *)v17 + 2) = v26;
  *((_QWORD *)v17 + 3) = v8;
  if ( a3 )
  {
    v18 = *((unsigned __int16 *)v7 + 36);
    if ( (_WORD)v18 )
      a3->Length = UserGetAtomName(v18, a3->Buffer, a3->MaximumLength >> 1);
    else
      a3->Length = 0;
  }
  if ( DestinationString )
  {
    v19 = (struct _UNICODE_STRING *)((char *)v7 + 56);
    if ( (*((_QWORD *)v7 + 8) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      RtlCopyUnicodeString(DestinationString, v19);
    else
      *DestinationString = *v19;
  }
  if ( v31 )
    *v31 = *((_DWORD *)v7 + 34);
  return 1;
}
