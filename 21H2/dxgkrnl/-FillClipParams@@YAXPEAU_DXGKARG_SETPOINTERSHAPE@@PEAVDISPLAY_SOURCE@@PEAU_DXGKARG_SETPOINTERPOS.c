/*
 * XREFs of ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C0123D18
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C01228E0 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C0130704 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FillClipParams(
        struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct DISPLAY_SOURCE *a2,
        struct _DXGKARG_SETPOINTERPOSITION *a3,
        struct CURSOR_CLIP_PARAMS *a4)
{
  struct _DXGKARG_SETPOINTERPOSITION *v5; // r9
  struct _DXGKARG_SETPOINTERSHAPE *v7; // rsi
  int v8; // r14d
  int v9; // edi
  int v10; // r13d
  int v11; // r12d
  __int64 Width; // rdx
  __int64 X; // rcx
  UINT Height; // eax
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rax
  INT v18; // eax
  __int64 v19; // rax
  unsigned int v20; // r8d
  INT Y; // r9d
  __int64 v22; // rax
  char v23; // al
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int128 v28; // [rsp+20h] [rbp-20h]

  v5 = a3;
  v7 = a1;
  if ( *((_BYTE *)a2 + 668) )
  {
    v9 = *((_DWORD *)a2 + 168);
    v11 = 0;
    v8 = *((_DWORD *)a2 + 169);
    v10 = 0;
    *(_QWORD *)&v28 = 0LL;
    HIDWORD(v28) = v8;
  }
  else
  {
    v28 = *(_OWORD *)((char *)a2 + 652);
    v8 = HIDWORD(v28);
    v9 = *(_QWORD *)((char *)a2 + 660);
    v10 = HIDWORD(*(_QWORD *)((char *)a2 + 652));
    v11 = v28;
  }
  Width = a1->Width;
  if ( v9 - v11 < (int)Width
    || (a1 = (struct _DXGKARG_SETPOINTERSHAPE *)DWORD1(v28), HIDWORD(v28) - DWORD1(v28) < (signed int)v7->Height) )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, Width);
    *(_QWORD *)(v17 + 24) = 221LL;
    WdLogEvent5_WdAssertion(v17);
    Width = v7->Width;
    v5 = a3;
  }
  *(_OWORD *)a4 = 0LL;
  X = 4LL;
  *((_QWORD *)a4 + 2) = 0LL;
  *((_DWORD *)a4 + 5) = 0;
  Height = v7->Height;
  *(_DWORD *)a4 = Width;
  *((_DWORD *)a4 + 1) = Height;
  if ( v11 && (v18 = v5->X, v18 < v11) )
  {
    *((_DWORD *)a4 + 5) = 4;
    v15 = 4;
    *(_DWORD *)a4 = Width + v18 - v11;
  }
  else
  {
    v15 = 0;
    if ( *((_DWORD *)a2 + 253) != v9 )
    {
      X = (unsigned int)v5->X;
      if ( (int)X + (int)Width > v9 )
      {
        if ( v9 - (int)X < 0 )
        {
          v19 = WdLogNewEntry5_WdAssertion(X, Width);
          *(_QWORD *)(v19 + 24) = 241LL;
          WdLogEvent5_WdAssertion(v19);
          v5 = a3;
          X = (unsigned int)a3->X;
        }
        *((_DWORD *)a4 + 5) = 8;
        *(_DWORD *)a4 = v9 - X;
        v15 = 8;
      }
    }
  }
  if ( v10 && (X = (unsigned int)v5->Y, (int)X < v10) )
  {
    X = (unsigned int)(v7->Height + X - v10);
    v20 = v15 | 1;
    *((_DWORD *)a4 + 1) = X;
    *((_DWORD *)a4 + 5) = v20;
    v16 = v20;
  }
  else
  {
    v16 = v15;
    if ( v8 != *((_DWORD *)a2 + 254) )
    {
      Y = v5->Y;
      X = Y + v7->Height;
      if ( (int)X > v8 )
      {
        if ( v8 - Y < 0 )
        {
          v22 = WdLogNewEntry5_WdAssertion(X, v15);
          *(_QWORD *)(v22 + 24) = 258LL;
          WdLogEvent5_WdAssertion(v22);
          LODWORD(v16) = *((_DWORD *)a4 + 5);
          Y = a3->Y;
        }
        v16 = (unsigned int)v16 | 2;
        *((_DWORD *)a4 + 1) = v8 - Y;
        *((_DWORD *)a4 + 5) = v16;
      }
    }
  }
  if ( (_DWORD)v16 )
  {
    *((_DWORD *)a4 + 2) = v7->Pitch;
    if ( (v7->Flags.Value & 1) != 0 )
    {
      v23 = *(_BYTE *)a4;
      if ( (v16 & 4) != 0 )
      {
        LOBYTE(X) = 0;
        v24 = (v23 - LOBYTE(v7->Width)) & 7;
      }
      else
      {
        LOBYTE(X) = v23 & 7;
        v24 = 0;
      }
      *((_BYTE *)a4 + 16) = v24;
      *((_BYTE *)a4 + 17) = X;
      if ( *((_BYTE *)a4 + 16) >= 8u )
      {
        v25 = WdLogNewEntry5_WdAssertion(X, v16);
        *(_QWORD *)(v25 + 24) = 289LL;
        WdLogEvent5_WdAssertion(v25);
        LOBYTE(X) = *((_BYTE *)a4 + 17);
      }
      if ( (unsigned __int8)X >= 8u )
      {
        v26 = WdLogNewEntry5_WdAssertion(X, v16);
        *(_QWORD *)(v26 + 24) = 290LL;
        WdLogEvent5_WdAssertion(v26);
      }
      if ( *((_BYTE *)a4 + 16) )
      {
        if ( *((_BYTE *)a4 + 17) )
        {
          v27 = WdLogNewEntry5_WdAssertion(X, v16);
          *(_QWORD *)(v27 + 24) = 293LL;
          WdLogEvent5_WdAssertion(v27);
        }
      }
      *((_DWORD *)a4 + 3) = 1;
    }
    else
    {
      *((_DWORD *)a4 + 3) = 0;
    }
  }
}
