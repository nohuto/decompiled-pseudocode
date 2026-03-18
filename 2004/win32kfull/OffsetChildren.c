/*
 * XREFs of OffsetChildren @ 0x1C00B04D4
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0024D74 (zzzUpdateLayeredWindow.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00515B4 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C00695EC (xxxScrollWindowEx.c)
 * Callees:
 *     IsDpiBoundaryBetweenWindows @ 0x1C006F2B0 (IsDpiBoundaryBetweenWindows.c)
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 *     OffsetWindow @ 0x1C00B05C8 (OffsetWindow.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1C01E639C (ScaleDpiOffsetWithSubpixel.c)
 */

_UNKNOWN **__fastcall OffsetChildren(struct tagWND *a1, unsigned int a2, int a3, int *a4, int a5)
{
  _UNKNOWN **result; // rax
  __int64 v6; // rbx
  unsigned int v8; // esi
  unsigned int v9; // ebp
  int v12; // r14d
  unsigned int v13; // eax
  int v14; // eax
  __int128 v15[3]; // [rsp+20h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  int v17; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+64h] [rbp+Ch]

  result = &retaddr;
  v6 = *((_QWORD *)a1 + 14);
  a5 = a3;
  v8 = a3;
  v9 = a2;
  v15[0] = 0LL;
  if ( v6 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( a4 && !(unsigned int)IntersectRect(v15, a4, (int *)(*(_QWORD *)(v6 + 40) + 88LL)) )
        goto LABEL_21;
      if ( (unsigned int)IsDpiBoundaryBetweenWindows(v6, (__int64)a1) )
      {
        v17 = v9;
        v18 = v8;
        ScaleDpiOffsetWithSubpixel(&v17, (float *)(v6 + 224), (struct tagWND *)v6, a1);
        v9 = v17;
        v12 = 1;
        v8 = v18;
      }
      else
      {
        *(_DWORD *)(v6 + 224) = *((_DWORD *)a1 + 56);
        *(_DWORD *)(v6 + 228) = *((_DWORD *)a1 + 57);
      }
      OffsetWindow(v6, v9, v8);
      v13 = a2;
      if ( !v12 )
        v13 = v9;
      v9 = v13;
      v14 = a5;
      if ( !v12 )
        v14 = v8;
      v12 = 0;
      v8 = v14;
      result = *(_UNKNOWN ***)(v6 + 112);
      if ( !result )
      {
LABEL_21:
        while ( 1 )
        {
          result = *(_UNKNOWN ***)(v6 + 88);
          if ( result )
            break;
          v6 = *(_QWORD *)(v6 + 104);
          if ( (struct tagWND *)v6 == a1 )
            return result;
        }
      }
      v6 = (__int64)result;
    }
  }
  return result;
}
