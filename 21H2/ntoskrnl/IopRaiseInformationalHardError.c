/*
 * XREFs of IopRaiseInformationalHardError @ 0x140892000
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseHardError @ 0x1409562E0 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall IopRaiseInformationalHardError(char *P)
{
  void *v2; // rcx
  int v3; // [rsp+40h] [rbp+8h] BYREF
  char *v4; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = P + 24;
  v2 = (void *)*((_QWORD *)P + 4);
  if ( ExReadyForErrors )
  {
    ExRaiseHardError(
      *((unsigned int *)P + 4),
      v2 != 0LL,
      v2 != 0LL,
      (unsigned __int64)&v4 & -(__int64)(v2 != 0LL),
      7,
      &v3);
    v2 = (void *)*((_QWORD *)P + 4);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement(&dword_140C45B9C);
}
