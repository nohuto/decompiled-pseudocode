/*
 * XREFs of NtCreateMutant @ 0x140679390
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeMutant @ 0x1402DEBD0 (KeInitializeMutant.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateMutant(__int64 *a1, ACCESS_MASK a2, __int64 a3, BOOLEAN a4)
{
  char PreviousMode; // di
  __int64 v8; // rcx
  int inserted; // ecx
  __int64 v11; // [rsp+20h] [rbp-48h]
  PRKMUTANT Mutant; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+58h] [rbp-10h] BYREF

  v13 = 0LL;
  Mutant = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a1;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  inserted = ObCreateObjectEx(PreviousMode, ExMutantObjectType, a3, PreviousMode, v11, 56, 0, 0, &Mutant, 0LL);
  if ( inserted >= 0 )
  {
    KeInitializeMutant(Mutant, a4);
    inserted = ObInsertObjectEx((PADAPTER_OBJECT)Mutant, 0LL, a2, 0, 0, 0LL, &v13);
    LODWORD(Mutant) = inserted;
    if ( inserted >= 0 )
      *a1 = v13;
  }
  return (unsigned int)inserted;
}
