/*
 * XREFs of ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0089390
 * Callers:
 *     ReleaseCacheDC @ 0x1C0084AB0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 *     GreValidateVisrgn @ 0x1C008CBA0 (GreValidateVisrgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C008CE0C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0076398 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C007F140 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0081AB0 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A9890 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

void __fastcall GrepValidateVisRgn(struct DC *a1, struct _RECTL *a2)
{
  int v2; // eax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r9
  int v8; // eax
  LONG left; // edx
  LONG top; // r11d
  LONG right; // r8d
  LONG bottom; // r10d
  bool v13; // zf
  __int64 v14; // rcx
  struct _RECTL *v15; // rax
  __int64 v16; // rcx
  struct _RECTL *v17[2]; // [rsp+50h] [rbp-48h] BYREF
  struct _RECTL v18; // [rsp+60h] [rbp-38h] BYREF

  v2 = *((_DWORD *)a1 + 9);
  if ( (v2 & 0x100000) != 0 )
  {
    v5 = *((_QWORD *)a1 + 6);
    if ( v5 )
    {
      if ( a2 )
      {
        v6 = 0LL;
        if ( (v2 & 0x40000) != 0 )
        {
          v16 = *((_QWORD *)a1 + 263);
          if ( v16 )
          {
            v6 = HmgShareLockCheck(v16, 5);
            v7 = v6;
          }
          else
          {
            v7 = *(_QWORD *)(v5 + 2552);
          }
        }
        else
        {
          v7 = *((_QWORD *)a1 + 62);
        }
        if ( v7 && ((*(_DWORD *)(v5 + 40) & 0x20000) == 0 || *(int *)(v7 + 112) >= 0) )
        {
          v8 = *((_DWORD *)a1 + 9);
          left = a2[6].left;
          top = a2[6].top;
          right = a2[6].right;
          bottom = a2[6].bottom;
          v18.left = left;
          v18.top = top;
          v18.right = right;
          v18.bottom = bottom;
          if ( ((v8 & 0x1000) == 0 || (v8 & 0x4000) != 0)
            && left != right
            && top != bottom
            && (left != 0x7FFFFFFF || bottom != 0x80000000 || right != 0x80000000 || top != 0x7FFFFFFF) )
          {
            v13 = (*(_DWORD *)(v7 + 116) & 0x800) == 0;
            v14 = 56LL;
            v17[0] = 0LL;
            if ( !v13 )
              v14 = 668LL;
            v15 = *(struct _RECTL **)(v14 + v7);
            v17[1] = v15;
            if ( left >= right || top >= bottom || left < 0 || (int)v15 < right || top < 0 || SHIDWORD(v15) < bottom )
            {
              DbgkWerCaptureLiveKernelDump(L"win32k.sys", 400LL, 1LL, a1, v7, a2, 0LL, 0LL, 0);
              ERECTL::vOrder((ERECTL *)&v18);
              ERECTL::operator*=(&v18.left, (int *)v17);
              v17[0] = a2;
              RGNOBJ::vSet(v17, &v18);
            }
          }
        }
        if ( v6 )
          HmgDecrementShareReferenceCountEx(v6, 0LL);
      }
    }
  }
}
