/*
 * XREFs of ?Add@GestureSession@@UEAAJKKKPEBUTouchContactInfo@@@Z @ 0x180182E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?RecordContacts@TouchContactFilter@@QEAAXKPEBUTouchContactInfo@@@Z @ 0x180185558 (-RecordContacts@TouchContactFilter@@QEAAXKPEBUTouchContactInfo@@@Z.c)
 */

__int64 __fastcall GestureSession::Add(
        GestureSession *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        const struct TouchContactInfo *a5)
{
  unsigned int v5; // edi
  __int64 v6; // rsi
  __int64 v10; // r12
  int v11; // ebp
  _QWORD *i; // rsi
  int v13; // eax

  v5 = 0;
  v6 = a2;
  if ( (a2 & 0x8000) != 0 )
  {
    (*(void (__fastcall **)(GestureSession *))(*(_QWORD *)this + 72LL))(this);
  }
  else if ( a4 )
  {
    if ( (a2 & 0x101) == 1 )
      (*(void (__fastcall **)(GestureSession *))(*(_QWORD *)this + 80LL))(this);
    TouchContactFilter::RecordContacts((GestureSession *)((char *)this + 744), a4, a5);
    if ( (v6 & 1) != 0 )
      *((_QWORD *)this + 149) = *(_QWORD *)((char *)this + 1156);
    v10 = v6;
    v11 = 0;
    for ( i = (_QWORD *)((char *)this + 704); ; ++i )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, GestureSession *, __int64, _QWORD, unsigned int, const struct TouchContactInfo *))(*(_QWORD *)*i + 8LL))(
              *i,
              this,
              v10,
              a3,
              a4,
              a5);
      if ( v13 < 0 )
        break;
      if ( ++v11 >= 5 )
      {
        *((_BYTE *)this + 24) = 1;
        return v5;
      }
    }
    return (unsigned int)v13;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v5;
}
