/*
 * XREFs of IopRaiseInformationalHardError @ 0x1408948E0
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseHardError @ 0x140958940 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall IopRaiseInformationalHardError(_QWORD *P)
{
  void *v2; // rcx
  int v3; // [rsp+40h] [rbp+8h] BYREF
  char *v4; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (char *)(P + 3);
  v2 = (void *)P[4];
  if ( ExReadyForErrors )
  {
    ExRaiseHardError(
      *((_DWORD *)P + 4),
      v2 != 0LL,
      v2 != 0LL,
      (unsigned __int64)&v4 & -(__int64)(v2 != 0LL),
      7,
      (__int64)&v3);
    v2 = (void *)P[4];
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement(&dword_140C45D1C);
}
