/*
 * XREFs of ?DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180185ADC
 * Callers:
 *     ?Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180185800 (-Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x18018590C (-ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 */

__int64 __fastcall TwoFingerDragRecognizer::DragInactive(
        TwoFingerDragRecognizer *this,
        const struct GestureSession *a2,
        char a3,
        int a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  _QWORD *v8; // r8
  __int64 v9; // r10
  __int64 *v10; // rcx
  _DWORD *v11; // r9
  __int64 v12; // rax
  int v13; // eax
  __int64 v15; // [rsp+48h] [rbp+10h]

  if ( (a3 & 1) != 0 )
  {
    if ( a5 <= 2 )
    {
      if ( a5 )
      {
        v8 = (_QWORD *)((char *)this + 36);
        v9 = a5;
        v10 = (__int64 *)((char *)a6 + 4);
        v11 = (_DWORD *)((char *)this + 28);
        do
        {
          *v11++ = *((unsigned __int16 *)v10 - 1);
          v12 = *v10;
          v10 += 5;
          *v8++ = v12;
          --v9;
        }
        while ( v9 );
      }
      if ( a5 == 1 )
      {
        *((_WORD *)this + 8) |= 4u;
        *((_DWORD *)this + 6) = a4 + *((unsigned __int16 *)this + 42);
        *((_WORD *)this + 8) |= 8u;
        *((_DWORD *)this + 5) = 1;
      }
      else if ( TwoFingerDragRecognizer::ContactsAreValid(this, a5, a6) )
      {
        *((_WORD *)this + 8) |= 4u;
        LODWORD(v15) = (*((_DWORD *)a6 + 1) + *((_DWORD *)a6 + 11)) / 2;
        v13 = *((_DWORD *)a6 + 2) + *((_DWORD *)a6 + 12);
        *((_DWORD *)this + 5) = 2;
        HIDWORD(v15) = v13 / 2;
        *(_QWORD *)((char *)this + 68) = v15;
        *(_QWORD *)((char *)this + 52) = v15;
      }
      else
      {
        *((_WORD *)this + 8) = 0;
        *((_DWORD *)this + 5) = 4;
      }
    }
    else
    {
      *((_WORD *)this + 8) = 0;
      *((_DWORD *)this + 5) = 4;
    }
  }
  return 0LL;
}
