/*
 * XREFs of ?Add@TwoFingerGestureRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801852B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwoFingerGestureRecognizer::Add(
        TwoFingerGestureRecognizer *this,
        const struct GestureSession *a2,
        __int64 a3,
        unsigned int a4)
{
  int v8; // edi
  char *v9; // rbx

  if ( (a3 & 0x100) == 0 )
  {
    v8 = *((_DWORD *)a2 + 187);
    v9 = (char *)a2 + 752;
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 2) + 8LL))((char *)this + 16);
    (*(void (__fastcall **)(char *, const struct GestureSession *, __int64, _QWORD, int, char *))(*((_QWORD *)this + 11)
                                                                                                + 8LL))(
      (char *)this + 88,
      a2,
      a3,
      a4,
      v8,
      v9);
    if ( (a3 & 1) != 0 )
      *((_BYTE *)this + 177) = 1;
    if ( (a3 & 4) != 0 )
      *((_WORD *)this + 88) = 0;
  }
  return 0LL;
}
