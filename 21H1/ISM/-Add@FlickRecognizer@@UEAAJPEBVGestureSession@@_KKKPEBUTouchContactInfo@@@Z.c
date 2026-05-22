/*
 * XREFs of ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180183A50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z @ 0x180183BA8 (-AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z.c)
 *     ?CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z @ 0x180183CA0 (-CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z.c)
 */

__int64 __fastcall FlickRecognizer::Add(
        FlickRecognizer *this,
        const struct GestureSession *a2,
        __int16 a3,
        unsigned int a4)
{
  char v5; // r15
  unsigned int v8; // r12d
  int v9; // ecx
  unsigned __int64 v10; // r14
  const struct GestureSession *v11; // rdx
  FlickRecognizer *v12; // rcx
  __int64 v13; // rax

  v5 = a3;
  if ( (a3 & 0x100) == 0 )
  {
    v8 = 1;
    v9 = *((_DWORD *)a2 + 3) & 0x7880;
    if ( v9 )
      v8 = *((_DWORD *)a2 + 187);
    v10 = -(__int64)(v9 != 0) & 0xFFFFFFFFFFFFFE70uLL;
    if ( (a3 & 1) != 0 )
    {
      (*(void (__fastcall **)(FlickRecognizer *))(*(_QWORD *)this + 32LL))(this);
      *((_DWORD *)this + 35) = *(unsigned __int16 *)((char *)a2 + v10 + 1154);
    }
    v11 = a2;
    v12 = this;
    if ( v8 <= 1 )
    {
      if ( *(unsigned __int16 *)((char *)a2 + v10 + 1154) != *((_DWORD *)this + 35) )
      {
        (*(void (__fastcall **)(FlickRecognizer *, const struct GestureSession *))(*(_QWORD *)this + 32LL))(this, a2);
        v11 = a2;
        *((_DWORD *)this + 35) = *(unsigned __int16 *)((char *)a2 + v10 + 1154);
        v12 = this;
      }
      FlickRecognizer::AddPoint(v12, v11, *(struct tagPOINT *)((char *)a2 + v10 + 1156), a4);
      if ( (v5 & 4) != 0 )
      {
        v13 = *((unsigned __int8 *)this + 137);
        if ( (_BYTE)v13 != 10 && a4 - *((_DWORD *)this + 3 * v13 + 6) > *((unsigned __int16 *)this + 81) )
          (*(void (__fastcall **)(FlickRecognizer *, const struct GestureSession *))(*(_QWORD *)this + 32LL))(this, a2);
        FlickRecognizer::CheckForFlick(this, a2);
      }
    }
    else
    {
      (*(void (__fastcall **)(FlickRecognizer *, const struct GestureSession *))(*(_QWORD *)this + 32LL))(this, a2);
    }
  }
  return 0LL;
}
