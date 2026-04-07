/*
 * XREFs of ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x18004F21C
 * Callers:
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x180031014 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 * Callees:
 *     ??0DPIImages@WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x18004EEE0 (--0DPIImages@WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 */

CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::WindowFrame::WindowFrame(CTopLevelWindow::WindowFrame *this)
{
  CTopLevelWindow::WindowFrame::DPIImages *v1; // rdi
  __int64 v3; // rsi

  *(_QWORD *)this = &CTopLevelWindow::WindowFrame::`vftable';
  v1 = (CTopLevelWindow::WindowFrame *)((char *)this + 216);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v3 = 4LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  do
  {
    CTopLevelWindow::WindowFrame::DPIImages::DPIImages(v1);
    v1 = (CTopLevelWindow::WindowFrame::DPIImages *)((char *)v1 + 320);
    --v3;
  }
  while ( v3 );
  return this;
}
