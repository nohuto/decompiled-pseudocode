/*
 * XREFs of ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C027CE70
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C01202D0 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C012D064 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 * Callees:
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 */

void __fastcall ClipCurrentCursor(
        const struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct CURSOR_CLIP_PARAMS *a3)
{
  const struct _DXGKARG_SETPOINTERSHAPE *v5; // rsi
  __int64 Height; // rdx
  UINT v7; // r14d
  int v8; // edi
  UINT Pitch; // r8d
  int v10; // edi
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  UINT v14; // ebp
  UINT v15; // edi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE *v19; // r9
  _BYTE *v20; // r10
  const void *v21; // rcx
  char v22; // si
  char v23; // r12
  char v24; // r13
  void *v25; // rax
  bool v26; // zf
  UINT v27; // r14d
  UINT v28; // edi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  _BYTE *v32; // rsi
  _BYTE *v33; // r14
  unsigned int v34; // ecx
  __int64 v35; // r13
  char v36; // dl
  char v37; // r12
  __int64 v38; // r15
  void *v39; // rbx
  const void *v40; // rbp
  unsigned int v41; // edi
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  _BYTE *v45; // rsi
  _BYTE *v46; // r14
  unsigned int v47; // ecx
  char v48; // dl
  char v49; // r12
  __int64 v50; // r15
  __int64 v51; // r13
  void *v52; // rbx
  const void *v53; // rbp
  _BYTE *v54; // [rsp+20h] [rbp-68h]
  __int64 v55; // [rsp+28h] [rbp-60h]
  __int64 v56; // [rsp+30h] [rbp-58h]
  const struct _DXGKARG_SETPOINTERSHAPE *v57; // [rsp+90h] [rbp+8h]
  char v58; // [rsp+90h] [rbp+8h]
  char v59; // [rsp+90h] [rbp+8h]
  _BYTE *v60; // [rsp+98h] [rbp+10h]
  char v61; // [rsp+98h] [rbp+10h]
  char v62; // [rsp+98h] [rbp+10h]
  _BYTE *v63; // [rsp+A0h] [rbp+18h]
  _BYTE *v64; // [rsp+A8h] [rbp+20h]

  v57 = a1;
  a2->Flags.Value = a1->Flags.Value;
  a2->Width = a1->Width;
  v5 = a1;
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
    a1 = (const struct _DXGKARG_SETPOINTERSHAPE *)(a1->Width - *(_DWORD *)a3);
    if ( (v5->Flags.Value & 1) != 0 )
    {
      a1 = (const struct _DXGKARG_SETPOINTERSHAPE *)((unsigned int)a1 >> 3);
      v7 += (unsigned int)a1;
    }
    else
    {
      v7 += 4 * (_DWORD)a1;
    }
  }
  v11 = *((_DWORD *)a3 + 3);
  if ( (v5->Flags.Value & 1) != 0 )
  {
    memset((void *)a2->pPixels, 255, (unsigned int)Height * Pitch);
    if ( v11 )
    {
      v14 = *(_DWORD *)a3;
      if ( v10 )
        v15 = v14 + 8 * v5->Pitch - v5->Width;
      else
        v15 = *(_DWORD *)a3;
      v16 = v15 >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        v17 = WdLogNewEntry5_WdAssertion(v13, v12);
        *(_QWORD *)(v17 + 24) = 143LL;
        WdLogEvent5_WdAssertion(v17);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        v18 = WdLogNewEntry5_WdAssertion(v13, v12);
        *(_QWORD *)(v18 + 24) = 144LL;
        WdLogEvent5_WdAssertion(v18);
      }
      v14 = *(_DWORD *)a3;
      v16 = (unsigned int)(4 * *(_DWORD *)a3);
    }
    v19 = (char *)a2->pPixels + v7;
    v20 = (char *)v5->pPixels + v7;
    v21 = (const void *)*((unsigned int *)a3 + 1);
    v64 = v19;
    v54 = v20;
    if ( (_DWORD)v21 )
    {
      v22 = *((_BYTE *)a3 + 16);
      v23 = 8 - *((_BYTE *)a3 + 17);
      v24 = *((_BYTE *)a3 + 17);
      v56 = *((unsigned int *)a3 + 2);
      v55 = *((unsigned int *)a3 + 1);
      do
      {
        v25 = v19;
        v21 = v20;
        v60 = v19;
        v63 = v20;
        if ( v22 )
        {
          v12 = 1LL;
          LOBYTE(v12) = (1 << v22) - 1;
          v25 = v19 + 1;
          *v19 = v12 & *v20 | *v19 & ~(_BYTE)v12;
          v21 = v20 + 1;
          v63 = v20 + 1;
          v60 = v19 + 1;
        }
        if ( (_DWORD)v16 )
        {
          memmove(v25, v21, (unsigned int)v16);
          v19 = v64;
          v20 = v54;
        }
        if ( v24 )
        {
          v21 = v63;
          LOBYTE(v21) = ((1 << v23) - 1) & v60[v16] | ~((1 << v23) - 1) & v63[v16];
          v60[v16] = (_BYTE)v21;
        }
        v19 += v56;
        v20 += v56;
        v26 = v55-- == 1;
        v64 = v19;
        v54 = v20;
      }
      while ( !v26 );
      v5 = v57;
    }
    v27 = a2->Height * a2->Pitch + v7;
    if ( *((_DWORD *)a3 + 3) )
    {
      if ( (*((_DWORD *)a3 + 5) & 4) != 0 )
        v28 = v14 + 8 * v5->Pitch - v5->Width;
      else
        v28 = v14;
      v29 = v28 >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        v30 = WdLogNewEntry5_WdAssertion(v21, v12);
        *(_QWORD *)(v30 + 24) = 143LL;
        WdLogEvent5_WdAssertion(v30);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        v31 = WdLogNewEntry5_WdAssertion(v21, v12);
        *(_QWORD *)(v31 + 24) = 144LL;
        WdLogEvent5_WdAssertion(v31);
      }
      v29 = (unsigned int)(4 * *(_DWORD *)a3);
    }
    v32 = (char *)v5->pPixels + v27;
    v33 = (char *)a2->pPixels + v27;
    v34 = *((_DWORD *)a3 + 1);
    if ( v34 )
    {
      v35 = v34;
      v36 = *((_BYTE *)a3 + 16);
      v37 = 8 - *((_BYTE *)a3 + 17);
      v38 = *((unsigned int *)a3 + 2);
      v61 = v36;
      v58 = *((_BYTE *)a3 + 17);
      do
      {
        v39 = v33;
        v40 = v32;
        if ( v36 )
        {
          v39 = v33 + 1;
          v40 = v32 + 1;
          *v33 = ((1 << v36) - 1) & *v32 | *v33 & ~((1 << v36) - 1);
        }
        if ( (_DWORD)v29 )
          memmove(v39, v40, (unsigned int)v29);
        if ( v58 )
          *((_BYTE *)v39 + v29) = *((_BYTE *)v39 + v29) & ((1 << v37) - 1) | ~((1 << v37) - 1) & *((_BYTE *)v40 + v29);
        v36 = v61;
        v33 += v38;
        v32 += v38;
        --v35;
      }
      while ( v35 );
    }
  }
  else
  {
    if ( v11 )
    {
      if ( v10 )
        v41 = *(_DWORD *)a3 + 8 * v5->Pitch - v5->Width;
      else
        v41 = *(_DWORD *)a3;
      v42 = v41 >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        v43 = WdLogNewEntry5_WdAssertion(a1, Height);
        *(_QWORD *)(v43 + 24) = 143LL;
        WdLogEvent5_WdAssertion(v43);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        v44 = WdLogNewEntry5_WdAssertion(a1, Height);
        *(_QWORD *)(v44 + 24) = 144LL;
        WdLogEvent5_WdAssertion(v44);
      }
      v42 = (unsigned int)(4 * *(_DWORD *)a3);
    }
    v45 = (char *)v5->pPixels + v7;
    v46 = (char *)a2->pPixels + v7;
    v47 = *((_DWORD *)a3 + 1);
    if ( v47 )
    {
      v48 = *((_BYTE *)a3 + 16);
      v49 = 8 - *((_BYTE *)a3 + 17);
      v50 = *((unsigned int *)a3 + 2);
      v51 = v47;
      v62 = v48;
      v59 = *((_BYTE *)a3 + 17);
      do
      {
        v52 = v46;
        v53 = v45;
        if ( v48 )
        {
          v52 = v46 + 1;
          v53 = v45 + 1;
          *v46 = ((1 << v48) - 1) & *v45 | *v46 & ~((1 << v48) - 1);
        }
        if ( (_DWORD)v42 )
          memmove(v52, v53, (unsigned int)v42);
        if ( v59 )
          *((_BYTE *)v52 + v42) = ((1 << v49) - 1) & *((_BYTE *)v52 + v42) | ~((1 << v49) - 1) & *((_BYTE *)v53 + v42);
        v48 = v62;
        v46 += v50;
        v45 += v50;
        --v51;
      }
      while ( v51 );
    }
  }
}
