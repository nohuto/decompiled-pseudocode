/*
 * XREFs of xxxCompositedPaint @ 0x1C023E150
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C001AF20 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C004E330 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     UpdateSprite @ 0x1C003CF2C (UpdateSprite.c)
 *     xxxInternalInvalidate @ 0x1C0042BD0 (xxxInternalInvalidate.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00CAD64 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C023DF28 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

void __fastcall xxxCompositedPaint(struct tagWND *a1)
{
  int v2; // esi
  const struct tagRECT *Prop; // rax
  const struct tagRECT *v4; // rbx
  struct tagRECT *v5; // r14
  BOOL v6; // eax
  int v7; // edi
  __int64 EmptyRgnPublic; // rax
  HRGN v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  _DWORD *v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rsi
  HDC DCEx; // rdi
  struct tagSIZE v17; // [rsp+98h] [rbp+10h] BYREF
  struct tagPOINT v18; // [rsp+A0h] [rbp+18h] BYREF
  char v19; // [rsp+A8h] [rbp+20h] BYREF

  SetOrClrWF(1, (__int64)a1, 0xB10u, 1);
  v2 = xxxCompositedTraverse(a1);
  SetOrClrWF(0, (__int64)a1, 0xB10u, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v19);
  Prop = (const struct tagRECT *)GetProp((__int64)a1, (unsigned __int16)atomLayer, 1LL);
  v4 = Prop;
  if ( Prop )
  {
    v5 = (struct tagRECT *)&Prop[1];
    v6 = IsRectEmptyInl(Prop + 1);
    v7 = v6;
    if ( !v2 && !v6 )
    {
      EmptyRgnPublic = *(_QWORD *)&v4[2].right;
      if ( EmptyRgnPublic
        || (EmptyRgnPublic = CreateEmptyRgnPublic(), (*(_QWORD *)&v4[2].right = EmptyRgnPublic) != 0LL) )
      {
        if ( EmptyRgnPublic != 1 )
        {
          SetRectRgnIndirect(ghrgnInv2, v5);
          GreCombineRgn(*(_QWORD *)&v4[2].right, *(_QWORD *)&v4[2].right, ghrgnInv2, 2LL);
        }
      }
      else
      {
        *(_QWORD *)&v4[2].right = 1LL;
      }
      v7 = 1;
      *v5 = 0LL;
    }
    v9 = *(HRGN *)&v4[2].right;
    if ( v9 )
    {
      xxxInternalInvalidate(a1, v9, 0x485u);
      DeleteMaybeSpecialRgn(*(_QWORD *)&v4[2].right);
      *(_QWORD *)&v4[2].right = 0LL;
    }
    if ( !v7 )
    {
      v10 = *(_QWORD *)&v4->left;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      {
        v18 = 0LL;
        v11 = GreSelectBitmap(ghdcMem, v10);
        v12 = (_DWORD *)*((_QWORD *)a1 + 5);
        v13 = v11;
        v17.cx = v12[24] - v12[22];
        v17.cy = v12[25] - v12[23];
        UpdateSprite(
          *(HDEV *)(gpDispInfo + 40LL),
          a1,
          (__int64)v12,
          0LL,
          0LL,
          &v17,
          ghdcMem,
          &v18,
          0,
          0LL,
          0x40000000,
          v5);
        v14 = v13;
      }
      else
      {
        v15 = GreSelectBitmap(ghdcMem, v10);
        SetOrClrWF(0, (__int64)a1, 0xB20u, 1);
        DCEx = (HDC)_GetDCEx(a1, 0LL, 1073807363LL);
        NtGdiBitBltInternal(
          DCEx,
          v5->left,
          v5->top,
          v5->right - v5->left,
          v5->bottom - v5->top,
          ghdcMem,
          v5->left,
          v5->top,
          13369376,
          0,
          0);
        _ReleaseDC(DCEx);
        SetOrClrWF(1, (__int64)a1, 0xB20u, 1);
        v14 = v15;
      }
      GreSelectBitmap(ghdcMem, v14);
      *v5 = 0LL;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v19);
}
