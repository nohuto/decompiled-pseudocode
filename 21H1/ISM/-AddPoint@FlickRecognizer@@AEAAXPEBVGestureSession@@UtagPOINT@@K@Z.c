/*
 * XREFs of ?AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z @ 0x180183BA8
 * Callers:
 *     ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180183A50 (-Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x180183EE8 (-MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 */

void __fastcall FlickRecognizer::AddPoint(
        FlickRecognizer *this,
        const struct GestureSession *a2,
        struct tagPOINT a3,
        int a4)
{
  char v5; // r11
  FlickRecognizer *v6; // r10
  __int64 v7; // rax
  GestureRecognizer *v8; // rcx
  bool v9; // al
  char v10; // r11
  char v11; // al
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  char v14; // cl
  char v15; // al
  struct tagPOINT v17; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((_BYTE *)this + 138) & 0xFE;
  *((_BYTE *)this + 138) = v5;
  v6 = this;
  if ( (v5 & 2) == 0 )
  {
    v7 = *((_QWORD *)a2 + 149);
    v8 = (GestureRecognizer *)(unsigned int)(a3.x - v7);
    v17 = (struct tagPOINT)__PAIR64__(a3.y - HIDWORD(v7), (unsigned int)v8);
    v9 = GestureRecognizer::MeetsThreshold(v8, &v17, *((unsigned __int16 *)v6 + 79));
    *((_BYTE *)v6 + 138) = (2 * v9) | v10 & 0xFD;
  }
  v11 = *((_BYTE *)v6 + 137);
  if ( v11 == 10 )
  {
    *((struct tagPOINT *)v6 + 2) = a3;
    *((_DWORD *)v6 + 6) = a4;
    *((_WORD *)v6 + 68) = 0;
  }
  else
  {
    if ( v11 == 9 )
      v12 = 0;
    else
      v12 = v11 + 1;
    *((_BYTE *)v6 + 137) = v12;
    v13 = 3LL * v12;
    *(struct tagPOINT *)((char *)v6 + 4 * v13 + 16) = a3;
    *((_DWORD *)v6 + v13 + 6) = a4;
    v14 = *((_BYTE *)v6 + 136);
    if ( *((_BYTE *)v6 + 137) == v14 )
    {
      v15 = v14 + 1;
      if ( v14 == 9 )
        v15 = 0;
      *((_BYTE *)v6 + 136) = v15;
    }
  }
}
