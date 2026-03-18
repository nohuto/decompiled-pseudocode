/*
 * XREFs of GreDCSelectPen @ 0x1C0007FA0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00829C0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreSelectPenInternal @ 0x1C00CE780 (GreSelectPenInternal.c)
 *     GreRestoreDCInternal @ 0x1C00D03E0 (GreRestoreDCInternal.c)
 * Callees:
 *     GreSetSolidBrushLight @ 0x1C0008350 (GreSetSolidBrushLight.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0076708 (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0079320 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00810A0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0081AB0 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 */

__int64 __fastcall GreDCSelectPen(DC *this, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // rsi
  int v5; // r12d
  __int64 v6; // rdi
  _DWORD *v7; // r14
  _DWORD *v8; // rcx
  __int64 v10; // rax
  char *v11; // [rsp+38h] [rbp-60h] BYREF
  int v12; // [rsp+40h] [rbp-58h]
  int v13; // [rsp+44h] [rbp-54h]
  DC *v14; // [rsp+48h] [rbp-50h] BYREF
  int v15; // [rsp+50h] [rbp-48h]
  int v16; // [rsp+54h] [rbp-44h]

  v2 = a2;
  v4 = 0LL;
  v15 = 0;
  v16 = 0;
  v14 = this;
  if ( this )
  {
    v5 = 0;
    v6 = *((_QWORD *)this + 18);
    v4 = *(_QWORD *)(*((_QWORD *)this + 122) + 168LL);
    if ( a2 != *(_QWORD *)v6 )
    {
      LOBYTE(a2) = 16;
      v10 = HmgShareLockCheck(v2, a2);
      v6 = v10;
      if ( v10 && (*(_DWORD *)(v10 + 40) & 0x400) != 0 )
      {
        DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)this + 18));
        *(_DWORD *)(*((_QWORD *)this + 122) + 152LL) |= 2u;
        *((_QWORD *)this + 18) = v6;
        v5 = 1;
      }
      else
      {
        if ( v10 )
        {
          HmgDecrementShareReferenceCountEx(v10, 0LL);
          v6 = 0LL;
        }
        v4 = 0LL;
      }
    }
    if ( v6 )
    {
      if ( v4 )
      {
        v7 = *(_DWORD **)(v6 + 48);
        if ( v7 != (_DWORD *)(v6 + 72) && (*v7 & 4) != 0 )
        {
          GreSetSolidBrushLight((struct OBJECT *)v6);
          *(_DWORD *)(*((_QWORD *)this + 122) + 152LL) |= 2u;
          *v7 &= ~4u;
          v5 = 1;
        }
        if ( v5 )
        {
          v8 = (_DWORD *)*((_QWORD *)this + 122);
          v12 = v8[52];
          v13 = v8[27] & 1;
          if ( (v8[85] & 0x1E000) != 0 )
            EXFORMOBJ::vInit((EXFORMOBJ *)&v11, (struct XDCOBJ *)&v14, 0x204u, 0);
          else
            v11 = (char *)this + 320;
          DC::vRealizeLineAttrs(this, (struct EXFORMOBJ *)&v11);
        }
      }
      *(_QWORD *)(*((_QWORD *)this + 122) + 168LL) = v2;
      *(_DWORD *)(*((_QWORD *)this + 122) + 152LL) &= ~0x2000u;
    }
  }
  return v4;
}
