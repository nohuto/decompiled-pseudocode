/*
 * XREFs of ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C032CBE0
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01A4940 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C01B633C (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

void __fastcall ClipCurrentCursor(
        const struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct CURSOR_CLIP_PARAMS *a3)
{
  UINT Height; // r8d
  UINT v7; // r14d
  int v8; // edi
  UINT Pitch; // edx
  int v10; // edi
  UINT v11; // ecx
  UINT v12; // edi
  __int64 v13; // rdi
  _BYTE *v14; // r9
  _BYTE *v15; // r10
  char v16; // r12
  char v17; // r13
  char v18; // bp
  void *v19; // rax
  const void *v20; // rcx
  bool v21; // zf
  UINT v22; // r14d
  UINT v23; // edi
  __int64 v24; // rdi
  _BYTE *v25; // rsi
  _BYTE *v26; // r14
  unsigned int v27; // ecx
  __int64 v28; // r12
  char v29; // dl
  char v30; // r13
  __int64 v31; // r15
  void *v32; // rbx
  const void *v33; // rbp
  UINT v34; // edi
  __int64 v35; // rdi
  _BYTE *v36; // rsi
  _BYTE *v37; // r14
  unsigned int v38; // ecx
  char v39; // dl
  char v40; // r13
  __int64 v41; // r15
  __int64 v42; // r12
  void *v43; // rbx
  const void *v44; // rbp
  _BYTE *v45; // [rsp+50h] [rbp-68h]
  __int64 v46; // [rsp+58h] [rbp-60h]
  __int64 v47; // [rsp+60h] [rbp-58h]
  int v48; // [rsp+C0h] [rbp+8h]
  UINT v49; // [rsp+C0h] [rbp+8h]
  char v50; // [rsp+C0h] [rbp+8h]
  char v51; // [rsp+C0h] [rbp+8h]
  _BYTE *v52; // [rsp+C8h] [rbp+10h]
  char v53; // [rsp+C8h] [rbp+10h]
  char v54; // [rsp+C8h] [rbp+10h]
  _BYTE *v55; // [rsp+D0h] [rbp+18h]
  _BYTE *v56; // [rsp+D8h] [rbp+20h]

  a2->Flags.Value = a1->Flags.Value;
  a2->Width = a1->Width;
  Height = a1->Height;
  v7 = 0;
  v8 = *((_DWORD *)a3 + 5);
  a2->Height = Height;
  Pitch = a1->Pitch;
  a2->Pitch = Pitch;
  a2->XHot = a1->XHot;
  a2->YHot = a1->YHot;
  if ( (v8 & 1) != 0 )
    v7 = a1->Pitch * (a1->Height - *((_DWORD *)a3 + 1));
  v10 = v8 & 4;
  if ( v10 )
  {
    v11 = a1->Width - *(_DWORD *)a3;
    if ( (a1->Flags.Value & 1) != 0 )
      v7 += v11 >> 3;
    else
      v7 += 4 * v11;
  }
  v48 = *((_DWORD *)a3 + 3);
  if ( (a1->Flags.Value & 1) != 0 )
  {
    memset((void *)a2->pPixels, 255, Pitch * Height);
    if ( v48 )
    {
      v49 = *(_DWORD *)a3;
      if ( v10 )
        v12 = *(_DWORD *)a3 + 8 * a1->Pitch - a1->Width;
      else
        v12 = *(_DWORD *)a3;
      v13 = v12 >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        WdLogSingleEntry1(1LL, 143LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsLeftMono == 0",
          143LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        WdLogSingleEntry1(1LL, 144LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsRightMono == 0",
          144LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v49 = *(_DWORD *)a3;
      v13 = (unsigned int)(4 * *(_DWORD *)a3);
    }
    v14 = (char *)a2->pPixels + v7;
    v15 = (char *)a1->pPixels + v7;
    v56 = v14;
    v45 = v15;
    if ( *((_DWORD *)a3 + 1) )
    {
      v16 = *((_BYTE *)a3 + 16);
      v17 = 8 - *((_BYTE *)a3 + 17);
      v18 = *((_BYTE *)a3 + 17);
      v47 = *((unsigned int *)a3 + 2);
      v46 = *((unsigned int *)a3 + 1);
      do
      {
        v19 = v14;
        v20 = v15;
        v52 = v14;
        v55 = v15;
        if ( v16 )
        {
          v19 = v14 + 1;
          *v14 = ((1 << v16) - 1) & *v15 | *v14 & ~((1 << v16) - 1);
          v20 = v15 + 1;
          v55 = v15 + 1;
          v52 = v14 + 1;
        }
        if ( (_DWORD)v13 )
        {
          memmove(v19, v20, (unsigned int)v13);
          v14 = v56;
          v15 = v45;
        }
        if ( v18 )
          v52[v13] = ((1 << v17) - 1) & v52[v13] | ~((1 << v17) - 1) & v55[v13];
        v14 += v47;
        v15 += v47;
        v21 = v46-- == 1;
        v56 = v14;
        v45 = v15;
      }
      while ( !v21 );
    }
    v22 = a2->Height * a2->Pitch + v7;
    if ( *((_DWORD *)a3 + 3) )
    {
      if ( (*((_DWORD *)a3 + 5) & 4) != 0 )
        v23 = v49 + 8 * a1->Pitch - a1->Width;
      else
        v23 = v49;
      v24 = v23 >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        WdLogSingleEntry1(1LL, 143LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsLeftMono == 0",
          143LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        WdLogSingleEntry1(1LL, 144LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsRightMono == 0",
          144LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v24 = (unsigned int)(4 * *(_DWORD *)a3);
    }
    v25 = (char *)a1->pPixels + v22;
    v26 = (char *)a2->pPixels + v22;
    v27 = *((_DWORD *)a3 + 1);
    if ( v27 )
    {
      v28 = v27;
      v29 = *((_BYTE *)a3 + 16);
      v30 = 8 - *((_BYTE *)a3 + 17);
      v31 = *((unsigned int *)a3 + 2);
      v53 = v29;
      v50 = *((_BYTE *)a3 + 17);
      do
      {
        v32 = v26;
        v33 = v25;
        if ( v29 )
        {
          v32 = v26 + 1;
          v33 = v25 + 1;
          *v26 = ((1 << v29) - 1) & *v25 | *v26 & ~((1 << v29) - 1);
        }
        if ( (_DWORD)v24 )
          memmove(v32, v33, (unsigned int)v24);
        if ( v50 )
          *((_BYTE *)v32 + v24) = ((1 << v30) - 1) & *((_BYTE *)v32 + v24) | ~((1 << v30) - 1) & *((_BYTE *)v33 + v24);
        v29 = v53;
        v26 += v31;
        v25 += v31;
        --v28;
      }
      while ( v28 );
    }
  }
  else
  {
    if ( *((_DWORD *)a3 + 3) )
    {
      if ( v10 )
        v34 = *(_DWORD *)a3 + 8 * a1->Pitch - a1->Width;
      else
        v34 = *(_DWORD *)a3;
      v35 = v34 >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        WdLogSingleEntry1(1LL, 143LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsLeftMono == 0",
          143LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        WdLogSingleEntry1(1LL, 144LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsRightMono == 0",
          144LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v35 = (unsigned int)(4 * *(_DWORD *)a3);
    }
    v36 = (char *)a1->pPixels + v7;
    v37 = (char *)a2->pPixels + v7;
    v38 = *((_DWORD *)a3 + 1);
    if ( v38 )
    {
      v39 = *((_BYTE *)a3 + 16);
      v40 = 8 - *((_BYTE *)a3 + 17);
      v41 = *((unsigned int *)a3 + 2);
      v42 = v38;
      v54 = v39;
      v51 = *((_BYTE *)a3 + 17);
      do
      {
        v43 = v37;
        v44 = v36;
        if ( v39 )
        {
          v43 = v37 + 1;
          v44 = v36 + 1;
          *v37 = ((1 << v39) - 1) & *v36 | *v37 & ~((1 << v39) - 1);
        }
        if ( (_DWORD)v35 )
          memmove(v43, v44, (unsigned int)v35);
        if ( v51 )
          *((_BYTE *)v43 + v35) = ((1 << v40) - 1) & *((_BYTE *)v43 + v35) | ~((1 << v40) - 1) & *((_BYTE *)v44 + v35);
        v39 = v54;
        v37 += v41;
        v36 += v41;
        --v42;
      }
      while ( v42 );
    }
  }
}
