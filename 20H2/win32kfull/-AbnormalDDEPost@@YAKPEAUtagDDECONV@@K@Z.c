/*
 * XREFs of ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C021A474
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C48C (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C570 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 */

__int64 __fastcall AbnormalDDEPost(struct tagDDECONV *a1, int a2)
{
  unsigned int v2; // ebx
  __int64 *v4; // rax
  __int64 v5; // r8

  v2 = 0;
  if ( (*((_DWORD *)a1 + 20) & 2) == 0 )
  {
    v4 = (__int64 *)*((_QWORD *)a1 + 5);
    LODWORD(v5) = 0;
    if ( v4 )
      v5 = *v4;
    PostMessage(*((_QWORD *)a1 + 6), 993, v5, 0);
  }
  LOBYTE(v2) = a2 == 993;
  return v2;
}
