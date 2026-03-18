/*
 * XREFs of HvlpEndSecurePageListIteration @ 0x1404F9A1C
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1404F6114 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x1404F6240 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1404F6D30 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x1404F76E4 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     VslEndSecurePageIteration @ 0x1404FA630 (VslEndSecurePageIteration.c)
 */

char __fastcall HvlpEndSecurePageListIteration(__int64 a1, void *a2, _DWORD *a3)
{
  int v5; // ebx
  int *v6; // rax
  __int64 *v7; // rsi
  unsigned int v8; // eax
  size_t Size; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(Size) = 0;
  v5 = a1;
  if ( (_DWORD)a1 )
  {
    LOBYTE(v6) = BYTE2(HvlpIteratorCrashdump);
    v7 = &qword_140C47308;
  }
  else
  {
    LOBYTE(v6) = BYTE2(HvlpIteratorHibernate);
    v7 = &qword_140C472E8;
  }
  if ( (_BYTE)v6 )
  {
    LOBYTE(a1) = (_DWORD)a1 == 0;
    VslEndSecurePageIteration(a1, &Size);
    if ( a3 )
    {
      v8 = Size;
      if ( (unsigned int)Size <= *a3 )
      {
        *a3 = Size;
        if ( v8 )
          memmove(a2, (const void *)*v7, v8);
      }
    }
    v6 = &HvlpIteratorCrashdump;
    if ( !v5 )
      v6 = &HvlpIteratorHibernate;
    *((_QWORD *)v6 + 1) = 0LL;
    *v6 = 0;
  }
  return (char)v6;
}
