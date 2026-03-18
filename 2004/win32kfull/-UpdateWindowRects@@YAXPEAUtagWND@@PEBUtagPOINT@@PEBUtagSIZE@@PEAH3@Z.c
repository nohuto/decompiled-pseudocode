/*
 * XREFs of ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C0025054
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0024D74 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     CalcWindowFullScreen @ 0x1C00239C8 (CalcWindowFullScreen.c)
 *     PostShellHookMessages @ 0x1C0033A70 (PostShellHookMessages.c)
 */

void __fastcall UpdateWindowRects(
        struct tagWND *a1,
        const struct tagPOINT *a2,
        const struct tagSIZE *a3,
        int *a4,
        int *a5)
{
  int v5; // ebp
  int v6; // r15d
  unsigned int v10; // esi
  unsigned int v11; // edi
  _DWORD *v12; // rcx
  int v13; // r8d
  int v14; // edx
  _DWORD *v15; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  int v23; // ecx

  v5 = 0;
  *a4 = 0;
  v6 = 0;
  *a5 = 0;
  if ( a2 )
  {
    v15 = (_DWORD *)*((_QWORD *)a1 + 5);
    v10 = a2->x - v15[22];
    v11 = a2->y - v15[23];
    if ( a2->x != v15[22] || v11 )
    {
      v16 = v15[58];
      v6 = 1;
      if ( (v16 & 0x8000) != 0 )
      {
        v15[58] = v16 & 0xFFFF7FFF;
        PostShellHookMessages(54LL, *(_QWORD *)a1);
      }
    }
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  if ( a3 )
  {
    v12 = (_DWORD *)*((_QWORD *)a1 + 5);
    v13 = a3->cx + v12[22] - v12[24];
    v14 = a3->cy + v12[23] - v12[25];
    if ( v13 || v14 )
      v5 = 1;
  }
  else
  {
    v13 = 0;
    v14 = 0;
  }
  if ( v6 || v5 )
  {
    v17 = (_DWORD *)*((_QWORD *)a1 + 5);
    v17[24] += v13 + v10;
    v17[25] += v14 + v11;
    v17[22] += v10;
    v17[23] += v11;
    v18 = (_DWORD *)*((_QWORD *)a1 + 5);
    v18[28] += v13 + v10;
    v18[29] += v14 + v11;
    v18[26] += v10;
    v18[27] += v11;
    if ( v13 < 0 )
    {
      v22 = *((_QWORD *)a1 + 5);
      v23 = *(_DWORD *)(v22 + 88);
      if ( *(_DWORD *)(v22 + 104) < v23 )
      {
        *(_DWORD *)(v22 + 104) = v23;
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL);
      }
    }
    if ( v14 < 0 )
    {
      v20 = *((_QWORD *)a1 + 5);
      v21 = *(_DWORD *)(v20 + 92);
      if ( *(_DWORD *)(v20 + 108) < v21 )
      {
        *(_DWORD *)(v20 + 108) = v21;
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 116LL) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL);
      }
    }
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL);
    if ( v19 )
      GreOffsetRgn(v19, v10, v11);
    CalcWindowFullScreen(a1);
  }
  *a4 = v5;
  *a5 = v6;
}
