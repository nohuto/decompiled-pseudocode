/*
 * XREFs of ?GetDispatchersName@CHidInput@@EEAAXPEAW4DispatcherHandleName@CRIMBase@@PEAI@Z @ 0x1C00C2F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHidInput::GetDispatchersName(
        CHidInput *this,
        enum CRIMBase::DispatcherHandleName *a2,
        unsigned int *a3)
{
  *a3 = 14;
  *(_OWORD *)a2 = xmmword_1C020A180;
  *((_OWORD *)a2 + 1) = xmmword_1C020A190;
  *((_OWORD *)a2 + 2) = xmmword_1C020A1A0;
  *((_QWORD *)a2 + 6) = 0x100000000FLL;
}
