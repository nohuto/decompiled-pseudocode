/*
 * XREFs of PsDereferenceVsmEnclave @ 0x1409106F0
 * Callers:
 *     MiCanDeleteEnclave @ 0x140547B68 (MiCanDeleteEnclave.c)
 *     MiInitializeVsmEnclave @ 0x1408D58D8 (MiInitializeVsmEnclave.c)
 *     MiTerminateEnclave @ 0x1408D6398 (MiTerminateEnclave.c)
 *     PsCallEnclave @ 0x14090FA20 (PsCallEnclave.c)
 *     PsDeleteVsmEnclave @ 0x1409105A4 (PsDeleteVsmEnclave.c)
 * Callees:
 *     VslCloseSecureHandle @ 0x1404FC720 (VslCloseSecureHandle.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PsDereferenceVsmEnclave(PVOID P)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdi
  void *v8; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)P + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    VslCloseSecureHandle(*((_QWORD *)P + 3));
    if ( *((_BYTE *)P + 76) )
    {
      v5 = (_QWORD *)*((_QWORD *)P + 13);
      while ( v5 )
      {
        v6 = (_QWORD *)*v5;
        if ( *v5 || (v6 = (_QWORD *)v5[1]) != 0LL )
        {
          v5 = v6;
        }
        else
        {
          v7 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( v7 )
          {
            if ( (_QWORD *)*v7 == v5 )
              *v7 = 0LL;
            else
              v7[1] = 0LL;
          }
          ExFreePoolWithTag(v5, 0);
          v5 = v7;
        }
      }
    }
    v8 = (void *)*((_QWORD *)P + 15);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    ExFreePoolWithTag(P, 0);
  }
}
