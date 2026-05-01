/*
 * XREFs of ??_GCDuiRefThread@@MEAAPEAXI@Z @ 0x1802130F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CRefThread@@MEAA@XZ @ 0x180213074 (--1CRefThread@@MEAA@XZ.c)
 */

CDuiRefThread *__fastcall CDuiRefThread::`scalar deleting destructor'(CDuiRefThread *this, char a2)
{
  bool v2; // zf

  v2 = *((_BYTE *)this + 40) == 0;
  *(_QWORD *)this = &CDuiRefThread::`vftable'{for `CRefThread'};
  *((_QWORD *)this + 4) = &CDuiRefThread::`vftable'{for `IDuiThreadRef'};
  if ( !v2 )
  {
    UnInitThread();
    UnInitProcessPriv(&_ImageBase);
    *((_BYTE *)this + 40) = 0;
  }
  CRefThread::~CRefThread(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
